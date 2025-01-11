// header files
#include <GL/freeglut.h>
#include <stdbool.h> // For bool, true, false

// global variable declarations
bool bFullScreen = false;
int blink = 0;

// Entry-point function
int main(int argc, char *argv[])
{
    // local function declarations
    int initialize(void);
    void resize(int, int);
    void display(void);
    void timer(int value);
    void keyboard(unsigned char, int, int);
    void mouse(int, int, int, int);
    void uninitialize(void);

    // code
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

    glutInitWindowSize(1100, 750);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Created By - MATRIX GROUP");

    initialize();

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutTimerFunc(0, timer, 0);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutCloseFunc(uninitialize);

    glutMainLoop();

    return (0);
}
void timer(int value)
{
    glutPostRedisplay();         // Request redisplay
    glutTimerFunc(16, timer, 0); // Call timer again in 16ms (~60 FPS)
}

int initialize(void)
{
    // code
    glClearColor(.0f, .0f, .0f, 1.0f);

    return (0);
}

void resize(int width, int height)
{
    // code
    glViewport(0, 0, width, height);
}

void display(void)
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
