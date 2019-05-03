#include "hasTriangles.h"

#include <algorithm>

inline bool isTriangle(int aSide, int bSide, int cSide)
{
	if(!(aSide + bSide > cSide))
	{
		return false;
	}

	if(!(aSide + cSide > bSide))
	{
		return false;
	}

	if(!(cSide + bSide > aSide))
	{
		return false;
	}

	return true;
}


bool hasTriangles(const std::vector<int> &sides)
{
	if(sides.size() < 3)
	{
		return false;
	}

	for(size_t i = 0; i < sides.size() - 2; ++i)
	{
		for(size_t j = i + 1; j < sides.size() - 1; ++j)
		{
			for(size_t k = j + 1; k < sides.size(); ++k)
			{
				if(!isTriangle(sides[i], sides[j], sides[k]))
				{
					continue;
				}

				return true;
			}
		}
	}

	return false;
}


bool hasTrianglesOptimized(std::vector<int> sides)
{
	if(sides.size() < 3)
	{
		return false;
	}

	std::sort(sides.begin(), sides.end());

	for(size_t i = 0; i < sides.size() - 2; ++i)
	{
		if(sides[i] + sides[i + 1] > sides[i + 2])
		{
			return true;
		}
	}

	return false;
}