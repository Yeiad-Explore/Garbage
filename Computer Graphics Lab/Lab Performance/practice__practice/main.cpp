#include <GL/gl.h>
#include <GL/glut.h>

void display(void) {
    glClear(GL_COLOR_BUFFER_BIT);

    int numRows = 8;
    int numCols = 8;
    float squareSize = 100.0f;

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if ((i + j) % 2 == 0) {
                glColor3f(0.0f, 0.0f, 0.0f); // black
            } else {

                glColor3f(1.0f, 1.0f, 1.0f); // white
            }

            float x = j * squareSize;
            float y = i * squareSize;

            glBegin(GL_POLYGON);
                glVertex2f(x, y);
                glVertex2f(x + squareSize, y);
                glVertex2f(x + squareSize, y + squareSize);
                glVertex2f(x, y + squareSize);
            glEnd();
        }
    }

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("chess");
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 800, 0, 800);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
