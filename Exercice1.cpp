#include <iostream>

using namespace std;

int main()
{
    int n, fac(1);
    cout << "Enter un entier pour calculer sa factorielle : " << endl;
    cin >> n;
    for(int i(1);i<n+1;i++)
    {
        fac = fac * i;
    }
    cout << "La factorielle de " << n << " est " << facto << endl;
    return 0;
}
