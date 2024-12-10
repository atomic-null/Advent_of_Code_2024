#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class FileHandler {
public:
	FileHandler(std::string puzzleInput);
	bool m_isBadFile = false;

	std::vector<std::string> GetPuzzleData() { return m_puzzleData };

private:
	std::vector<std::string> m_puzzleData;
	std::ifstream m_puzzleFile;
	std::string m_line;
};