#include <iostream>
using namespace std;

int main()
{
    int ngay, thang, nam;
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;

    int jd = 0;
    jd = ngay + (153 * thang + 2) / 5 + 365 * nam + nam / 4 - nam / 100 + nam / 400 - 32045;
    int dayOfWeek = jd % 7;

    switch (dayOfWeek)
    {
        case 0:
            cout << "Sunday";
            break;
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        default:
            cout << "Invalid date!";
    }

    return 0;
}
