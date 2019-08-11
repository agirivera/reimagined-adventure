#include <iostream>
#include <istream>
#include <ostream>

int main()
{
    int x;
    std::cout << "Enter a number: ";
    std::cin >> x;

    int y;
    std::cout << "Enter another number: ";
    std::cin >> y;

    int z(x + y);
    std::cout << "The sum of " << x << " and " << y
        << " is " << z
        << std::endl;
}
