#include <iostream>
using namespace std;
int bubble(int arr[], int size)
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
int insertion(int arr[], int size)
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
class animals
{
public:
    int age;
    int hunger = 40;
    void give_food()
    {
        hunger += 20;
        cout << "eating\n";
    }
};

int main()
{
    int arr[5] = {10, 4, 6, 2, 5};
    insertion(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    animals shawn;
    shawn.age = 5;
    shawn.give_food();
    shawn.give_food();
    cout << "age is - " << shawn.age << " current hunger - " << shawn.hunger << endl;
}