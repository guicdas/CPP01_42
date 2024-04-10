#include <string>
#include <iostream>

int main(void){
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

    std::cout << "printing string \tmemory address:\t" << &str << "\tvalue:\t" << str << std::endl;
	std::cout << "printing stringPTR\tmemory address:\t" << stringPTR << "\tvalue:\t" << *stringPTR << std::endl;
	std::cout << "printing stringREF\tmemory address:\t" << &stringREF << "\tvalue:\t" << stringREF << std::endl;

	return 0;
}