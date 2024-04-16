#include "FtReplace.hpp"

int main (int ac, char **av)
{
	if (ac != 4)
		std::cout << "wrong arguments! <filename> <oldString> <newString>\n";
	else
	{
		FtReplace file(av);
		if (file.validEntry() == 0)
			file.replace();
	}
}