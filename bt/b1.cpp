#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Nhap ba so nguyen: ";
    cin >> a >> b >> c;

    if (a == b && b == c)
        cout << "true";
    else
        cout << "false";

    return 0;
}
