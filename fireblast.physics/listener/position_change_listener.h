#ifndef _CHANGELISTENER_H_
#define _CHANGELISTENER_H_

class StateListener
{
public:
	void onXPositionChanged(float x);
	void onYPositionChanged(float y);
	void onZPositionChanged(float z);
	void onPositionChanged(float x, float y, float z);
};
#endif
