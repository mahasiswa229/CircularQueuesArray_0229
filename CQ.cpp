#include <iostream>
using namespace std;

class Queues
{
    private:
    static const int max = 3;
    int front, rear;
    int queue_array[max];

    public:
    Queues()
    {
        front = -1;
        rear = -1;
    }

    void insert()
    {
        int num;
        cout << "Enter a Number : ";
        cin >> num;
        cout << endl;
    }
};

