//Jeafrean Oskar Cruz Martinez CM13061
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);//limpia la ventana
    glPointSize(50);//tamaño de lo puntos 
    glBegin(GL_POINTS);//Iniciliza los vertices
    glVertex3f(0.5f,0.5f,0.0f);//vertice
    glVertex3f(-0.5f,-0.5f,0.0f);//vertice
    glVertex3f(0.7f,0.7f,0.0f);//vertice
    glVertex3f(-0.7f,-0.7f,0.0f);//vertice
    glEnd();//cierra la estructura 
    glFlush ();//guarda los comandos para optimizr el rendimiento

}
void init(void)
{
    glMatrixMode(GL_PROJECTION);//matrix actual principal de proyecto
    glLoadIdentity();//matriz identidad
    gluPerspective(45.0f, 0.0f, 1.0f, 10.0f);//vista de la cámara para tener una perspectiva de planta.
    //glOrtho(1.0, 0.0, 1.0, 0.0, -1.0, 1.0);
}

int main(int argc, char** argv)//declaracion de variables
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 600);//tamaño de la ventana
    glutInitWindowPosition (0,0);//tamaño de los puntos
    glutCreateWindow ("Ejemplo Puntos");//nombre y creacion de la ventana
    init();
    glutDisplayFunc(display);//Funciones de retrollamada
    glutMainLoop();//eventos
    return 0;
}
