#include <GL/glut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot ( 0.3 );
    glutSwapBuffers();
}
void reshape(int w, int h){
    glViewport(0, 0, w, h);
    float ar = w / (float) h;
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluLookAt( 60, ar, 0.01, 100);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluLookAt( 0, 0, -2, 0, 0, 0, 0, 1, 0);
}
int main(int argc, char *argv[])///138¦æ
{
  glutInit(&argc, argv);///140¦æ
  glutInitDisplayMode( GLUT_DOUBLE | GLUT_DEPTH);///143¦æ
  glutCreateWindow("week16-2");///145¦æ

  glutDisplayFunc(display);///148¦æ

  glutMainLoop();///174¦æ

}
