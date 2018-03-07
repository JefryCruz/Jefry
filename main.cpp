#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(60);
    glBegin(GL_POLYGON);
    
    //glColor3f(1.0f, 0.0f, 0.0f);//Color
    glVertex3f(-0.5f,0.5f,0.0f);//
    //glColor3f(0.0f, 1.0f, 0.0f);//Color
    glVertex3f(0.5f,0.5f,0.0f);//
    //glColor3f(0.0f, 0.0f, 1.0f);//Color
    glVertex3f(1.0f,0.0f,0.0f);//
    glVertex3f(0.5f,-0.5f,0.0f);
    glVertex3f(-0.5f,-0.5f,0.0f);
    glVertex3f(-1.f,0.0f,0.0f);
    //glVertex3f(0.0f,0.5f,0.0f);//
    //glVertex3f(0.0f,0.0f,0.0f);//
    //glVertex3f(1.0f,0.0f,0.0f);//
    glEnd();
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //izquierda, derecha, abajo, arriba, cerca, lejos
    //glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, -1.0);
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, -1.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1400, 800);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Ejemplo Puntos");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
