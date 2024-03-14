#include <GL/glut.h>
#include <stdio.h>
void mouse (int button,int state, int x,int y)
{
    /// printf("%d %d %d %d\n",button, state, x, y);
    if(state==GLUT_DOWN)
        printf("glVertex2f((%d-150)/150.0, -(%d-150)/150.0);\n", x, y);
}
void display()
{
    glutSolidTeapot ( 0.3 );
    glutSwapBuffers();
}

int main(int argc, char *argv[])///138¦æ
{
  glutInit(&argc, argv);///140¦æ
  glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143¦æ
  glutCreateWindow("GLUT Shapes");///145¦æ
  glutDisplayFunc(display);///148¦æ
  glutMouseFunc(mouse);

  glutMainLoop();///174¦æ

}
