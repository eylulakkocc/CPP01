#include <iostream>
#include <string>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Memory Addresses" << std::endl;
    std::cout << "of string: " << &str << std::endl;
    std::cout << "by stringPTR:  " << stringPTR << std::endl;
    std::cout << "by stringREF:  " << &stringREF << std::endl;
    std::cout << "Values" << std::endl;
	std::cout << "of string: " << str << std::endl;
	std::cout << "by stringPTR: "<< *stringPTR << std::endl;
	std::cout << "by stringREF: " << stringREF << std::endl;

    return (0);
}