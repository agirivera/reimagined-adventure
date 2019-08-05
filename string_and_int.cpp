#include <iostream>
#include <istream>
#include <ostream>
#include <string>

int main()
{
    std::string firstName;
    std::cout << "What is your name? ";
    std::cin >> firstName;

    int age(0);
    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Hello " << firstName << ", "
        "you are " << age << " years old."
        << std::endl;
}
