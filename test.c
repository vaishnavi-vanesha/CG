#include<GL/glut.h>
#include<string.h>
#include "functions.hpp"

int i,flag=0,flagb=1,flags=0,flagt=0,flagp=0,flagw=1,flagx=0;
float a=0.0f,b=0.0f,c=0.0f,m=0.0f,n=0.0f,o=0.0f,p=0.0f,q=0.0f,r=0.0f,x=0.0f,y=0.0f,z=0.0f,a1=0.0,a2=0.0,a3=0.0;
float j;

void *currentfont;

void setFont(void *font)
{
	currentfont=font;
}
void drawstring(char string[],float x1,float y1,float z1)
{
    int i,j;
	j=strlen(string);
	glRasterPos3f(x1,y1,z1);
	for (i=0;i<j;i++)
	{
        glutBitmapCharacter(currentfont, string[i]);
	}
}

void screen1()
{
    glClearColor(0.5,0.2,0.8,0.0); //purple
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    setFont(GLUT_BITMAP_TIMES_ROMAN_24);
    glColor3f(1.0,1.0,1.0);
    char str4[]="VERTICAL  LIFT  BRIDGE  SIMULATION";
    drawstring(str4,-0.65,0.4,0.0); //to display the text stored in str4 at the position (-0.65, 0.6, 0.0) on the screen. 

    glColor3f(0.0,0.0,0.0);
    char str8[]="PRESS     -ENTER -     TO  START  AND     -ESC-     TO EXIT";
    drawstring(str8,-0.65,0.1,0.0);
    char str10[]="PRESS     -S-     TO  START  ANIMATION   AND  PRESS    -T-     TO  STOP  ANIMATION";
    drawstring(str10,-0.65,-0.1,0.0);
    glFlush();
}





void new1()
{
    glTranslatef(a,b,c);
    bridge();
}
void new2()
{
    glTranslatef(m,n,o);
    ship();
}
void new3()
{
    glTranslatef(p,q,r);
    train();
}
void new5()
{
    glTranslatef(a1,a2,a3);
    lines();
}

void update(int value)
{
    if(flagx==1)
    {
     if(flagb==1)
     {
        b+=0.02f;
        if(b>0.5)
        {
            flagb=2;
            flags=1;
        }

     }
     if(flags==1)
     {
        o+=0.07f;
        if(o>2.0)
            flagp=1;
        if(o>6.0)
        {
            flagb=0;
        }
     }
     if(flagb==0)
     {
        b-=0.02f;
        if(b<0.01)
        {
            flagb=1;
            flagt=1;
        }
     }
     if(flagt==1)
     {
           p-=0.05f;
     }
     if(flagp==1)
     {
        x+=0.03;
     }
      if(flagw==1)
      {
        a1+=0.006;
      }
    }
    glutPostRedisplay();
    glutTimerFunc(100,update,0);    /*millis: Specifies the time interval in milliseconds after which the callback function should be called.
                                    func: A function pointer to the callback function that will be invoked.
                                    value: An integer value that can be used to pass user-defined data to the callback function.*/
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glClearColor(0.0,0.5,1.0,0.0);
    glPushMatrix(); //This function pushes a copy of the current matrix onto the stack. It saves the current transformation matrix, allowing you to modify it 
    glRotatef(20.0,0.25,0.5,0.0);
    base();
    glPopMatrix(); //pops the top matrix from the stack, restoring the previously saved matrix. It undoes the last transformation applied by discarding the current matrix and replacing it with the previous one.

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    pillars();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    earth();
    glPopMatrix();


    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    track();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    new1();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    new2();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    new3();
    glPopMatrix();

    
    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    water();
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    new5();
    glPopMatrix();

    glPushMatrix();
    glColor3f(1.0,1.0,0.0);
    glTranslatef(1.2,0.9,-5.1);
    glutSolidSphere(0.08,20,20);
    glPopMatrix();

    glPushMatrix();
    glRotatef(20.0,0.25,0.5,0.0);
    lighthouse();
    glTranslatef(0.28,-0.05,-5.0);
    glColor3f(0.0,0.0,0.0);
    glutSolidSphere(0.02,20,20);
    glPopMatrix();
    glFlush();
}

void mydisplay()
{

    if(flag==0)
        screen1();
     if(flag==1)
      display();
    
    if(p<-6.8)
      exit(0);
}

void mykeyboard(unsigned char key,int x,int y)
{
    switch(key)
    {
        case 13 :flag=1;
                break;
        case 83 :if(flag==1)
                   flagx=1;
                break;
        case 115:if(flag==1)
                    flagx=1;
                break;
        case 84 :flagx=0;
                break;
        case 116 :flagx=0;
                break;
        case 27:exit(0);
    }
}

void reshape(int w,int h)
{
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    if(w<=h)
        glOrtho(-1.1,1.1,1.1*(GLfloat)h/(GLfloat)w,1.1*(GLfloat)h/(GLfloat)w,-10.0,10.0);
    else
        glOrtho(-1.1*(GLfloat)w/(GLfloat)h,1.1*(GLfloat)w/(GLfloat)h,-1.1,1.1,-10.0,10.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

int main(int argc,char **argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE| GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(1500,1000);
    glutCreateWindow("VLBS");
    glClearColor(0.0,0.0,0.0,0.0);
    glEnable(GL_DEPTH_TEST);
    glutReshapeFunc(reshape);
    glutDisplayFunc(mydisplay);
    glutKeyboardFunc(mykeyboard);
    glutTimerFunc(200,update,0);
    glutMainLoop();
    return 0;
}
