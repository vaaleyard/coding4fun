#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;
    cout << (a+b)*(b-a)*(c+d)*(c-d) + a + b + c + d << endl;
    return 0;
}
