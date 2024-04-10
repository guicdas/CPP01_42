#pragma once

#include <iostream>
#include <string>
#include <fstream>

class FtReplace{
	private:
		std::string infile;
		std::string outfile;
	public:
		std::ifstream ifs;
		FtReplace(std::string filename);
		~FtReplace(void);
		void	replace(std::string oldString, std::string newString);
		int		validFile(void);
};