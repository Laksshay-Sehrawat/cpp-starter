#include <iostream>
#include <math.h>
using namespace std;
int getmax(int arr[], int size)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int reverse(int arr[], int size)
{
    for (int i = 0; i < (size / 2); i++)
    {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[5];
    // array input
    cout << "enter the elements - ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    reverse(arr, 5);
}