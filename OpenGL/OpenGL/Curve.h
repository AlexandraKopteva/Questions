#pragma once

#include "GL/glut.h"
#include <math.h>

class Curve
{
public:
	Curve();
	Curve(const Curve &);
	~Curve();
	void drawCircle(float x, float y, float r, int amountSegments);
	void drawTriangles();
	void drawQuads();
	void drawRectangle();
	//void display();
	Curve* curve;
protected:
private:
};

