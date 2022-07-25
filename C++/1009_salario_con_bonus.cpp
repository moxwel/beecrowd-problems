#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    string n;
    float s, v, b;
    float red;

    cin >> n >> s >> v;

    b = ((15*v)/100) + s;
    red = (round(b * 100))/100; //redondear
    
    cout << fixed << setprecision(2) << "TOTAL = R$ " << red << endl;

    return 0;
}
