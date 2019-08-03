#include <iostream>
#include <limits>
#include <ostream>

int main()
{
    // Note that "digits" means binary digits, i.e., bits.
    std::cout << "bits per bool: ";
    std::cout << std::numeric_limits<bool>::digits;
    std::cout << '\n';
}