// header files
#include<GL/freeglut.h>
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
char txt14[] = "OmkarBday.c   X";
char txt15[] = "Miscellaneous Files							(Global Scope)";
char txt16[] = "1	   #include<stdio.h>";
char txt17[] = "2	   int m ain(void)";
char txt18[] = "3		   {";
char txt19[] = "4				//code";
char txt20[] = "5				printf(\"Happy Birthday, Omkar!\\n\");";
char txt21[] = "6				return(0);";
char txt22[] = "7		   }";
char txt23[] = " O   Type here to search                                                           14 C            12:00    12-12-2024";
char txt24[] = "12";
char txt25[] = "3";
char txt26[] = "6";
char txt27[] = "9";

// Entry-point function
int main(int argc, char* argv[])
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
	void backgroundVsCode(void);
	void textsForVsCode(void);
	void scene1_display(void);
	void scene2_display(void);
	void scene3_display(void);
	void scene4_display(void);
	void cmdCondition(void);
	void cmdBackground(void);
	void cmdIconCode(void);
	void update(int value);
	// code
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("Created By - Matrix Group RTR 6");
	initialize();
	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutTimerFunc(1000, update, 0);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutCloseFunc(uninitialize);
	glutMainLoop();
	return(0);
}

int initialize(void)
{
	// code
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
	return(0);
}

void resize(int width, int height)
{
	// code
	glViewport(0, 0, width, height);
}

void display(void)
{
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
	default:
		printf("Default\n");
		scene1_display();
		break;
	}
}

void cmdCondition(void)
{
	if (scene_number == 4)
	{
		printf("Scene number is 4\n");
		cmdBackground();
	}
}

void cmdBackground(void)
{
	//code to show cmd window
	glLineWidth(1.0f);
	glBegin(GL_QUADS);
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

	//cmd icon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.28f, 0.21f, 0.0f);
	glVertex3f(-0.28f, 0.24f, 0.0f);
	glVertex3f(-0.25f, 0.24f, 0.0f);
	glVertex3f(-0.25f, 0.21f, 0.0f);
	glEnd();
	cmdIconCode();
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

void backgroundVsCode(void)
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
	//file icon
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

	//cmd icon
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-0.22f, -0.39f, 0.0f);
	glVertex3f(-0.22f, -0.36f, 0.0f);
	glVertex3f(-0.19f, -0.36f, 0.0f);
	glVertex3f(-0.19f, -0.39f, 0.0f);

	//inner window
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
	glEnd();

	textsForVsCode();
	cmdCondition();

	glLineWidth(1.0f);
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
	glVertex3f(-0.64f, -0.38f, 0.0f);
	glVertex3f(-0.628f, -0.37f, 0.0f);
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

void textsForVsCode(void)
{
	for (int i = 0; i < 16; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.7f + (0.012f * i), 0.37f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt14[i]);
	}
	for (int i = 0; i < 45; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.7f + (0.011f * i), 0.33f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt15[i]);
	}
	for (int i = 0; i < 24; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.6f + (0.011f * i), 0.28f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt16[i]);
	}
	for (int i = 0; i < 24; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.6f + (0.011f * i), 0.23f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt17[i]);
	}
	for (int i = 0; i < 8; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.6f + (0.011f * i), 0.18f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt18[i]);
	}
	for (int i = 0; i < 12; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.6f + (0.011f * i), 0.13f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt19[i]);
	}
	for (int i = 0; i < 42; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.6f + (0.011f * i), 0.08f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt20[i]);
	}
	for (int i = 0; i < 16; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.6f + (0.011f * i), 0.03f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt21[i]);
	}
	for (int i = 0; i < 8; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.6f + (0.011f * i), -0.02f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt22[i]);
	}
	for (int i = 0; i < 119; i++)
	{
		glColor3f(0.0f, 0.0f, 0.0f);
		glRasterPos2f(-0.642f + (0.01f * i), -0.382f);
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, txt23[i]);
	}
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

void scene2_display(void)
{

	//background
	background();
	glPushMatrix();
	glLineWidth(1.35f);
	glTranslatef(0.0f, 0.75f, 0.0f);
	glColor3f(1.f, 0.3f, 0.4f);
	glutSolidSphere(0.24, 12, 12);
	glColor3f(0.0f, 0.0f, 0.0f);
	glutWireSphere(0.24, 12, 8);
	glPopMatrix();
	//variable declaration
	float x1 = 0.0f, y1 = 0.75f;
	float x2 = 0.25f, y2 = 0.0f;
	float radian = angle * (3.14159 / 180.0f);

	// code
	//glClear(GL_COLOR_BUFFER_BIT);
	//glBegin(GL_LINES);
	//glColor3f(0.0f, 1.0f, 0.0f);
	//glVertex3f(x1, y1, 0.0f);


	glLineWidth(4.5f);
	//// calculate second point as per angle
	x2 = 0.22f * cos(radian);
	y2 = 0.22f * sin(radian);
	//glVertex3f(x2 + x1, y2 + y1, 0.0f);
	//glEnd();
	glBegin(GL_LINES);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(x1, y1, 0.0f);

	// calculate second point as per angle;
	printf("x = %f y = %f\n", x2, y2);
	glVertex3f(x2 + x1, y2 + y1, 0.0f);
	glColor3f(0.0f, 0.0f, .60f);
	glVertex3f(0.0f, 0.75f,0.0f);
	glVertex3f(0.0f, 0.95f, 0.0f);
	glEnd();

	for (int i = 0; i < 3; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.015f + (0.015f * i), 0.96f);
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, txt24[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.01f + (0.015f * i), 0.52f);
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, txt26[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(0.21f + (0.015f * i), 0.74f);
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, txt25[i]);
	}
	for (int i = 0; i < 2; i++)
	{
		glColor3f(1.0f, 1.0f, 1.0f);
		glRasterPos2f(-0.23f + (0.015f * i), 0.74f);
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, txt27[i]);
	}

	glutSwapBuffers();
	glutPostRedisplay();
}

void scene3_display(void)
{
	//background dummy vs code window code 
	backgroundVsCode();
	glutSwapBuffers();

}

void scene4_display(void)
{
	//dummy cmd terminal window
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

void update(int value)
{
	if (angle != 90.0f)
	{
		angle = angle - 6;
	}
	else
	{
		angle = 90.0f;
	}
	glutTimerFunc(1000, update, 0);
}

void keyboard(unsigned char key, int x, int y)
{
	// code
	switch (key)
	{
	case '1':
		scene_number = 1;
		glutPostRedisplay();
		break;
	case '2':
		scene_number = 2;
		glutPostRedisplay();
		break;
	case '3':
		scene_number = 3;
		glutPostRedisplay();
		break;
	case '4':
		scene_number = 4;
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