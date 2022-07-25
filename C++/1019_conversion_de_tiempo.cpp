#include <iostream>
using namespace std;

int main()
{
    int ing, hrs, min, seg;

    cin >> ing;

    hrs = (ing/60)/60;
    min = (ing/60) - (hrs*60);
    seg = ing - ((ing/60)*60);

    cout << hrs << ":" << min << ":" << seg << endl;

    return 0;
}