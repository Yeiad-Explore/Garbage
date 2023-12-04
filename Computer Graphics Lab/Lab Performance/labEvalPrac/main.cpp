#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Initialize OpenGL Graphics */
void initGL() {
    // Set "clearing" or background color
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // White and opaque
    glMatrixMode(GL_PROJECTION);           // Select the Projection matrix for operation
    glLoadIdentity();                      // Reset Projection matrix
    gluOrtho2D(0.0, 100.0, 0.0, 100.0);   // Set an orthographic projection
}

/* Function to draw the boat and sail */
void display() {
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    // Draw the hull of the boat
    glColor3f(1.0f, 0.65f, 0.0f); // Orange color for the hull
    glBegin(GL_QUADS);
    glVertex2f(25.0f, 25.0f);
    glVertex2f(75.0f, 25.0f);
    glVertex2f(85.0f, 40.0f);
    glVertex2f(15.0f, 40.0f);
    glEnd();

    // Draw the sail
    glColor3f(1.0f, 0.0f, 0.0f); // Red color for the sail
    glBegin(GL_TRIANGLES);
    glVertex2f(50.0f, 40.0f);
    glVertex2f(70.0f, 80.0f);
    glVertex2f(30.0f, 80.0f);
    glEnd();

    // Draw the decorations (using quads for simplicity)
    glColor3f(0.0f, 1.0f, 0.0f); // Green color for the decorations
    // Left decoration
    glBegin(GL_QUADS);
    glVertex2f(30.0f, 20.0f);
    glVertex2f(35.0f, 20.0f);
    glVertex2f(35.0f, 25.0f);
    glVertex2f(30.0f, 25.0f);
    glEnd();

    // Right decoration
    glBegin(GL_QUADS);
    glVertex2f(65.0f, 20.0f);
    glVertex2f(70.0f, 20.0f);
    glVertex2f(70.0f, 25.0f);
    glVertex2f(65.0f, 25.0f);
    glEnd();

    glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutCreateWindow("OpenGL Boat");       // Create a window with the given title
    glutInitWindowSize(320, 320);          // Set the window's initial width & height
    glutDisplayFunc(display);              // Register display callback handler for window re-paint
    initGL();                              // Our own OpenGL initialization
    glutMainLoop();                        // Enter the event-processing loop
    return 0;
}
