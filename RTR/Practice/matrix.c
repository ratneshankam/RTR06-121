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

    // Code
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);

    glutInitWindowSize(1050, 750);
    glutInitWindowPosition(300, 0);
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
    glClearColor(0.0f, 0.0f, 0.0f, 50.0f);

    return (0);
}

void resize(int width, int height)
{
    // Code
    glViewport(0, 0, width, height);
    gluOrtho2D(-110.0f, 100.0f, -60.0f, 100.0f);
}

void display(void)
{
    // Code
    glClear(GL_COLOR_BUFFER_BIT);

    //  *** Co-ordinates ***
    // glBegin(GL_LINES);
    // glColor3f(1.0f, 1.0f, 1.0f);
    // glVertex2f(-110.0f, 0.0f);
    // glVertex2f(100.0f, 0.0f);
    // glVertex2f(0.0f, 100.0f);
    // glVertex2f(0.0f, -60.0f);
    // glEnd();

    // ***  M A T R ***
    glLineWidth(3.0f);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(-107.0f, 0.0f);
    glVertex2f(-107.0f, 1.0f);
    glVertex2f(-104.0f, 1.0f);
    glVertex2f(-103.0f, 2.0f);
    glVertex2f(-103.0f, 26.0f);
    glVertex2f(-107.0f, 26.0f);
    glVertex2f(-107.0f, 27.0f);
    glVertex2f(-103.0f, 27.0f);
    glVertex2f(-103.0f, 28.0f);
    glVertex2f(-109.0f, 28.0f);
    glVertex2f(-109.0f, 29.0f);
    glVertex2f(-100.0f, 29.0f);
    glVertex2f(-100.0f, 27.0f);
    glVertex2f(-98.0f, 27.0f);
    glVertex2f(-86.0f, 9.0f);
    glVertex2f(-79.0f, 19.0f);
    glVertex2f(-81.0f, 19.0f);
    glVertex2f(-81.0f, 21.0f);
    glVertex2f(-78.0f, 21.0f);
    glVertex2f(-74.0f, 27.0f);
    glVertex2f(-71.0f, 27.0f);
    glVertex2f(-71.0f, 21.0f);
    glVertex2f(-48.0f, 21.0f);
    glVertex2f(-49.0f, 22.0f);
    glVertex2f(-45.0f, 22.0f);
    glVertex2f(-39.0f, 11.0f);
    glVertex2f(-41.0f, 11.0f);
    glVertex2f(-34.0f, 0.0f);
    glVertex2f(-21.0f, 0.0f);
    glVertex2f(-18.0f, 2.0f);
    glVertex2f(-18.0f, 24.0f);
    glVertex2f(-27.0f, 24.0f);
    glVertex2f(-29.0f, 20.0f);
    glVertex2f(-30.0f, 20.0f);
    glVertex2f(-30.0f, 25.0f);
    glVertex2f(-17.0f, 25.0f);
    glVertex2f(-17.0f, 26.0f);
    glVertex2f(-1.0f, 26.0f);
    glVertex2f(-1.0f, 20.0f);
    glVertex2f(-2.0f, 20.0f);
    glVertex2f(-3.0f, 24.0f);
    glVertex2f(-13.0f, 24.0f);
    glVertex2f(-13.0f, 9.0f);
    glVertex2f(7.0f, 9.0f);
    glVertex2f(7.0f, 24.0f);
    glVertex2f(18.0f, 24.0f);
    glVertex2f(20.0f, 23.5f);
    glVertex2f(23.0f, 21.5f);
    glVertex2f(23.0f, 12.0f);
    glVertex2f(18.50f, 12.0f);
    glVertex2f(28.0f, 1.0f);
    glVertex2f(33.0f, 0.0f);
    glVertex2f(33.0f, -1.0f);
    glVertex2f(22.0f, -1.0f);
    glVertex2f(12.0f, 10.0f);
    glVertex2f(10.0f, 10.0f);
    glVertex2f(10.0f, 1.50f);
    glVertex2f(12.0f, 0.0f);
    glVertex2f(14.0f, 0.0f);
    glVertex2f(14.0f, -1.0f);
    glVertex2f(7.0f, -1.0f);
    glVertex2f(7.0f, 8.0f);
    glVertex2f(-13.0f, 8.0f);
    glVertex2f(-13.0f, 3.0f);
    glVertex2f(-11.0f, 2.0f);
    glVertex2f(-8.0f, 2.0f);
    glVertex2f(-8.0f, 1.0f);
    glVertex2f(-16.5f, 1.0f);
    glVertex2f(-16.5f, 0.0f);
    glVertex2f(-4.0f, 0.0f);
    glVertex2f(-4.0f, -1.0f);
    glVertex2f(-45.0f, -1.0f);
    glVertex2f(-43.0f, 0.0f);
    glVertex2f(-42.0f, 1.0f);
    glVertex2f(-45.0f, 7.0f);
    glVertex2f(-57.5f, 7.0f);
    glVertex2f(-60.5f, 2.0f);
    glVertex2f(-59.0f, 1.0f);
    glVertex2f(-57.5f, 1.0f);
    glVertex2f(-57.5f, 0.0f);
    glVertex2f(-68.0f, 0.0f);
    glVertex2f(-68.0f, 1.0f);
    glVertex2f(-64.0f, 2.0f);
    glVertex2f(-53.0f, 19.0f);
    glVertex2f(-71.0f, 19.0f);
    glVertex2f(-71.0f, 3.0f);
    glVertex2f(-78.0f, 3.0f);
    glVertex2f(-78.0f, 4.0f);
    glVertex2f(-76.0f, 4.0f);
    glVertex2f(-74.0f, 5.5f);
    glVertex2f(-74.0f, 19.0f);
    glVertex2f(-76.5f, 19.0f);
    glVertex2f(-87.0f, 3.0f);
    glVertex2f(-99.0f, 21.0f);
    glVertex2f(-99.0f, 8.0f);
    glVertex2f(-100.0f, 8.0f);
    glVertex2f(-100.0f, 0.0f);
    glEnd();

    // *** I X ***
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, .7f, 0.0f);
    glVertex2f(37.0f, -1.0f);
    glVertex2f(37.0f, 0.0f);
    glVertex2f(38.0f, 0.0f);
    glVertex2f(42.0f, 1.5f);
    glVertex2f(42.0f, 24.0f);
    glVertex2f(38.5f, 25.0f);
    glVertex2f(37.0f, 25.0f);
    glVertex2f(37.0f, 26.0f);
    glVertex2f(53.0f, 26.0f);
    glVertex2f(53.0f, 25.0f);
    glVertex2f(53.0f, 25.0f);
    glVertex2f(51.0f, 25.0f);
    glVertex2f(48.0f, 24.0f);
    glVertex2f(79.0f, 24.0f);
    glVertex2f(79.0f, 23.0f);
    glVertex2f(76.5f, 23.0f);
    glVertex2f(76.0f, 20.0f);
    glVertex2f(82.0f, 15.0f);
    glVertex2f(82.0f, 15.0f);
    glVertex2f(89.0f, 20.0f);
    glVertex2f(88.5f, 23.0f);
    glVertex2f(86.0f, 23.0f);
    glVertex2f(86.0f, 24.0f);
    glVertex2f(98.0f, 24.0f);
    glVertex2f(98.0f, 23.0f);
    glVertex2f(96.0f, 23.0f);
    glVertex2f(94.0f, 22.5f);
    glVertex2f(87.0f, 15.0f);
    glVertex2f(82.0f, 15.0f);
    glVertex2f(80.0f, 12.0f);
    glVertex2f(92.0f, 1.0f);
    glVertex2f(93.0f, 0.0f);
    glVertex2f(95.0f, 0.0f);
    glVertex2f(95.0f, -1.0f);
    glVertex2f(81.0f, -1.0f);
    glVertex2f(81.0f, 0.0f);
    glVertex2f(83.0f, 0.0f);
    glVertex2f(84.0f, 2.0f);
    glVertex2f(76.5f, 10.0f);
    glVertex2f(70.0f, 1.0f);
    glVertex2f(71.0f, 0.0f);
    glVertex2f(72.0f, 0.0f);
    glVertex2f(72.0f, -1.0f);
    glVertex2f(61.0f, -1.0f);
    glVertex2f(61.0f, 0.0f);
    glVertex2f(62.0f, 0.0f);
    glVertex2f(66.0f, 1.0f);
    glVertex2f(74.5f, 11.0f);
    glVertex2f(73.0f, 14.0f);
    glVertex2f(75.0f, 14.0f);
    glVertex2f(66.5f, 22.0f);
    glVertex2f(65.0f, 23.0f);
    // glVertex2f(75.5f, 23.0f);
    glVertex2f(48.0f, 23.0f);
    glVertex2f(48.0f, 2.0f);
    glVertex2f(50.0f, 1.0f);
    glVertex2f(53.0f, 0.0f);
    glVertex2f(53.0f, -1.0f);
    glEnd();

    // *** A and D and M inner shape
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(-46.0f, 10.0f);
    glVertex2f(-56.0f, 10.0f);
    glVertex2f(-51.0f, 18.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(-74.0f, 21.0f);
    glVertex2f(-75.5f, 21.0f);
    glVertex2f(-74.0f, 24.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(10.0f, 12.0f);
    glVertex2f(10.0f, 21.5f);
    glVertex2f(14.0f, 21.5f);
    glVertex2f(17.0f, 21.0f);
    glVertex2f(19.0f, 19.0f);
    glVertex2f(20.0f, 18.0f);
    glVertex2f(20.0f, 17.0f);
    glVertex2f(20.0f, 16.0f);
    glVertex2f(18.0f, 14.0f);
    glVertex2f(16.0f, 13.0f);
    glVertex2f(14.0f, 12.0f);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.7f, 0.0f);
    glVertex2f(-35.0f, 30.0f);
    glVertex2f(-35.0f, 31.0f);
    glVertex2f(30.0f, 31.0f);
    glVertex2f(30.0f, 30.0f);
    glEnd();

    glColor3f(0.0f, 0.7f, 0.0f);
    glRasterPos2f(-35.0f, 31.0f);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'T');
    glRasterPos2f(-8.0f, 31.0f);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'H');
    glRasterPos2f(18.0f, 31.0f);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, 'E');

    float x = 0.0f;

    // up
    for (int i = 11; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            x = -7.0f;
        }
        else if (i % 4 == 0) {
            continue;
        }
        else
        {
            x = 10.0f;
        }

        glColor3f(0.0f, 0.7f, 0.0f);
        glRasterPos2f(i * (x), 96.0f);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'A');
        glRasterPos2f(i * (x), 93.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'S');
        glRasterPos2f(i * (x), 92.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'T');
        glRasterPos2f(i * (x), 90.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'R');
        glRasterPos2f(i * (x), 85.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'O');
        glRasterPos2f(i * (x), 83.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'M');
        glRasterPos2f(i * (x), 82.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'E');
        glRasterPos2f(i * (x), 80.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'D');
        glRasterPos2f(i * (x), 78.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'I');
        glRasterPos2f(i * (x), 74.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'C');
        glRasterPos2f(i * (x), 72.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'O');
        glRasterPos2f(i * (x), 68.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'M');
        glRasterPos2f(i * (x), 63.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'P');
    }

    for (int i = 11; i > 0; i--)
    {
        if (i % 2 == 1)
        {
            x = -10.0f;
        }
        else
        {
            x = 10.0f;
        }

        glColor3f(0.0f, 0.7f, 0.0f);
        glRasterPos2f(i * (x), 85.0f);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'A');
        glRasterPos2f(i * (x), 83.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'S');
        glRasterPos2f(i * (x), 82.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'T');
        glRasterPos2f(i * (x), 80.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'R');
        glRasterPos2f(i * (x), 75.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'O');
        glRasterPos2f(i * (x), 73.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'M');
        glRasterPos2f(i * (x), 72.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'E');
        glRasterPos2f(i * (x), 70.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'D');
        glRasterPos2f(i * (x), 68.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'I');
        glRasterPos2f(i * (x), 64.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'C');
        glRasterPos2f(i * (x), 62.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'O');
        glRasterPos2f(i * (x), 58.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'M');
        glRasterPos2f(i * (x), 53.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'P');
    }

    // down 
    for (int i = 11; i > 0; i--)
    {
        if (i % 2 == 1)
        {
            x = -10.0f;
        }
        else
        {
            x = 10.0f;
        }

        glColor3f(0.0f, 0.7f, 0.0f);
        glRasterPos2f(i * (x), -15.0f);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'A');
        glRasterPos2f(i * (x), -18.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'S');
        glRasterPos2f(i * (x), -24.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'T');
        glRasterPos2f(i * (x), -27.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'R');
        glRasterPos2f(i * (x), -29.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'O');
        glRasterPos2f(i * (x), -33.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'M');
        glRasterPos2f(i * (x), -35.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'E');
        glRasterPos2f(i * (x), -37.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'D');
        glRasterPos2f(i * (x), -39.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'I');
        glRasterPos2f(i * (x), -41.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'C');
        glRasterPos2f(i * (x), -43.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'O');
        glRasterPos2f(i * (x), -47.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'M');
        glRasterPos2f(i * (x), -51.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, 'P');
    }
    for (int i = 11; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            x = -15.0f;
        }
        else if (i % 3 == 0) {
            continue;
        }
        else
        {
            x = 8.0f;
        }

        glColor3f(0.0f, 0.7f, 0.0f);
        glRasterPos2f(i * (x), -25.0f);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'A');
        glRasterPos2f(i * (x), -28.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'S');
        glRasterPos2f(i * (x), -34.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'T');
        glRasterPos2f(i * (x), -37.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'R');
        glRasterPos2f(i * (x), -39.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'O');
        glRasterPos2f(i * (x), -43.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'M');
        glRasterPos2f(i * (x), -45.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'E');
        glRasterPos2f(i * (x), -47.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'D');
        glRasterPos2f(i * (x), -49.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'I');
        glRasterPos2f(i * (x), -51.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'C');
        glRasterPos2f(i * (x), -53.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'O');
        glRasterPos2f(i * (x), -57.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'M');
        glRasterPos2f(i * (x), -60.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'P');
    }

    // RATNESH
    for (int i = 11; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            x = -9.5f;
        }
        else if (i % 4 == 0)
        {
            continue;
        }
        else
        {
            x = 9.0f;
        }

        glColor3f(0.0f, 0.7f, 0.0f);
        glRasterPos2f(i * (x), -25.0f);
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'R');
        glRasterPos2f(i * (x), -28.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
        glRasterPos2f(i * (x), -34.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'A');
        glRasterPos2f(i * (x), -37.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '1');
        glRasterPos2f(i * (x), -39.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'T');
        glRasterPos2f(i * (x), -43.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '1');
        glRasterPos2f(i * (x), -45.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'N');
        glRasterPos2f(i * (x), -47.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
        glRasterPos2f(i * (x), -49.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'E');
        glRasterPos2f(i * (x), -51.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
        glRasterPos2f(i * (x), -53.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'S');
        glRasterPos2f(i * (x), -57.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
        glRasterPos2f(i * (x), -60.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, 'H');
    }

    // 121
    for (int i = 11; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            x = -10.0f;
        }
        else if (i % 4 == 0)
        {
            continue;
        }
        else
        {
            x = 25.0f;
        }

        glColor3f(0.0f, 0.7f, 0.0f);
        glRasterPos2f(i * (x), 96.0f);
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '1');
        glRasterPos2f(i * (x), 93.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '1');
        glRasterPos2f(i * (x), 90.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '1');
        glRasterPos2f(i * (x), 85.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '1');
        glRasterPos2f(i * (x), 83.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '0');
        glRasterPos2f(i * (x), 81.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
        glRasterPos2f(i * (x), 73.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '1');

        glRasterPos2f(i * (x), 70.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '0');
        glRasterPos2f(i * (x), 68.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '0');
        glRasterPos2f(i * (x), 62.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '1');
        glRasterPos2f(i * (x), 58.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '1');
        glRasterPos2f(i * (x), 55.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '1');
        glRasterPos2f(i * (x), 53.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '1');
        glRasterPos2f(i * (x), 51.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
        glRasterPos2f(i * (x), 48.0f);

        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_10, '0');
        glRasterPos2f(i * (x), 43.0f);

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, '1');
    }

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

void uninitialize(void)
{
    // Code
}
