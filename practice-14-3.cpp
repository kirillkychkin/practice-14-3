// practice-14-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
    std::string text = "You can't cheat a cheater with a half-baked plan";
    std::cout << "String: " << text << "\n" << "Length: " << text.length() << "\n" << "First symbol: " << text.front() << "\n" << "Last symbol: " << text[text.length()-1] << "\n";
}

