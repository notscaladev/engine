#ifndef _COLOR_H_
#define _COLOR_H_
#define ABGR_PACKED_RED_SHIFT 0
#define ABGR_PACKED_GREEN_SHIFT 8
#define ABGR_PACKED_BLUE_SHIFT 16
#define ABGR_PACKED_ALPHA_SHIFT  24
#define ABGR_PACKED_RED_CLEAR  0XFFFFFF00
#define ABGR_PACKED_GREEN_CLEAR  0XFFFF00FF
#define ABGR_PACKED_BLUE_CLEAR  0XFF00FFFF
#define ABGR_PACKED_ALPHA_CLEAR  0X00FFFFFF
#define ARGB_PACKED_BLUE_SHIFT  0
#define ARGB_PACKED_GREEN_SHIFT  8
#define ARGB_PACKED_RED_SHIFT  16
#define ARGB_PACKED_ALPHA_SHIFT  24
#define ARGB_PACKED_BLUE_CLEAR  0XFFFFFF00
#define ARGB_PACKED_GREEN_CLEAR  0XFFFF00FF
#define ARGB_PACKED_RED_CLEAR  0XFF00FFFF
#define ARGB_PACKED_ALPHA_CLEAR  0X00FFFFFF

class Color
{
private:
	float m_Red;
	float m_Green;
	float m_Blue;
    float m_Alpha;
	int m_ABGRPackedInt;
	float m_ABGRPackedFloat;
public:
	Color(){}

	~Color(){}

	Color(Color* color){}

	Color(float red, float green, float blue){}

	Color(float red, float green, float blue, float alpha){}

	float getRedColor();

	float getGreenColor();

	float getBlueColor();

	float getAlphaColor();

	void setRedColor(float red);

	bool isRedColor(float red);

	void setGreenColor(float green);

	bool isGreenColor(float green);

	void setBlueColor(float blue);

	bool isBlueColor(float blue);

	void setAlphaColor(float alpha);

	bool isAlphaColor(float alpha);

	void setColor(float red, float green, float blue);

	bool isColor(float red, float blue, float green);
	
	void setColor(float red, float green, float blue, float alpha);

	bool isColor(float red, float blue, float green, float alpha);

	void setColor(Color* color);

	bool isColor(Color* color);

	int getABGRPackedInt();

	float getABGRPackedFloat();

	int getARGBPackedInt();

	void reset();

	void packABGRRed();

	void packABGRGreen();

	void packABGRBlue();

	void packABGRAlpha();

	void packABGR();

	void mix(Color* pColorA, float pPercentageA, Color* pColorB, float pPercentageB);
};
#endif // !_COLOR_H_