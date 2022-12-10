#pragma once

class OGLColor
{
	enum <unnamed-enum-RED>
	{
		RED = 0,
		GREEN = 1,
		BLUE = 2,
		ALPHA = 3,
		MAX = 4,
	};
public:
	float m_fColor[4]; // 0x0
	OGLColor(unsigned long);
	OGLColor(float, float, float, float);
	OGLColor(float *);
	OGLColor(OGLColor *);
	OGLColor();
	~OGLColor();
	void initialize();
	void finalize();
	void clear();
	void setColor(unsigned long);
	void setColor(float, float, float, float);
	void setColor(float, float, float);
	void setColor(float *);
	void setColor(OGLColor *);
	void setAlpha(float);
};