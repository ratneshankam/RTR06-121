/*
Run Command:
D:\RTR\CLASS\GLUT>cl.exe /c /EHsc /I C:\freeglut\include Birthday_decor.c

D:\RTR\CLASS\GLUT>link.exe Birthday_decor.obj /LIBPATH:C:\freeglut\lib\x64\ /SUBSYSTEM:CONSOLE
*/

// Header Files
#include <GL/freeglut.h>
#include <stdbool.h> // For bool, true, false
#include <math.h>

// Global Variables Declarations
bool bFullScreen = false;

// Entry-point function

int main(int argc, char* argv[]){
    
    //local function declarations
    int initialize(void);
    void resize(int, int);
    void display(void);
    void keyboard(unsigned char, int, int);
    void mouse(int, int, int, int);
    void idle(void);
    void uninitialize(void);

    //code
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Matrix Group");

    initialize();

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutCloseFunc(uninitialize);
    glutIdleFunc(idle);
    glutMainLoop();

    return(0);
}

int initialize(void){

    //code
    //glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    //glClearColor(0.1f, 0.1f, 0.2f, 1.0f); // Dark navy blue
    glClearColor(0.2f, 0.2f, 0.2f, 1.0f); // Dark grey


    return(0);
}

void resize(int width, int height){

    //code
    glViewport(0, 0, width, height);
}

void display(void){
    void QuadrantTriangles(void);

    //code
    QuadrantTriangles();
    
}

void QuadrantTriangles() {
    glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(5.0f);

    // Left Quadrant Triangles
    glBegin(GL_TRIANGLES);
        glColor3f(0.6f, 0.2f, 0.8f); // Purple
        glVertex2f(-1.0f, 0.6f); // A
        glVertex2f(-0.9f, 0.6f); // B
        glVertex2f(-0.95f, 0.5f); // L
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.4f, 0.4f, 1.0f); // Blue
        glVertex2f(-0.9f, 0.6f); // B
        glVertex2f(-0.8f, 0.6f); // C
        glVertex2f(-0.85f, 0.5f); // M
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.2f, 0.6f, 0.9f); // Cyan
        glVertex2f(-0.8f, 0.6f); // C
        glVertex2f(-0.7f, 0.6f); // D
        glVertex2f(-0.75f, 0.5f); // N
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.2f, 0.8f, 0.4f); // Green
        glVertex2f(-0.7f, 0.6f); // D
        glVertex2f(-0.6f, 0.62f); // E
        glVertex2f(-0.65f, 0.52f); // O
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.8f, 0.8f, 0.0f); // Yellow
        glVertex2f(-0.6f, 0.62f); // E
        glVertex2f(-0.5f, 0.65f); // F
        glVertex2f(-0.55f, 0.55f); // P
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.9f, 0.4f, 0.2f); // Orange
        glVertex2f(-0.5f, 0.65f); // F
        glVertex2f(-0.4f, 0.7f); // G
        glVertex2f(-0.45f, 0.6f); // Q
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f); // Red
        glVertex2f(-0.4f, 0.7f); // G
        glVertex2f(-0.3f, 0.75f); // H
        glVertex2f(-0.35f, 0.65f); // R
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.5f); // Magenta
        glVertex2f(-0.3f, 0.75f); // H
        glVertex2f(-0.2f, 0.82f); // I
        glVertex2f(-0.25f, 0.72f); // S
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.8f, 0.2f, 1.0f); // Violet
        glVertex2f(-0.2f, 0.82f); // I
        glVertex2f(-0.1f, 0.9f); // J
        glVertex2f(-0.15f, 0.8f); // T
    glEnd();

    glBegin(GL_LINES);
        glColor3f(0.6f, 0.6f, 0.6f); // Grey Line
        glVertex2f(-0.1f, 0.9f); // J
        glVertex2f(0.0f, 1.0f); // K
    glEnd();

    // Right Quadrant (Mirrored)
    glBegin(GL_TRIANGLES);
        glColor3f(0.6f, 0.2f, 0.8f); // Purple
        glVertex2f(1.0f, 0.6f); // A
        glVertex2f(0.9f, 0.6f); // B
        glVertex2f(0.95f, 0.5f); // L
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.4f, 0.4f, 1.0f); // Blue
        glVertex2f(0.9f, 0.6f); // B
        glVertex2f(0.8f, 0.6f); // C
        glVertex2f(0.85f, 0.5f); // M
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.2f, 0.6f, 0.9f); // Cyan
        glVertex2f(0.8f, 0.6f); // C
        glVertex2f(0.7f, 0.6f); // D
        glVertex2f(0.75f, 0.5f); // N
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.2f, 0.8f, 0.4f); // Green
        glVertex2f(0.7f, 0.6f); // D
        glVertex2f(0.6f, 0.62f); // E
        glVertex2f(0.65f, 0.52f); // O
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.8f, 0.8f, 0.0f); // Yellow
        glVertex2f(0.6f, 0.62f); // E
        glVertex2f(0.5f, 0.65f); // F
        glVertex2f(0.55f, 0.55f); // P
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.9f, 0.4f, 0.2f); // Orange
        glVertex2f(0.5f, 0.65f); // F
        glVertex2f(0.4f, 0.7f); // G
        glVertex2f(0.45f, 0.6f); // Q
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f); // Red
        glVertex2f(0.4f, 0.7f); // G
        glVertex2f(0.3f, 0.75f); // H
        glVertex2f(0.35f, 0.65f); // R
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.5f); // Magenta
        glVertex2f(0.3f, 0.75f); // H
        glVertex2f(0.2f, 0.82f); // I
        glVertex2f(0.25f, 0.72f); // S
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(0.8f, 0.2f, 1.0f); // Violet
        glVertex2f(0.2f, 0.82f); // I
        glVertex2f(0.1f, 0.9f); // J
        glVertex2f(0.15f, 0.8f); // T
    glEnd();

    glBegin(GL_LINES);
        glColor3f(0.6f, 0.6f, 0.6f); // Grey Line
        glVertex2f(0.1f, 0.9f); // J
        glVertex2f(0.0f, 1.0f); // K
    glEnd();

     // Loop to draw lines
    glLineWidth(3.5f);
    glBegin(GL_LINES);
        glColor3f(0.6f, 0.6f, 0.6f); // Grey Line
        glVertex2f(0.0, 1.0f);
        glVertex2f(0.0f, 0.9f);
    glEnd();
    
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    float radius = 0.1f;  
    float baseHeight = 0.8f;

    for (float x = -0.09f; x <= 0.09f; x += 0.005f) {
        
        float time = glutGet(GLUT_ELAPSED_TIME) / 1000.0f; // Time in seconds
        float r = 0.5f + 0.5f * sin(2.0f * 3.145 * (time + x)); // Red
        float g = 0.5f + 0.5f * sin(2.0f * 3.145 * (time + x + 0.33f)); // Green
        float b = 0.5f + 0.5f * sin(2.0f * 3.145 * (time + x + 0.66f)); // Blue
        
        float height = sqrt(radius * radius - x * x);  // Semi-circle equation
        
        float y = baseHeight - height;

        if (y > 0.95f) {
            y = 0.95f;
        }

        glColor3f(r, g, b);
        
        glVertex2f(0.0f, 0.95f);
        glVertex2f(x, y);         // Dynamic endpoint based on x and y
    }
    glEnd();


    glutSwapBuffers();
}

void idle() {
    glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y){
    //code
    switch(key){
        case 27:
            glutLeaveMainLoop();
            break;
        case 'F':
        case 'f':
            if (bFullScreen == false){
                glutFullScreen();
                bFullScreen = true;
            }
            else{
                glutLeaveFullScreen();
                bFullScreen = false;
            }
            break;
        default:
            break;
    } 
}

void mouse(int button, int state, int x, int y){
    //code
    switch(button){
        case GLUT_LEFT_BUTTON:
            glutLeaveMainLoop();
            break;
        default:
            break;
    }
}

void uninitialize(void){
    //code
}


