#include <iostream>

using namespace std;

int main (){

double x;

cout << "Enter un réel positif : ";
    cin >> x;
    while(x < 0)
    {
        cout << "Valeur incorrecte, entrer un réel positif : ";
        cin >> x;
    }
    cout << "Bravo" << endl;
return 0;
}
