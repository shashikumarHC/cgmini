 #include <GL/glut.h>
#include <stdio.h>
#include<math.h>
int b=20,c=600,d=700,f=650,g=1300,h=700,l=100,m=500;
void myInit()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0,0,0,1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0, 1800, 0, 800);
}
void myDisplayday()
{
    void tree(int x,int y) //tree
    {
        float a;
        glBegin(GL_POLYGON);
        glColor3f(0,1.0,0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(x+60*cos(a),y+60*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(x+50+60*cos(a),y+70+60*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(x+120+60*cos(a),y+70+60*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(x+160+60*cos(a),y+60*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(x+85+60*cos(a),y-10+60*sin(a));
        }
    glEnd();

    }
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glColor3f(0.67,0.84,0.90);
        glVertex2i(0,0);
        glVertex2i(0,800);
        glVertex2i(1800,800);
        glVertex2i(1800,0);
    glEnd();
    float a;
    glBegin(GL_POLYGON); //sun
        glColor3f(1.0,1.0,0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(900+80*cos(a),700+80*sin(a));
        }
    glEnd();
    glBegin(GL_POLYGON); //sand
        glColor3f(0.92,0.64,0.51);
        glVertex2f(0,0);
        glVertex2f(0,300);
        glVertex2f(900,400);
        glVertex2f(1800,300);
        glVertex2f(1800,0);
    glEnd();

    glBegin(GL_POLYGON); //tree1
      glColor3f(0.44,0.33,0.23);
        glVertex2i(135,150);

        glVertex2i(235,150);

        glVertex2i(235,300);
        glVertex2i(135,300);
        glEnd();

        glBegin(GL_LINE_LOOP); //tree1 border
      glColor3f(0,0,0);
        glVertex2i(135,150);

        glVertex2i(235,150);

        glVertex2i(235,300);
        glVertex2i(135,300);
        glEnd();

        glBegin(GL_POLYGON); //tree2
        glColor3f(0.44,0.33,0.23);

        glVertex2i(1535,150);
        glVertex2i(1635,150);
        glVertex2i(1635,300);
        glVertex2i(1535,300);
        glEnd();

        glBegin(GL_LINE_LOOP); //tree2 border
      glColor3f(0,0,0);
        glVertex2i(1535,150);
        glVertex2i(1635,150);
        glVertex2i(1635,300);
        glVertex2i(1535,400);
        glEnd();

        glBegin(GL_POLYGON); //tree3
      glColor3f(0.44,0.33,0.23);
        glVertex2i(385,250);

        glVertex2i(485,250);

        glVertex2i(485,400);
        glVertex2i(385,400);
        glEnd();

        glBegin(GL_LINE_LOOP); //tree3 border
      glColor3f(0,0,0);
        glVertex2i(385,250);

        glVertex2i(485,250);

        glVertex2i(485,400);
        glVertex2i(385,400);
        glEnd();

        glBegin(GL_POLYGON); //tree4
      glColor3f(0.44,0.33,0.23);
        glVertex2i(1285,250);

        glVertex2i(1385,250);

        glVertex2i(1385,400);
        glVertex2i(1285,400);
        glEnd();

        glBegin(GL_LINE_LOOP); //tree4 border
      glColor3f(0,0,0);
        glVertex2i(1285,250);

        glVertex2i(1385,250);

        glVertex2i(1385,400);
        glVertex2i(1285,400);
        glEnd();

    tree(100,300);
    tree(350,400);
    tree(1250,400);
    tree(1500,300);
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

    glColor3f(0.92,0.64,0.51);
glBegin(GL_POLYGON); //roof back
glVertex2d(700,500);
glVertex2d(1150,500);
glVertex2d(1250,400);
glVertex2d(800,400);
glEnd();
glColor3f(0,0,0);
glBegin(GL_LINE_LOOP); //roof back border
glVertex2d(700,500);
glVertex2d(1150,500);
glVertex2d(1250,400);
glVertex2d(800,400);
glEnd();
glColor3f(0.99,0.87,0.69); //main house
glBegin(GL_POLYGON);
glVertex2d(600,200);
glVertex2d(1000,200);
glVertex2d(1000,400);
glVertex2d(600,400);
glEnd();
glColor3f(0,0,0);
glBegin(GL_LINE_LOOP); //main house border
glVertex2d(600,200);
glVertex2d(1000,200);
glVertex2d(1000,400);
glVertex2d(600,400);
glEnd();
glColor3f(0.99,0.87,0.69); //side home
glBegin(GL_POLYGON);
glVertex2d(1000,200);
glVertex2d(1000,400);
glVertex2d(1100,500);
glVertex2d(1200,400);
glVertex2d(1200,250);
glEnd();

glColor3f(0,0,0);
glBegin(GL_LINE_LOOP); //side home border
glVertex2d(1000,200);
glVertex2d(1000,400);
glVertex2d(1100,500);
glVertex2d(1200,400);
glVertex2d(1200,250);
glEnd();

glColor3f(0.92,0.64,0.51); //roof front
glBegin(GL_POLYGON);
glVertex2d(700,500);
glVertex2d(1150,500);
glVertex2d(1000,400);
glVertex2d(550,400);
glEnd();
glColor3f(0,0,0);
glBegin(GL_LINE_LOOP); //roof front border
glVertex2d(700,500);
glVertex2d(1150,500);
glVertex2d(1000,400);
glVertex2d(550,400);
glEnd();
    glBegin(GL_POLYGON); //window1
        glColor3f(1.0,1.0,1.0);
        glVertex2i(625,275);
        glVertex2i(625,350);
        glVertex2i(700,350);
        glVertex2i(700,275);
    glEnd();
    glBegin(GL_LINE_LOOP); //window1 outline
        glColor3f(0,0,0);
        glVertex2i(625,275);
        glVertex2i(625,350);
        glVertex2i(700,350);
        glVertex2i(700,275);
    glEnd();

    glBegin(GL_POLYGON); //window3
        glColor3f(1.0,1.0,1.0);
        glVertex2i(975,275);
        glVertex2i(975,350);
        glVertex2i(900,350);
        glVertex2i(900,275);
    glEnd();

    glBegin(GL_LINE_LOOP); //window3 outline
        glColor3f(0,0,0);
        glVertex2i(975,275);
        glVertex2i(975,350);
        glVertex2i(900,350);
        glVertex2i(900,275);
    glEnd();

    glBegin(GL_POLYGON); //window2
        glColor3f(1.0,1.0,1.0);
        glVertex2i(1150,270);
        glVertex2i(1150,370);
        glVertex2i(1050,350);
        glVertex2i(1050,250);
    glEnd();

    glBegin(GL_LINE_LOOP); //window2 outline
        glColor3f(0,0,0);
        glVertex2i(1150,270);
        glVertex2i(1150,370);
        glVertex2i(1050,350);
        glVertex2i(1050,250);
    glEnd();
    glBegin(GL_POLYGON); //door
        glColor3f(1.0,1.0,1.0);
        glVertex2i(750,200);
        glVertex2i(750,300);
        glVertex2i(850,300);
        glVertex2i(850,200);
    glEnd();

    glBegin(GL_LINE_LOOP); //door outline
        glColor3f(0,0,0);
        glVertex2i(750,200);
        glVertex2i(750,300);
        glVertex2i(850,300);
        glVertex2i(850,200);
    glEnd();

    glBegin(GL_POLYGON); //solar panel
        glColor3f(0,0,0);
        glVertex2i(720,475);
        glVertex2i(1040,475);
        glVertex2i(970,425);
        glVertex2i(650,425);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0,1.0,1.0); //line for solar panel
        for(int i=720;i<=1040;i=i+32)
        {
            glVertex2i(i-70,425);
            glVertex2i(i,475);
        }
        int i,j;
        for(i=425,j=650;i<=475;i=i+(50/2),j=j+35)
        {
            glVertex2i(j,i);
            glVertex2i(j+320,i);
        }
        glColor3f(0,0,0);
        glVertex2f(625,307.5); //line for windows
        glVertex2i(700,307.5);
        glVertex2i(662.5,275);
        glVertex2i(662.5,350);

        glVertex2f(900,307.5);
        glVertex2i(975,307.5);
        glVertex2i(937.5,275);
        glVertex2i(937.5,350);

        glVertex2i(1050,300);
        glVertex2i(1150,320);
        glVertex2i(1100,260);
        glVertex2i(1100,360);

    glEnd();

    glColor3f(0,0,0); //road
    glBegin(GL_POLYGON);
    glVertex2i(0,0);
    glVertex2i(0,100);
    glVertex2i(1800,100);
    glVertex2i(1800,0);
    glEnd();
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2i(0,50);

    glVertex2i(1800,50);

    glEnd();

    //car
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(m,55);
    glVertex2i(m,75);
    glVertex2i(m+70,75);
    glVertex2i(m+70,55);
    glEnd();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2i(m+10,75);
    glVertex2i(m+20,95);
    glVertex2i(m+50,95);
    glVertex2i(m+60,75);
    glEnd();
    glColor3f(1,1,1);
    glPointSize(10.0);
    glBegin(GL_POINTS);
    glVertex2i(m+15,55);
    glVertex2i(m+55,55);
    glEnd();

    glFlush();
    glutSwapBuffers();
}


void myDisplaynight()
    {
    void tree(int x,int y) //tree
    {
        float a;
        glBegin(GL_POLYGON);
        glColor3f(0,0.6,0);
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(x+60*cos(a),y+60*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(x+50+60*cos(a),y+70+60*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(x+120+60*cos(a),y+70+60*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(x+160+60*cos(a),y+60*sin(a));
        }
        for (int i=0;i<360;i++)
        {
            a=i*3.142/180;
            glVertex2f(x+85+60*cos(a),y-10+60*sin(a));
        }
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
        glVertex2f(0,300);
        glVertex2f(900,400);
        glVertex2f(1800,300);
        glVertex2f(1800,0);
    glEnd();


    glBegin(GL_POLYGON); //tree1
      glColor3f(0.44,0.33,0.23);
        glVertex2i(135,150);

        glVertex2i(235,150);

        glVertex2i(235,300);
        glVertex2i(135,300);
        glEnd();

        glBegin(GL_LINE_LOOP); //tree1 border
      glColor3f(0,0,0);
        glVertex2i(135,150);

        glVertex2i(235,150);

        glVertex2i(235,300);
        glVertex2i(135,300);
        glEnd();

        glBegin(GL_POLYGON); //tree2
        glColor3f(0.44,0.33,0.23);

        glVertex2i(1535,150);
        glVertex2i(1635,150);
        glVertex2i(1635,300);
        glVertex2i(1535,300);
        glEnd();

        glBegin(GL_LINE_LOOP); //tree2 border
      glColor3f(0,0,0);
        glVertex2i(1535,150);
        glVertex2i(1635,150);
        glVertex2i(1635,300);
        glVertex2i(1535,400);
        glEnd();

        glBegin(GL_POLYGON); //tree3
      glColor3f(0.44,0.33,0.23);
        glVertex2i(385,250);

        glVertex2i(485,250);

        glVertex2i(485,400);
        glVertex2i(385,400);
        glEnd();

        glBegin(GL_LINE_LOOP); //tree3 border
      glColor3f(0,0,0);
        glVertex2i(385,250);

        glVertex2i(485,250);

        glVertex2i(485,400);
        glVertex2i(385,400);
        glEnd();

        glBegin(GL_POLYGON); //tree4
      glColor3f(0.44,0.33,0.23);
        glVertex2i(1285,250);

        glVertex2i(1385,250);

        glVertex2i(1385,400);
        glVertex2i(1285,400);
        glEnd();

        glBegin(GL_LINE_LOOP); //tree4 border
      glColor3f(0,0,0);
        glVertex2i(1285,250);

        glVertex2i(1385,250);

        glVertex2i(1385,400);
        glVertex2i(1285,400);
        glEnd();

    tree(100,300);
    tree(350,400);
    tree(1250,400);
    tree(1500,300);

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

    glColor3f(0.70,0.39,0.11);
glBegin(GL_POLYGON); //roof back
glVertex2d(700,500);
glVertex2d(1150,500);
glVertex2d(1250,400);
glVertex2d(800,400);
glEnd();
glColor3f(0,0,0);
glBegin(GL_LINE_LOOP); //roof back border
glVertex2d(700,500);
glVertex2d(1150,500);
glVertex2d(1250,400);
glVertex2d(800,400);
glEnd();
glColor3f(0.99,0.77,0.69);
glBegin(GL_POLYGON); //main house
glVertex2d(600,200);
glVertex2d(1000,200);
glVertex2d(1000,400);
glVertex2d(600,400);
glEnd();
glColor3f(0,0,0);
glBegin(GL_LINE_LOOP); //main house border
glVertex2d(600,200);
glVertex2d(1000,200);
glVertex2d(1000,400);
glVertex2d(600,400);
glEnd();
glColor3f(0.99,0.77,0.69); //side home
glBegin(GL_POLYGON);
glVertex2d(1000,200);
glVertex2d(1000,400);
glVertex2d(1100,500);
glVertex2d(1200,400);
glVertex2d(1200,250);
glEnd();

glColor3f(0,0,0);
glBegin(GL_LINE_LOOP); //side home border
glVertex2d(1000,200);
glVertex2d(1000,400);
glVertex2d(1100,500);
glVertex2d(1200,400);
glVertex2d(1200,250);
glEnd();

glColor3f(0.70,0.39,0.11);
glBegin(GL_POLYGON);  //roof front
glVertex2d(700,500);
glVertex2d(1150,500);
glVertex2d(1000,400);
glVertex2d(550,400);
glEnd();
glColor3f(0,0,0);
glBegin(GL_LINE_LOOP); //roof front border
glVertex2d(700,500);
glVertex2d(1150,500);
glVertex2d(1000,400);
glVertex2d(550,400);
glEnd();
    glBegin(GL_POLYGON); //window1
        glColor3f(1.0,1.0,0.0);
        glVertex2i(625,275);
        glVertex2i(625,350);
        glVertex2i(700,350);
        glVertex2i(700,275);
    glEnd();

    glBegin(GL_LINE_LOOP); //window1 outline
        glColor3f(0,0,0);
        glVertex2i(625,275);
        glVertex2i(625,350);
        glVertex2i(700,350);
        glVertex2i(700,275);
    glEnd();

    glBegin(GL_POLYGON); //window3
        glColor3f(1.0,1.0,0.0);
        glVertex2i(975,275);
        glVertex2i(975,350);
        glVertex2i(900,350);
        glVertex2i(900,275);
    glEnd();

    glBegin(GL_LINE_LOOP); //window3 outline
        glColor3f(0,0,0);
        glVertex2i(975,275);
        glVertex2i(975,350);
        glVertex2i(900,350);
        glVertex2i(900,275);
    glEnd();

    glBegin(GL_POLYGON); //window2
        glColor3f(1.0,1.0,0.0);
        glVertex2i(1150,270);
        glVertex2i(1150,370);
        glVertex2i(1050,350);
        glVertex2i(1050,250);
    glEnd();

    glBegin(GL_LINE_LOOP); //window2 outline
        glColor3f(0,0,0);
        glVertex2i(1150,270);
        glVertex2i(1150,370);
        glVertex2i(1050,350);
        glVertex2i(1050,250);
    glEnd();

    glBegin(GL_POLYGON); //door
        glColor3f(1.0,1.0,0.0);
        glVertex2i(750,200);
        glVertex2i(750,300);
        glVertex2i(850,300);
        glVertex2i(850,200);
    glEnd();

    glBegin(GL_LINE_LOOP); //door outline
        glColor3f(0,0,0);
        glVertex2i(750,200);
        glVertex2i(750,300);
        glVertex2i(850,300);
        glVertex2i(850,200);
    glEnd();

    glBegin(GL_POLYGON); //solar panel
        glColor3f(0,0,0);
        glVertex2i(720,475);
        glVertex2i(1040,475);
        glVertex2i(970,425);
        glVertex2i(650,425);
    glEnd();

    glBegin(GL_LINES);
        glColor3f(1.0,1.0,1.0); //line for solar panel
        for(int i=720;i<=1040;i=i+32)
        {
            glVertex2i(i-70,425);
            glVertex2i(i,475);
        }
        int i,j;
        for(i=425,j=650;i<=475;i=i+(50/2),j=j+35)
        {
            glVertex2i(j,i);
            glVertex2i(j+320,i);
        }
        glColor3f(0,0,0);
        glVertex2f(625,307.5); //line for windows
        glVertex2i(700,307.5);
        glVertex2i(662.5,275);
        glVertex2i(662.5,350);

        glVertex2f(900,307.5);
        glVertex2i(975,307.5);
        glVertex2i(937.5,275);
        glVertex2i(937.5,350);

        glVertex2i(1050,300);
        glVertex2i(1150,320);
        glVertex2i(1100,260);
        glVertex2i(1100,360);

    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON); //road
    glVertex2i(0,0);
    glVertex2i(0,100);
    glVertex2i(1800,100);
    glVertex2i(1800,0);
    glEnd();
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex2i(0,50);

    glVertex2i(1800,50);

    glEnd();

    //car
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(l,55);
    glVertex2i(l,75);
    glVertex2i(l+70,75);
    glVertex2i(l+70,55);
    glEnd();
    glColor3f(1,1,0);
    glBegin(GL_POLYGON);
    glVertex2i(l+10,75);
    glVertex2i(l+20,95);
    glVertex2i(l+50,95);
    glVertex2i(l+60,75);
    glEnd();
    glColor3f(1,1,1);
    glPointSize(10.0);
    glBegin(GL_POINTS);
    glVertex2i(l+15,55);
    glVertex2i(l+55,55);
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
    if (l<1850)
        l+=5;
    else
        l=0;
    if (m>-50)
        m-=5;
    else
        m=1800;


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
            case 'e':
            case 'E':
                exit(0);
        }
    }
    glutKeyboardFunc(key);
    glutTimerFunc(0,re,0);
    glutMainLoop();
    return 0;
}


