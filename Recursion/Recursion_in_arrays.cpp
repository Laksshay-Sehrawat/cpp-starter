#include <iostream>
using namespace std;
bool sorted_or_not(int *arr, int size) // to check if the array is sorted or not using recursion
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
        return sorted_or_not(arr + 1, size - 1);
    }
}

int sum_array_recursively(int arr[], int size) // sum of array recursively
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
int binary_serach_recursively(int arr[], int size, int key)
{
    cout << "first element of iteration : " << arr[0] << endl;
    int mid = size / 2;
    if (size == 1)
    { // base case
        return -1;
    }

    if (arr[mid] == key)
    {
        return mid;
    }
    if (arr[mid] > key)
    {
        return binary_serach_recursively(arr, mid - 1, key);
    }
    if (arr[mid] < key)
    {
        return binary_serach_recursively(arr + mid + 1, size, key);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(int);
    // sorted_or_not(arr, size) ? cout << "array sorted\n" : cout << "array not sorted\n";
    // cout << "sum of the array is : " << sum_array_recursively(arr, size) << endl;
    cout << size << endl;
    cout << "enter key :  ";
    int key;
    cin >> key;
    cout << "element at : " << binary_serach_recursively(arr, size, key);
}