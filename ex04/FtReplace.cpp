#include "FtReplace.hpp"

FtReplace::FtReplace(std::string filename) : infile(filename){
	this->outfile = this->infile + ".replace";
	std::ifstream i(this->infile.c_str());
	this->ifs = i;
}

FtReplace::~FtReplace(void){
}

void FtReplace::replace(std::string oldString, std::string newString)
{
	std::ofstream ofs(this->outfile.c_str());
	std::string buf;

		std::getline(this->ifs, buf, '\0');
		std::size_t found = buf.find(oldString);

 		while (found != std::string::npos)
		{
			buf.erase(found, oldString.size());
			buf.insert(found, newString);
			found = buf.find(oldString);
		}
		ofs << buf;

		ofs.close();
		this->ifs.close();
}

int FtReplace::validFile(void){
	if (this->ifs.is_open())
		return (0);
	return (1);
}