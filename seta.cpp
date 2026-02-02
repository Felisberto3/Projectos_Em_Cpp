#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 6; i++)
    {
        cout << "*";
        for (int j = 0; j < 6; j++)
        {
            if (i == j || i == 0)
                cout << "*";
            else
                cout << " ";
        }

        cout << "\n";
    }

    return 0;
}
