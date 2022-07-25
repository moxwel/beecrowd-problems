#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    float a, b, c, tri, cir, tra, cua, rec;

    cin >> a >> b >> c;
    cout << fixed << setprecision(3);

    tri = (a*c)/2;
    cir = 3.14159*(c*c);
    tra = ((a + b)*c)/2;
    cua = b*b;
    rec = a*b;

    cout << "TRIANGULO: " << tri << endl;
    cout << "CIRCULO: " << cir << endl;
    cout << "TRAPEZIO: " << tra << endl;
    cout << "QUADRADO: " << cua << endl;
    cout << "RETANGULO: " << rec << endl;

    return 0;
}
