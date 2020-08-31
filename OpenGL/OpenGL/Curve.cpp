#include "Curve.h"

Curve::Curve()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0, 0, 0, 1);
	curve = new Curve;
	curve->drawCircle(90, 100, 40, 30);
	curve->drawTriangles();
	curve->drawQuads();
	curve->drawRectangle();
}

Curve::Curve(const Curve &)
{
}

Curve::~Curve()
{
	delete curve;
}

void Curve::drawCircle(float x, float y, float r, int amountSegments)
{
	glBegin(GL_POLYGON);
	{
		for (int i = 0; i < amountSegments; i++)
		{
			float angle = 2.0 * 3.1415926 * float(i) / float(amountSegments);
			float dx = r * cosf(angle);
			float dy = r * sinf(angle);
			glVertex2f(x + dx, y + dy);
		}
		glEnd();
	}
}
void Curve::drawTriangles()
{
	glBegin(GL_TRIANGLES);
	{
		glColor4f(1.0, 1.0, 0.0, 1.0);
		glVertex2f(-0.5f, 0.0f);
		glVertex2f(0.0f, 0.0f);
		glVertex2f(-0.25f, 0.25f);
	}
	glEnd();
}
void Curve::drawQuads()
{
	glBegin(GL_QUADS);
	glVertex2f(-0.5f, -0.5f);
	glVertex2f(-0.1f, -0.5f);
	glVertex2f(-0.1f, -0.1f);
	glVertex2f(-0.5f, -0.1f);
	glEnd();
}
void Curve::drawRectangle()
{
	glBegin(GL_QUADS);
	glVertex2f(0.7f, 0.3f);
	glVertex2f(0.1f, 0.3f);
	glVertex2f(0.1f, 0.1f);
	glVertex2f(0.7f, 0.1f);
	glEnd();
}

//void Curve::display()
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glClearColor(0, 0, 0, 1);
//	curve = new Curve;
//	curve->drawCircle(90, 100, 40, 30);
//	curve->drawTriangles();
//	curve->drawQuads();
//	curve->drawRectangle();
//	glFlush();
//}