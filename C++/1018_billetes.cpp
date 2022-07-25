#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, b100, b50, b20, b10, b5, b2, b1;

    cin >> n;

    cout << n << endl;

    b100 = (n/100);
    n    = n - b100*100;
    b50  = (n/50);
    n    = n - b50*50;
    b20  = (n/20);
    n    = n - b20*20;
    b10  = (n/10);
    n    = n - b10*10;
    b5   = (n/5);
    n    = n - b5*5;
    b2   = (n/2);
    n    = n - b2*2;
    b1   = (n/1);
    n    = n - b1*1;

    cout << b100 << " nota(s) de R$ 100,00" << endl;
    cout << b50  << " nota(s) de R$ 50,00" << endl;
    cout << b20  << " nota(s) de R$ 20,00" << endl;
    cout << b10  << " nota(s) de R$ 10,00" << endl;
    cout << b5   << " nota(s) de R$ 5,00" << endl;
    cout << b2   << " nota(s) de R$ 2,00" << endl;
    cout << b1   << " nota(s) de R$ 1,00" << endl;

    return 0;
}