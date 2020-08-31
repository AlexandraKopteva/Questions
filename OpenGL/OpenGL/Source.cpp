#include"Curve.h"

/*
Задание. Необходимо привести пример программы или библиотеки на C++,
которая выводит на экран различные геометрические фигуры: круг,
квадрат, треугольник, прямоугольник и т.п.
Глубина проработки примера (количество фигур, параметры, методы)
на Ваше усмотрение. Программа не обязательно должна запускаться и работать (хотя это будет плюсом).
*/

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	Curve curveCall;
    glFlush();
}
int main()
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 140);
	glutCreateWindow("OpenGL window");
	glClearColor(1, 1, 1, 1);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, 200, 200, 0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}