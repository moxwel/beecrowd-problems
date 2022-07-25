#include <iostream>
using namespace std;

int main()
{
    int ing, y, m, d;

    cin >> y >> m >> d;

    ing = y*365 + m*30 + d;

    cout << ing << " dia(s)" << endl;

    return 0;
}