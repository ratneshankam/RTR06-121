// Header Files
#include <GL/freeglut.h>
#include <stdbool.h> // For bool, true, false

// Global Variables Declarations
bool bFullScreen = false;

// Entrypoint Function
int main(int argc, char *argv[])
{
    // Local Function Declarations
    int initialize(void);
    void resize(int, int);
    void display(void);
    void keyboard(unsigned char, int, int);
    void mouse(int, int, int, int);
    void uninitialize(void);
    void renderText(float x, float y, const char *text);

    // Code
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

    glutInitWindowSize(800, 600);
    glutInitWindowPosition(100, 100);
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
    glClearColor(1.0f, 0.96f, 0.86f, 1.0f);

    return (0);
}

void resize(int width, int height)
{
    if (height == 0)
        height = 1;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-4.0, 4.0, -4.0, 4.0); // Set up 2D orthographic viewing region
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

// void renderText(float x, float y, const char *text)
// {
//     glColor3f(1.0f, 0.0f, 0.0f); // Red color for text
//     glRasterPos2f(x, y);         // Set text position on screen
//     // Loop over each character and render it
//     for (const char *c = text; *c != '\0'; ++c)
//     {
//         glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, *c); // Use larger font
//     }
// }

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    // renderText(-3.0f, 3.0f, "3 triangles");

    // First Triangle (Red)
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-1.5f, 1.0f);
    glVertex2f(-1.5f, -2.0f);
    glVertex2f(1.5f, -2.0f);
    glEnd();

    // Second Triangle (Red)
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(-1.0f, -2.0f);
    glVertex2f(2.0f, 1.0f);
    glVertex2f(2.0f, -2.0f);
    glEnd();

    // Third Triangle (Yellow with Red Border)
    // Fill the triangle with yellow
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow
    glVertex2f(2.2f, 1.0f);
    glVertex2f(1.9f, 1.0f);
    glVertex2f(1.9f, 3.0f);
    glEnd();

    // Draw the red border
    glLineWidth(3.0f); // Set line width for the border
    glBegin(GL_LINE_LOOP);
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glVertex2f(2.2f, 1.0f);
    glVertex2f(1.9f, 1.0f);
    glVertex2f(1.9f, 3.0f);
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
