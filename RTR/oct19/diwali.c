// Header Files
#include <GL/freeglut.h>
#include <stdbool.h> // For bool, true, false

// Global Variables Declarations
bool bFullScreen = false;

// Entrypoint Function
int main(int argc, char *argv[])
{ // sir called it as a mahirapi kaunsh
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

    glutInitWindowSize(1350, 900);
    glutInitWindowPosition(200, 0);
    glutCreateWindow("Ratnesh Kiran Ankam");

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
    glClearColor(0.9f, 0.89f, 0.78f, 0.0f);
    gluOrtho2D(-100.0f, 100.0f, -100.0f, 100.0f);

    return (0);
}

void resize(int width, int height)
{
    // Code
    glViewport(0, 0, width, height);
}

void display(void)
{
    // Code
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 100.0f, 0.0f);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex3f(-100.0f, -100.0f, 0.0f);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex3f(100.0f, -100.0f, 0.0f);
    glEnd();

    glutSwapBuffers();
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

void uninitialize()
{
    // Code
}
