#include <iostream>
using namespace std;

int main()
{
    int score = 75;

    if (score >= 90)
    {
        cout << "Grade: A" << endl;
    }
    else if (score >= 75)
    {
        cout << "Grade: B" << endl;
    }
    else if (score >= 60)
    {
        cout << "Grade: C" << endl;
    }
    else
    {
        cout << "Grade: F" << endl;
    }
    return 0;
}