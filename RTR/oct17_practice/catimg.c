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

    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Ratnesh Kiran Ankam 121 Shape - CAT");

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
    glClearColor(0.0f, 0.9f, 0.5f, 0.0f);

    return (0);
}

void resize(int width, int height)
{
    // Code
    glViewport(0, 0, width, height);
    gluOrtho2D(-1.0f, 1.0f, -1.0f, 1.0f);
}

void display(void)
{
    // Code
    glClear(GL_COLOR_BUFFER_BIT);

    // Ear1 border
    glLineWidth(8.0f);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.9f, 0.5f, 0.3f);
    glVertex2f(-0.5f, 1.0f);
    glVertex2f(-0.2f, 0.75f);
    glVertex2f(-0.5f, 0.4f);
    glEnd();

    // Ear1
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.7f, 0.3f);
    glVertex2f(-0.5f, 1.0f);
    glVertex2f(-0.2f, 0.75f);
    glVertex2f(-0.5f, 0.4f);
    glEnd();

    // Ear2 border
    glBegin(GL_LINE_LOOP);
    glColor3f(0.9f, 0.5f, 0.3f);
    glVertex2f(0.5f, 1.0f);
    glVertex2f(0.2f, 0.75f);
    glVertex2f(0.5f, 0.4f);
    glEnd();

    // Ear2
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.7f, 0.3f);
    glVertex2f(0.5f, 1.0f);
    glVertex2f(0.2f, 0.75f);
    glVertex2f(0.5f, 0.4f);
    glEnd();

    // Face border
    glBegin(GL_LINE_LOOP);
    glColor3f(0.9f, 0.5f, 0.3f);
    glVertex2f(-0.25f, 0.0f);
    glVertex2f(-0.5f, 0.4f);
    glVertex2f(-0.2f, 0.75f);
    glVertex2f(0.2f, 0.75f);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.25f, 0.0f);
    glVertex2f(0.0f, -0.25f);
    glEnd();

    // Face
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.7f, 0.3f);
    glVertex2f(-0.25f, 0.0f);
    glVertex2f(-0.5f, 0.4f);
    glVertex2f(-0.2f, 0.75f);
    glVertex2f(0.2f, 0.75f);
    glVertex2f(0.5f, 0.4f);
    glVertex2f(0.25f, 0.0f);
    glVertex2f(0.0f, -0.25f);
    glEnd();

    // leg1 border
    glBegin(GL_LINE_LOOP);
    glColor3f(0.9f, 0.5f, 0.3f);
    glVertex2f(-0.25f, 0.0f);
    glVertex2f(0.0f, -0.25f);
    glVertex2f(0.0f, -0.85f);
    glEnd();

    // leg2 border
    glBegin(GL_LINE_LOOP);
    glColor3f(0.9f, 0.5f, 0.3f);
    glVertex2f(0.25f, 0.0f);
    glVertex2f(0.0f, -0.25f);
    glVertex2f(0.0f, -0.85f);
    glEnd();

    // leg1
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.7f, 0.3f);
    glVertex2f(-0.25f, 0.0f);
    glVertex2f(0.0f, -0.25f);
    glVertex2f(0.0f, -0.85f);
    glEnd();

    // leg2
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.7f, 0.3f);
    glVertex2f(0.25f, 0.0f);
    glVertex2f(0.0f, -0.25f);
    glVertex2f(0.0f, -0.85f);
    glEnd();

    // body border
    glBegin(GL_LINE_LOOP);
    glColor3f(0.9f, 0.5f, 0.3f);
    glVertex2f(0.0f, -0.85f);
    glVertex2f(0.25f, 0.0f);
    glVertex2f(0.75f, -0.5f);
    glVertex2f(0.5f, -0.85f);
    glEnd();

    // body
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.7f, 0.3f);
    glVertex2f(0.0f, -0.85f);
    glVertex2f(0.25f, 0.0f);
    glVertex2f(0.75f, -0.5f);
    glVertex2f(0.5f, -0.85f);
    glEnd();

    // tail border
    glBegin(GL_LINE_LOOP);
    glColor3f(0.9f, 0.5f, 0.3f);
    glVertex2f(0.5f, -0.85f);
    glVertex2f(0.75f, -0.5f);
    glVertex2f(0.75f, -0.85f);
    glVertex2f(0.4f, -1.0f);
    glEnd();

    // tail
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.7f, 0.3f);
    glVertex2f(0.5f, -0.85f);
    glVertex2f(0.75f, -0.5f);
    glVertex2f(0.75f, -0.85f);
    glVertex2f(0.4f, -1.0f);
    glEnd();

    // middle line
    glLineWidth(5.0f);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.9f, 0.5f, 0.3f);
    glVertex2f(0.0f, 0.75f);
    glVertex2f(0.0f, -0.85f);
    glEnd();

    /// Eyes Section
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.15f, 0.65f);
    glVertex2f(-0.25f, 0.45f);
    glVertex2f(-0.05f, 0.45f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.15f, 0.65f);
    glVertex2f(0.25f, 0.45f);
    glVertex2f(0.05f, 0.45f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.15f, 0.6f);
    glVertex2f(-0.21f, 0.48f);
    glVertex2f(-0.09f, 0.48f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.15f, 0.6f);
    glVertex2f(0.21f, 0.48f);
    glVertex2f(0.09f, 0.48f);
    glEnd();
    /// Eyes Section end

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.3f, 0.3f);
    glVertex2f(0.15f, 0.0f);
    glVertex2f(-0.15f, 0.0f);
    glVertex2f(0.0f, 0.05f);
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
