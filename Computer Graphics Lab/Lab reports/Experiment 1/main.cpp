#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Quad Shape
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
        glVertex2f(50.0f, 50.0f);
        glVertex2f(150.0f, 50.0f);
        glVertex2f(150.0f, 150.0f);
        glVertex2f(50.0f, 150.0f);
    glEnd();

    // Triangle
    glColor3f(0.0f, 0.0f, 1.0f);
    glBegin(GL_TRIANGLES);
        glVertex2f(200.0f, 50.0f);
        glVertex2f(250.0f, 150.0f);
        glVertex2f(300.0f, 50.0f);
    glEnd();

    glFlush();
}

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 400.0, 0.0, 200.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 200);
    glutCreateWindow("Quad Shape and Triangle");

    init();

    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
