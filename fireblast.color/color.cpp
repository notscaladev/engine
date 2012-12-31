#include "color.h"
#include "stdafx.h"

class CColor : public Color
{
public:
	Color getWhite()
	{
		Color* whiteColor = new Color(1, 1, 1, 1);
		return whiteColor;
		delete whiteColor;
	};

	Color getBlack()
	{
		Color* blackColor = new Color(0, 0, 0, 1);
		return blackColor;
		delete blackColor;
	};

	Color getRed()
	{
		Color* redColor = new Color(1, 0, 0, 1);
		return redColor;
		delete redColor;
	}

	Color getYellow()
	{
		Color* yellowColor = new Color(1, 1, 0, 1);
		return yellowColor;
		delete yellowColor;
	}

	Color getGreen()
	{
		Color* greenColor = new Color(0, 1, 0, 1);
		return greenColor;
		delete greenColor;
	}

	Color getCyan()
	{
		Color* cyanColor = new Color(0, 1, 1, 1);
		return cyanColor;
		delete cyanColor;
	}

	Color getBlue()
	{
		Color* blueColor = new Color(0, 0, 1, 1);
		return blueColor;
		delete blueColor;
	}

	Color getPink()
	{
		Color* pinkColor = new Color(1, 0, 1, 1);
		return pinkColor;
		delete pinkColor;
	}

	Color getTransparent()
	{
		Color* transparent = new Color(0, 0, 0, 0);
		return transparent;
		delete transparent;
	}
};