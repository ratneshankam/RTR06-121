// header files
#include <GL/freeglut.h> // FreeGLUT header
#include <stdbool.h>     // For bool, true, false

// global variable declarations
bool bFullScreen = false; // Use bool instead of BOOL

// Entry-point function
int main(int argc, char *argv[])
{
    // Function declarations
    int initialize(void);
    void resize(int, int);
    void display(void);
    void keyboard(unsigned char, int, int);
    void mouse(int, int, int, int);
    void uninitialize(void);

    // GLUT initialization
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

    glutMainLoop(); // Start the GLUT loop
    return 0;
}

int initialize(void)
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Black background
    return 0;
}

void resize(int width, int height)
{
    glViewport(0, 0, width, height); // Adjust viewport
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen

    glBegin(GL_TRIANGLES);       // Draw a triangle
    glColor3f(1.0f, 0.0f, 0.0f); // Red vertex
    glVertex3f(0.0f, 1.0f, 0.0f);

    glColor3f(0.0f, 1.0f, 0.0f); // Green vertex
    glVertex3f(-1.0f, -1.0f, 0.0f);

    glColor3f(0.0f, 0.0f, 1.0f); // Blue vertex
    glVertex3f(1.0f, -1.0f, 0.0f);
    glEnd();

    glutSwapBuffers(); // Swap the buffers
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 27: // ESC key
        glutLeaveMainLoop();
        break;
    case 'F':
    case 'f':
        if (!bFullScreen)
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
    }
}

void mouse(int button, int state, int x, int y)
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        glutLeaveMainLoop();
    }
}

void uninitialize(void)
{
    // Cleanup code if needed
}
