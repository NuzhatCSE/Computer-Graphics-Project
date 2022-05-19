#include<GL/glut.h>

void init()
{
    //display window color
    glClearColor(0.5, 0.9, 0.4, 0.0);
    //projection parameter
    glMatrixMode(GL_PROJECTION);
    //2D transformation
    gluOrtho2D(0.0, 1200, 0.0, 900);
}

void home()
{

    //ROOF of HOUSE
    glClear(GL_COLOR_BUFFER_BIT);


    glColor3f(0.3, 0.5, 0.8);
    glBegin(GL_POLYGON);
    glVertex2i(200, 500);
    glVertex2i(600, 500);
    glVertex2i(700, 350);
    glVertex2i(300, 350);
    glEnd();

    //Lines of ROOF
    glColor3f(255.0, 255.0, 255.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(250, 500);
    glVertex2i(350, 350);
    glEnd();

    glColor3f(255.0, 255.0, 255.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(300, 500);
    glVertex2i(400, 350);
    glEnd();

    glColor3f(255.0, 255.0, 255.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(350, 500);
    glVertex2i(450, 350);
    glEnd();

    glColor3f(255.0, 255.0, 255.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(400, 500);
    glVertex2i(500, 350);
    glEnd();

    glColor3f(255.0, 255.0, 255.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(450, 500);
    glVertex2i(550, 350);
    glEnd();

    glColor3f(255.0, 255.0, 255.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(500, 500);
    glVertex2i(600, 350);
    glEnd();

    glColor3f(255.0, 255.0, 255.0);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(550, 500);
    glVertex2i(650, 350);
    glEnd();




    // Front roof top
    glColor3f(0.5, 0.2, 0.0);
    glBegin(GL_TRIANGLES);
    glVertex2i(200, 500);
    glVertex2i(100, 350);
    glVertex2i(300, 350);
    glEnd();


    //front wall
    glColor3f(0.04, 0.1, 0.2);
    glBegin(GL_POLYGON);
    glVertex2i(100, 350);
    glVertex2i(300, 350);
    glVertex2i(300, 100);
    glVertex2i(100, 100);
    glEnd();


    //side wall
    glColor3f(0.1, 0.2, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(300,350);
    glVertex2i(700, 350);
    glVertex2i(700, 100);
    glVertex2i(300, 100);
    glEnd();


    //door
    glColor3f(0.5, 0.2, 0.0);
    glBegin(GL_POLYGON);
    glVertex2i(150, 250);
    glVertex2i(250, 250);
    glVertex2i(250, 100);
    glVertex2i(150, 100);
    glEnd();


    // Front Door Lock
    glColor3f(0.3, 0.7, 0.9);
    glPointSize(15);
    glBegin(GL_POINTS);
    glVertex2i(170, 170);
    glEnd();


    // window one
    glColor3f(0.8, 0.8, 0.1);
    glBegin(GL_POLYGON);
    glVertex2i(330, 320);
    glVertex2i(450, 320);
    glVertex2i(450, 230);
    glVertex2i(330, 230);
    glEnd();


    // line of window one
    glColor3f(0.1, 0.1, 0.1);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(390, 320);
    glVertex2i(390, 230);
    glVertex2i(330, 273);
    glVertex2i(450, 273);
    glEnd();


    // window two
    glColor3f(0.8, 0.8, 0.1);
    glBegin(GL_POLYGON);
    glVertex2i(530, 320);
    glVertex2i(650, 320);
    glVertex2i(650, 230);
    glVertex2i(530, 230);
    glEnd();


    // lines of window two
    glColor3f(0.1, 0.1, 0.1);
    glLineWidth(5);
    glBegin(GL_LINES);
    glVertex2i(590, 320);
    glVertex2i(590, 230);
    glVertex2i(530, 273);
    glVertex2i(650, 273);
    glEnd();


    //corridor
    //glColor3f(0.8, 0.8, 0.1);
    //glColor3f(0, 0, 0);
    glColor3f(128, 128, 128);
    glBegin(GL_POLYGON);
    glVertex2i(75, 100);
    glVertex2i(730, 100);
    glVertex2i(770, 60);
    glVertex2i(35, 60);
    glEnd();


    // Entrance Path
    glColor3f(0.3, 0.5, 0.7);
    glLineWidth(3);
    glBegin(GL_POLYGON);
    glVertex2i(150, 75);
    glVertex2i(250, 75);
    glVertex2i(210, -50);
    glVertex2i(40, -50);
    glEnd();


    glFlush();
}

int main(int argc, char ** argv)
{
    //Initialize glut
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowPosition(100, 100);

    //glutInitWindowSize(1000, 800);
    glutInitWindowSize(800, 600);

    glutCreateWindow("2D House in OpenGL");


    init();
    glutDisplayFunc(home);

    glutMainLoop();

}






