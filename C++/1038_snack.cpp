#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int code, cant;

    cin >> code >> cant;
    cout << fixed << setprecision(2);

    if (code == 1)
    {
        cout << "Total: R$ " << 4.00*cant << endl;
    }
    else if (code == 2)
    {
        cout << "Total: R$ " << 4.50*cant << endl;
    }
    else if (code == 3)
    {
        cout << "Total: R$ " << 5.00*cant << endl;
    }
    else if (code == 4)
    {
        cout << "Total: R$ " << 2.00*cant << endl;
    }
    else if (code == 5)
    {
        cout << "Total: R$ " << 1.50*cant << endl;
    }
    else 

    return 0;
}