#include <iostream>

using namespace std;
int main ()

{
    int numero; 
    cout << "Ingresar numero" ;
    cin >> numero;

    string numeroStr = to_string (abs(numero));
    int suma = 0;

    for (char digito : numeroStr) {
        suma += digito - 0;
    }
    
    cout << "suma de numeros es: " << suma << endl;


}
