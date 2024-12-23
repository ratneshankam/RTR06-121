// header files
#include <GL/freeglut.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

// global variable declarations
bool bFullScreen = false;
int scene_number = 0;
float angle = 180.0f;
char txt1[] = "MATRIX GROUP";
char txt2[] = "RTR 6";
char txt3[] = "PRESENTS...";
char txt4[] = "x64 Native Tools Command Prompt for VS 2022";
char txt5[] = "C:\\MyProjects\\Omkar's bday demo>cl.exe /c /EHsc OmkarBday.c";
char txt6[] = "Microsoft (R) C/C++ Optimizing Compiler Version 19.41.34123 for x64";
char txt7[] = "Copyright (C) Microsoft Corporation.  All rights reserved.";
char txt8[] = "OmkarBday.c";
char txt9[] = "C:\\MyProjects\\Omkar's bday demo>link.exe OmkarBday.obj";
char txt10[] = "Microsoft (R) Incremental Linker Version 14.41.34123.0";
char txt11[] = "Copyright (C) Microsoft Corporation. All rights reserved.";
char txt12[] = "C:\\MyProjects\\Omkar's bday demo>OmkarBday.exe";
char txt13[] = "Happy Birthday, Omkar!";
float zoom = 1.0f;
// Entry-point function
int main(int argc, char *argv[])
{
	// local function declarations
	int initialize(void);
	void resize(int, int);
	void display(void);
	void display_circle(void);
	void keyboard(unsigned char, int, int);
	void mouse(int, int, int, int);
	void uninitialize(void);
	void background(void);
	void backgroundVsCode();
	void cmdCondition();

	void cmdIconCode(void);
	void update(int value);
	void timer(int value);

	// code
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Created By - Matrix Group RTR 6");
	initialize();
	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	if (scene_number == 5)
		glutTimerFunc(0, timer, 0);
	else
		glutTimerFunc(1000, update, 0);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutCloseFunc(uninitialize);
	glutMainLoop();
	return (0);
}

int initialize(void)
{
	// code
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	return (0);
}
void timer(int value)
{
	glutPostRedisplay(); // Request redisplay
	// if (scene_number == 5)
		glutTimerFunc(16, timer, 0); // Call timer again in 16ms (~60 FPS)
}
void adjustProjection()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	if (scene_number == 4)
	{
		float zoomFactor = 1.0f / zoom; // Inverse for zoom effect
		gluOrtho2D(-zoomFactor, zoomFactor, -zoomFactor, zoomFactor);
	}
	else
	{
		gluOrtho2D(-1, 1, -1, 1);
	}
	glMatrixMode(GL_MODELVIEW);
}

void resize(int width, int height)
{
	// code
	glViewport(0, 0, width, height);
}

void display(void)
{
	// function prototype
	void scene1_display(void);
	void scene2_display(void);
	void scene3_display(void);
	void scene4_display(void);
	void scene5_display(void);

	// code
	switch (scene_number)
	{
	case 1:
		printf("scene1\n");
		scene1_display();
		break;
	case 2:
		printf("scene2\n");
		scene2_display();
		break;
	case 3:
		printf("scene3\n");
		scene3_display();
		break;
	case 4:
		printf("scene4\n");
		scene4_display();
		break;
	case 5:
		printf("scene5\n");
		scene5_display();
		break;
	default:
		printf("Default\n");
		scene1_display();
		break;
	}
}

void cmdCondition()

{
	void cmdBackground();
	if (scene_number == 4)
	{
		printf("Scene number is 4\n");
		cmdBackground();
	}
}
void cmdBackground()
{
	// code to show cmd window

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.3f, -0.25f, 0.0f);
	glVertex3f(-0.3f, 0.25f, 0.0f);
	glVertex3f(0.65f, 0.25f, 0.0f);
	glVertex3f(0.65f, -0.25f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.3f, 0.2f, 0.0f);
	glVertex3f(-0.3f, 0.25f, 0.0f);
	glVertex3f(0.65f, 0.25f, 0.0f);
	glVertex3f(0.65f, 0.2f, 0.0f);

	// cmd icon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.28f, 0.21f, 0.0f);
	glVertex3f(0.28f, 0.24f, 0.0f);
	glVertex3f(0.25f, 0.24f, 0.0f);
	glVertex3f(0.25f, 0.21f, 0.0f);
}

void cmdIconCode(void)
{

	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.28f, 0.23f, 0.0f);
	glVertex3f(-0.25f, 0.23f, 0.0f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.205f, -0.378f, 0.0f);
	glVertex3f(-0.195f, -0.378f, 0.0f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.203f, -0.38f, 0.0f);
	glVertex3f(-0.215f, -0.375f, 0.0f);
	glEnd();
}

void background(void)
{
	// code
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);

	glColor3f(0.980f, 0.941f, 0.784f);
	glVertex3f(-1.0f, -0.75f, 0.0f);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, -0.75f, 0.0f);

	glColor3f(0.211f, 0.270f, 0.309f);
	glVertex3f(-0.8f, -0.5f, 0.0f);
	glVertex3f(-0.8f, 0.5f, 0.0f);
	glVertex3f(0.8f, 0.5f, 0.0f);
	glVertex3f(0.8f, -0.5f, 0.0f);

	glColor3f(0.1f, 0.12f, 0.15f);
	glVertex3f(-0.72f, -0.4f, 0.0f);
	glVertex3f(-0.72f, 0.4f, 0.0f);
	glVertex3f(0.72f, 0.4f, 0.0f);
	glVertex3f(0.72f, -0.4f, 0.0f);

	glColor3f(0.211f, 0.270f, 0.309f);
	glVertex3f(-0.1f, -0.7f, 0.0f);
	glVertex3f(-0.1f, -0.5f, 0.0f);
	glVertex3f(0.1f, -0.5f, 0.0f);
	glVertex3f(0.1f, -0.7f, 0.0f);

	glColor3f(0.1f, 0.12f, 0.15f);
	glVertex3f(-0.25f, -0.75f, 0.0f);
	glVertex3f(-0.22f, -0.65f, 0.0f);
	glVertex3f(0.22f, -0.65f, 0.0f);
	glVertex3f(0.25f, -0.75f, 0.0f);

	glColor3f(0.400f, 0.200f, 0.184f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(-1.0f, -0.75f, 0.0f);
	glVertex3f(1.0f, -0.75f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glEnd();
}

void backgroundVsCode()
{
	// code
	glBegin(GL_QUADS);

	glColor3f(0.980f, 0.941f, 0.784f);
	glVertex3f(-1.0f, -0.75f, 0.0f);
	glVertex3f(-1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, 1.0f, 0.0f);
	glVertex3f(1.0f, -0.75f, 0.0f);

	glColor3f(0.211f, 0.270f, 0.309f);
	glVertex3f(-0.8f, -0.5f, 0.0f);
	glVertex3f(-0.8f, 0.5f, 0.0f);
	glVertex3f(0.8f, 0.5f, 0.0f);
	glVertex3f(0.8f, -0.5f, 0.0f);

	glColor3f(0.1f, 0.12f, 0.15f);
	glVertex3f(-0.72f, -0.4f, 0.0f);
	glVertex3f(-0.72f, 0.4f, 0.0f);
	glVertex3f(0.72f, 0.4f, 0.0f);
	glVertex3f(0.72f, -0.4f, 0.0f);

	glColor3f(0.211f, 0.270f, 0.309f);
	glVertex3f(-0.1f, -0.7f, 0.0f);
	glVertex3f(-0.1f, -0.5f, 0.0f);
	glVertex3f(0.1f, -0.5f, 0.0f);
	glVertex3f(0.1f, -0.7f, 0.0f);

	glColor3f(0.1f, 0.12f, 0.15f);
	glVertex3f(-0.25f, -0.75f, 0.0f);
	glVertex3f(-0.22f, -0.65f, 0.0f);
	glVertex3f(0.22f, -0.65f, 0.0f);
	glVertex3f(0.25f, -0.75f, 0.0f);

	glColor3f(0.400f, 0.200f, 0.184f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glVertex3f(-1.0f, -0.75f, 0.0f);
	glVertex3f(1.0f, -0.75f, 0.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.72f, -0.4f, 0.0f);
	glVertex3f(-0.72f, -0.35f, 0.0f);
	glVertex3f(0.72f, -0.35f, 0.0f);
	glVertex3f(0.72f, -0.4f, 0.0f);

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.71f, -0.39f, 0.0f);
	glVertex3f(-0.71f, -0.36f, 0.0f);
	glVertex3f(-0.68f, -0.355f, 0.0f);
	glVertex3f(-0.68f, -0.395f, 0.0f);

	glColor3f(0.8f, 0.8f, 0.8f);
	glVertex3f(-0.66f, -0.39f, 0.0f);
	glVertex3f(-0.66f, -0.36f, 0.0f);
	glVertex3f(-0.36f, -0.36f, 0.0f);
	glVertex3f(-0.36f, -0.39f, 0.0f);
	// file icon
	glColor3f(0.9f, 0.7f, 0.2f);
	glVertex3f(-0.34f, -0.39f, 0.0f);
	glVertex3f(-0.34f, -0.36f, 0.0f);
	glVertex3f(-0.31f, -0.36f, 0.0f);
	glVertex3f(-0.31f, -0.39f, 0.0f);

	glColor3f(0.5f, 0.7f, 0.8f);
	glVertex3f(-0.335f, -0.39f, 0.0f);
	glVertex3f(-0.335f, -0.37f, 0.0f);
	glVertex3f(-0.315f, -0.37f, 0.0f);
	glVertex3f(-0.315f, -0.39f, 0.0f);

	glColor3f(0.9f, 0.7f, 0.2f);
	glVertex3f(-0.33f, -0.39f, 0.0f);
	glVertex3f(-0.33f, -0.377f, 0.0f);
	glVertex3f(-0.32f, -0.377f, 0.0f);
	glVertex3f(-0.32f, -0.39f, 0.0f);

	/*glColor3f(0.23f, 0.07f, 0.37f);*/
	/*glVertex3f(-0.28f, -0.383f, 0.0f);
	glVertex3f(-0.28f, -0.367f, 0.0f);
	glVertex3f(-0.288f, -0.367f, 0.0f);
	glVertex3f(-0.288f, -0.383f, 0.0f);*/

	// cmd icon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.22f, -0.39f, 0.0f);
	glVertex3f(-0.22f, -0.36f, 0.0f);
	glVertex3f(-0.19f, -0.36f, 0.0f);
	glVertex3f(-0.19f, -0.39f, 0.0f);

	// inner window
	glColor3f(0.15f, 0.2f, 0.250f);
	glVertex3f(-0.715f, 0.36f, 0.0f);
	glVertex3f(-0.715f, 0.395f, 0.0f);
	glVertex3f(-0.51f, 0.395f, 0.0f);
	glVertex3f(-0.51f, 0.36f, 0.0f);

	glColor3f(0.15f, 0.2f, 0.250f);
	glVertex3f(-0.715f, 0.32f, 0.0f);
	glVertex3f(-0.715f, 0.355f, 0.0f);
	glVertex3f(0.715f, 0.355f, 0.0f);
	glVertex3f(0.715f, 0.32f, 0.0f);

	glColor3f(0.15f, 0.2f, 0.250f);
	glVertex3f(-0.715f, -0.345f, 0.0f);
	glVertex3f(-0.715f, -0.31f, 0.0f);
	glVertex3f(0.715f, -0.31f, 0.0f);
	glVertex3f(0.715f, -0.345f, 0.0f);

	glColor3f(0.15f, 0.2f, 0.250f);
	glVertex3f(-0.715f, -0.305f, 0.0f);
	glVertex3f(-0.715f, 0.315f, 0.0f);
	glVertex3f(-0.69f, 0.315f, 0.0f);
	glVertex3f(-0.69f, -0.305f, 0.0f);

	glColor3f(0.15f, 0.2f, 0.250f);
	glVertex3f(0.69f, -0.305f, 0.0f);
	glVertex3f(0.69f, 0.315f, 0.0f);
	glVertex3f(0.715f, 0.315f, 0.0f);
	glVertex3f(0.715f, -0.305f, 0.0f);

	cmdCondition();

	glEnd();

	glLineWidth(1.0f);
	cmdIconCode();
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.71f, -0.375f, 0.0f);
	glVertex3f(-0.68f, -0.375f, 0.0f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex3f(-0.695f, -0.355f, 0.0f);
	glVertex3f(-0.695f, -0.395f, 0.0f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.65f, -0.385f, 0.0f);
	glVertex3f(-0.63f, -0.37f, 0.0f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.4f, 1.0f);
	glVertex3f(-0.24f, -0.4f, 0.0f);
	glVertex3f(-0.29f, -0.4f, 0.0f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.4f, 1.0f);
	glVertex3f(-0.23f, -0.4f, 0.0f);
	glVertex3f(-0.18f, -0.4f, 0.0f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.22f, -0.365f, 0.0f);
	glVertex3f(-0.19f, -0.365f, 0.0f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.205f, -0.378f, 0.0f);
	glVertex3f(-0.195f, -0.378f, 0.0f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-0.203f, -0.38f, 0.0f);
	glVertex3f(-0.215f, -0.375f, 0.0f);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.6f, 0.4f, 0.8f);
	glVertex3f(-0.28f, -0.383f, 0.0f);
	glVertex3f(-0.28f, -0.367f, 0.0f);
	glEnd();
	glLineWidth(2.5f);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.8f, 0.6f, 0.9f);
	glVertex3f(-0.28f, -0.385f, 0.0f);
	glVertex3f(-0.25f, -0.361f, 0.0f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.8f, 0.6f, 0.9f);
	glVertex3f(-0.25f, -0.36f, 0.0f);
	glVertex3f(-0.25f, -0.39f, 0.0f);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glColor3f(0.8f, 0.6f, 0.9f);
	glVertex3f(-0.25f, -0.39f, 0.0f);
	glVertex3f(-0.28f, -0.368f, 0.0f);
	glEnd();
}

void scene1_display(void)
{
	background();
	for (int i = 0; i < 12; i++)
	{
		glColor3f(0.0f, 1.0f, 0.0f);
		glRasterPos2f(-0.35f + (0.05f * i), 0.1f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, txt1[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		glRasterPos2f(-0.15f + (0.05f * i), 0.0f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, txt2[i]);
	}
	for (int i = 0; i < 11; i++)
	{
		glRasterPos2f(-0.3f + (0.05f * i), -0.1f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, txt3[i]);
	}
	glutSwapBuffers();
}

// void scene2_display(void)
//{
//	//variable
//	float x, y, scaler = 0.5f;
//	float x_offset = 0.5f;
//	float y_offset = 0.0f;
//	const int points_count = 11;
//	float circle_points[11][2] = {
//		  {1.000f, 0.000f},
//		  {0.988f, 0.125f},
//		  {0.963f, 0.250f},
//		  {0.925f, 0.375f},
//		  {0.863f, 0.500f},
//		  {0.775f, 0.625f},
//		  {0.663f, 0.750f},
//		  {0.475f, 0.875f},
//		  {0.375f, 0.925f},
//		  {0.250f, 0.988f},
//		  {0.000f, 1.000f}
//	};
//
//	// code
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_POLYGON);
//	glColor3f(1.0f, 1.0f, 1.0f); // white
//	// 1st quadrant of circle
//	printf("First Quadrant offset %f %f\n", x_offset, y_offset);
//	for (int i = 0; i < points_count; i++)
//	{
//		x = (scaler * (circle_points[i][0] + x_offset));
//		y = (scaler * (circle_points[i][1] + y_offset));
//		glVertex3f(x, y, 0.0f);
//		printf("x = %f, y = %f\n", x, y);
//	}
//	printf("Second Quadrant\n");
//	//2nd quadrant of circle
//	for (int i = points_count - 1; i >= 0; i--)
//	{
//		x = (-scaler * (circle_points[i][0] + x_offset));
//		y = (scaler * (circle_points[i][1] + y_offset));
//		glVertex3f(x, y, 0.0f);
//		printf("x = %f, y = %f\n", x, y);
//	}
//	////3rd quadrant of circle
//	//for (int i = 0; i < points_count; i++)
//	//{
//	//� glVertex3f(-scaler*(circle_points[i][0] - x_offset), -scaler*(circle_points[i][1] - y_offset), 0.0f);
//	//}
//	////4th quadrant of circle
//	//for (int i = 0; i < points_count; i++)
//	//{
//	// glVertex3f(scaler*(circle_points[i][0] - x_offset), -scaler*(circle_points[i][1] - y_offset), 0.0f);
//	//}
//	glEnd();
//	//glBegin(GL_POLYGON);
//		//x_offset = 0.125f;
//		  //scaler = 1.0f;
//	  ////y_offset = 0.0f;
//	//glColor3f(1.0f, 0.0f, 0.0f); // white
//		  //// 1st quadrant of circle
//	//printf("First Quadrant offset %f %f\n", x_offset, y_offset);
//		  //for (int i = 0; i < points_count; i++)
//		  //{
//		  //��� x = (scaler * (circle_points[i][0] - x_offset));
//		  //��� y = (scaler * (circle_points[i][1] - y_offset));
//		  // glVertex3f(x, y, 0.0f);
//		  //�� //printf("x = %f, y = %f\n", x, y);
//		  //}
//		//glEnd();
//	glutSwapBuffers();
// }

void scene2_display(void)
{

	// background
	background();

	// variable declaration
	float x1 = 0.0f, y1 = 0.75f;
	float x2 = 0.25f, y2 = 0.0f;
	float radian = angle * (3.14159 / 180.0f);

	// code
	// glClear(GL_COLOR_BUFFER_BIT);
	// glBegin(GL_LINES);
	// glColor3f(0.0f, 1.0f, 0.0f);
	// glVertex3f(x1, y1, 0.0f);

	//// calculate second point as per angle
	x2 = 0.25f * cos(radian);
	y2 = 0.25f * sin(radian);
	// glVertex3f(x2 + x1, y2 + y1, 0.0f);
	// glEnd();

	glPushMatrix();
	glTranslatef(.0f, .75f, 1.0f);
	glColor3f(.7f, 1.f, 1.f);
	glutSolidSphere(.26, 10, 10);
	glPopMatrix();
	glLineWidth(3.0f);
	glPushMatrix();
	glTranslatef(.0f, .75f, 1.0f);
	glColor3f(1.f, 1.f, 1.f);
	glutWireSphere(.26, 10, 10);
	glPopMatrix();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(x1, y1, 0.0f);

	// calculate second point as per angle;
	// printf("x = %f y = %f\n", x2, y2);
	glVertex3f(x2 + x1, y2 + y1, 0.0f);
	glEnd();
	glutSwapBuffers();
	glutPostRedisplay();
}

void scene3_display(void)
{
	// background dummy vs code window code
	glClear(GL_COLOR_BUFFER_BIT);

	backgroundVsCode();

	glutSwapBuffers();
}

void scene4_display(void)
{
	// dummy terminal window

	glClear(GL_COLOR_BUFFER_BIT);

	backgroundVsCode();
	for (int i = 0; i < 46; i++)
	{
		glColor3f(0.0f, 0.0f, 0.0f);
		glRasterPos2f(-0.24f + (0.01f * i), 0.215f);
		glutBitmapCharacter(GLUT_BITMAP_8_BY_13, txt4[i]);
	}
	for (int i = 0; i < 60; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.26f + (0.01f * i), 0.16f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt5[i]);
	}
	for (int i = 0; i < 70; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.26f + (0.01f * i), 0.13f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt6[i]);
	}
	for (int i = 0; i < 60; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.26f + (0.01f * i), 0.10f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt7[i]);
	}
	for (int i = 0; i < 12; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.26f + (0.01f * i), 0.05f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt8[i]);
	}
	for (int i = 0; i < 54; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.26f + (0.01f * i), 0.02f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt9[i]);
	}
	for (int i = 0; i < 54; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.26f + (0.01f * i), -0.01f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt10[i]);
	}
	for (int i = 0; i < 60; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.26f + (0.01f * i), -0.04f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt11[i]);
	}
	for (int i = 0; i < 48; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.26f + (0.01f * i), -0.09f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt12[i]);
	}
	for (int i = 0; i < 24; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.26f + (0.01f * i), -0.12f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt13[i]);
	}

	glutSwapBuffers();
}

void scene5_display(void)
{

	// function prototype
	void happy();
	void birthday();
	void omkar();
	void characterFall();
	// code
	glClear(GL_COLOR_BUFFER_BIT);

	characterFall();
	happy();
	birthday();
	omkar();

	glutSwapBuffers();
}
void update(int value)
{
	if (angle != 90.0f)
	{
		angle = angle - 6;
		// printf("angle = %f\n", angle);
	}
	else
	{
		angle = 90.0f;
	}
		glutTimerFunc(1000, update, 0);
	if (angle == 90.0f) {
		glutTimerFunc(0, timer, 0);	}

}

void keyboard(unsigned char key, int x, int y)
{
	void adjustProjection();
	// code
	switch (key)
	{
	case '1':
		scene_number = 1;
		adjustProjection();
		glutPostRedisplay();
		break;
	case '2':
		scene_number = 2;
		adjustProjection();
		glutPostRedisplay();
		break;
	case '3':
		scene_number = 3;
		adjustProjection();
		glutPostRedisplay();
		break;
	case '4':
		scene_number = 4;
		adjustProjection();
		glutPostRedisplay();
		break;
	case '5':
		scene_number = 5;
		adjustProjection();
		glutPostRedisplay();
		break;
	case 27:
		glutLeaveMainLoop();
		break;
	case 'F':
	case 'f':
		if (bFullScreen == false)
		{
			glutFullScreen();
			bFullScreen = true;
		}
		else
		{
			glutLeaveFullScreen();
			bFullScreen = false;
		}
		break;
	case 'z':
	{
		zoom *= 1.1f; // Zoom in
		// if (zoom > 10.0f)
		// 	zoom = 10.0f; // Max zoom limit

		adjustProjection();
		glutPostRedisplay();
	}
	break;
	default:
		break;
	}
}

void mouse(int button, int state, int x, int y)
{
	// code
	switch (button)
	{
	case GLUT_LEFT_BUTTON:
		glutLeaveMainLoop();
		break;
	default:
		break;
	}
}

void uninitialize(void)
{
	// code
}

void omkar()
{
	// ****** O M K A R ******

	// O

	glBegin(GL_POLYGON);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(-0.8f, -0.79f);
	glVertex2f(-0.8f, -0.62f);
	glColor3f(.0f, 0.0f, 0.0f);
	glVertex2f(-0.65f, -0.5f);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(-0.5f, -0.62f);
	glVertex2f(-0.5f, -0.79f);
	glVertex2f(-0.65f, -0.9f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(.0f, 0.f, 0.0f);
	glVertex2f(-0.75f, -0.79f);
	glVertex2f(-0.75f, -0.62f);
	glVertex2f(-0.65f, -0.55f);
	glVertex2f(-0.55f, -0.62f);
	glVertex2f(-0.55f, -0.79f);
	glVertex2f(-0.65f, -0.85f);
	glEnd();

	// O - box
	glBegin(GL_QUADS);
	glColor3f(.0f, 0.f, 0.0f);
	glVertex2f(-0.75f, -0.675f);
	glVertex2f(-0.75f, -0.725f);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(-0.83f, -0.725f);
	glVertex2f(-0.83f, -0.675f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f, 0.f, 0.0f);
	glVertex2f(-0.55f, -0.675f);
	glVertex2f(-0.55f, -0.725f);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(-0.47f, -0.725f);
	glVertex2f(-0.47f, -0.675f);
	glEnd();

	// M
	glBegin(GL_QUADS);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(-0.355f, -0.9f);
	glVertex2f(-0.39f, -0.9f);
	glVertex2f(-0.39f, -0.5f);
	glColor3f(.0f, 0.0f, 0.0f);
	glVertex2f(-0.355f, -0.64f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(-0.39f, -0.5f);
	glVertex2f(-0.355f, -0.64f);
	glVertex2f(-0.3f, -0.735f);
	glVertex2f(-0.28f, -0.68f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(-0.155f, -0.5f);
	glVertex2f(-0.19f, -0.64f);
	glVertex2f(-0.24f, -0.76f);
	glVertex2f(-0.28f, -0.78f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(-0.19f, -0.9f);
	glVertex2f(-0.155f, -0.9f);
	glVertex2f(-0.155f, -0.5f);
	glColor3f(.0f, 0.0f, 0.0f);
	glVertex2f(-0.19f, -0.64f);
	glEnd();

	// K
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.05f, -0.5f);
	glVertex2f(-0.05f, -0.9f);
	glVertex2f(-0.015f, -0.9f);
	glVertex2f(-0.015f, -0.5f);
	glEnd();

	// K - box
	glBegin(GL_QUADS);
	glColor3f(.0f, 0.f, 0.0f);
	glVertex2f(-0.01f, -0.675f);
	glVertex2f(-0.01f, -0.725f);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(-0.083f, -0.725f);
	glVertex2f(-0.083f, -0.675f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(-0.01f, -0.675f);
	glVertex2f(-0.01f, -0.725f);
	glVertex2f(0.1f, -0.9f);
	glVertex2f(0.14f, -0.9f);
	glVertex2f(-0.005f, -0.655f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(0.1f, -0.5f);
	glVertex2f(0.145f, -0.5f);
	glVertex2f(0.04f, -0.66f);
	glColor3f(.0f, 0.0f, 0.0f);
	glVertex2f(0.01f, -0.63f);
	glEnd();

	// A
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.25f, -0.9f);
	glVertex2f(0.2f, -0.9f);
	glVertex2f(0.3f, -0.5f);
	glColor3f(.0f, 0.0f, 0.0f);
	glVertex2f(0.35f, -0.5f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.45f, -0.9f);
	glVertex2f(0.38f, -0.5f);
	glVertex2f(0.35f, -0.6f);
	glVertex2f(0.4f, -0.9f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.362f, -0.77f);
	glVertex2f(0.342f, -0.73f);
	glVertex2f(0.322f, -0.73f);
	glVertex2f(0.302f, -0.77f);
	glEnd();

	// R
	glBegin(GL_QUADS);
	glColor3f(0, 0., 0);
	glVertex2f(0.56f, -0.5f);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.56f, -0.9f);
	glVertex2f(0.52f, -0.9f);
	glVertex2f(0.52f, -0.5f);
	glEnd();

	// R - box
	glBegin(GL_QUADS);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(0.485f, -0.675f);
	glVertex2f(0.485f, -0.725f);
	glColor3f(.0f, 0.f, 0.0f);
	glVertex2f(0.56f, -0.725f);
	glVertex2f(0.56f, -0.675f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0., 0);
	glVertex2f(0.56f, -0.5f);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(0.7f, -0.5f);
	glVertex2f(0.73f, -0.53f);
	glVertex2f(0.73f, -0.69f);
	glVertex2f(0.68f, -0.73f);
	glVertex2f(0.61f, -0.73f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(.0f, 0.f, 0.0f);
	glVertex2f(0.565f, -0.538f);
	glVertex2f(0.67f, -0.538f);
	glVertex2f(0.695f, -0.54f);
	glVertex2f(0.695f, -0.678f);
	glVertex2f(0.56f, -0.678f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.665f, -0.77f);
	glVertex2f(0.62f, -0.77f);
	glVertex2f(0.7f, -0.9f);
	glVertex2f(0.74f, -0.9f);
	glEnd();
}

void happy()
{
	// HAPPPY
	// H
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.8f, 0.5f, 0.0f);
	glVertex3f(-0.8f, 0.68f, 0.0f);
	glVertex3f(-0.75f, 0.68f, 0.0f);
	glVertex3f(-0.75f, 0.5f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.8f, 0.72f, 0.0f);
	glColor3f(0, 0, 0);
	glVertex3f(-0.8f, 0.9f, 0.0f);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.75f, 0.9f, 0.0f);
	glVertex3f(-0.75f, 0.72f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.65f, 0.72f, 0.0f);
	glVertex3f(-0.65f, 0.9f, 0.0f);
	glVertex3f(-0.6f, 0.9f, 0.0f);
	glVertex3f(-0.6f, 0.72f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.65f, 0.5f, 0.0f);
	glVertex3f(-0.65f, 0.68f, 0.0f);
	glVertex3f(-0.6f, 0.68f, 0.0f);
	glVertex3f(-0.6f, 0.5f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.75f, 0.68f, 0.0f);
	glVertex3f(-0.75f, 0.72f, 0.0f);
	glVertex3f(-0.72f, 0.72f, 0.0f);
	glVertex3f(-0.72f, 0.68f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.72f, 0.72f, 0.0f);
	glVertex3f(-0.72f, 0.76f, 0.0f);
	glVertex3f(-0.68f, 0.76f, 0.0f);
	glVertex3f(-0.68f, 0.72f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.68f, 0.68f, 0.0f);
	glVertex3f(-0.68f, 0.72f, 0.0f);
	glVertex3f(-0.65f, 0.72f, 0.0f);
	glVertex3f(-0.65f, 0.68f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.72f, 0.65f, 0.0f);
	glVertex3f(-0.72f, 0.68f, 0.0f);
	glVertex3f(-0.68f, 0.68f, 0.0f);
	glVertex3f(-0.68f, 0.65f, 0.0f);
	glEnd();

	// A
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.55f, 0.5f, 0.0f);
	glVertex3f(-0.5f, 0.85f, 0.0f);
	glVertex3f(-0.48f, 0.75f, 0.0f);
	glVertex3f(-0.5f, 0.5f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.4f, 0.5f, 0.0f);
	glColor3f(0, 0, 0);
	glVertex3f(-0.5f, 0.9f, 0.0f);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.45f, 0.9f, 0.0f);
	glVertex3f(-0.35f, 0.5f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.485f, 0.58f, 0.0f);
	glVertex3f(-0.465f, 0.62f, 0.0f);
	glVertex3f(-0.445f, 0.62f, 0.0f);
	glVertex3f(-0.425f, 0.58f, 0.0f);
	glEnd();

	// P
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.25f, 0.5f, 0.0f);
	glVertex3f(-0.25f, 0.7f, 0.0f);
	glVertex3f(-0.2f, 0.7f, 0.0f);
	glVertex3f(-0.2f, 0.5f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.3f, 0.7f, 0.0f);
	glVertex3f(-0.3f, 0.75f, 0.0f);
	// glColor3f(0, 0., 0);
	glVertex3f(-0.25f, 0.75f, 0.0f);
	glVertex3f(-0.25f, 0.7f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.25f, 0.75f, 0.0f);
	glColor3f(0, 0, 0);
	glVertex3f(-0.25f, 0.9f, 0.0f);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.2f, 0.9f, 0.0f);
	glVertex3f(-0.2f, 0.75f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.2f, 0.85f, 0.0f);
	glVertex3f(-0.2f, 0.9f, 0.0f);
	glVertex3f(-0.15f, 0.9f, 0.0f);
	glVertex3f(-0.15f, 0.85f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.15f, 0.7f, 0.0f);
	glVertex3f(-0.15f, 0.9f, 0.0f);
	glVertex3f(-0.1f, 0.9f, 0.0f);
	glVertex3f(-0.1f, 0.7f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.17f, 0.7f, 0.0f);
	glVertex3f(-0.17f, 0.75f, 0.0f);
	glVertex3f(-0.15f, 0.75f, 0.0f);
	glVertex3f(-0.15f, 0.7f, 0.0f);
	glEnd();

	// P
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.0f, 0.5f, 0.0f);
	glVertex3f(0.0f, 0.7f, 0.0f);
	glVertex3f(0.05f, 0.7f, 0.0f);
	glVertex3f(0.05f, 0.5f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.05f, 0.7f, 0.0f);
	glVertex3f(-0.05f, 0.75f, 0.0f);
	// glColor3f(0, 0., 0);
	glVertex3f(0.0f, 0.75f, 0.0f);
	glVertex3f(0.0f, 0.7f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.0f, 0.75f, 0.0f);
	glColor3f(0, 0, 0);
	glVertex3f(0.0f, 0.9f, 0.0f);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.05f, 0.9f, 0.0f);
	glVertex3f(0.05f, 0.75f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.05f, 0.85f, 0.0f);
	glVertex3f(0.05f, 0.9f, 0.0f);
	glVertex3f(0.1f, 0.9f, 0.0f);
	glVertex3f(0.1f, 0.85f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.1f, 0.7f, 0.0f);
	glVertex3f(0.1f, 0.9f, 0.0f);
	glVertex3f(0.15f, 0.9f, 0.0f);
	glVertex3f(0.15f, 0.7f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.08f, 0.7f, 0.0f);
	glVertex3f(0.08f, 0.75f, 0.0f);
	glVertex3f(0.1f, 0.75f, 0.0f);
	glVertex3f(0.1f, 0.7f, 0.0f);
	glEnd();

	// Y
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.28f, 0.7f, 0.0f);
	glVertex3f(0.2f, 0.9f, 0.0f);
	glVertex3f(0.25f, 0.9f, 0.0f);
	glVertex3f(0.3f, 0.75f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.3f, 0.75f, 0.0f);
	glColor3f(0, 0, 0);
	glVertex3f(0.35f, 0.9f, 0.0f);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.4f, 0.9f, 0.0f);
	glVertex3f(0.32f, 0.7f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.28f, 0.5f, 0.0f);
	glVertex3f(0.28f, 0.66f, 0.0f);
	glVertex3f(0.32f, 0.66f, 0.0f);
	glVertex3f(0.32f, 0.5f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.25f, 0.66f, 0.0f);
	glVertex3f(0.25f, 0.71f, 0.0f);
	glVertex3f(0.28f, 0.71f, 0.0f);
	glVertex3f(0.28f, 0.66f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.32f, 0.66f, 0.0f);
	glVertex3f(0.32f, 0.71f, 0.0f);
	glVertex3f(0.35f, 0.71f, 0.0f);
	glVertex3f(0.35f, 0.66f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.28f, 0.7f, 0.0f);
	glVertex3f(0.3f, 0.75f, 0.0f);
	glColor3f(0, 0., 0);
	glVertex3f(.32f, 0.7f, 0.0f);
	glEnd();
}

void birthday()
{

	// I vertical line
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.685f, 0.05f);
	glVertex2f(-0.655f, 0.05f);
	glVertex2f(-0.655f, 0.20f);
	glVertex2f(-0.685f, 0.20f);
	glEnd();

	// I top square 1
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.715f, 0.0f);
	glVertex2f(-0.69f, 0.0f);
	glVertex2f(-0.69f, 0.04f);
	glVertex2f(-0.715f, 0.04f);
	glEnd();

	// I top square 2
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.65f, 0.0f);
	glVertex2f(-0.625f, 0.0f);
	glVertex2f(-0.625f, 0.04f);
	glVertex2f(-0.65f, 0.04f);
	glEnd();

	// I top vertical line
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.685f, -0.2f);
	glVertex2f(-0.655f, -0.2f);
	glVertex2f(-0.655f, -0.0f);
	glColor3f(0, 0, 0);
	glVertex2f(-0.685f, -0.0f);
	glEnd();

	// R
	glBegin(GL_QUADS);
	glColor3f(0, 0., 0);
	glVertex2f(-0.56f, 0.2f);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.56f, -0.2f);
	glVertex2f(-0.52f, -0.2f);
	glVertex2f(-0.52f, 0.2f);
	glEnd();

	// R - box
	glBegin(GL_QUADS);
	glColor3f(.0f, 0.f, 0.0f);
	glVertex2f(-0.52f, 0.03f);
	glVertex2f(-0.52f, -0.03f);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(-0.59f, -0.03f);
	glVertex2f(-0.59f, 0.03f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0, 0., 0);
	glVertex2f(-0.56f, 0.2f);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(-0.42f, 0.2f);
	glVertex2f(-0.39f, 0.17f);
	glVertex2f(-0.39f, 0.01f);
	glVertex2f(-0.44f, -0.03f);
	glVertex2f(-0.51f, -0.03f);
	glEnd();

	// glBegin(GL_POLYGON);
	// glColor3f(.0f, 0.f, 0.0f);
	// glVertex2f(0.565f, -0.538f);
	// glVertex2f(0.67f, -0.538f);
	// glVertex2f(0.695f, -0.54f);
	// glVertex2f(0.695f, -0.678f);
	// glVertex2f(0.56f, -0.678f);
	// glEnd();
	glBegin(GL_POLYGON);
	glColor3f(.0f, 0.f, 0.0f);
	glVertex2f(-0.525f, 0.162f);
	glVertex2f(-0.46f, 0.162f);
	glVertex2f(-0.435f, 0.16f);
	glVertex2f(-0.435f, 0.022f);
	glVertex2f(-0.525f, 0.022f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.495f, -0.07f);
	glVertex2f(-0.45f, -0.07f);
	glVertex2f(-0.4f, -0.2f);
	glVertex2f(-0.44f, -0.2f);
	glEnd();

	// // T top rectangle 1
	// glBegin(GL_QUADS);
	// glColor3f(0, 0.9, 0);
	// glVertex2f(-0.37f, 0.69f);
	// glVertex2f(-0.35f, 0.69f);
	// glVertex2f(-0.35f, 0.66f);
	// glVertex2f(-0.37f, 0.66f);
	// glEnd();

	// // T top rectangle 2
	// glBegin(GL_QUADS);
	// glColor3f(0, 0.9, 0);
	// glVertex2f(-0.32f, 0.69f);
	// glVertex2f(-0.30f, 0.69f);
	// glVertex2f(-0.30f, 0.66f);
	// glVertex2f(-0.32f, 0.66f);

	// T

	// T vertical line
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.26f, 0.2f);
	glVertex2f(-0.23f, 0.2f);
	glVertex2f(-0.23f, -0.2f);
	glVertex2f(-0.26f, -0.2f);
	glEnd();

	// T horizontal line
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.35f, 0.2f);
	glVertex2f(-0.125f, 0.2f);
	glVertex2f(-0.125f, 0.160f);
	glVertex2f(-0.35f, 0.160f);
	glEnd();

	// R - box
	glBegin(GL_QUADS);
	glColor3f(.0f, 0.f, 0.0f);
	glVertex2f(-0.23f, 0.03f);
	glVertex2f(-0.23f, -0.03f);
	glColor3f(.0f, 0.9f, 0.0f);
	glVertex2f(-0.29f, -0.03f);
	glVertex2f(-0.29f, 0.03f);
	glEnd();

	// T top rectangle
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.18f, 0.23f);
	glVertex2f(-0.15f, 0.23f);
	glColor3f(0, 0., 0);
	glVertex2f(-0.15f, 0.16f);
	glVertex2f(-0.18f, 0.16f);
	glEnd();

	// H
	glEnd();
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.1f, 0.02f, 0.0f);
	glColor3f(0, 0., 0);
	glVertex3f(-0.1f, 0.2f, 0.0f);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.05f, 0.2f, 0.0f);
	glVertex3f(-0.05f, 0.02f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(-0.1f, -0.02f, 0.0f);
	glVertex3f(-0.1f, -0.2f, 0.0f);
	glVertex3f(-0.05f, -0.2f, 0.0f);
	glVertex3f(-0.05f, -0.02f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.05f, 0.02f, 0.0f);
	glColor3f(0, 0, 0);
	glVertex3f(0.05f, 0.2f, 0.0f);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.1f, 0.2f, 0.0f);
	glVertex3f(0.1f, 0.02f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.05f, 0.02f, 0.0f);
	glVertex3f(0.05f, -0.2f, 0.0f);
	glVertex3f(0.1f, -0.2f, 0.0f);
	glVertex3f(0.1f, 0.02f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.13f, -0.02f, 0.0f);
	glVertex3f(0.13f, 0.02f, 0.0f);
	glColor3f(0, 0, 0);
	glVertex3f(-0.1f, 0.02f, 0.0f);
	glVertex3f(-0.1f, -0.02f, 0.0f);
	glEnd();

	// B
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.95f, -0.2f);
	glVertex2f(-0.9f, -0.2f);
	glVertex2f(-0.9f, 0.05f);
	glColor3f(0, 0., 0);
	glVertex2f(-0.95f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.9f, -0.2f);
	glVertex2f(-0.9f, -0.15f);
	glVertex2f(-0.75f, -0.15f);
	glVertex2f(-0.75f, -0.2f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.80f, -0.15f);
	glVertex2f(-0.8f, -0.05f);
	glVertex2f(-0.75f, -0.05f);
	glVertex2f(-0.75f, -0.15f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.8f, -0.05f);
	glVertex2f(-0.85f, 0.0f);
	glVertex2f(-0.8f, -0.0f);
	glVertex2f(-0.75f, -0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.85f, 0.0f);
	glVertex2f(-0.8f, 0.05f);
	glVertex2f(-0.75f, 0.05f);
	glVertex2f(-0.8f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.8f, 0.05f);
	glVertex2f(-0.8f, 0.2f);
	glVertex2f(-0.75f, 0.2f);
	glVertex2f(-0.75f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.9f, 0.15f);
	glVertex2f(-0.9f, 0.2f);
	glVertex2f(-0.8f, 0.2f);
	glVertex2f(-0.8f, 0.15f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(-0.95f, 0.1f);
	glVertex2f(-0.95f, 0.2f);
	glVertex2f(-0.9f, 0.2f);
	glVertex2f(-0.9f, 0.1f);
	glEnd();

	// D
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.18f, -0.2f);
	glVertex2f(0.23f, -0.2f);
	glVertex2f(0.23f, 0.0f);
	glColor3f(0, 0, 0);
	glVertex2f(0.18f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.23f, -0.2f);
	glVertex2f(0.23f, -0.15f);
	glVertex2f(0.4f, -0.15f);
	glVertex2f(0.4f, -0.2f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.35f, -0.15f);
	glVertex2f(0.35f, 0.2f);
	glVertex2f(0.4f, 0.2f);
	glVertex2f(0.4f, -0.15f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.18f, 0.2f);
	glVertex2f(0.35f, 0.2f);
	glVertex2f(0.35f, 0.15f);
	glColor3f(0, 0, 0);
	glVertex2f(0.18f, 0.15);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.18f, 0.05f);
	glVertex2f(0.18f, 0.15f);
	glVertex2f(0.23f, 0.15f);
	glVertex2f(0.23f, 0.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.15f, 0.0f);
	glVertex2f(0.15f, 0.05f);
	glVertex2f(0.18f, 0.05f);
	glVertex2f(0.18f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.23f, 0.0f);
	glVertex2f(0.23f, 0.05f);
	glVertex2f(0.26f, 0.05f);
	glVertex2f(0.26f, 0.0f);
	glEnd();

	// A
	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
	glVertex2f(0.6f, 0.2f);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.55f, 0.2f);
	glVertex2f(0.45f, -0.2f);
	glVertex2f(0.5f, -0.2f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.7f, -0.2f);
	glVertex2f(0.63f, 0.2f);
	glVertex2f(0.61f, 0.1f);
	glVertex2f(0.65f, -0.2f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex2f(0.592f, -0.03f);
	glVertex2f(0.572f, -0.03f);
	glVertex2f(0.552f, -0.07f);
	glColor3f(0, 0, 0);
	glVertex2f(0.612f, -0.07f);
	glEnd();

	// Y
	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.78f, 0.f, 0.0f);
	glVertex3f(0.7f, 0.2f, 0.0f);
	glVertex3f(0.75f, 0.2f, 0.0f);
	glVertex3f(0.8f, 0.05f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.8f, 0.05f, 0.0f);
	glVertex3f(0.82f, 0.f, 0.0f);
	glVertex3f(0.9f, 0.2f, 0.0f);
	glColor3f(0, 0, 0);
	glVertex3f(0.85f, 0.2f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.78f, -0.2f, 0.0f);
	glVertex3f(0.78f, -0.04f, 0.0f);
	glVertex3f(0.82f, -0.04f, 0.0f);
	glVertex3f(0.82f, -0.2f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.75f, -0.04f, 0.0f);
	glVertex3f(0.75f, 0.01f, 0.0f);
	glVertex3f(0.78f, 0.01f, 0.0f);
	glVertex3f(0.78f, -0.04f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.82f, -0.04f, 0.0f);
	glVertex3f(0.82f, 0.01f, 0.0f);
	glVertex3f(0.85f, 0.01f, 0.0f);
	glVertex3f(0.85f, -0.04f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0, 0.9, 0);
	glVertex3f(0.78f, 0.0f, 0.0f);
	glColor3f(0, 0, 0);
	glVertex3f(0.80f, 0.05f, 0.0f);
	glVertex3f(0.82f, 0.0f, 0.0f);
	glEnd();
}

void characterFall()
{
	char char1 = '0';
	char char2 = '1';
	float z = 0.0f;
	float z1 = 0.0f;

	for (float i = -1.0f; i <= 1.0f; i += 0.1f)
	{
		z = (i * 10);
		if ((int)z % 2 == 0)
		{
			for (float j = 0.7f; j >= 0.0f; j -= 0.03f)
			{

				char1 = rand() % (58 - 48 + 1) + 48;
				char2 = rand() % (58 - 48 + 1) + 48;

				z1 = (j * 10);
				if ((int)z1 % 2 == 0)
				{
					glColor3f(0.0f, 0.7f, 0.0f);
					glRasterPos2f(i, j);
					glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, char1);
				}
				else
				{
					glColor3f(0.0f, 0.7f, 0.0f);
					glRasterPos2f(i, j);
					glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, char2);
				}
			}

			for (float j = 0.0f; j >= -1.0f; j -= 0.03f)
			{

				char1 = rand() % (58 - 48 + 1) + 48;
				char2 = rand() % (58 - 48 + 1) + 48;

				z1 = (j * 10);
				if ((int)z1 % 2 == 0)
				{
					glColor3f(0.0f, 0.7f, 0.0f);
					glRasterPos2f(i, j);
					glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, char1);
				}
				else
				{

					glColor3f(0.0f, 0.7f, 0.0f);
					glRasterPos2f(i, j);
					glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, char2);
				}
			}
		}
		else
		{

			for (float j = 1.0f; j >= 0.0f; j -= 0.03f)
			{

				char1 = rand() % (122 - 65 + 1) + 65;
				char2 = rand() % (122 - 65 + 1) + 65;

				z1 = (j * 10);
				if ((int)z1 % 2 == 0)
				{
					glColor3f(0.0f, 0.7f, 0.0f);
					glRasterPos2f(i, j);
					glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, char1);
				}
				else
				{

					glColor3f(0.0f, 0.7f, 0.0f);
					glRasterPos2f(i, j);
					glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, char2);
				}
			}

			for (float j = -0.3f; j >= -1.0f; j -= 0.03f)
			{

				char1 = rand() % (122 - 65 + 1) + 65;
				char2 = rand() % (122 - 65 + 1) + 65;

				z1 = (j * 10);
				if ((int)z1 % 2 == 0)
				{
					glColor3f(0.0f, 0.7f, 0.0f);
					glRasterPos2f(i, j);
					glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, char1);
				}
				else
				{

					glColor3f(0.0f, 0.7f, 0.0f);
					glRasterPos2f(i, j);
					glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, char2);
				}
			}
		}
	}

	float x = 0.0f;
	// up
	for (int i = 11; i > 0; i--)
	{
		if (i % 2 == 0)
		{
			x = -.07f;
		}
		else if (i % 4 == 0)
		{
			continue;
		}
		else
		{
			x = 0.1f;
		}

		glColor3f(0.0f, 0.7f, 0.0f);
		glRasterPos2f(i * (x), .660f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'A');
		glRasterPos2f(i * (x), .630f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'S');
		glRasterPos2f(i * (x), .620f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'T');
		glRasterPos2f(i * (x), .600f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'R');
		glRasterPos2f(i * (x), .550f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'O');
		glRasterPos2f(i * (x), .530f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'M');
		glRasterPos2f(i * (x), .520f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'E');
		glRasterPos2f(i * (x), .500f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'D');
		glRasterPos2f(i * (x), .480f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'I');
		glRasterPos2f(i * (x), .440f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'C');
		glRasterPos2f(i * (x), .420f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'O');
		glRasterPos2f(i * (x), .380f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'M');
		glRasterPos2f(i * (x), .330f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'P');
	}

	for (int i = 11; i > 0; i--)
	{
		if (i % 2 == 1)
		{
			x = -0.10f;
		}
		else
		{
			x = 0.10f;
		}

		glColor3f(0.0f, 0.7f, 0.0f);
		glRasterPos2f(i * (x), .850f);
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'A');
		glRasterPos2f(i * (x), .830f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'S');
		glRasterPos2f(i * (x), .820f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'T');
		glRasterPos2f(i * (x), .800f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'R');
		glRasterPos2f(i * (x), .750f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'O');
		glRasterPos2f(i * (x), .730f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'M');
		glRasterPos2f(i * (x), .720f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'E');
		glRasterPos2f(i * (x), .700f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'D');
		glRasterPos2f(i * (x), .680f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'I');
		glRasterPos2f(i * (x), .640f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'C');
		glRasterPos2f(i * (x), .620f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'O');
		glRasterPos2f(i * (x), .580f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'M');
		glRasterPos2f(i * (x), .530f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'P');
	}

	// down
	for (int i = 11; i > 0; i--)
	{
		if (i % 2 == 1)
		{
			x = -0.10f;
		}
		else
		{
			x = 0.10f;
		}

		glColor3f(0.0f, 0.7f, 0.0f);
		glRasterPos2f(i * (x), -0.150f);
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'A');
		glRasterPos2f(i * (x), -0.180f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'S');
		glRasterPos2f(i * (x), -0.240f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'T');
		glRasterPos2f(i * (x), -0.270f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'R');
		glRasterPos2f(i * (x), -0.290f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'O');
		glRasterPos2f(i * (x), -0.330f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'M');
		glRasterPos2f(i * (x), -0.350f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'E');
		glRasterPos2f(i * (x), -0.370f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'D');
		glRasterPos2f(i * (x), -0.390f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'I');
		glRasterPos2f(i * (x), -0.410f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'C');
		glRasterPos2f(i * (x), -0.430f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'O');
		glRasterPos2f(i * (x), -0.470f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'M');
		glRasterPos2f(i * (x), -0.510f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'P');
	}
	for (int i = 11; i > 0; i--)
	{
		if (i % 2 == 0)
		{
			x = -0.150f;
		}
		else if (i % 3 == 0)
		{
			continue;
		}
		else
		{
			x = .08f;
		}

		glColor3f(0.0f, 0.7f, 0.0f);
		glRasterPos2f(i * (x), -0.250f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'A');
		glRasterPos2f(i * (x), -0.280f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'S');
		glRasterPos2f(i * (x), -0.340f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'T');
		glRasterPos2f(i * (x), -0.370f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'R');
		glRasterPos2f(i * (x), -0.390f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'O');
		glRasterPos2f(i * (x), -0.430f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'M');
		glRasterPos2f(i * (x), -0.450f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'E');
		glRasterPos2f(i * (x), -0.470f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'D');
		glRasterPos2f(i * (x), -0.490f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'I');
		glRasterPos2f(i * (x), -0.510f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'C');
		glRasterPos2f(i * (x), -0.530f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'O');
		glRasterPos2f(i * (x), -0.570f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'M');
		glRasterPos2f(i * (x), -0.600f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'P');
	}

	for (int i = 11; i > 0; i--)
	{
		if (i % 2 == 0)
		{
			x = -0.095f;
		}
		else if (i % 4 == 0)
		{
			continue;
		}
		else
		{
			x = .09f;
		}

		glColor3f(0.0f, 0.7f, 0.0f);
		glRasterPos2f(i * (x), -0.250f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'O');
		glRasterPos2f(i * (x), -0.280f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
		glRasterPos2f(i * (x), -0.340f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'M');
		glRasterPos2f(i * (x), -0.370f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '1');
		glRasterPos2f(i * (x), -0.390f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'K');
		glRasterPos2f(i * (x), -0.430f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '1');
		glRasterPos2f(i * (x), -0.450f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'A');
		glRasterPos2f(i * (x), -0.470f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
		glRasterPos2f(i * (x), -0.490f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'R');
		glRasterPos2f(i * (x), -0.510f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
		glRasterPos2f(i * (x), -0.530f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'D');
		glRasterPos2f(i * (x), -0.570f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
		glRasterPos2f(i * (x), -0.600f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'A');
	}

	for (int i = 11; i > 0; i--)
	{
		if (i % 2 == 0)
		{
			x = -0.10f;
		}
		else if (i % 4 == 0)
		{
			continue;
		}
		else
		{
			x = 0.250f;
		}

		glColor3f(0.0f, 0.7f, 0.0f);
		glRasterPos2f(i * (x), .960f);
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '1');
		glRasterPos2f(i * (x), .930f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '1');
		glRasterPos2f(i * (x), .900f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '1');
		glRasterPos2f(i * (x), .850f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '1');
		glRasterPos2f(i * (x), .830f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '0');
		glRasterPos2f(i * (x), .810f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
		glRasterPos2f(i * (x), .730f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '1');
		glRasterPos2f(i * (x), .700f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '0');
		glRasterPos2f(i * (x), .680f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '0');
		glRasterPos2f(i * (x), .620f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '1');
		glRasterPos2f(i * (x), .580f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '1');
		glRasterPos2f(i * (x), .550f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '1');
		glRasterPos2f(i * (x), .530f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '1');
		glRasterPos2f(i * (x), .510f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
		glRasterPos2f(i * (x), .480f);

		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
		glRasterPos2f(i * (x), .430f);

		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '1');
	}
}
