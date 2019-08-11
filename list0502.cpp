#include <iostream>
#include <istream>
#include <ostream>
#include <string>

int main()
{
    std::string name;
    std::cout << "What is your name? ";
    std::cin >> name;

    std::string response;
    std::cout << "Hello, " << name << ", how are you? ";
    std::cin >> response;

    std::cout << "Good-bye, " << name << ". "
        "I'm glad you feel " << response
        << std::endl;
}
