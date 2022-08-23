#include <iostream>
using namespace std;
void bubble(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void bubbwrle(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void insertion(int arr[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int current = arr[i];
        for (; j >= 0; j--)
        {
            if (arr[j] > current)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = current;
    }
}
void insert(int arr[], int size)
{
    for (int i = 1; i < size - 1; i++)
    {
        int j = i - 1;
        int current = arr[i];
        for (; j >= 0; j--)
        {
            if (arr[j] > current)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = current;
    }
}
void selection(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int curr = arr[i];
        int j;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < curr)
            {
                curr = arr[j];
            }
        }
        swap(arr[0], arr[j]);
        for (int k = 0; k < size; k++)
        {
            cout << arr[k] << " ";
        }
    }
}

int main()
{
    int arr[] = {10, 4, 6, 2, 5, 35, 46, 23, 1, 52, 56, 23, 654};
    int size = sizeof(arr) / sizeof(int);
    insert(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    selection(arr, size);
    cout << "\n";
}