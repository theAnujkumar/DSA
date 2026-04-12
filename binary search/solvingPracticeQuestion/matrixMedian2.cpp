#include <bits/stdc++.h>
using namespace std;

int countLessEqual(vector<int>& row, int mid) {
    int count = 0;

    for(int i = 0; i < row.size(); i++) {
        if(row[i] <= mid)
            count++;
        else
            break;   // kyunki row sorted hai
    }

    return count;
}

int getMedian(vector<vector<int>> &matrix)
{
    int r = matrix.size();
    int c = matrix[0].size();

    int low = INT16_MAX;
    int high = INT_MIN;

    // Step 1: find range
    for(int i = 0; i < r; i++) {
        low = min(low, matrix[i][0]);
        high = max(high, matrix[i][c-1]);
    }

    int median = (r * c) / 2;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        // count elements <= mid
        // int count = 0;
        // for(int i = 0; i < r; i++) {
        //     count += upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
        // }

        // count store how many element are <= to median
        int count = 0;
        // traverse all rows 1 by 1
        for(int i = 0; i < r; i++) {
            // store count of all rows
            count += countLessEqual(matrix[i], mid);
        }

        if(count <= median)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return low;
}

/*
| Approach       | Time            | Space  | Interview |
| -------------- | --------------- | ------ | --------- |
| Flatten + Sort | O(n*m log(n*m)) | O(n*m) | ❌         |
| Binary Search  | O(32 * n log m) | O(1)   | ✅🔥       |

*/