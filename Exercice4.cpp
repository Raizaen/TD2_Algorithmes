#include <iostream>

using namespace std;

int main (){

double n, f1(0), f2(0), f3(0), f4;
    cout << "Rentrez une valeur de n : ";
    cin >> n;
    for(int i(1);i<=n;i++)
    {
        f1+=(i*i);
    }
    for(int i(1);i<=(n/2);i++)
    {
        f2+=(i*(n-i));
    }
    for(int i(1);i<=n;i++)
    {
        f3*=((i*i) / n);
    }
    cout << "Première formule : " << f1 << endl;
    cout << "Deuxième formule : " << f2 << endl;
    cout << "Troisième formule : " << f3 << endl;
    cout << "Quatrième formule : " << f4 << endl;
    return 0;




}
