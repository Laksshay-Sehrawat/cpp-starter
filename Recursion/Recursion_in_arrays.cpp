#include <iostream>
using namespace std;
bool sorted_or_not(int *arr, int size)
{
    if (size <= 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remaining = sorted_or_not(arr + 1, size - 1);
        return remaining;
    }
}

int sum_array_recursively(int arr[], int size)
{
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    else
    {
        return arr[0] + sum_array_recursively(arr + 1, size - 1);
    }
}
int linear_search(int arr[], int size, int key)
{
    int index = 0;
    if (size == 0)
    {
        return -1;
    }
    if (key == arr[0])
    {
        return index;
        return linear_search(arr + 1, size - 1, key);
    }
    index++;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    sorted_or_not(arr, size) ? cout << "array sorted\n" : cout << "array not sorted\n";
    cout << "sum of the array is : " << sum_array_recursively(arr, size) << endl;
}