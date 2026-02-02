#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int lado1, lado2, lado3;
    cout << "Sabendo que é um triangulo rectangulo informa: \n ";
    cout << "O primeiro lado";
    cin >> lado1;
    cout << "O segundo lado";
    cin >> lado2;
    cout << "O terceiro lado";
    cin >> lado3;

    if ((lado1 * lado1) == ((lado2 * lado2) + (lado3 * lado3)))
    {
        cout << "O lado " << lado1 << " e a Hipotenusa \n";
    }
    else if ((lado2 * lado2) == ((lado1 * lado1) + (lado3 * lado3)))
    {
        cout << "O lado " << lado2 << " e a Hipotenusa \n";
    }
    else if ((lado3 * lado3) == ((lado2 * lado2) + (lado1 * lado1)))
    {
        cout << "O lado " << lado3 << " e a Hipotenusa \n";
    }
    else
    {
        cout << "O lados informados nao correspondem a um triangulo rectangulo \n";
    }

    return 0;
}
