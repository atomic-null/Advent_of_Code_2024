#include "file_handler.h"

int main()
{
	std::string filePath = "sample_input.txt";
	FileHandler puzzle(filePath);
	if (puzzle.m_isBadFile)
	{
		std::cout << "Unable to open file.\n";
	}


	return 0;
}