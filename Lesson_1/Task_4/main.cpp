#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
    cout << "Enter c:";
    cin >> c;

    int d = pow(b, 2) - 4 * a * c;
    if (d > 0) {
        int  x1 = (-b + pow (d, 1.0/2))/(a*2);
        int  x2 = (-b - pow (d, 1.0/2))/(a*2);
        cout << " x1 = " << x1 <<     " x2 = " << x2;
    }
    else if (d == 0) {
        int x1 = (-b + d)/(a*2);
        cout << " x1 = " << x1;

    }
    else {
        cout << "No roots";

    }
    return 0;
}
