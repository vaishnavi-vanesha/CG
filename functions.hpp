#include<GL/glut.h>
#include<string.h>
float j;
void water()
{
    glBegin(GL_QUADS);
    glColor3f(0.0,0.4,0.7);
    glVertex3f(-5.0,-0.415,5.0);
    glVertex3f(5.0,-0.415,5.0);
    glVertex3f(5.0,-0.415,-5.0);
    glVertex3f(-5.0,-0.415,-5.0);
    glEnd();
}

void lines()
{
    float t1,t2;
    glBegin(GL_LINES);
    for(t1=0.0;t1<=10.0;t1+=0.4)
    {
     for(t2=0.0;t2<=10.0;t2+=0.4)
     {
       glColor3f(0.7,0.7,0.7);
       glVertex3f(-5.0+t2,-0.41,-4.5+t1);
       glVertex3f(-4.95+t2,-0.41,-4.5+t1);
     }
    }
    glEnd();
}

void base()
{
    float i;
    for(i=0.0;i<1.0;i+=0.8)
    {
    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.1);  //front
    glVertex3f(-0.5+i,-0.4,0.2);
    glVertex3f(-0.3+i,-0.4,0.2);
    glVertex3f(-0.3+i,-0.25,0.2);
    glVertex3f(-0.5+i,-0.25,0.2);

    glColor3f(0.3,0.3,0.3);  //left
    glVertex3f(-0.5+i,-0.4,0.2);
    glVertex3f(-0.5+i,-0.4,-0.2);
    glVertex3f(-0.5+i,-0.25,-0.2);
    glVertex3f(-0.5+i,-0.25,0.2);

    glColor3f(0.1,0.1,0.1);  //back
    glVertex3f(-0.5+i,-0.4,-0.2);
    glVertex3f(-0.3+i,-0.4,-0.2);
    glVertex3f(-0.3+i,-0.25,-0.2);
    glVertex3f(-0.5+i,-0.25,-0.2);

    glColor3f(0.3,0.3,0.3);  //right
    glVertex3f(-0.3+i,-0.4,0.2);
    glVertex3f(-0.3+i,-0.4,-0.2);
    glVertex3f(-0.3+i,-0.25,-0.2);
    glVertex3f(-0.3+i,-0.25,0.2);

    glColor3f(0.5,0.5,0.5);  //top
    glVertex3f(-0.5+i,-0.25,0.2);
    glVertex3f(-0.3+i,-0.25,0.2);
    glVertex3f(-0.3+i,-0.25,-0.2);
    glVertex3f(-0.5+i,-0.25,-0.2);
    glEnd();
    }
}

void earth()
{
    float i;
    for(i=0.0;i<4.0;i+=3.5)
    {
    glBegin(GL_QUADS);
    glColor3f(0.0,0.6,0.0);
    glVertex3f(-3.0+i,-0.4,0.17);  //front
    glVertex3f(-0.5+i,-0.4,0.17);
    glVertex3f(-0.5+i,-0.25,0.17);
    glVertex3f(-3.0+i,-0.25,0.17);

    glVertex3f(-3.0+i,-0.4,-0.17); //back
    glVertex3f(-0.5+i,-0.4,-0.17);
    glVertex3f(-0.5+i,-0.25,-0.17);
    glVertex3f(-3.0+i,-0.25,-0.17);

    glColor3f(0.0,0.5,0.0);   //top
    glVertex3f(-3.0+i,-0.25,0.17);
    glVertex3f(-0.5+i,-0.25,0.17);
    glVertex3f(-0.5+i,-0.25,-0.17);
    glVertex3f(-3.0+i,-0.25,-0.17);
    glEnd();
    }
}

void pillars()
{
    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(-0.35,-0.25,0.2);
    glVertex3f(-0.31,-0.25,0.2);
    glVertex3f(-0.31,0.2,0.2);
    glVertex3f(-0.35,0.2,0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(-0.35,-0.25,0.2);
    glVertex3f(-0.35,-0.25,0.15);
    glVertex3f(-0.35,0.2,0.15);
    glVertex3f(-0.35,0.2,0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(-0.35,-0.25,0.15);
    glVertex3f(-0.31,-0.25,0.15);
    glVertex3f(-0.31,0.2,0.15);
    glVertex3f(-0.35,0.2,0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(-0.31,-0.25,0.2);
    glVertex3f(-0.31,-0.25,0.15);
    glVertex3f(-0.31,0.2,0.15);
    glVertex3f(-0.31,0.2,0.2);
    //back
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(-0.35,-0.25,-0.2);
    glVertex3f(-0.31,-0.25,-0.2);
    glVertex3f(-0.31,0.2,-0.2);
    glVertex3f(-0.35,0.2,-0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(-0.35,-0.25,-0.2);
    glVertex3f(-0.35,-0.25,-0.15);
    glVertex3f(-0.35,0.2,-0.15);
    glVertex3f(-0.35,0.2,-0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(-0.35,-0.25,-0.15);
    glVertex3f(-0.31,-0.25,-0.15);
    glVertex3f(-0.31,0.2,-0.15);
    glVertex3f(-0.35,0.2,-0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(-0.31,-0.25,-0.2);
    glVertex3f(-0.31,-0.25,-0.15);
    glVertex3f(-0.31,0.2,-0.15);
    glVertex3f(-0.31,0.2,-0.2);
    //top
    glColor3f(0.2,0.2,0.5);
    glVertex3f(-0.35,0.2,0.3);
    glVertex3f(-0.31,0.2,0.3);
    glVertex3f(-0.31,0.25,0.3);
    glVertex3f(-0.35,0.25,0.3);

    glColor3f(0.3,0.3,0.5);
    glVertex3f(-0.35,0.2,0.3);
    glVertex3f(-0.35,0.2,-0.3);
    glVertex3f(-0.35,0.25,-0.3);
    glVertex3f(-0.35,0.25,0.3);

    glColor3f(0.2,0.2,0.5);
    glVertex3f(-0.35,0.2,-0.3);
    glVertex3f(-0.31,0.2,-0.3);
    glVertex3f(-0.31,0.25,-0.3);
    glVertex3f(-0.35,0.25,-0.3);

    glColor3f(0.3,0.3,0.5);
    glVertex3f(-0.31,0.2,0.3);
    glVertex3f(-0.31,0.2,-0.3);
    glVertex3f(-0.31,0.25,-0.3);
    glVertex3f(-0.31,0.25,0.3);

    glColor3f(0.3,0.3,0.6);
    glVertex3f(-0.35,0.25,0.3);
    glVertex3f(-0.31,0.25,0.3);
    glVertex3f(-0.31,0.25,-0.3);
    glVertex3f(-0.35,0.25,-0.3);
    //top piller
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(-0.35,0.25,0.2);
    glVertex3f(-0.31,0.25,0.2);
    glVertex3f(-0.31,0.35,0.2);
    glVertex3f(-0.35,0.35,0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(-0.35,0.25,0.2);
    glVertex3f(-0.35,0.25,0.15);
    glVertex3f(-0.35,0.35,0.15);
    glVertex3f(-0.35,0.35,0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(-0.35,0.25,0.15);
    glVertex3f(-0.31,0.25,0.15);
    glVertex3f(-0.31,0.35,0.15);
    glVertex3f(-0.35,0.35,0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(-0.31,0.25,0.2);
    glVertex3f(-0.31,0.25,0.15);
    glVertex3f(-0.31,0.35,0.15);
    glVertex3f(-0.31,0.35,0.2);
    //back
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(-0.35,0.25,-0.2);
    glVertex3f(-0.31,0.25,-0.2);
    glVertex3f(-0.31,0.35,-0.2);
    glVertex3f(-0.35,0.35,-0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(-0.35,0.25,-0.2);
    glVertex3f(-0.35,0.25,-0.15);
    glVertex3f(-0.35,0.35,-0.15);
    glVertex3f(-0.35,0.35,-0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(-0.35,0.25,-0.15);
    glVertex3f(-0.31,0.25,-0.15);
    glVertex3f(-0.31,0.35,-0.15);
    glVertex3f(-0.35,0.35,-0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(-0.31,0.25,-0.2);
    glVertex3f(-0.31,0.25,-0.15);
    glVertex3f(-0.31,0.35,-0.15);
    glVertex3f(-0.31,0.35,-0.2);
    glEnd();

    //right side
    glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(0.35,-0.25,0.2);
    glVertex3f(0.31,-0.25,0.2);
    glVertex3f(0.31,0.2,0.2);
    glVertex3f(0.35,0.2,0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(0.35,-0.25,0.2);
    glVertex3f(0.35,-0.25,0.15);
    glVertex3f(0.35,0.2,0.15);
    glVertex3f(0.35,0.2,0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(0.35,-0.25,0.15);
    glVertex3f(0.31,-0.25,0.15);
    glVertex3f(0.31,0.2,0.15);
    glVertex3f(0.35,0.2,0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(0.31,-0.25,0.2);
    glVertex3f(0.31,-0.25,0.15);
    glVertex3f(0.31,0.2,0.15);
    glVertex3f(0.31,0.2,0.2);
    //back
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(0.35,-0.25,-0.2);
    glVertex3f(0.31,-0.25,-0.2);
    glVertex3f(0.31,0.2,-0.2);
    glVertex3f(0.35,0.2,-0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(0.35,-0.25,-0.2);
    glVertex3f(0.35,-0.25,-0.15);
    glVertex3f(0.35,0.2,-0.15);
    glVertex3f(0.35,0.2,-0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(0.35,-0.25,-0.15);
    glVertex3f(0.31,-0.25,-0.15);
    glVertex3f(0.31,0.2,-0.15);
    glVertex3f(0.35,0.2,-0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(0.31,-0.25,-0.2);
    glVertex3f(0.31,-0.25,-0.15);
    glVertex3f(0.31,0.2,-0.15);
    glVertex3f(0.31,0.2,-0.2);
    //top
    glColor3f(0.2,0.2,0.5);
    glVertex3f(0.35,0.2,0.3);
    glVertex3f(0.31,0.2,0.3);
    glVertex3f(0.31,0.25,0.3);
    glVertex3f(0.35,0.25,0.3);

    glColor3f(0.3,0.3,0.5);
    glVertex3f(0.35,0.2,0.3);
    glVertex3f(0.35,0.2,-0.3);
    glVertex3f(0.35,0.25,-0.3);
    glVertex3f(0.35,0.25,0.3);

    glColor3f(0.2,0.2,0.5);
    glVertex3f(0.35,0.2,-0.3);
    glVertex3f(0.31,0.2,-0.3);
    glVertex3f(0.31,0.25,-0.3);
    glVertex3f(0.35,0.25,-0.3);

    glColor3f(0.3,0.3,0.5);
    glVertex3f(0.31,0.2,0.3);
    glVertex3f(0.31,0.2,-0.3);
    glVertex3f(0.31,0.25,-0.3);
    glVertex3f(0.31,0.25,0.3);

    glColor3f(0.3,0.3,0.6);
    glVertex3f(0.35,0.25,0.3);
    glVertex3f(0.31,0.25,0.3);
    glVertex3f(0.31,0.25,-0.3);
    glVertex3f(0.35,0.25,-0.3);
    //top piller
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(0.35,0.25,0.2);
    glVertex3f(0.31,0.25,0.2);
    glVertex3f(0.31,0.35,0.2);
    glVertex3f(0.35,0.35,0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(0.35,0.25,0.2);
    glVertex3f(0.35,0.25,0.15);
    glVertex3f(0.35,0.35,0.15);
    glVertex3f(0.35,0.35,0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(0.35,0.25,0.15);
    glVertex3f(0.31,0.25,0.15);
    glVertex3f(0.31,0.35,0.15);
    glVertex3f(0.35,0.35,0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(0.31,0.25,0.2);
    glVertex3f(0.31,0.25,0.15);
    glVertex3f(0.31,0.35,0.15);
    glVertex3f(0.31,0.35,0.2);
    //back
    glColor3f(0.1,0.1,0.5);  //front
    glVertex3f(0.35,0.25,-0.2);
    glVertex3f(0.31,0.25,-0.2);
    glVertex3f(0.31,0.35,-0.2);
    glVertex3f(0.35,0.35,-0.2);

    glColor3f(0.1,0.1,0.3);   //left
    glVertex3f(0.35,0.25,-0.2);
    glVertex3f(0.35,0.25,-0.15);
    glVertex3f(0.35,0.35,-0.15);
    glVertex3f(0.35,0.35,-0.2);

    glColor3f(0.1,0.1,0.5);  //back
    glVertex3f(0.35,0.25,-0.15);
    glVertex3f(0.31,0.25,-0.15);
    glVertex3f(0.31,0.35,-0.15);
    glVertex3f(0.35,0.35,-0.15);

    glColor3f(0.1,0.1,0.3);  //right
    glVertex3f(0.31,0.25,-0.2);
    glVertex3f(0.31,0.25,-0.15);
    glVertex3f(0.31,0.35,-0.15);
    glVertex3f(0.31,0.35,-0.2);
    glEnd();
    //slops front
    glBegin(GL_QUADS);
    glColor3f(0.8,0.6,0.5);
    glVertex3f(-0.6,-0.25,0.17);
    glVertex3f(-0.5,-0.25,0.17);
    glVertex3f(-0.35,0.2,0.17);
    glVertex3f(-0.35,0.25,0.17);
    //BACK
    glVertex3f(-0.6,-0.25,-0.17);
    glVertex3f(-0.5,-0.25,-0.17);
    glVertex3f(-0.35,0.2,-0.17);
    glVertex3f(-0.35,0.25,-0.17);
    //right front
    glVertex3f(0.6,-0.25,0.17);
    glVertex3f(0.5,-0.25,0.17);
    glVertex3f(0.35,0.2,0.17);
    glVertex3f(0.35,0.25,0.17);
    //Back
    glVertex3f(0.6,-0.25,-0.17);
    glVertex3f(0.5,-0.25,-0.17);
    glVertex3f(0.35,0.2,-0.17);
    glVertex3f(0.35,0.25,-0.17);
    glEnd();
}

void bridge()
{
    glBegin(GL_QUADS);
    glColor3f(0.1,0.2,0.3);
    glVertex3f(-0.3,-0.25,0.15);
    glVertex3f(0.3,-0.25,0.15);
    glVertex3f(0.3,-0.23,0.15);
    glVertex3f(-0.3,-0.23,0.15);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(-0.3,-0.25,0.15);
    glVertex3f(-0.3,-0.25,-0.15);
    glVertex3f(-0.3,-0.23,-0.15);
    glVertex3f(-0.3,-0.23,0.15);

    glColor3f(0.1,0.2,0.3);
    glVertex3f(-0.3,-0.25,-0.15);
    glVertex3f(0.3,-0.25,-0.15);
    glVertex3f(0.3,-0.23,-0.15);
    glVertex3f(-0.3,-0.23,-0.15);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(0.3,-0.25,0.15);
    glVertex3f(0.3,-0.25,-0.15);
    glVertex3f(0.3,-0.23,-0.15);
    glVertex3f(0.3,-0.23,0.15);

    glColor3f(0.3,0.3,0.4);
    glVertex3f(-0.3,-0.23,0.15);
    glVertex3f(0.3,-0.23,0.15);
    glVertex3f(0.3,-0.23,-0.15);
    glVertex3f(-0.3,-0.23,-0.15);
    glEnd();
    //pillers
    //left front
    glBegin(GL_QUADS);
    glColor3f(0.3,0.2,0.1);
    glVertex3f(-0.3,-0.23,0.15);
    glVertex3f(-0.28,-0.23,0.15);
    glVertex3f(-0.28,0.1,0.15);
    glVertex3f(-0.3,0.1,0.15);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(-0.3,-0.23,0.15);
    glVertex3f(-0.3,-0.23,0.12);
    glVertex3f(-0.3,0.1,0.12);
    glVertex3f(-0.3,0.1,0.15);

    glColor3f(0.3,0.2,0.1);
    glVertex3f(-0.3,-0.23,0.12);
    glVertex3f(-0.28,-0.23,0.12);
    glVertex3f(-0.28,0.1,0.12);
    glVertex3f(-0.3,0.1,0.12);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(-0.28,-0.23,0.15);
    glVertex3f(-0.28,-0.23,0.12);
    glVertex3f(-0.28,0.1,0.12);
    glVertex3f(-0.28,0.1,0.15);
    glEnd();
    //right front
    glBegin(GL_QUADS);
    glColor3f(0.3,0.2,0.1);
    glVertex3f(0.3,-0.23,0.15);
    glVertex3f(0.28,-0.23,0.15);
    glVertex3f(0.28,0.1,0.15);
    glVertex3f(0.3,0.1,0.15);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(0.3,-0.23,0.15);
    glVertex3f(0.3,-0.23,0.12);
    glVertex3f(0.3,0.1,0.12);
    glVertex3f(0.3,0.1,0.15);

    glColor3f(0.3,0.2,0.1);
    glVertex3f(0.3,-0.23,0.12);
    glVertex3f(0.28,-0.23,0.12);
    glVertex3f(0.28,0.1,0.12);
    glVertex3f(0.3,0.1,0.12);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(0.28,-0.23,0.15);
    glVertex3f(0.28,-0.23,0.12);
    glVertex3f(0.28,0.1,0.12);
    glVertex3f(0.28,0.1,0.15);
    glEnd();
    //left back
    glBegin(GL_QUADS);
    glColor3f(0.3,0.2,0.1);
    glVertex3f(-0.3,-0.23,-0.15);
    glVertex3f(-0.28,-0.23,-0.15);
    glVertex3f(-0.28,0.1,-0.15);
    glVertex3f(-0.3,0.1,-0.15);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(-0.3,-0.23,-0.15);
    glVertex3f(-0.3,-0.23,-0.12);
    glVertex3f(-0.3,0.1,-0.12);
    glVertex3f(-0.3,0.1,-0.15);

    glColor3f(0.3,0.2,0.1);
    glVertex3f(-0.3,-0.23,-0.12);
    glVertex3f(-0.28,-0.23,-0.12);
    glVertex3f(-0.28,0.1,-0.12);
    glVertex3f(-0.3,0.1,-0.12);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(-0.28,-0.23,-0.15);
    glVertex3f(-0.28,-0.23,-0.12);
    glVertex3f(-0.28,0.1,-0.12);
    glVertex3f(-0.28,0.1,-0.15);
    glEnd();
    //right back
    glBegin(GL_QUADS);
    glColor3f(0.3,0.2,0.1);
    glVertex3f(0.3,-0.23,-0.15);
    glVertex3f(0.28,-0.23,-0.15);
    glVertex3f(0.28,0.1,-0.15);
    glVertex3f(0.3,0.1,-0.15);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(0.3,-0.23,-0.15);
    glVertex3f(0.3,-0.23,-0.12);
    glVertex3f(0.3,0.1,-0.12);
    glVertex3f(0.3,0.1,-0.15);

    glColor3f(0.3,0.2,0.1);
    glVertex3f(0.3,-0.23,-0.12);
    glVertex3f(0.28,-0.23,-0.12);
    glVertex3f(0.28,0.1,-0.12);
    glVertex3f(0.3,0.1,-0.12);

    glColor3f(0.3,0.2,0.3);
    glVertex3f(0.28,-0.23,-0.15);
    glVertex3f(0.28,-0.23,-0.12);
    glVertex3f(0.28,0.1,-0.12);
    glVertex3f(0.28,0.1,-0.15);
    glEnd();
    //top left
    glBegin(GL_QUADS);
    glColor3f(0.4,0.3,0.2);
    glVertex3f(-0.3,0.1,0.15);
    glVertex3f(-0.28,0.1,0.15);
    glVertex3f(-0.28,0.13,0.15);
    glVertex3f(-0.3,0.13,0.15);

    glColor3f(0.5,0.3,0.2);
    glVertex3f(-0.3,0.1,0.15);
    glVertex3f(-0.3,0.1,-0.15);
    glVertex3f(-0.3,0.13,-0.15);
    glVertex3f(-0.3,0.13,0.15);

    glColor3f(0.4,0.3,0.2);
    glVertex3f(-0.3,0.1,-0.15);
    glVertex3f(-0.28,0.1,-0.15);
    glVertex3f(-0.28,0.13,-0.15);
    glVertex3f(-0.3,0.13,-0.15);

    glColor3f(0.5,0.3,0.2);
    glVertex3f(-0.28,0.1,0.15);
    glVertex3f(-0.28,0.1,-0.15);
    glVertex3f(-0.28,0.13,-0.15);
    glVertex3f(-0.28,0.13,0.15);
    glEnd();

    //top right
    glBegin(GL_QUADS);
    glColor3f(0.4,0.3,0.2);
    glVertex3f(0.3,0.1,0.15);
    glVertex3f(0.28,0.1,0.15);
    glVertex3f(0.28,0.13,0.15);
    glVertex3f(0.3,0.13,0.15);

    glColor3f(0.5,0.3,0.2);
    glVertex3f(0.3,0.1,0.15);
    glVertex3f(0.3,0.1,-0.15);
    glVertex3f(0.3,0.13,-0.15);
    glVertex3f(0.3,0.13,0.15);

    glColor3f(0.4,0.3,0.2);
    glVertex3f(0.3,0.1,-0.15);
    glVertex3f(0.28,0.1,-0.15);
    glVertex3f(0.28,0.13,-0.15);
    glVertex3f(0.3,0.13,-0.15);

    glColor3f(0.5,0.3,0.2);
    glVertex3f(0.28,0.1,0.15);
    glVertex3f(0.28,0.1,-0.15);
    glVertex3f(0.28,0.13,-0.15);
    glVertex3f(0.28,0.13,0.15);
    glEnd();
    //sides front
    glBegin(GL_QUADS);
    glColor3f(0.4,0.3,0.5);
    glVertex3f(-0.28,-0.15,0.15);
    glVertex3f(0.28,-0.15,0.15);
    glVertex3f(0.28,-0.12,0.15);
    glVertex3f(-0.28,-0.12,0.15);

    glVertex3f(-0.28,-0.15,0.12);
    glVertex3f(0.28,-0.15,0.12);
    glVertex3f(0.28,-0.12,0.12);
    glVertex3f(-0.28,-0.12,0.12);
    //back
    glVertex3f(-0.28,-0.15,-0.15);
    glVertex3f(0.28,-0.15,-0.15);
    glVertex3f(0.28,-0.12,-0.15);
    glVertex3f(-0.28,-0.12,-0.15);

    glVertex3f(-0.28,-0.15,-0.12);
    glVertex3f(0.28,-0.15,-0.12);
    glVertex3f(0.28,-0.12,-0.12);
    glVertex3f(-0.28,-0.12,-0.12);
    glEnd();
    //top
    glBegin(GL_QUADS);
    glColor3f(0.4,0.3,0.5);
    glVertex3f(-0.28,0.1,0.15);
    glVertex3f(0.28,0.1,0.15);
    glVertex3f(0.28,0.13,0.15);
    glVertex3f(-0.28,0.13,0.15);

    glVertex3f(-0.28,0.1,0.12);
    glVertex3f(0.28,0.1,0.12);
    glVertex3f(0.28,0.13,0.12);
    glVertex3f(-0.28,0.13,0.12);
    //back
    glVertex3f(-0.28,0.1,-0.15);
    glVertex3f(0.28,0.1,-0.15);
    glVertex3f(0.28,0.13,-0.15);
    glVertex3f(-0.28,0.13,-0.15);

    glVertex3f(-0.28,0.1,-0.12);
    glVertex3f(0.28,0.1,-0.12);
    glVertex3f(0.28,0.13,-0.12);
    glVertex3f(-0.28,0.13,-0.12);
    glEnd();
    //house
    glColor3f(0.8,0.1,0.1);
    glPushMatrix();
    glTranslatef(0.0,0.25,0.0);
    glutSolidCube(0.25);
    glPopMatrix();
    glBegin(GL_QUADS); //WINDOW
    glColor3f(1.0,1.0,1.0);
    glVertex3f(-0.05,0.18,0.16);
    glVertex3f(0.05,0.18,0.16);
    glVertex3f(0.05,0.25,0.16);
    glVertex3f(-0.05,0.25,0.16);
    glEnd();

    glBegin(GL_TRIANGLES);  //ROOF
    glColor3f(1.0,0.8,0.0);
    glVertex3f(-0.16,0.35,0.16);
    glVertex3f(0.16,0.35,0.16);
    glVertex3f(0.0,0.5,0.0);

    glVertex3f(-0.16,0.35,0.16);
    glVertex3f(-0.16,0.35,-0.16);
    glVertex3f(0.0,0.5,0.0);

    glVertex3f(-0.16,0.35,-0.16);
    glVertex3f(0.16,0.35,-0.16);
    glVertex3f(0.0,0.5,0.0);

    glVertex3f(0.16,0.35,0.16);
    glVertex3f(0.16,0.35,-0.16);
    glVertex3f(0.0,0.5,0.0);
    glEnd();
}

void track()
{
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    //left
    glVertex3f(-3.0,-0.23,0.12);
    glVertex3f(-0.3,-0.23,0.12);

    glVertex3f(-3.0,-0.23,0.1);
    glVertex3f(-0.3,-0.23,0.1);

    glVertex3f(-3.0,-0.23,-0.12);
    glVertex3f(-0.3,-0.23,-0.12);

    glVertex3f(-3.0,-0.23,-0.1);
    glVertex3f(-0.3,-0.23,-0.1);
    //right
    glVertex3f(3.0,-0.23,0.12);
    glVertex3f(0.3,-0.23,0.12);

    glVertex3f(3.0,-0.23,0.1);
    glVertex3f(0.3,-0.23,0.1);

    glVertex3f(3.0,-0.23,-0.12);
    glVertex3f(0.3,-0.23,-0.12);

    glVertex3f(3.0,-0.23,-0.1);
    glVertex3f(0.3,-0.23,-0.1);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0.0,0.0,0.0);
    for(j=0.0;j<=2.6;j+=0.1)
    {
        glVertex3f(-3.0+j,-0.23,0.1);
        glVertex3f(-3.0+j,-0.23,-0.1);
    }
    for(j=0.0;j<=3;j+=0.1)
    {
        glVertex3f(0.3+j,-0.23,0.1);
        glVertex3f(0.3+j,-0.23,-0.1);
    }
    glEnd();
}

void ship()
{
    glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.8);   //base
    glVertex3f(-0.2,-0.4,-3.5);
    glVertex3f(0.2,-0.4,-3.5);
    glVertex3f(0.2,-0.3,-3.5);
    glVertex3f(-0.2,-0.3,-3.5);

    glColor3f(0.8,0.8,1.0);
    glVertex3f(-0.2,-0.4,-3.5);
    glVertex3f(-0.2,-0.4,-4.8);
    glVertex3f(-0.2,-0.3,-5.0);
    glVertex3f(-0.2,-0.3,-3.5);

    glColor3f(0.8,0.8,0.8);
    glVertex3f(-0.2,-0.4,-4.8);
    glVertex3f(0.2,-0.4,-4.8);
    glVertex3f(0.2,-0.3,-5.0);
    glVertex3f(-0.2,-0.3,-5.0);

    glColor3f(0.8,0.8,1.0);
    glVertex3f(0.2,-0.4,-3.5);
    glVertex3f(0.2,-0.4,-4.8);
    glVertex3f(0.2,-0.3,-5.0);
    glVertex3f(0.2,-0.3,-3.5);

    glColor3f(1.0,0.8,1.0);
    glVertex3f(-0.2,-0.3,-3.5);
    glVertex3f(0.2,-0.3,-3.5);
    glVertex3f(0.2,-0.3,-5.0);
    glVertex3f(-0.2,-0.3,-5.0);
    //top
    glColor3f(1.0,0.0,0.7);
    glVertex3f(-0.18,-0.3,-3.7);
    glVertex3f(0.18,-0.3,-3.7);
    glVertex3f(0.18,-0.2,-3.7);
    glVertex3f(-0.18,-0.2,-3.7);

    glColor3f(1.0,0.0,0.5);
    glVertex3f(-0.18,-0.3,-3.7);
    glVertex3f(-0.18,-0.3,-4.8);
    glVertex3f(-0.18,-0.2,-4.8);
    glVertex3f(-0.18,-0.2,-3.7);

    glColor3f(1.0,0.0,0.7);
    glVertex3f(-0.18,-0.3,-3.7);
    glVertex3f(0.18,-0.3,-4.8);
    glVertex3f(0.18,-0.2,-4.8);
    glVertex3f(-0.18,-0.2,-3.7);

    glColor3f(1.0,0.0,0.5);
    glVertex3f(0.18,-0.3,-3.7);
    glVertex3f(0.18,-0.3,-4.8);
    glVertex3f(0.18,-0.2,-4.8);
    glVertex3f(0.18,-0.2,-3.7);

    glColor3f(1.0,0.1,0.8);
    glVertex3f(-0.18,-0.2,-3.7);
    glVertex3f(0.18,-0.2,-3.7);
    glVertex3f(0.18,-0.2,-4.8);
    glVertex3f(-0.18,-0.2,-4.8);
    glEnd();
    //front
    glBegin(GL_TRIANGLES);
    glColor3f(0.5,0.5,0.7);
    glVertex3f(-0.2,-0.4,-3.5);
    glVertex3f(-0.2,-0.3,-3.5);
    glVertex3f(0.0,-0.15,-2.2);

    glColor3f(0.5,0.8,0.7);
    glVertex3f(-0.2,-0.4,-3.5);
    glVertex3f(0.2,-0.4,-3.5);
    glVertex3f(0.0,-0.15,-2.2);

    glColor3f(0.5,0.5,0.7);
    glVertex3f(0.2,-0.4,-3.5);
    glVertex3f(0.2,-0.3,-3.5);
    glVertex3f(0.0,-0.15,-2.2);
    glEnd();
    //TOP PILLARS
    glBegin(GL_QUADS);
    glColor3f(1.0,0.8,0.1);
    glVertex3f(-0.05,-0.2,-3.8);
    glVertex3f(0.05,-0.2,-3.8);
    glVertex3f(0.05,0.1,-3.8);
    glVertex3f(-0.05,0.1,-3.8);

    glColor3f(1.0,0.8,0.2);
    glVertex3f(-0.05,-0.2,-3.8);
    glVertex3f(-0.05,-0.2,-4.0);
    glVertex3f(-0.05,0.1,-4.0);
    glVertex3f(-0.05,0.1,-3.8);

    glColor3f(1.0,0.8,0.1);
    glVertex3f(-0.05,-0.2,-4.0);
    glVertex3f(0.05,-0.2,-4.0);
    glVertex3f(0.05,0.1,-4.0);
    glVertex3f(-0.05,0.1,-4.0);

    glColor3f(1.0,0.8,0.2);
    glVertex3f(0.05,-0.2,-3.8);
    glVertex3f(0.05,-0.2,-4.0);
    glVertex3f(0.05,0.1,-4.0);
    glVertex3f(0.05,0.1,-3.8);
    //back
    glColor3f(1.0,0.5,0.1);
    glVertex3f(-0.05,-0.2,-4.2);
    glVertex3f(0.05,-0.2,-4.2);
    glVertex3f(0.05,0.2,-4.2);
    glVertex3f(-0.05,0.2,-4.2);

    glColor3f(1.0,0.6,0.2);
    glVertex3f(-0.05,-0.2,-4.2);
    glVertex3f(-0.05,-0.2,-4.5);
    glVertex3f(-0.05,0.2,-4.5);
    glVertex3f(-0.05,0.2,-4.2);

    glColor3f(1.0,0.5,0.1);
    glVertex3f(-0.05,-0.2,-4.5);
    glVertex3f(0.05,-0.2,-4.5);
    glVertex3f(0.05,0.2,-4.5);
    glVertex3f(-0.05,0.2,-4.5);

    glColor3f(1.0,0.6,0.2);
    glVertex3f(0.05,-0.2,-4.2);
    glVertex3f(0.05,-0.2,-4.5);
    glVertex3f(0.05,0.2,-4.5);
    glVertex3f(0.05,0.2,-4.2);
    glEnd();
}

void train()
{
    glBegin(GL_QUADS);   //engine
    glColor3f(0.8,0.6,0.4);
    glVertex3f(1.0,-0.23,0.1);
    glVertex3f(1.15,-0.23,0.1);
    glVertex3f(1.15,-0.14,0.1);
    glVertex3f(1.0,-0.14,0.1);

    glColor3f(0.5,0.5,0.8);
    glVertex3f(1.0,-0.23,0.1);
    glVertex3f(1.0,-0.23,-0.1);
    glVertex3f(1.0,-0.14,-0.1);
    glVertex3f(1.0,-0.14,0.1);

    glColor3f(0.8,0.6,0.4);
    glVertex3f(1.0,-0.23,-0.1);
    glVertex3f(1.15,-0.23,-0.1);
    glVertex3f(1.15,-0.14,-0.1);
    glVertex3f(1.0,-0.14,-0.1);

    //FRONT
    glColor3f(0.0,0.1,0.9);
    glVertex3f(1.0,-0.14,0.1);
    glVertex3f(1.15,-0.05,0.1);
    glVertex3f(1.15,-0.05,-0.1);
    glVertex3f(1.0,-0.14,-0.1);

    glColor3f(0.8,0.6,0.2);
    glVertex3f(1.02,-0.12,0.1);
    glVertex3f(1.13,-0.05,0.1);
    glVertex3f(1.13,-0.05,-0.06);
    glVertex3f(1.02,-0.12,-0.06);
    glEnd();
    //side
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.0,0.0);
    glVertex3f(1.0,-0.14,0.1);
    glVertex3f(1.15,-0.14,0.1);
    glVertex3f(1.15,-0.05,0.1);

    glVertex3f(1.0,-0.14,-0.1);
    glVertex3f(1.15,-0.14,-0.1);
    glVertex3f(1.15,-0.05,-0.1);
    glEnd();
    //bogies
    glBegin(GL_QUADS);
    for(j=0.0;j<2;j+=0.27)
    {
    glColor3f(0.5,0.0,0.1);
    glVertex3f(1.15+j,-0.23,0.1);
    glVertex3f(1.4+j,-0.23,0.1);
    glVertex3f(1.4+j,-0.05,0.1);
    glVertex3f(1.15+j,-0.05,0.1);

    glColor3f(0.5,0.0,0.5);
    glVertex3f(1.15+j,-0.23,0.1);
    glVertex3f(1.15+j,-0.23,-0.1);
    glVertex3f(1.15+j,-0.05,-0.1);
    glVertex3f(1.15+j,-0.05,0.1);

    glColor3f(0.5,0.0,0.1);
    glVertex3f(1.15+j,-0.23,-0.1);
    glVertex3f(1.4+j,-0.23,-0.1);
    glVertex3f(1.4+j,-0.05,-0.1);
    glVertex3f(1.15+j,-0.05,-0.1);

    glColor3f(0.5,0.0,0.5);
    glVertex3f(1.4+j,-0.23,0.1);
    glVertex3f(1.4+j,-0.23,-0.1);
    glVertex3f(1.4+j,-0.05,-0.1);
    glVertex3f(1.4+j,-0.05,0.1);

    glColor3f(0.8,0.3,0.5);
    glVertex3f(1.15+j,-0.05,0.1);
    glVertex3f(1.4+j,-0.05,0.1);
    glVertex3f(1.4+j,-0.05,-0.1);
    glVertex3f(1.15+j,-0.05,-0.1);
    }
    glEnd();
}

void lighthouse()
{
    glBegin(GL_QUADS);
    glColor3f(0.8,0.2,0.0);
    glVertex3f(0.2,-0.42,-5.01);
    glVertex3f(0.35,-0.42,-5.01);
    glVertex3f(0.3,-0.1,-5.01);
    glVertex3f(0.25,-0.1,-5.01);
    glColor3f(1.0,1.0,1.0);
    glVertex3f(0.23,-0.1,-5.01);
    glVertex3f(0.32,-0.1,-5.01);
    glVertex3f(0.32,0.0,-5.01);
    glVertex3f(0.23,0.0,-5.01);

    glColor3f(1.0,1.0,1.0);
    glVertex3f(0.215,-0.3,-5.0);
    glVertex3f(0.33,-0.3,-5.0);
    glVertex3f(0.315,-0.2,-5.0);
    glVertex3f(0.23,-0.2,-5.0);

    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0,0.2,0.2);
    glVertex3f(0.2,0.0,-5.0);
    glVertex3f(0.35,0.0,-5.0);
    glVertex3f(0.27,0.05,-5.0);
    glEnd();
}
