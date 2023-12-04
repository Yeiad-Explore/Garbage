#include <GL/glut.h>

void initGL() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to white and opaque
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer

    // Draw red square
    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glBegin(GL_QUADS);
        glVertex2f(-0.25f, 0.25f);
        glVertex2f(0.25f, 0.25f);
        glVertex2f(0.25f, -0.25f);
        glVertex2f(-0.25f, -0.25f);
    glEnd();

    // Draw blue propeller
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.5f, 0.0f);
        glVertex2f(-0.7f, 0.1f);
        glVertex2f(-0.7f, -0.1f);

        glVertex2f(0.0f, -0.5f);
        glVertex2f(-0.1f, -0.7f);
        glVertex2f(0.1f, -0.7f);

        glVertex2f(0.5f, 0.0f);
        glVertex2f(0.7f, -0.1f);
        glVertex2f(0.7f, 0.1f);
    glEnd();

    // Draw black double-rectangle
    glColor3f(0.0f, 0.0f, 0.0f); // Black
    glBegin(GL_LINE_LOOP);
        glVertex2f(0.75f, 0.1f);
        glVertex2f(0.95f, 0.1f);
        glVertex2f(0.95f, -0.1f);
        glVertex2f(0.75f, -0.1f);
    glEnd();

    glBegin(GL_LINES);
        glVertex2f(0.75f, 0.0f);
        glVertex2f(0.95f, 0.0f);

        glVertex2f(0.85f, 0.1f);
        glVertex2f(0.85f, -0.1f);
    glEnd();

    glFlush();  // Render now
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("OpenGL Shapes");     // Create a window with the given title
    glutInitWindowSize(320, 320);          // Set the window's initial width & height
    glutDisplayFunc(display);              // Register display callback handler for window re-paint
    initGL();                              // Our own OpenGL initialization
    glutMainLoop();                        // Enter the event-processing loop
    return 0;
}
