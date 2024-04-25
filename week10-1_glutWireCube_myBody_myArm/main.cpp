#include <GL/glut.h>
void myBody(){
    glPushMatrix();
        glColor3f(1, 0, 0);///紅色的
        glutWireCube(0.6);
	 glPopMatrix();
}
void myArm(){
    glPushMatrix();
        glColor3f(0, 1, 0);///綠色的
        glScalef(1, 0.4,0.4);
        glutWireCube(0.3);
     glPopMatrix();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glPushMatrix();
        glColor3f(1, 0, 0);///紅色的
        glutWireCube(0.6);
	 glPushMatrix();

    glPushMatrix();
        glColor3f(0, 1, 0);///綠色的
        glScalef(1, 0.4,0.4);
        glutWireCube(0.3);
     glPushMatrix();

    glutSwapBuffers();
}
int main(int argc, char*argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
	glutCreateWindow("week09 Microsoft Visual Studio");
	glutDisplayFunc(display);
	glutMainLoop();
}
