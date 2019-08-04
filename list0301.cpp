/// Read the program and determine what the program does.

#include <iostream>
#include <ostream>

int main()
{
    int sum(0);
    int count(0);
    int x;
    while (std::cin >> x)
    {
        sum = sum + x;
        count = count + 1;
    }

    if (count == 0)
        std::cout << "No data.\n";
    else
        std::cout << "average = " << sum / count << '\n';
}