// 021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: ";
    std::string age{};
    std::getline(std::cin >> std::ws, age);

    unsigned _int64 combined{ name.length() + age.length() };
    std::cout << "Your age and + lenght of name is: " << combined; 
}

