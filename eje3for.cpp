#include <iostream>

using namespace std;
int main() 
{
    int numero;

    cout << "Introduce un número: ";
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << ":\n";
    for (int i = 1; i <= 10; ++i) {
    cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
