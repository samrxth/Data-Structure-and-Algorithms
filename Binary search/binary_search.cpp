#include <iostream>

using std::cout;
using std::endl;

int binarySearch(int arr[], int target, int len)
{
    
    int high = len;
    int low = 0;
    while (high >= low)
    {
        int middle = (high + low) / 2;

        if (arr[middle] == target)
        {
            return middle;
        }
        else if(arr[middle] > target)
        {
            high = middle - 1;
        }
        else if(arr[middle] < target)
        {
            low = middle + 1;
        }
    }
    return -1;
}
/*
Time complexity = O(log n)
*/
int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int len = sizeof(arr) / sizeof(1);
    int result = binarySearch(arr, x, len);
    cout << result<< endl;
    return 0;
}