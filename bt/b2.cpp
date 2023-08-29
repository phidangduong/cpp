#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    double distance = sqrt(x*x + y*y);
    cout << "Khoang cach tu diem (" << x << ", " << y << ") den goc toa do la: " << distance;
    return 0;
}
