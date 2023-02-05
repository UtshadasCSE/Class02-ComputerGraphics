#include<GL/gl.h>
#include<GL/glu.h>
#include<GL/glut.h>
void PC_H(){
    //clear the Frame Buffer
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    //we will draw here



    //display the content of the frame buffer
    glFlush();
}
void init(){
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
}
int main(int argc,char** argv){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB);


    glutInitWindowPosition(100,150);
    glutInitWindowSize(300,300);

    glutCreateWindow("Class 2nd");
    glutDisplayFunc(PC_H);

    init();
    glutMainLoop();




    return 0;

}
