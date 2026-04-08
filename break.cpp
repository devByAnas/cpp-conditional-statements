#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break; // loop 5 par ruk jayega
        }
        cout << i << " ";
    }
    // Output: 1 2 3 4
    return 0;
}
