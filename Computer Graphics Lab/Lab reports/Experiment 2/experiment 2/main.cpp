
#include <GL/gl.h>
#include <GL/glut.h>

void display (void) {
    glClear (GL_COLOR_BUFFER_BIT);

    // Draw the green star
    glColor3ub (119, 193, 15);
    glBegin (GL_POLYGON);
    glVertex2d (100, 400);
    glVertex2d (500, 500);
    glVertex2d (100, 600);
    glVertex2d (0, 1000);
    glVertex2d (-100, 600);
    glVertex2d (-500, 500);
    glVertex2d (-100, 400);
    glVertex2d (0, 0);
    glEnd();

    // Draw the red star
    glColor3ub (183, 62, 25);
    glBegin (GL_POLYGON);
    glVertex2d (-400, 100);
    glVertex2d (-500, 500);
    glVertex2d (-600, 100);
    glVertex2d (-1000, 0);
    glVertex2d (-600, -100);
    glVertex2d (-500, -500);
    glVertex2d (-400, -100);
    glVertex2d (0, 0);
    glEnd();

    // Draw the blue star
    glColor3ub (25, 82, 183);
    glBegin (GL_POLYGON);
    glVertex2d (-100, -400);
    glVertex2d (-500, -500);
    glVertex2d (-100, -600);
    glVertex2d (0, -1000);
    glVertex2d (100, -600);
    glVertex2d (500, -500);
    glVertex2d (100, -400);
    glVertex2d (0, 0);
    glEnd();

    // Draw the yellow star
    glColor3ub (237, 230, 49);
    glBegin (GL_POLYGON);
    glVertex2d (400, -100);
    glVertex2d (500, -500);
    glVertex2d (600, -100);
    glVertex2d (1000, 0);
    glVertex2d (600, 100);
    glVertex2d (500, 500);
    glVertex2d (400, 100);
    glVertex2d (0, 0);
    glEnd();

    glFlush ();
}

int main (int argc, char** argv) {
    glutInit (&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE);
    glutInitWindowSize (800, 800);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Four Star Design");
    glClearColor (0.0, 0.0, 0.0, 0.0);
    glMatrixMode (GL_PROJECTION);
    glLoadIdentity ();
    gluOrtho2D (-1200, 1200, -1200, 1200);
    glutDisplayFunc (display);
    glutMainLoop ();
    return 0;
}
