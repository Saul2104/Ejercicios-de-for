#include <iostream>

using namespace std;
int main() {
    
    string palabra;

    cout << "Introduce una palabra: ";
    cin >> palabra;

    for (int i = 0; i < palabra.length(); ++i) {
    cout << palabra[i] << endl;
    }

    return 0;
}
