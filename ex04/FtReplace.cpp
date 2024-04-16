#include "FtReplace.hpp"

FtReplace::FtReplace(char **av) : infile(av[1]), oldString(av[2]), newString(av[3]){
	this->outfile = this->infile + ".replace";
}

FtReplace::~FtReplace(void){
}

void FtReplace::replace(void)
{
	std::ofstream ofs(this->outfile.c_str());
	std::ifstream ifs(this->infile.c_str());
	std::string buf;

	if (ifs.is_open())
	{
		std::getline(ifs, buf, '\0');
		std::size_t found = buf.find(oldString);

		while (found != std::string::npos)
		{
			buf.erase(found, oldString.size());
			buf.insert(found, newString);
			found = buf.find(oldString);
		}
		ofs << buf;

		ofs.close();
		ifs.close();
	}
	else
		std::cout << "Couldn't open infile!" << std::endl;
}

int FtReplace::validEntry(void){
	if (!this->oldString.empty() && !this->newString.empty() && !this->infile.empty())
		return (0);
	std::cout << "Found empty arguments!" << std::endl;
	return (1);
}