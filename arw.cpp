#include <iostream>
int main() {

float x, y, z;
char symbol;
 std::cout << "vvedi chislo X:" << std::endl;
 std::cin >> x;

 std::cout << "vvedi chislo Y:" << std::endl;
 std::cin >> y;

 std::cout << "vvedi simvol vichisleniy" << std::endl;
 std::cin >> symbol;

 if(symbol == '+')
    z = x + y;

 else if(symbol == '-')
    z = x - y;

 else if(symbol == '*')
    z = x * y;

 else if(symbol == '/')
    z = x / y;
 else if(symbol == ':')
    z = x / y;

 std::cout << z << std::endl;
}






