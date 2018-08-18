#include<bits/stdc++.h>
//#include<freeglut.h>
#include<GL/glu.h>
using namespace std;
void display()
{
glClearColor(0.0, 0.0, 0.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
	glPointSize(10.0f);
	glBegin(GL_POINTS);
		glVertex3f(0.5f, 0.5f, 0.0f);
	glEnd();
	glFlush();
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(10, 10);
	glutCreateWindow("Point");
	glutDisplayFunc(display);
	glutMainLoop();

	return 0;
}
