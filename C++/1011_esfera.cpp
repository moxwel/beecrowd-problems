#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double r, a;

    cin >> r;

    a = (4.0*3.14159*(r*r*r))/3.0;

    cout << fixed << setprecision(3) << "VOLUME = " << a << endl;

    return 0;
}
