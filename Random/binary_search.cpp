#include <iostream>
using namespace std;
int binary_search(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    // int arr[] = {1, 2, 3, 4, 10, 23, 56, 76, 34};
    // cout << "the index of number is - " << binary_search(arr, 9, 101) << endl;
    // cout << "program ended";
    {
        return 0;
    }
}