#include <iostream>

using namespace std;

int main()
{
    int a = 50, b = 20;

    b = a + b; // 50+20=70
    a = b - a; // 70-50=20
    b = b - a; // 70-20=50

    cout << " a = " << a << endl;
    cout << " b = " << b << endl;


}
