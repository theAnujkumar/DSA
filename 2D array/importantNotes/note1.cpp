// how row and column work
// seaching
// how find index in 2D array
// transpose
// reverse
// rotate
// printing like wave,spiral
// remember left , right , up , down


// int element = matrix[mid/col][mid%col];  

// int rowIndex = 0;
//     int colIndex = col-1;

//     while(rowIndex<row && colIndex>=0)
//     {
//         // 0 row ka last element
//         int element = matrix[rowIndex][colIndex];
//     }

/*
vector<vector <int>> number = {{1,2,3} , {4,5,6} , {7,8,9}};
for(auto b: number)
    {
        for(auto c:b)
        {
            cout << c << " ";
        }
        cout << endl;
    }

int row = matrix.size();
int col = matrix[0].size();
*/

// for matrix/vector
    // for(int i = 0; i < 3; i++) {
    //     reverse(arr[i].begin(), arr[i].end());
    // }

//for(int i=0;i<3;i++)
        //reverse(arr[i], arr[i]+3);

// row wise  clockwise
    // for(int i = 0; i < 3; i++) {
    // int left = 0, right = 3 - 1;
    // while(left < right) {
    //     swap(arr[i][left], arr[i][right]);
    //     left++;
    //     right--;
    // }

    // column wise  anticlock wise
    // for(int i = 0; i < 3; i++) {
    // int left = 0, right = 3 - 1;
    // while(left < right) {
    //     swap(arr[left][i], arr[right][i]);
    //     left++;
    //     right--;
    // }

/*
                transpose
for(int i=0 ; i<3 ; i++)
    {
        for(int j=i ; j<3 ; j++)
        {
            cout << "before swap " << endl;
            cout << arr[i][j] << " " ;
            swap(arr[i][j],arr[j][i]);
            cout << "after swap " << endl;
            cout << arr[i][j] << " " ;
        }
    }
*/