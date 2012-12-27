#ifndef _MATHUTILS_H_
#define _MATHUTILS_H_

class IMathUtils
{
public:
	virtual bool isEvenNumber(int number) = 0;

	virtual bool isOdd(int number) = 0;

	virtual bool isDouble(int number) = 0;
};
#endif // !_MATHUTILS_H_
