/**
 * Read the program and determine what the program does.
 */

#include <iostream>
#include <istream>
#include <limits>
#include <ostream>

int main()
{
    int max(std::numeric_limits<int>::min());
    int min(std::numeric_limits<int>::max());
    int x;

    bool any(false);

    while (std::cin >> x)
    {
        any = true;

        if (x > max) {
            max = x;
        }

        if (x < min) {
            min = x;
        }
    }

    if (x) {
        std::cout << "min = "
            << min
            << std::endl;

        std::cout << "max = "
            << max
            << std::endl;
    }
}