#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float x1, y1, x2, y2, dis;

    cin >> x1 >> y1 >> x2 >> y2;

    dis = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));

    cout << fixed << setprecision(4) << dis << endl;

    return 0;
}
