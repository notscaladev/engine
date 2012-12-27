#include "math_utils.h"
#include <math.h>
#include "stdafx.h"

class CMathUtils : public IMathUtils
{
public:
	//Is number even
	bool isEven(int number)
	{
		return number % 2 == 0;
	}

	//is number odd
	bool isOdd(int number)
	{
		return number % 2 == 1;
	}

	bool isDouble(int number)
	{
		return number % 2 == 0.0;
	}
};