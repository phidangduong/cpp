#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Nhap so nguyen thu nhat: ";
    std::cin >> num1;
    std::cout << "Nhap so nguyen thu 2: ";
    std::cin >> num2;

    bool result = (num1 % 7 == 0) && (num2 % 7 == 0);

    std::cout << std::boolalpha << result << std::endl;

    return 0;
}