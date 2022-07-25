#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n;
    int b100, b50, b20, b10, b5, b2, m1, m50, m25, m10, m05, m01;

    cin >> n;

    n = n*100;

    b100 = (n/10000);
    n    = n - b100*10000;
    b50  = (n/5000);
    n    = n - b50*5000;
    b20  = (n/2000);
    n    = n - b20*2000;
    b10  = (n/1000);
    n    = n - b10*1000;
    b5   = (n/500);
    n    = n - b5*500;
    b2   = (n/200);
    n    = n - b2*200;
    m1   = (n/100);
    n    = n - m1*100;
    m50  = (n/50);
    n    = n - m50*50;
    m25  = (n/25);
    n    = n - m25*25;
    m10  = (n/10);
    n    = n - m10*10;
    m05  = (n/5);
    n    = n - m05*5;
    m01  = (n/1);
    n    = n - m01*1;

    cout << "NOTAS:" << endl;
    cout << b100 << " nota(s) de R$ 100.00" << endl;
    cout << b50  << " nota(s) de R$ 50.00" << endl;
    cout << b20  << " nota(s) de R$ 20.00" << endl;
    cout << b10  << " nota(s) de R$ 10.00" << endl;
    cout << b5   << " nota(s) de R$ 5.00" << endl;
    cout << b2   << " nota(s) de R$ 2.00" << endl;
    cout << "MOEDAS:" << endl;
    cout << m1   << " moeda(s) de R$ 1.00" << endl;
    cout << m50  << " moeda(s) de R$ 0.50" << endl;
    cout << m25  << " moeda(s) de R$ 0.25" << endl;
    cout << m10  << " moeda(s) de R$ 0.10" << endl;
    cout << m05  << " moeda(s) de R$ 0.05" << endl;
    cout << m01  << " moeda(s) de R$ 0.01" << endl;

    return 0;
}