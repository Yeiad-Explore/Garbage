#include <GL/glut.h>
#include <stdio.h>

// Define initial coordinates of the rectangle
float rectX = 50.0f;
float rectY = 50.0f;
float rectWidth = 100.0f;
float rectHeight = 50.0f;

void drawRectangle() {
    glColor3f(0.0f, 1.0f, 0.0f); // Set color to green
    glBegin(GL_POLYGON);
    glVertex2f(rectX, rectY);
    glVertex2f(rectX + rectWidth, rectY);
    glVertex2f(rectX + rectWidth, rectY + rectHeight);
    glVertex2f(rectX, rectY + rectHeight);
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    drawRectangle();
    glFlush();
}

void translateRectangle(float x, float y) {
    rectX += x;
    rectY += y;
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutCreateWindow("Rectangle Translation");

    glOrtho(0.0, 400.0, 0.0, 400.0, -1.0, 1.0);

    glutDisplayFunc(display);

    float translateX, translateY;
    printf("Enter translation in x and y (e.g., 10 20): ");
    scanf("%f %f", &translateX, &translateY);

    translateRectangle(translateX, translateY);

    glutMainLoop();
    return 0;
}
