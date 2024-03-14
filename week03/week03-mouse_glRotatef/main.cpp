#include <GL/glut.h>
#include <stdio.h>
float teapotX = 0, teapotY = 0;
float angle = 0;
void mouse (int button,int state, int x,int y)
{
    teapotX = (x-150)/150.0;
    teapotY = -(y-150)/150.0;
}
void display()
{   glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glRotatef(angle, 0, 0, 1);
    glutSolidTeapot ( 0.3 );
    glPopMatrix();
    glutSwapBuffers();
}
void motion (int x,int y)
{
    angle = x;
    display();
}

int main(int argc, char *argv[])///138¦æ
{
  glutInit(&argc, argv);///140¦æ
  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143¦æ
  glutCreateWindow("GLUT Shapes");///145¦æ
  glutDisplayFunc(display);///148¦æ
  glutMotionFunc(motion);

  glutMainLoop();///174¦æ

}
