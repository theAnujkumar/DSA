/*

tc of binary search = O(Logn)

left , right most occurence
if(arr[mid] == key)
        {
            ans = mid ;
            // place to left because it may be least
            e = mid - 1;
        }

pivot
if(arr[mid] >= arr[0])
        // first line so move to next line
        {
            s = mid + 1;
        }

        else{
            e = mid;
        }

peak element
if(arr[mid] < arr[mid+1])
        {
            s = mid + 1;
        }

        // arr[mid] >= arr[mid+1]
        // not use e = mid -1 because may be we move previous to peak element
        else{
            e = mid;
        }

*/