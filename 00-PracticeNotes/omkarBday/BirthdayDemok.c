// header files
#include <GL/freeglut.h>
// #include <stdbool.h> // For bool, true, FALSE

// global variable declarations
BOOL bFullScreen = FALSE;
int blink = 0; 

// Entry-point function
int main(int argc, char *argv[])
{
	// local function declarations
	int initialize(void);
	void resize(int, int);
	void display(void);
	void keyboard(unsigned char, int, int);
	void mouse(int, int, int, int);
	void uninitialize(void);
	void update(int value);

	// code
	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

	glutInitWindowSize(1100, 750);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Created By - MATRIX GROUP");

	initialize();

	glutReshapeFunc(resize);
	glutDisplayFunc(display);
	glutTimerFunc(200, update, 0);
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutCloseFunc(uninitialize);

	glutMainLoop();

	return (0);
}

int initialize(void)
{
	// code
	glClearColor(1.f, 1.0f, .9f, 1.0f);

	return (0);
}

void resize(int width, int height)
{
	// code
	glViewport(0, 0, width, height);
}
void update(int value)
{
	static target = 3;
	if (target >= blink)
	{
		blink += 1;
		target = 2;
	}
	else
	{
		blink -= 1;
		target = 0;
	}
	//printf("blink = %d", blink);
	glutPostRedisplay();
	glutTimerFunc(200, update, 0);
}
void display(void)
{
	// function prototypes
	void roomViewDesignRatnesh(void);
	void cakeTableDesignArti(void);

	// code
	glClear(GL_COLOR_BUFFER_BIT);

	roomViewDesignRatnesh();
	cakeTableDesignArti();


	
	glutSwapBuffers();
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

void cakeTableDesignArti(void)
{
	// changed code arti
	glBegin(GL_QUADS);
	glColor3f(1, 0.9, 0.2);
	glVertex3f(-0.17f, 0.30f, 0.0f);
	glVertex3f(-0.18f, 0.31f, 0.0f);
	if (0 == blink)
	{
		glVertex3f(-0.175f, 0.34f, 0.0f);
	}
	else if (1 == blink)
	{
		glVertex3f(-0.170f, 0.34f, 0.0f);
	}
	else
	{
		glVertex3f(-0.165f, 0.34f, 0.0f);
	}
	glVertex3f(-0.16f, 0.31f, 0.0f);
	glEnd();

	// TABLE
	glBegin(GL_QUADS);
	glColor3f(0.8, 0.4, 0);
	glVertex3f(-0.4f, -0.1f, 0.0f);
	glVertex3f(-0.2f, 0.1f, 0.0f);
	glVertex3f(0.3f, 0.1f, 0.0f);
	glVertex3f(0.1f, -0.1f, 0.0f);
	glEnd();

	glLineWidth(7.0);
	glBegin(GL_LINES);
	glColor3f(0.8, 0.4, 0);
	glVertex3f(-0.37f, -0.4f, 0.0f);
	glVertex3f(-0.37f, -0.1f, 0.0f);
	glVertex3f(-0.2f, -0.1f, 0.0f);
	glVertex3f(-0.2f, -0.3f, 0.0f);
	glVertex3f(0.08f, -0.1f, 0.0f);
	glVertex3f(0.08f, -0.4f, 0.0f);
	glVertex3f(0.28f, 0.1f, 0.0f);
	glVertex3f(0.28f, -0.3f, 0.0f);

	glEnd();

	// CAKE
	glBegin(GL_QUADS);
	glColor3f(1, 0.4, 0.8);
	glVertex3f(-0.33f, -0.05f, 0.0f);
	glVertex3f(-0.33f, -0.03f, 0.0f);
	glVertex3f(-0.02f, -0.03f, 0.0f);
	glVertex3f(-0.02f, -0.05f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 0.5, 0.7);
	glVertex3f(-0.31f, -0.03f, 0.0f);
	glVertex3f(-0.31f, 0.05f, 0.0f);
	glVertex3f(-0.04f, 0.05f, 0.0f);
	glVertex3f(-0.04f, -0.03f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 0.4, 0.8);
	glVertex3f(-0.28f, 0.05f, 0.0f);
	glVertex3f(-0.28f, 0.1f, 0.0f);
	glVertex3f(-0.07f, 0.1f, 0.0f);
	glVertex3f(-0.07f, 0.05f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 0.5, 0.7);
	glVertex3f(-0.26f, 0.1f, 0.0f);
	glVertex3f(-0.26f, 0.15f, 0.0f);
	glVertex3f(-0.09f, 0.15f, 0.0f);
	glVertex3f(-0.09f, 0.05f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 0.5, 0.7);
	glVertex3f(-0.24f, 0.15f, 0.0f);
	glVertex3f(-0.24f, 0.2f, 0.0f);
	glVertex3f(-0.12f, 0.2f, 0.0f);
	glVertex3f(-0.12f, 0.15f, 0.0f);
	glEnd();

	// candle
	glLineWidth(5.0);
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex3f(-0.21f, 0.20f, 0.0f);
	glVertex3f(-0.22f, 0.27f, 0.0f);
	glVertex3f(-0.13f, 0.20f, 0.0f);
	glVertex3f(-0.12f, 0.27f, 0.0f);
	glEnd();

	// candle
	glLineWidth(4.0);
	glBegin(GL_LINES);
	glColor3f(1, 1, 1);
	glVertex3f(-0.17f, 0.2f, 0.0f);
	glVertex3f(-0.17f, 0.3f, 0.0f);
	glEnd();

	//added kp
	glBegin(GL_QUADS);
	glColor3f(1, 0.9, 0.2);
	glVertex3f(-0.22f, 0.27f, 0.0f);
	glVertex3f(-0.23f, 0.28f, 0.0f); 
	if (0 == blink)
	{
		glVertex3f(-0.225f, 0.31f, 0.0f); 
	}
	else if (1 == blink)
	{
		glVertex3f(-0.220f, 0.31f, 0.0f);
	}
	else
	{
		glVertex3f(-0.215f, 0.31f, 0.0f);
	}
	glVertex3f(-0.21f, 0.28f, 0.0f); 
	glEnd();

	// CANDLE
	glBegin(GL_QUADS);
	glColor3f(1, 0.9, 0.2);
	//glVertex3f(-0.1f, 0.28f, 0.0f);
	//glVertex3f(-0.1f, 0.3f, 0.0f);
	//glVertex3f(-0.11f, 0.3f, 0.0f);
	//glVertex3f(-0.12f, 0.27f, 0.0f);
	glVertex3f(-0.12f, 0.30f-0.03f, 0.0f);
	glVertex3f(-0.13f, 0.31f - 0.03f, 0.0f);
	if (0 == blink)
	{
		glVertex3f(-0.125f, 0.34f - 0.03f, 0.0f);
	}
	else if (1 == blink)
	{
		glVertex3f(-0.120f, 0.34f - 0.03f, 0.0f);
	}
	else
	{
		glVertex3f(-0.115f, 0.34f - 0.03f, 0.0f);
	}
	glVertex3f(-0.11f, 0.31f - 0.03f, 0.0f);
	glEnd();

	// name OMKAR
	// O
	glLineWidth(2.0);
	glBegin(GL_LINES);
	glColor3f(0.5, 0, 0);
	glVertex3f(-0.3f, -0.01f, 0.0f);
	glVertex3f(-0.3f, 0.03f, 0.0f);
	glVertex3f(-0.3f, 0.03f, 0.0f);
	glVertex3f(-0.26f, 0.03f, 0.0f);
	glVertex3f(-0.26f, 0.03f, 0.0f);
	glVertex3f(-0.26f, -0.01f, 0.0f);
	glVertex3f(-0.26f, -0.01f, 0.0f);
	glVertex3f(-0.3f, -0.01f, 0.0f);
	glEnd();

	// M
	glBegin(GL_LINES);
	glColor3f(0.5, 0, 0);
	glVertex3f(-0.25f, -0.01f, 0.0f);
	glVertex3f(-0.25f, 0.03f, 0.0f);
	glVertex3f(-0.25f, 0.03f, 0.0f);
	glVertex3f(-0.23f, 0.02f, 0.0f);
	glVertex3f(-0.23f, 0.02f, 0.0f);
	glVertex3f(-0.21f, 0.03f, 0.0f);
	glVertex3f(-0.21f, 0.03f, 0.0f);
	glVertex3f(-0.21f, -0.01f, 0.0f);
	glEnd();

	// K
	glBegin(GL_LINES);
	glColor3f(0.5, 0, 0);
	glVertex3f(-0.2f, -0.01f, 0.0f);
	glVertex3f(-0.2f, 0.03f, 0.0f);
	glVertex3f(-0.2f, 0.01f, 0.0f);
	glVertex3f(-0.16f, 0.03f, 0.0f);
	glVertex3f(-0.2f, 0.01f, 0.0f);
	glVertex3f(-0.16f, -0.01f, 0.0f);
	glEnd();

	// A
	glBegin(GL_LINES);
	glColor3f(0.5, 0, 0);
	glVertex3f(-0.15f, -0.01f, 0.0f);
	glVertex3f(-0.15f, 0.03f, 0.0f);
	glVertex3f(-0.15f, 0.03f, 0.0f);
	glVertex3f(-0.11f, 0.03f, 0.0f);
	glVertex3f(-0.11f, 0.03f, 0.0f);
	glVertex3f(-0.11f, -0.01f, 0.0f);
	glVertex3f(-0.15f, 0.01f, 0.0f);
	glVertex3f(-0.11f, 0.01f, 0.0f);
	glEnd();

	// M
	glBegin(GL_LINES);
	glColor3f(0.5, 0, 0);
	glVertex3f(-0.1f, -0.01f, 0.0f);
	glVertex3f(-0.1f, 0.03f, 0.0f);
	glVertex3f(-0.1f, 0.03f, 0.0f);
	glVertex3f(-0.06f, 0.03f, 0.0f);
	glVertex3f(-0.06f, 0.03f, 0.0f);
	glVertex3f(-0.06f, 0.01f, 0.0f);
	glVertex3f(-0.06f, 0.01f, 0.0f);
	glVertex3f(-0.1f, 0.01f, 0.0f);
	glVertex3f(-0.1f, 0.01f, 0.0f);
	glVertex3f(-0.06f, -0.01f, 0.0f);
	glEnd();

	// CAKE
	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 0.9, 1);
	glVertex3f(-0.22f, 0.05f, 0.0f);
	glVertex3f(-0.25f, 0.07f, 0.0f);
	glVertex3f(-0.28f, 0.05, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 0.9, 1);
	glVertex3f(-0.15f, 0.05f, 0.0f);
	glVertex3f(-0.22f, 0.05f, 0.0f);
	glVertex3f(-0.19f, 0.07, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 0.9, 1);
	glVertex3f(-0.1f, 0.05f, 0.0f);
	glVertex3f(-0.16f, 0.05f, 0.0f);
	glVertex3f(-0.13f, 0.07, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 0.9, 1);
	glVertex3f(-0.07f, 0.05f, 0.0f);
	glVertex3f(-0.1f, 0.05f, 0.0f);
	glVertex3f(-0.07f, 0.07, 0.0f);
	glEnd();

	// CAKE DESIGN 1
	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 0.9, 1);
	glVertex3f(-0.24f, 0.2f, 0.0f);
	glVertex3f(-0.2f, 0.2f, 0.0f);
	glVertex3f(-0.22f, 0.17, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 0.9, 1);
	glVertex3f(-0.2f, 0.2f, 0.0f);
	glVertex3f(-0.16f, 0.2f, 0.0f);
	glVertex3f(-0.18f, 0.17, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 0.9, 1);
	glVertex3f(-0.16f, 0.2f, 0.0f);
	glVertex3f(-0.12f, 0.2f, 0.0f);
	glVertex3f(-0.14f, 0.17, 0.0f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1, 0.3, 0);
	glVertex3f(-0.26f, 0.1f, 0.0f);
	glVertex3f(-0.23f, 0.15f, 0.0f);
	glVertex3f(-0.25f, 0.1f, 0.0f);
	glVertex3f(-0.22f, 0.15f, 0.0f);
	glVertex3f(-0.22f, 0.1f, 0.0f);
	glVertex3f(-0.18f, 0.15f, 0.0f);
	glVertex3f(-0.21f, 0.1f, 0.0f);
	glVertex3f(-0.17f, 0.15f, 0.0f);

	glVertex3f(-0.18f, 0.1f, 0.0f);
	glVertex3f(-0.14f, 0.15f, 0.0f);
	glVertex3f(-0.17f, 0.1f, 0.0f);
	glVertex3f(-0.13f, 0.15f, 0.0f);
	glVertex3f(-0.14f, 0.1f, 0.0f);
	glVertex3f(-0.11f, 0.15f, 0.0f);
	glVertex3f(-0.13f, 0.1f, 0.0f);
	glVertex3f(-0.1f, 0.15f, 0.0f);
	glEnd();

	// CAKE DESIGN 5
	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 0.9, 1);
	glVertex3f(-0.33f, -0.05f, 0.0f);
	glVertex3f(-0.3f, -0.02f, 0.0f);
	glVertex3f(-0.27f, -0.05, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 0.9, 1);
	glVertex3f(-0.27f, -0.05f, 0.0f);
	glVertex3f(-0.24f, -0.02f, 0.0f);
	glVertex3f(-0.21f, -0.05, 0.0f);
	glEnd();

	// CAKE DESIGN 1
	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 0.9, 1);
	glVertex3f(-0.21f, -0.05f, 0.0f);
	glVertex3f(-0.18f, -0.02f, 0.0f);
	glVertex3f(-0.15f, -0.05, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 0.9, 1);
	glVertex3f(-0.15f, -0.05f, 0.0f);
	glVertex3f(-0.12f, -0.02f, 0.0f);
	glVertex3f(-0.09f, -0.05, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.4, 0.9, 1);
	glVertex3f(-0.09f, -0.05f, 0.0f);
	glVertex3f(-0.06f, -0.02f, 0.0f);
	glVertex3f(-0.02f, -0.05, 0.0f);
	glEnd();

	// GIFT
	glBegin(GL_QUADS);
	glColor3f(0.4, 0.6, 1);
	glVertex3f(0.0f, 0.05f, 0.0f);
	glVertex3f(0.1f, 0.1f, 0.0f);
	glVertex3f(0.2f, 0.05f, 0.0f);
	glVertex3f(0.1f, -0.02f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.4, 0.7, 1);
	glVertex3f(0.0f, 0.05f, 0.0f);
	glVertex3f(0.1f, -0.02f, 0.0f);
	glVertex3f(0.1f, -0.1f, 0.0f);
	glVertex3f(0.0f, 0.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(0.4, 0.7, 1);
	glVertex3f(0.1f, -0.02f, 0.0f);
	glVertex3f(0.2f, 0.05f, 0.0f);
	glVertex3f(0.2f, 0.0f, 0.0f);
	glVertex3f(0.1f, -0.1f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, .0, 0.0);
	glVertex3f(0.05f, -0.05f, 0.0f);
	glVertex3f(0.05f, 0.02f, 0.0f);
	glVertex3f(0.06f, 0.01f, 0.0f);
	glVertex3f(0.06f, -0.06f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, .0, 0.0);
	glVertex3f(0.05f, 0.01f, 0.0f);
	glVertex3f(0.13f, 0.09f, 0.0f);
	glVertex3f(0.14f, 0.08f, 0.0f);
	glVertex3f(0.06f, 0.0f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, .0, 0.0);
	glVertex3f(0.15f, -0.05f, 0.0f);
	glVertex3f(0.15f, 0.01f, 0.0f);
	glVertex3f(0.16f, -0.05f, 0.0f);
	glVertex3f(0.16f, 0.02f, 0.0f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3f(1.0, .0, 0.0);
	glVertex3f(0.15f, 0.01f, 0.0f);
	glVertex3f(0.05f, 0.08f, 0.0f);
	glVertex3f(0.06f, 0.08f, 0.0f);
	glVertex3f(0.16f, 0.02f, 0.0f);
	glEnd();

	// CAKE DESIGN 1
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.05f, 0.02f, 0.0f);
	glVertex3f(0.05f, 0.07f, 0.0f);
	glVertex3f(0.09f, 0.05f, 0.0f);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.14f, 0.04f, 0.0f);
	glVertex3f(0.16f, 0.07f, 0.0f);
	glVertex3f(0.09f, 0.05f, 0.0f);
	glEnd();
}

void roomViewDesignRatnesh(void)
{
	// ****** Room View Started ******

	// wall 1
	glBegin(GL_QUADS);
	glColor3f(0.9f, 0.9f, 0.8f);
	glVertex2f(0.15f, 0.1f);
	glColor3f(0.9f, 0.9f, 0.8f);
	glVertex2f(0.15f, 0.64f);
	glColor3f(0.9f, 0.9f, 0.8f);
	glVertex2f(1.f, 0.83f);
	glColor3f(0.7f, 0.7f, 0.6f);
	glVertex2f(1.f, -0.13f);

	glEnd();

	// wall 2
	glBegin(GL_QUADS);
	glColor3f(0.9f, 0.9f, 0.8f);
	glVertex2f(0.15f, 0.1f);
	glColor3f(0.7f, 0.7f, 0.6f);
	glVertex2f(0.15f, 0.64f);
	glVertex2f(-0.5f, 0.8f);
	glVertex2f(-0.5f, -0.04f);
	glEnd();

	// wall 3
	glBegin(GL_QUADS);
	glColor3f(0.9f, 0.9f, 0.8f);
	glVertex2f(-0.5f, 0.8f);
	glColor3f(0.9f, 0.9f, 0.8f);
	glVertex2f(-0.5f, -0.04f);
	// glColor3f(0.7f, 0.7f, 0.6f);
	glVertex2f(-0.7f, 0.18f);
	glColor3f(0.7f, 0.7f, 0.6f);
	glVertex2f(-0.70f, 0.54f);
	glEnd();

	// wall 4
	glBegin(GL_QUADS);
	// glColor3f(0.7f, 0.7f, 0.6f);
	glColor3f(0.9f, 0.9f, 0.8f);
	glVertex2f(-0.7f, 0.18f);
	glVertex2f(-0.70f, 0.54f);
	glColor3f(0.7f, 0.7f, 0.6f);
	glVertex2f(-0.9f, 0.55f);
	// glColor3f(0.7f, 0.7f, 0.6f);
	glVertex2f(-0.90f, 0.18f);
	// glColor3f(0.7f, 0.7f, 0.6f);
	glEnd();

	// wall 5
	glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.7f, 0.6f);
	glVertex2f(-1.f, 1.f);
	glVertex2f(-0.92f, 1.f);
	glVertex2f(-0.90f, 0.89f);
	glColor3f(0.9f, 0.9f, 0.8f);

	glVertex2f(-0.90f, -0.28f);
	glColor3f(0.9f, 0.9f, 0.8f);
	glVertex2f(-1.f, -0.74f);
	glEnd();

	// strip 1
	glBegin(GL_QUADS);
	glColor3f(0.7f, 0.6f, 0.6f);
	glVertex2f(1.f, -0.09f);
	glVertex2f(0.15f, 0.13f);
	glVertex2f(0.15f, 0.1f);
	glVertex2f(1.f, -0.13f);
	glEnd();

	// strip 2
	glBegin(GL_QUADS);
	glColor3f(0.7f, 0.6f, 0.6f);
	glVertex2f(0.15f, 0.13f);
	glVertex2f(0.15f, 0.1f);
	glVertex2f(-0.5f, 0.f);
	glVertex2f(-0.5f, -0.04f);
	glEnd();

	// strip 3
	glBegin(GL_QUADS);
	glColor3f(0.7f, 0.6f, 0.6f);
	glVertex2f(-0.5f, 0.f);
	glVertex2f(-0.5f, -0.04f);
	glVertex2f(-0.7f, 0.18f);
	glVertex2f(-0.70f, 0.21f);
	glEnd();

	// strip 4
	glBegin(GL_QUADS);
	glColor3f(0.7f, 0.6f, 0.6f);
	glVertex2f(-0.7f, 0.18f);
	glVertex2f(-0.70f, 0.21f);
	glVertex2f(-0.90f, 0.21f);
	glVertex2f(-0.90f, 0.18f);
	glEnd();

	// strip 5
	glBegin(GL_QUADS);
	glColor3f(0.7f, 0.6f, 0.6f);
	glVertex2f(-0.90f, -0.15f);
	glVertex2f(-0.90f, -0.28f);
	glVertex2f(-1.f, -0.74f);
	glVertex2f(-1.f, -0.55f);
	glEnd();

	// ceiling
	glBegin(GL_POLYGON);
	glColor3f(1.f, 1.0f, .9f);
	glVertex2f(1.f, 0.83f);
	glVertex2f(0.15f, 0.64f);
	glVertex2f(-0.90f, 0.89f);
	glVertex2f(-0.92f, 1.f);
	glVertex2f(1.f, 1.f);
	glEnd();

	// c1
	glBegin(GL_QUADS);
	// glColor3f(0.9f, 0.9f, 0.8f);
	glColor3f(0.7f, 0.7f, 0.6f);
	glVertex2f(-0.70f, 0.54f);
	glVertex2f(-0.9f, 0.55f);
	glColor3f(1.f, 1.0f, .9f);
	glVertex2f(-0.90f, 0.89f);
	glVertex2f(-0.5f, 0.8f);
	glEnd();

	// c2
	glBegin(GL_QUADS);
	// glColor3f(0.9f, 0.9f, 0.8f);
	glColor3f(0.7f, 0.7f, 0.6f);
	glVertex2f(-0.90f, -0.15f);
	glColor3f(0.9f, 0.9f, 0.8f);
	glVertex2f(-0.90f, 0.18f);
	glColor3f(0.9f, 0.9f, 0.8f);
	glVertex2f(-0.7f, 0.18f);
	glColor3f(0.9f, 0.9f, 0.8f);
	glVertex2f(-0.5f, -0.04f);
	glEnd();

	// Door 1
	glBegin(GL_QUADS);
	glVertex2f(0.56f, -0.01f);
	glVertex2f(0.56f, 0.56f);
	glColor3f(0.4f, 0.2f, 0.1f);
	glVertex2f(0.85f, 0.6f);
	glVertex2f(.85f, -0.09f);
	glEnd();

	glLineWidth(2.f);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.f, 0.f, 0.f);
	glVertex2f(0.56f, -0.01f);
	glVertex2f(0.56f, 0.56f);
	glVertex2f(0.85f, 0.6f);
	glVertex2f(.85f, -0.09f);
	glEnd();

	glLineWidth(2.f);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.f, 0.f, 0.f);
	glVertex2f(0.54f, -0.01f);
	glVertex2f(0.54f, 0.58f);
	glVertex2f(0.87f, 0.62f);
	glVertex2f(.87f, -0.09f);
	glEnd();

	// Door 2

	glBegin(GL_QUADS);
	glColor3f(0.9f, 0.9f, 0.8f);
	glVertex2f(-0.735f, 0.18f);
	glVertex2f(-0.735f, 0.46f);
	glColor3f(0.4f, 0.2f, 0.1f);
	glVertex2f(-0.86f, 0.47f);
	glVertex2f(-0.86f, 0.18f);
	glEnd();

	glLineWidth(2.f);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.f, 0.f, 0.f);
	glVertex2f(-0.735f, 0.18f);
	glVertex2f(-0.735f, 0.46f);
	glVertex2f(-0.86f, 0.47f);
	glVertex2f(-0.86f, 0.18f);
	glEnd();

	glLineWidth(2.f);
	glBegin(GL_LINE_LOOP);
	glColor3f(0.f, 0.f, 0.f);
	glVertex2f(-0.725f, 0.18f);
	glVertex2f(-0.725f, 0.475f);
	glVertex2f(-0.87f, 0.485f);
	glVertex2f(-0.87f, 0.18f);
	glEnd();

	// door 2 lock
	glPointSize(7.0f);
	glBegin(GL_POINTS);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-.84f, .35f);
	glEnd();

	// door 1 lock
	glPushMatrix();
	glTranslatef(.80f, .30f, 1.0f);
	glColor3f(0.f, 0.f, 0.f);
	glutWireSphere(.01, 10, 10);
	glPopMatrix();
	// glPushMatrix();
	// glTranslatef(-.84f, .35f, 1.0f);
	// glColor3f(0.f, 0.f, 0.f);
	// glutWireSphere(.01, 10, 10);
	// glPopMatrix();

	glLineWidth(2.0f);
	glBegin(GL_LINES);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.05f, 0.07f);
	glVertex2f(1.f, -0.3f);
	glVertex2f(1.f, -0.48f);
	glVertex2f(-.1f, 0.05f);
	glVertex2f(1.f, -0.85f);
	glVertex2f(-.27f, 0.01f);
	glVertex2f(-.41f, -0.03f);
	glVertex2f(.5f, -1.f);
	glVertex2f(-.57f, -.07f);
	glVertex2f(-.11f, -1.f);
	glVertex2f(-.77f, -.12f);
	glVertex2f(-.69f, -1.f);
	//
	glVertex2f(0.3f, 0.05f);
	glVertex2f(-0.76f, -0.23f);
	glVertex2f(0.45f, 0.02f);
	glVertex2f(-0.74f, -0.43f);
	glVertex2f(0.64f, -0.03f);
	glVertex2f(-0.71f, -0.77f);
	glVertex2f(-0.22f, -1.f);
	glVertex2f(0.8f, -0.08f);
	glVertex2f(1.f, -0.14f);
	glVertex2f(0.48f, -1.0f);
	glEnd();

	// StarBlast 1
	int i = 0;
	float x = -0.1f;
	float xPos = 0.1f;
	float y = 0.6f;
	float xb = 0.9f;
	for (i = 0; i < 12; i++)
	{
		// Stars
		if (i > 6)
		{
			glBegin(GL_TRIANGLES);
			glColor3f(1.f, 1.f, 0.f);
			glVertex2f(x, y + (0.03f));
			glVertex2f(x - (0.02f), y);
			glVertex2f(x + (0.02f), y);
			glEnd();

			glBegin(GL_TRIANGLES);
			glColor3f(1.f, 1.f, 0.f);
			glVertex2f(x, y - (0.01f));
			glVertex2f(x - (0.02f), y + (0.02f));
			glVertex2f(x + (0.02f), y + (0.02f));
			glEnd();
			x += -.2f;
		}
		else
		{
			glBegin(GL_TRIANGLES);
			glColor3f(1.f, 1.f, 0.f);
			glVertex2f(xPos, y + (0.03f));
			glVertex2f(xPos - (0.02f), y);
			glVertex2f(xPos + (0.02f), y);
			glEnd();

			glBegin(GL_TRIANGLES);
			glColor3f(1.f, 1.f, 0.f);
			glVertex2f(xPos, y - (0.01f));
			glVertex2f(xPos - (0.02f), y + (0.02f));
			glVertex2f(xPos + (0.02f), y + (0.02f));
			glEnd();
			xPos += .2f;
		}

		if (i % 2 == 0)
		{
			y += .10f;
		}
		else
		{
			y -= .10f;
		}

		if (i % 2 == 1)
		{
			// Blast
			glBegin(GL_TRIANGLES);
			glColor3f(1.f, 1.f, 0.1f);
			glVertex2f(xb - .01f, 0.54f);
			glVertex2f(xb - .01f, 0.47f);
			glVertex2f(xb - .03f, 0.48f);
			glEnd();

			glBegin(GL_TRIANGLES);
			glColor3f(1.f, 1.f, 0.1f);
			glVertex2f(xb, 0.54f);
			glVertex2f(xb - 0.01f, 0.42f);
			glVertex2f(xb, 0.43f);
			glEnd();

			glBegin(GL_TRIANGLES);
			glColor3f(1.f, 1.f, 0.1f);
			glVertex2f(xb + 0.01f, 0.54f);
			glVertex2f(xb + 0.01f, 0.47f);
			glVertex2f(xb + 0.02f, 0.48f);
			glEnd();

			glBegin(GL_TRIANGLES);
			glColor3f(1.f, 1.f, 0.1f);
			glVertex2f(xb - 0.04f, 0.45f);
			glVertex2f(xb - 0.02f, 0.45f);
			glVertex2f(xb - 0.04f, 0.44f);
			glEnd();

			glBegin(GL_TRIANGLES);
			glColor3f(1.f, 1.f, 0.1f);
			glVertex2f(xb, 0.42f);
			glVertex2f(xb - 0.01f, 0.41f);
			glVertex2f(xb, 0.4f);
			glEnd();

			glBegin(GL_TRIANGLES);
			glColor3f(1.f, 1.f, 0.1f);
			glVertex2f(xb + 0.01f, 0.45f);
			glVertex2f(xb + 0.02f, 0.45f);
			glVertex2f(xb + 0.01f, 0.44f);
			glEnd();
			xb -= 0.4f;
		}
	}
}