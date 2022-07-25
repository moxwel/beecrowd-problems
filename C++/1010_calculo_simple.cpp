#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float c1, u1, p1, c2, u2, p2, t;

    cin >> c1 >> u1 >> p1 >> c2 >> u2 >> p2;

    t = (u1*p1) + (u2*p2);

    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << t << endl;

    return 0;
}
