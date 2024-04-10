#include "FtReplace.hpp"

int main (int ac, char **av)
{
	std::string s1;
	std::string s2;
	std::string file;

	if (ac != 4)
		std::cout << "wrong arguments! <filename> <oldString> <newString>\n";
	else
	{
		s1 = av[2];
		s2 = av[3];
		file = av[1];
		if (!s1.empty() && !s2.empty() && !file.empty())
		{
			FtReplace file(av[1]);
			if (file.validFile())
				file.replace(s1, s2);
			else
				std::cout << "Couldn't open infile!" << std::endl;
		}
		else
			std::cout << "Found empty arguments!" << std::endl;
	}
}