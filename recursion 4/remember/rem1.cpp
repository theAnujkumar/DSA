/*
| Pattern                         | Time Complexity        | Space Complexity |
| ------------------------------- | ---------------------- | ---------------- |
| Ek recursive call               | O(n)                   | O(n)             |
| 2 recursive calls (binary type) | O(2^n)                 | O(n)             |
    fibonaci
| Divide & Conquer (half input)   | O(log n) or O(n log n) | O(log n)         |
    binary search , merge,quick sort
*/

/*
    int remainingPart = getSum(arr+1 , size-1);
    int ans = arr[0] + remainingPart;
    arr+1  , size-1  , index+1,-1
*/