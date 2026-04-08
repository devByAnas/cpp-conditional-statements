#include <iostream>
using namespace std;
int main()
{
    int day = 4;
    switch (day)
    {
    case 1:
        cout << "This is Monday" << endl;
        break;
    case 2:
        cout << "This is Tuesday" << endl;
        break;
    case 3:
        cout << "This is Wednesday" << endl;
        break;
    default:
        cout << "Invalid day" << endl;
    }
    return 0;
}