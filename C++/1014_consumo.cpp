#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float x, y;

    cin >> x >> y;

    cout << fixed << setprecision(3) << x / y << " km/l" << endl;

    return 0;
}
