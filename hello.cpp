#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int j = 0; j < 5; j++)
    {
        if (j % 2 == 1)
        {
            cout << " ";
        }

        for (int i = 0; i < 10; i++)
        {
            cout << "*";
        }

        cout << "*\n";
    }

    return 0;
}
