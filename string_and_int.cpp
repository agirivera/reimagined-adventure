#include <iostream>
#include <istream>
#include <ostream>
#include <string>

int main()
{
    int age(0);
    std::cout << "How old are you? ";
    std::cin >> age;

    std::string firstName;
    std::cout << "What is your name? ";
    std::cin >> firstName;

    std::cout << "Hello " << firstName << ", "
        "you are " << age << " years old."
        << std::endl;
}
