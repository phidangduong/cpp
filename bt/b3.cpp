#include <iostream>

int main(){
    int x, y, z;
    bool b;
    std:: cin >> x;
    std:: cin >> y;
    std:: cin >> z;
    if ((x < y && y < z) || (x > y && y > z)){
        b = true;
    }
    else {
        b = false;
    }
    std::cout << "gia tri cua b la :" << std::boolalpha << b;
    return 0;
}