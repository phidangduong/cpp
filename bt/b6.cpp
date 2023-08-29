#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << " nhap so so nguyen N:";
    cin >> n;

    int x;
    cout << "nhap N cac so nguyen:";
    cin >> x;

    double mean = x;
    int max = x;
    int min = x;

    for (int i = 1; i < n; ++i)
    {
        cout << "nhap N cac so nguyen:";
        cin >> x;

        mean += x;
        if (x > max)
            max = x;
        if (x < min)
            min = x;
    }

    mean /= n;

    cout << "Mean: " << mean << endl;
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

    return 0;
}
