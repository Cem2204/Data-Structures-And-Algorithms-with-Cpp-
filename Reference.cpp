#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int &r = a;  // r is a reference to a (Nickname)
    r = 25;
    cout << a << endl<<r<<endl;
     // Output: 25
    return 0;
}