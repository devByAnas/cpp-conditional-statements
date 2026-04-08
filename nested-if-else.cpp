#include <iostream>
using namespace std;

int main()
{
    string username = "admin";
    string password = "1234";

    if (username == "admin")
    {
        cout << "Username sahi hai." << endl;

        if (password == "1234")
        {
            cout << "Password bhi sahi! Login successful." << endl;
        }
        else
        {
            cout << "Password galat hai!" << endl;
        }
    }
    else
    {
        cout << "Username nahi mila!" << endl;
    }

    // Output:
    // Username sahi hai.
    // Password bhi sahi! Login successful.
    return 0;
}