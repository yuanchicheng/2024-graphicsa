#include <GL/glut.h>
float angle = 0;
void display()
{
    glClearColor(1.0, 1.0, 0.9, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotatef(angle, 0, 0, 1);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void motion(int x, int y){
    angle = x;
    display();
}
int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week04 mouse glscalef");
    glutDisplayFunc(display);
    glutMotionFunc(motion);
    glutMainLoop();
}
