#include <iostream>
using namespace std;

// cout << (insertion operator)
// cin >> (extraction operator)

int main() 
{
   string name;
   int age;

   cout << "What's your full name?: ";
   getline(cin >> ws, name);

   cout << "What's your age?: ";
   cin >> age;

   cout << "Hello " << name << '\n';
   cout << "You are " << age << " years old";

   return 0;
}