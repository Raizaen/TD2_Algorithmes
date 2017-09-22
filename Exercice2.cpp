#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Choisir une longueur pour votre ligne : " << std::endl;
    cin >> n;
    for(int i(0);i<n;i++)
    {
        if(i & 1)
            cout << "!";
        else
            cout << "*";
    }
    return 0;
}
