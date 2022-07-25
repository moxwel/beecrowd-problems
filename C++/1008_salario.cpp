#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int e;
    float h, m, s;

    cin >> e >> h >> m;

    s = h * m;

    cout << "NUMBER = " << e << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << s << endl;

    return 0;
}
