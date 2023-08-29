#include <iostream>

int main(){
    while (1==1){
        int N;
        std::cout << "nhap N:";
        std::cin >> N;
        (N > 0)&&(N % 5 ==0) ? std::cout << N/5 << std::endl : std::cout << -1 << std::endl;
        if (N == -1){
            break;
        }
    }
    std::cout << "Bye";
    return 0;
}