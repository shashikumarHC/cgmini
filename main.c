#include <GL/glut.h>
#include <stdio.h>
#include<math.h>
int b=20,c=600,d=700,f=650,g=1300,h=700;
void myInit()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0,0,0,1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 1800, 0, 800);
}
void myDisplayday()
{
    void tri(int v,int w,int x,int y,int z) //tree
    {
        glBegin(GL_TRIANGLES);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(v,w);
        glVertex2f(x,y);
        glVertex2f(z,w);
        glEnd();
    }
    glClear(GL_COLOR_BUFFER_BIT);
        glBegin(GL_POLYGON);
        glColor3f(0.678, 0.847, 0.902);
        glVertex2i(0,0);
        glVertex2i(0,800);
        glVertex2i(1800,800);
        glVertex2i(1800,0);
    glEnd();
    float a;
    glBegin(GL_POLYGON); //sun
        glColor3f(1.0,1.0,0.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(900+80*cos(a),700+80*sin(a));
        }
    glEnd();
    glBegin(GL_POLYGON); // sand
        glColor3f(0.70,0.39,0.11);
        glVertex2f(0,0);
        glVertex2f(0,150);
        glVertex2f(900,300);
        glVertex2f(1800,150);
        glVertex2f(1800,0);
    glEnd();
    glBegin(GL_POLYGON);  //road
        glColor3f(0.0,0.0,0.0);
        glVertex2f(700,0);
        glVertex2f(900,300);
        glVertex2f(1100,0);
    glEnd();
    glBegin(GL_POLYGON); // roadline
        glColor3f(1.0,1.0,1.0);
        glVertex2f(895,0);
        glVertex2f(900,300);
        glVertex2f(905,0);
    glEnd();
    tri(100,20,180,200,280);
    tri(70,60,180,200,310);
    tri(1520,20,1620,200,1700);
    tri(1490,60,1620,200,1730);
    glBegin(GL_POLYGON); //cloud1
        glColor3f(1.0,1.0,1.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(b+50*cos(a),c+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(b+40+50*cos(a),c+20+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(b+80+50*cos(a),c+40+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(b+130+50*cos(a),c+20+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(b+85+55*cos(a),c-10+55*sin(a));
        }
    glEnd();

    glBegin(GL_POLYGON); //cloud2
        glColor3f(1.0,1.0,1.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(d+50*cos(a),f+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(d+40+50*cos(a),f+20+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(d+80+50*cos(a),f+40+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(d+130+50*cos(a),f+20+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(d+85+55*cos(a),f-10+55*sin(a));
        }
    glEnd();


    glBegin(GL_POLYGON); //cloud3
        glColor3f(1.0,1.0,1.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(g+50*cos(a),h+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(g+40+50*cos(a),h+20+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(g+80+50*cos(a),h+40+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(g+130+50*cos(a),h+20+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(g+85+55*cos(a),h-10+55*sin(a));
        }
    glEnd();

    glBegin(GL_POLYGON); //house
        glColor3f(0.99,0.87,0.69);
        glVertex2i(600,100);
        glVertex2i(600,450);
        glVertex2i(1200,450);
        glVertex2i(1200,100);
    glEnd();

    glBegin(GL_POLYGON); //roof
        glColor3f(0.92,0.64,0.51);
        glVertex2i(500,400);
        glVertex2i(700,550);
        glVertex2i(1100,550);
        glVertex2i(1300,400);
    glEnd();

    glBegin(GL_POLYGON); //doar
        glColor3f(1.0,1.0,1.0);
        glVertex2i(825,100);
        glVertex2i(825,300);
        glVertex2i(975,300);
        glVertex2i(975,100);
    glEnd();

    glBegin(GL_POLYGON); //window1
        glColor3f(1.0,1.0,1.0);
        glVertex2i(650,250);
        glVertex2i(650,350);
        glVertex2i(750,350);
        glVertex2i(750,250);
    glEnd();

    glBegin(GL_POLYGON); //window2
        glColor3f(1.0,1.0,1.0);
        glVertex2i(1150,250);
        glVertex2i(1150,350);
        glVertex2i(1050,350);
        glVertex2i(1050,250);
    glEnd();

    glBegin(GL_POLYGON); //solarpanal
        glColor3f(0,0,0);
        glVertex2i(700,425);
        glVertex2i(700,525);
        glVertex2i(1100,525);
        glVertex2i(1100,425);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0,1.0,1.0); //line for solar panel
        for(int i=700;i<=1100;i=i+25)
        {
            glVertex2i(i,425);
            glVertex2i(i,525);
        }
        for(int i=425;i<=525;i=i+25)
        {
            glVertex2i(700,i);
            glVertex2i(1100,i);
        }
        glColor3f(0,0,0);  //line for window
        glVertex2i(650,300);
        glVertex2i(750,300);
        glVertex2i(700,250);
        glVertex2i(700,350);

        glVertex2i(1050,300);
        glVertex2i(1150,300);
        glVertex2i(1100,250);
        glVertex2i(1100,350);

    glEnd();

    glFlush();
    glutSwapBuffers();
}


void myDisplaynight()
    {
    void tri(int v,int w,int x,int y,int z) //tree
    {
        glBegin(GL_TRIANGLES);
        glColor3f(0.0,0.5,0.0);
        glVertex2f(v,w);
        glVertex2f(x,y);
        glVertex2f(z,w);
        glEnd();
    }
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glColor3f(0,0,0);
        glVertex2i(0,0);
        glVertex2i(0,800);
        glVertex2i(1800,800);
        glVertex2i(1800,0);
    glEnd();
    float a;
    glBegin(GL_POLYGON); //moon
        glColor3f(1.0,1.0,1.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(900+80*cos(a),700+80*sin(a));
        }
    glEnd();
    glBegin(GL_POLYGON); //sand
        glColor3f(0.70,0.39,0.11);
        glVertex2f(0,0);
        glVertex2f(0,150);
        glVertex2f(900,300);
        glVertex2f(1800,150);
        glVertex2f(1800,0);
    glEnd();
    glBegin(GL_POLYGON); //road
        glColor3f(0.0,0.0,0.0);
        glVertex2f(700,0);
        glVertex2f(900,300);
        glVertex2f(1100,0);
    glEnd();
    glBegin(GL_POLYGON); //roadline
        glColor3f(1.0,1.0,1.0);
        glVertex2f(895,0);
        glVertex2f(900,300);
        glVertex2f(905,0);
    glEnd();
    tri(100,20,180,200,280);
    tri(70,60,180,200,310);
    tri(1520,20,1620,200,1700);
    tri(1490,60,1620,200,1730);
    glBegin(GL_POLYGON); //cloud 1
        glColor3f(1.0,1.0,1.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(b+50*cos(a),c+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(b+40+50*cos(a),c+20+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(b+80+50*cos(a),c+40+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(b+130+50*cos(a),c+20+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(b+85+55*cos(a),c-10+55*sin(a));
        }
    glEnd();

    glBegin(GL_POLYGON); //cloud 2
        glColor3f(1.0,1.0,1.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(d+50*cos(a),f+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(d+40+50*cos(a),f+20+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(d+80+50*cos(a),f+40+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(d+130+50*cos(a),f+20+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(d+85+55*cos(a),f-10+55*sin(a));
        }
    glEnd();


    glBegin(GL_POLYGON); //cloud3
        glColor3f(1.0,1.0,1.0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(g+50*cos(a),h+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(g+40+50*cos(a),h+20+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(g+80+50*cos(a),h+40+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(g+130+50*cos(a),h+20+50*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(g+85+55*cos(a),h-10+55*sin(a));
        }
    glEnd();

    glBegin(GL_POLYGON); //home
        glColor3f(0.99,0.87,0.69);
        glVertex2i(600,100);
        glVertex2i(600,450);
        glVertex2i(1200,450);
        glVertex2i(1200,100);
    glEnd();

    glBegin(GL_POLYGON); //roof
        glColor3f(0.70,0.39,0.11);
        glVertex2i(500,400);
        glVertex2i(700,550);
        glVertex2i(1100,550);
        glVertex2i(1300,400);
    glEnd();

    glBegin(GL_POLYGON); //doar
        glColor3f(1.0,1.0,0.0);
        glVertex2i(825,100);
        glVertex2i(825,300);
        glVertex2i(975,300);
        glVertex2i(975,100);
    glEnd();

    glBegin(GL_POLYGON); //windo1
        glColor3f(1.0,1.0,0.0);
        glVertex2i(650,250);
        glVertex2i(650,350);
        glVertex2i(750,350);
        glVertex2i(750,250);
    glEnd();

    glBegin(GL_POLYGON); //window2
        glColor3f(1.0,1.0,0.0);
        glVertex2i(1150,250);
        glVertex2i(1150,350);
        glVertex2i(1050,350);
        glVertex2i(1050,250);
    glEnd();

    glBegin(GL_POLYGON); //solar panel
        glColor3f(0,0,0);
        glVertex2i(700,425);
        glVertex2i(700,525);
        glVertex2i(1100,525);
        glVertex2i(1100,425);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0,1.0,1.0); //line for solar panel
        for(int i=700;i<=1100;i=i+25)
        {
            glVertex2i(i,425);
            glVertex2i(i,525);
        }
        for(int i=425;i<=525;i=i+25)
        {
            glVertex2i(700,i);
            glVertex2i(1100,i);
        }

        glColor3f(0,0,0); //line for window
        glVertex2i(650,300);
        glVertex2i(750,300);
        glVertex2i(700,250);
        glVertex2i(700,350);

        glVertex2i(1050,300);
        glVertex2i(1150,300);
        glVertex2i(1100,250);
        glVertex2i(1100,350);

    glEnd();

    glFlush();
    glutSwapBuffers();
}


int k=1;
void re(int)
{
    glutPostRedisplay();
    glutTimerFunc(2000/60,re,0);
    if(b<1850)
        b+=10;
    else
        b=0;
    if (d<1850)
        d+=10;
    else
        d=0;
    if (g<1850)
        g+=10;
    else
        g=0;

}

void display()
{
    char a[]="-: SMALL SCALE SOLAR POWER PLANT :-";
    char b[]="TO CHANGE BETWEEN DAY AND NIGHT PRESS 'D' OR 'N'";
    char c[]=": TO START THE WINDOW PRESS 'D' OR 'N' :";
    char d[]="SHASHIKUMAR H C";
    char e[]="4GH19CS045";
    char f[]="BY :-";
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0,1.0,1.0);
    for(int i=0;a[i]!='\0';i++)
    {
        if (a[i]=="W" || "M")
        {
            glRasterPos2i(500+(i*25),600);
        }
        else
        {
            glRasterPos2i(500+(i*20),600);
        }
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,a[i]);
    }
    for(int i=0;b[i]!='\0';i++)
    {
        if (a[i]=="W" || "M")
        {
            glRasterPos2i(350+(i*25),500);
        }
        else
        {
            glRasterPos2i(350+(i*20),500);
        }
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,b[i]);
    }
    for(int i=0;c[i]!='\0';i++)
    {
        if (a[i]=="W" || "M")
        {
            glRasterPos2i(450+(i*25),400);
        }
        else
        {
            glRasterPos2i(450+(i*20),400);
        }
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,c[i]);
    }
    for(int i=0;d[i]!='\0';i++)
    {
        if (a[i]=="W" || "M")
        {
            glRasterPos2i(1300+(i*25),200);
        }
        else
        {
            glRasterPos2i(1300+(i*20),200);
        }
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,d[i]);
    }
    for(int i=0;e[i]!='\0';i++)
    {
        if (a[i]=="W" || "M")
        {
            glRasterPos2i(1300+(i*25),150);
        }
        else
        {
            glRasterPos2i(1300+(i*20),150);
        }
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,e[i]);
    }
    for(int i=0;f[i]!='\0';i++)
    {
        if (a[i]=="W" || "M")
        {
            glRasterPos2i(1300+(i*25),250);
        }
        else
        {
            glRasterPos2i(1300+(i*20),250);
        }
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,f[i]);
    }
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowSize(1800, 800);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Small scale solar power plant");
    myInit();
    glutDisplayFunc(display);
    void key(unsigned char key,int x,int y){
        switch (key)
        {
            case 'd':
            case 'D':
                {
                    glutDisplayFunc(myDisplayday);
                    break;
                }
            case 'n':
            case 'N':
                {
                    glutDisplayFunc(myDisplaynight);
                    break;
                }
        }
    }
    glutKeyboardFunc(key);
    glutTimerFunc(0,re,0);
    glutMainLoop();
    return 0;
}

