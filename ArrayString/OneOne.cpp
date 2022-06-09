#include "OneOne.h"

namespace practice01
{
	bool OneOne::CheckAllCharUnique(const std::string& str)
	{
		for (size_t i = 0; i < str.size(); ++i)
		{
			for (size_t j = i + 1; j < str.size(); ++j)
			{
				if (str.at(i) == str.at(j))
				{
					return false;
				}
			}
		}
		return true;
	}
	

	bool OneOne::CheckAllCharUnique2(const std::string& str)
	{
		if (str.size() > 256)
		{
			return false;
		}

		bool charSet[256];
		for (int val : str)
		{
			if (charSet[val])
			{
				return false;
			}
			charSet[val] = true;
		}
		return true;
	}

	bool OneOne::CheckAllCharUnique3(const std::string& str)
	{
		if (str.size() > 256)
		{
			return false;
		}

		int checker = 0;
		for (char i : str)
		{
			int val = i - 'a';
			if ( (checker & (1 << val)) > 0)
			{
				return false;
			}
			checker |= (1 << val);
		}
		return true;
	}
}
