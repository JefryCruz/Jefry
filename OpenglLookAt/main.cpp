//Jeafrean Oskar Cruz Martinez CM13061
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    //glClear(GL_COLOR_BUFFER_BIT);//esta funcion limpia la ventana
    glPointSize(50);//este es el tamaño de los puntos en la ventana
    glBegin(GL_POINTS);//se inicializan los vertices 
    glVertex3f(0.5f,0.5f,0.0f);//coordenadas del vertice en el plano xyz
    glVertex3f(-0.5f,-0.5f,0.0f);//coordenadas del vertice en el plano xyz
    glVertex3f(0.7f,0.7f,0.0f);//coordenadas del vertice en el plano xyz
    glVertex3f(-0.7f,-0.7f,0.0f);//
    glEnd();// finaliza el proceso
    glFlush();//guarda los comando, para optimizar el rendimiento
    glutSwapBuffers();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);//matriz actual para realizar la compocicion
    glLoadIdentity();//carga l matriz identidad
    gluPerspective(45.0f, 1.0f, 1.0f, 100.0f); //configura la vista del objeto.
    gluLookAt(2.0f, 2.0f, 2.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.80f,0.80f );//parametros de la vista de la camara
    //glOrtho(1.0, 0.0, 1.0, 0.0, -1.0, 1.0);
}

int main(int argc, char** argv)// variables 
{
    glutInit(&argc, argv);//inicializa los parametros 
    //glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);//da el color real a la ventana
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (800, 600);//tamaño de la ventana
    glutInitWindowPosition (0,0);//posicion de la ventana en la pntalla
    glutCreateWindow ("Ejemplo Puntos");//crea la venta y el nombre de esta misma
    init();
    glutDisplayFunc(display);//Funcion de retrollamada
    glutMainLoop();//se encarga de pasar los eventos
    return 0; //retona 
}





