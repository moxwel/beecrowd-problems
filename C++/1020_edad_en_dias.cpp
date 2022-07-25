#include <iostream>
using namespace std;

int main()
{
    int ing, y, m, d;

    cin >> ing;

    y = ing/365;
    d = ing - ((ing/365)*365);
    m = d/30;
    d = d - (m*30);

    cout << y << " ano(s)" << endl;
    cout << m << " mes(es)" << endl;
    cout << d << " dia(s)" << endl;

    return 0;
}