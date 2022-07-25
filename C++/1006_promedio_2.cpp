#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a, b, c, m;
    
    cin >> a >> b >> c;
    
    m = (a*2 + b*3 + c*5)/10;
    
    cout << fixed << setprecision(1) << "MEDIA = " << m << endl;
    
    return 0;
}