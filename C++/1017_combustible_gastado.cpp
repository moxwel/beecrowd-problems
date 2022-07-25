#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float h, kmh, l;

    cin >> h >> kmh;

    l = (kmh*h)/12;

    cout << fixed << setprecision(3) << l << endl;

    return 0;
}
