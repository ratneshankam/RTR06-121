// header files
#include<GL/freeglut.h>
#include<math.h>
#include<stdio.h>
#include<Windows.h>
#include<time.h>

// global variable declarations
BOOL bFullScreen = FALSE;

float angle = 0.0f;
float angle2 = 2.0f;
double twicePi = (22.0 / 7.0);

BOOL Flag1 = FALSE;
BOOL FLag2 = FALSE;

float screenTranslate = 0.0f;
int screenCounter = 1;

// Entry-point function
int main(int argc, char *argv[])
{
	// local function declarations
	int initialize(void);
	void resize(int, int);
	void display(void);
	void update(void);
	void keyboard(unsigned char, int, int);
	void mouse(int, int, int, int);
	void uninitialize(void);

	// code
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

	glutInitWindowSize(800, 600);
	glutInitWindowPosition(100, 100);
	glutCreateWindow("My First Window :- Omkar Vilas Nimble");

	initialize();

	glutPostRedisplay();
	glutReshapeFunc(resize);
	glutDisplayFunc(display);
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

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();

	glViewport(0, 0, width, height);

}

void display(void)
{
	// code
	glClear(GL_COLOR_BUFFER_BIT);

	void scene1(void);
	void scene2(void);
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

	/*if (screenCounter == 1)
	{
		
		
	}
	else if (screenCounter == 2)
	{
		scene2();
	}
	*/
	
	scene1();

	//update();

	glutPostRedisplay();
	glutSwapBuffers();
}

void update(void)
{

	screenTranslate = screenTranslate + 0.01f;

	if (screenTranslate >= 1.0f)
		screenCounter = 2;		


	angle = angle - 0.01f;
	if (angle <= -2.5f)
	{
		angle = -2.5f;
	}

	
	if (angle <= -2.0f)
	{
		angle2 = angle2 - 0.01f;
		if (angle2 <= 0.0f)
		{
			angle2 = 0.0f;
		}
	}
}

void scene1(void)
{
	glTranslatef(angle, 0.0f, 0.0f);
	glScalef(0.5f, 0.5f, 1.0f);

	glPushMatrix();

	glTranslatef(angle, 0.0f, 0.0f);
	glScalef(0.5f, 0.5f, 1.0f);

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glEnd();
	

	glLoadIdentity();

	glPushMatrix();

	glTranslatef(0.5f, 0.0f, 0.0f);
	glScalef(0.5f, 0.5f, 1.0f);

	glBegin(GL_TRIANGLES);
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glEnd();
	glPopMatrix();


	




	


	glPushMatrix();
	glScalef(1.0f, 1.4f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
	
	for (int i = 0; i <= 90; i++) {
		glVertex2f(
			(0.15 * cos(i * twicePi / 180)),
			(0.15 * sin(i * twicePi / 180))
		);
	}
	glEnd();
	glPopMatrix();
}

void scene2(void)
{
	
	glPushMatrix();
	glTranslatef(angle2, 0.0f, 0.0f);
	glScalef(0.5f, 0.5f, 1.0f);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);

	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);

	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glEnd();
	//glPopMatrix();


	//glPushMatrix();
	glColor3f(1.0f, 0.0f, 1.0f);
	glScalef(1.0f, 1.2f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
	//glVertex3f(0.75, 0.0, 0.0f); // center of circle
	for (int i = 0; i <= 360; i++) {
		glVertex2f(
			(0.15 * cos(i * twicePi / 180)),
			(0.15 * sin(i * twicePi / 180))
		);
	}
	glEnd();
	glPopMatrix();glPushMatrix();
	glTranslatef(angle2, 0.0f, 0.0f);
	glScalef(0.5f, 0.5f, 1.0f);

	glBegin(GL_TRIANGLES);
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(0.0f, 1.0f, 0.0f);

	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);

	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex3f(1.0f, -1.0f, 0.0f);
	glEnd();
	//glPopMatrix();


	//glPushMatrix();
	glColor3f(1.0f, 0.0f, 1.0f);
	glScalef(1.0f, 1.2f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
	//glVertex3f(0.75, 0.0, 0.0f); // center of circle
	for (int i = 0; i <= 360; i++) {
		glVertex2f(
			(0.15 * cos(i * twicePi / 180)),
			(0.15 * sin(i * twicePi / 180))
		);
	}
	glEnd();
	glPopMatrix();


}

void keyboard(unsigned char key, int x, int y)
{
	// code
	switch (key)
	{
	case 27:
		glutLeaveMainLoop();
		break;
	case 'F':
	case 'f':
		if (bFullScreen == FALSE)
		{
			glutFullScreen();
			bFullScreen = TRUE;
		}
		else
		{
			glutLeaveFullScreen();
			bFullScreen = FALSE;
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

