#include <iostream>
using namespace std;
class car
{
    int x;
    int y;
    int id;

public:
    car(int id, int x, int y)
    {
        this->id = id;
        this->x = x;
        this->y = y;
    }
    void print_details()
    {
        cout << "id - " << this->id << " x -  " << this->x << " y -  " << this->y << endl;
    }
};
int main()
{
    car c1(5, 10, 12);
    c1.print_details();
    return 0;
}