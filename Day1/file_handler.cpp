#include "file_handler.h"

FileHandler::FileHandler(std::string puzzleInput)
{
	m_puzzleFile.open(puzzleInput);
	if (m_puzzleFile.is_open())
	{
		m_isBadFile = false;
		while (std::getline(m_puzzleFile, m_line))
		{
			m_puzzleData.push_back(m_line);
		}
		m_puzzleFile.close();
	}
	else m_isBadFile = true;
}

