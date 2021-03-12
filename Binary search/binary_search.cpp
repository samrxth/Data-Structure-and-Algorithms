#include <iostream>

using std::cout;
using std::endl;

int binary_search(int arr[] = {}, int target = 0, int len = 0)
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
    return 0;
}

//Time complexity = O(log n)

int main()
{
    int arr[] = {0, 3, 4, 11, 40};
    int target = 0;
    int len = sizeof(arr) / sizeof(1);
    int result = binary_search(arr, target, len);
    ((result != 0)||(arr[0] == result))?cout << result<< endl: cout << "Not found"<<endl;
    return 0;
}
