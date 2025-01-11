// Header Files
#include <GL/freeglut.h>
#include <stdbool.h>
#include <stdio.h>
// #include <irrklang/irrKlang.h>
// using namespace irrklang;

// Global Variables Declarations
bool bFullScreen = false;

// EntryPoint Function
int main(int argc, char *argv[])
{
    // Local Function Declarations
    int initialize(void);
    void resize(int, int);
    void display(void);
    void keyboard(unsigned char, int, int);
    void mouse(int, int, int, int);
    void uninitialize(void);

    // Code
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

    glutInitWindowSize(1250, 735);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Ratnesh Ankam 121 - Gradient");

    initialize();

    glutReshapeFunc(resize);
    glutDisplayFunc(display);

    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutCloseFunc(uninitialize);

    glutMainLoop();

    return (0);
}

int initialize(void)
{
    // Code
    glClearColor(.0f, .0f, .0f, 1.0f);
    return (0);
}

void resize(int width, int height)
{
    // Code
    glViewport(0, 0, width, height);
    gluOrtho2D(-100.0f, 100.0f, -100.0f, 100.0f);
}

void display()
{
    // Code

    float x = 10.0f;
    float y = 10.0f;

    for (int i = 0; i < 100; i++)
    {
    glClear(GL_COLOR_BUFFER_BIT);
    x += (float)0.05f;
    y += (float)0.05f;
    // printf("%d = x: %f, y: %f\n", i, x, y);
    // glBegin(GL_QUADS);
    // glColor3f(1.f, .0f, .0f);
    // glVertex2f(x, 10.0f);
    // glColor3f(0.f, 1.0f, .0f);
    // glVertex2f(x, 0);
    // glColor3f(.0f, .0f, 1.0f);
    // glVertex2f(x, 0);
    // glColor3f(.0f, .0f, 1.0f);
    // glVertex2f(x, 0);
    // glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(x, y);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(x + 10.0f, -y);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(x + 10.0f, y + 10.0f);
    glEnd();
    glutSwapBuffers();
    }
}

void keyboard(unsigned char key, int x, int y)
{
    // Code
    switch (key)
    {
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
    // Code
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
    // Code
}

void nameDesign()
{
    // Code
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3f(.2f, .0f, .9f);
    glVertex2f(-100.0f, 60.0f);
    glColor3f(.2f, .0f, .9f);
    glVertex2f(100.0f, 60.0f);
    glColor3f(.1f, .1f, .1f);
    glVertex2f(100.0f, 100.0f);
    glColor3f(.1f, .1f, .1f);
    glVertex2f(-100.0f, 100.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(.2f, .0f, .9f);
    glVertex2f(-100.0f, 60.0f);
    glColor3f(.2f, .0f, .9f);

    glVertex2f(100.0f, 60.0f);
    glColor3f(.8f, .4f, .5f);

    glVertex2f(100.0f, 10.0f);
    glColor3f(.8f, .4f, .5f);

    glVertex2f(-100.0f, 10.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(.8f, .4f, .5f);
    glVertex2f(-100.0f, 10.0f);
    glColor3f(.8f, .4f, .5f);
    glVertex2f(100.0f, 10.0f);
    glColor3f(.7f, .4f, .1f);
    glVertex2f(-100.0f, -100.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(.8f, .4f, .5f);
    glVertex2f(100.0f, 10.0f);
    glColor3f(.7f, .4f, .1f);
    glVertex2f(-100.0f, -100.0f);
    glColor3f(.7f, .6f, .2f);
    glVertex2f(100.0f, -100.0f);
    glEnd();

    // ************************ ************************ ************************ ************************
    glLineWidth(3.0f);
    // R
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-80.0f, 49.0f);
    glVertex2f(-80.0f, 45.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-80.0f, 44.0f);
    glVertex2f(-80.0f, 40.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-80.0f, 39.0f);
    glVertex2f(-80.0f, 35.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-80.0f, 34.0f);
    glVertex2f(-80.0f, 30.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-80.0f, 29.0f);
    glVertex2f(-80.0f, 25.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-80.0f, 24.0f);
    glVertex2f(-80.0f, 20.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-80.0f, 19.0f);
    glVertex2f(-80.0f, 15.0f);
    glEnd();
    //
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-78.0f, 49.0f);
    glVertex2f(-78.0f, 45.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-78.0f, 44.0f);
    glVertex2f(-78.0f, 40.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-78.0f, 39.0f);
    glVertex2f(-78.0f, 35.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-78.0f, 34.0f);
    glVertex2f(-78.0f, 30.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-78.0f, 29.0f);
    glVertex2f(-78.0f, 25.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-78.0f, 24.0f);
    glVertex2f(-78.0f, 20.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-78.0f, 19.0f);
    glVertex2f(-78.0f, 15.0f);
    glEnd();
    //
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-77.0f, 50.0f);
    glVertex2f(-74.0f, 50.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-73.0f, 50.0f);
    glVertex2f(-70.0f, 50.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-77.0f, 47.0f);
    glVertex2f(-74.0f, 47.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-73.0f, 47.0f);
    glVertex2f(-70.0f, 47.0f);
    glEnd();
    //
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-69.0f, 44.0f);
    glVertex2f(-69.0f, 40.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-69.0f, 39.0f);
    glVertex2f(-69.0f, 35.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-67.0f, 44.0f);
    glVertex2f(-67.0f, 40.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-67.0f, 39.0f);
    glVertex2f(-67.0f, 35.0f);
    glEnd();
    //
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-77.0f, 34.0f);
    glVertex2f(-74.0f, 34.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-73.0f, 34.0f);
    glVertex2f(-70.0f, 34.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-77.0f, 31.0f);
    glVertex2f(-74.0f, 31.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-73.0f, 31.0f);
    glVertex2f(-70.0f, 31.0f);
    glEnd();
    //
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-75.0f, 29.0f);
    glVertex2f(-74.0f, 24.5f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-73.0f, 29.0f);
    glVertex2f(-72.0f, 24.5f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-74.0f, 23.5f);
    glVertex2f(-73.0f, 20.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-72.0f, 23.5f);
    glVertex2f(-71.0f, 20.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-73.0f, 19.0f);
    glVertex2f(-72.0f, 15.5f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-71.0f, 19.0f);
    glVertex2f(-70.0f, 15.5f);
    glEnd();

    // *A
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-60.0f, 49.0f);
    glVertex2f(-61.0f, 44.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-59.0f, 49.0f);
    glVertex2f(-60.0f, 44.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-61.0f, 43.0f);
    glVertex2f(-62.0f, 38.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-60.0f, 43.0f);
    glVertex2f(-61.0f, 38.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-60.0f, 49.0f);
    glVertex2f(-61.0f, 44.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-59.0f, 49.0f);
    glVertex2f(-60.0f, 44.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-60.0f, 49.0f);
    glVertex2f(-61.0f, 44.0f);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-59.0f, 49.0f);
    glVertex2f(-60.0f, 44.0f);
    glEnd();
}