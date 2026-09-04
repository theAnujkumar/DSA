// sorting
// hashing
// sliding window , prefix approach
// two pointer approach
// reverse
// rotate
// interchange of element in array without use extra array space
// how to arrange element and which part should take or not
// how use for , while loop
// see difference between array and vector and how use both
// XOR concept -> for duplicates
// use of map , set



/*
//      sort(arr.begin(),arr.end(),greater<int>());         // O(nlogn)  in vector
        sort(arr , arr+n);              in array
*/

/*
Agar tum vector by reference (vector<int>&) pass karte instead of by value,
toh copy nahi banti → Space = O(1).
Tab complexity hoti:

reverse → O(n) time, O(1) space

print → O(n) time, O(1) space
*/

/*
kadane's like
for(int i=k ; i<n ; i++)
        {
            int maxVal = INT8_MIN;

            // it will increment loop value by 1 ex-> after 1 check from 3
            for(int j=i-k+1 ; j<=i ; j++)
            {
                maxVal = max(maxVal,arr[j]);
            }
            result.push_back(maxVal);
        }
i-k+1;
*/

/*
// remember 0 index
    prefix[0] = arr[0];

    for(int i=1 ; i<size ; i++)
    {
        prefix[i] = prefix[i-1] + arr[i];
    }
    return prefix;
*/

/*
sliding window
for(int i=k ; i<n ; i++)
        {
            windowSum = windowSum + arr[i] - arr[i-k];
            maxSum = max(maxSum,windowSum);
        }
*/

/*
kadane's algo
int maxSum = arr[0];
    int currSum = arr[0];

    for(int i=1 ; i<arr.size() ; i++)
    {
        currSum = max(arr[i],currSum + arr[i]);
        maxSum = max(currSum,maxSum);
    }
    return maxSum;
*/

// // for rightsum exclude leftsum and current element
//        int rightSum = totalSum - leftSum - arr[i];

/*
    pair sum 
    // unordered_set<int> seen;
    // for(int i=0 ; i<n ; i++)
    // {
    //     int diff = k-arr[i];
    //     if(seen.count(diff))
    //     {
    //         cout << diff << " " << arr[i] << endl;
    //         break;
    //     }
    //     seen.insert(arr[i]);
    // }
    // else{
    //     cout << "no pair found " << endl;
    // }
*/