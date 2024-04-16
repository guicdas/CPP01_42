#pragma once

#include <iostream>
#include <string>
#include <fstream>

class FtReplace{
	private:
		std::string infile;
		std::string outfile;
		std::string oldString;
		std::string newString;
	public:
		FtReplace(char **av);
		~FtReplace(void);

		void	replace(void);
		int		validEntry(void);
};