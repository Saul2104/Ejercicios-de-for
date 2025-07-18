#include <iostream>

using namespace std;
int main() 
{
    int numero, divisores =0;
    cout << "Introducir un numero:" ;
    cin >> numero;
    for (int i = 1; i <= numero; i++)
    {
        if (numero % i == 0){
            divisores++;

    }
    }
      if (divisores ==2)
{ 
    cout << numero << "Numero primo"<< endl;}
    
    else {
    cout << numero << "No es numero primo"<< endl;
    }
    return 0;
}
    
