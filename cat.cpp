#include <GL\glew.h>
#include <stdlib.h>
#include <GL\glut.h>
#include <GL\freeglut.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#define PI 3.14159
#include <time.h>

using namespace std;


float k = -300;

void reshapeFunc(GLint new_width, GLint new_hight)
{

    glViewport(0, 0, 1700, 990);
}


void init() {
    glClearColor(0.0f, 0.0f, 0.3f, 0.0f);
    glMatrixMode(GL_PROJECTION); // set the projection parameters
    glOrtho(-100, 100, -100, 100, 0, 1);

}

void stars() {

    glPointSize(5);
    glBegin(GL_POINTS);

    glColor3ub(255, 255, 255);
    //full star
    glVertex2f(26.0f, 32.0f);
    glVertex2f(27.0f, 33.0f);
    glVertex2f(28.0f, 32.0f);
    glVertex2f(29.0f, 31.0f);
    glVertex2f(28.0f, 30.0f);
    glVertex2f(27.0f, 29.0f);
    glVertex2f(26.0f, 30.0f);
    glVertex2f(25.0f, 31.0f);

    //half star
    glVertex2f(22.0f, 27.0f);
    glVertex2f(23.0f, 26.0f);
    glVertex2f(22.0f, 25.0f);
    glVertex2f(21.0f, 26.0f);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);

    glColor3ub(255, 255, 255);
    //TOP LINE
    glVertex2f(19.0f, 24.0f);
    glVertex2f(19.0f, 25.0f);
    //rightt line
    glVertex2f(20.0f, 23.0f);
    glVertex2f(21.0f, 23.0f);
    //bottom line
    glVertex2f(19.0f, 22.0f);
    glVertex2f(19.0f, 21.0f);
    //left line     
    glVertex2f(17.0f, 23.0f);
    glVertex2f(18.0f, 23.0f);
    glEnd();

}

void myCat() {


    //pink body
    glBegin(GL_POLYGON);
    glColor3ub(246, 152, 229);
    glVertex2f(-23.0f, 28.0f);
    glVertex2f(-22.0f, 28.0f);
    glVertex2f(-22.0f, 29.0f);
    glVertex2f(-21.0f, 29.0f);
    glVertex2f(-21.0f, 30.0f);
    glVertex2f(-1.0f, 30.0f);
    glVertex2f(-1.0f, 28.0f);
    glVertex2f(1.0f, 28.0f);
    glVertex2f(1.0f, 12.0f);
    glVertex2f(-20.0f, 12.0f);
    glVertex2f(-20.0f, 13.0f);
    glVertex2f(-21.0f, 13.0f);
    glVertex2f(-21.0f, 14.0f);
    glVertex2f(-22.0f, 14.0f);
    glVertex2f(-22.0f, 15.0f);
    glVertex2f(-23.0f, 15.0f);
    glEnd();

    //body pink points
    glBegin(GL_POINTS);
    glColor3ub(242, 132, 223);

    glVertex2f(-19.0f, 27.0f);
    glVertex2f(-14.0f, 28.0f);
    glVertex2f(-6.0f, 28.0f);
    glVertex2f(-21.0f, 23.0f);
    glVertex2f(-14.0f, 23.0f);
    glVertex2f(-8.0f, 21.0f);
    glVertex2f(-20.0f, 18.0f);
    glVertex2f(-13.0f, 18.0f);
    glVertex2f(-9.0f, 14.0f);
    glEnd();

    //yellow line body
    glLineWidth(7);
    glBegin(GL_LINES);
    glColor3ub(245, 212, 114);

    glVertex2f(-23.0f, 28.0f);
    glVertex2f(-22.0f, 28.0f);

    glVertex2f(-22.0f, 28.0f);
    glVertex2f(-22.0f, 29.0f);

    glVertex2f(-22.0f, 29.0f);
    glVertex2f(-21.0f, 29.0f);

    glVertex2f(-21.0f, 29.0f);
    glVertex2f(-21.0f, 30.0f);

    glVertex2f(-21.0f, 30.0f);
    glVertex2f(-1.0f, 30.0f);

    glVertex2f(-1.0f, 30.0f);
    glVertex2f(-1.0f, 28.0f);

    glVertex2f(-1.0f, 28.0f);
    glVertex2f(1.0f, 28.0f);

    glVertex2f(1.0f, 28.0f);
    glVertex2f(1.0f, 12.0f);

    glVertex2f(1.0f, 12.0f);
    glVertex2f(-20.0f, 12.0f);

    glVertex2f(-20.0f, 12.0f);
    glVertex2f(-20.0f, 13.0f);

    glVertex2f(-20.0f, 13.0f);
    glVertex2f(-21.0f, 13.0f);

    glVertex2f(-21.0f, 13.0f);
    glVertex2f(-21.0f, 14.0f);

    glVertex2f(-21.0f, 14.0f);
    glVertex2f(-22.0f, 14.0f);

    glVertex2f(-22.0f, 14.0f);
    glVertex2f(-22.0f, 15.0f);

    glVertex2f(-22.0f, 15.0f);
    glVertex2f(-23.0f, 15.0f);

    glVertex2f(-23.0f, 15.0f);
    glVertex2f(-23.0f, 28.0f);

    glEnd();

    // cat head
    //GREY HEAD
    glBegin(GL_POLYGON);

    glColor3ub(150 , 151, 153);

    glVertex2f(-6.0f, 23.0f);
    glVertex2f(-4.0f, 23.0f);
     glVertex2f(-4.0f, 26.0f);
    glVertex2f(-2.0f, 26.0f);
    glVertex2f(-2.0f, 25.0f);
    glVertex2f(-1.0f, 25.0f);
    glVertex2f(-1.0f, 24.0f);
    glVertex2f(-1.0f, 24.0f);
    glVertex2f(0.0f, 23.0f);
    glVertex2f(3.0f, 23.0f);
    glVertex2f(3.0f, 24.0f);
    glVertex2f(4.0f, 24.0f);
    glVertex2f(4.0f, 25.0f);
    glVertex2f(5.0f, 25.0f);
    glVertex2f(5.0f, 26.0f);
    glVertex2f(7.0f, 26.0f);
    glVertex2f(7.0f, 23.0f);
    glVertex2f(9.0f, 23.0f);
    glVertex2f(9.0f, 14.0f);
    glVertex2f(8.0f, 14.0f);
    glVertex2f(7.0f, 13.0f);
    glVertex2f(7.0f, 12.0f);
  glVertex2f(6.0f, 12.0f);
    glVertex2f(6.0f, 11.0f);
    glVertex2f(-3.0f, 11.0f);
    glVertex2f(-3.0f, 12.0f);
    glVertex2f(-4.0f, 12.0f);
    glVertex2f(-4.0f, 13.0f);
    glVertex2f(-5.0f, 13.0f);
    glVertex2f(-5.0f, 14.0f);
    glVertex2f(-6.0f, 14.0f);
    glVertex2f(-6.0f, 14.0f);
    glEnd();



    // HEAD black line
    glBegin(GL_LINES);

    glColor3ub(0, 0, 0);

    glVertex2f(-6.0f, 23.0f);
    glVertex2f(-4.0f, 23.0f);

    glVertex2f(-4.0f, 23.0f);
    glVertex2f(-4.0f, 26.0f);

    glVertex2f(-4.0f, 26.0f);
    glVertex2f(-2.0f, 26.0f);

    glVertex2f(-2.0f, 26.0f);
    glVertex2f(-2.0f, 25.0f);

    glVertex2f(-2.0f, 25.0f);
    glVertex2f(-1.0f, 25.0f);

    glVertex2f(-1.0f, 25.0f);
    glVertex2f(-1.0f, 24.0f);

    glVertex2f(-1.0f, 25.0f);
    glVertex2f(-1.0f, 24.0f);

    glVertex2f(-1.0f, 24.0f);
    glVertex2f(0.0f, 23.0f);

    glVertex2f(0.0f, 23.0f);
    glVertex2f(3.0f, 23.0f);

    glVertex2f(3.0f, 23.0f);
    glVertex2f(3.0f, 24.0f);

    glVertex2f(3.0f, 24.0f);
    glVertex2f(4.0f, 24.0f);

    glVertex2f(4.0f, 24.0f);
    glVertex2f(4.0f, 25.0f);

    glVertex2f(4.0f, 25.0f);
    glVertex2f(5.0f, 25.0f);

    glVertex2f(5.0f, 25.0f);
    glVertex2f(5.0f, 26.0f);

    glVertex2f(5.0f, 26.0f);
    glVertex2f(7.0f, 26.0f);

    glVertex2f(7.0f, 26.0f);
    glVertex2f(7.0f, 23.0f);

    glVertex2f(7.0f, 23.0f);
    glVertex2f(9.0f, 23.0f);

    glVertex2f(9.0f, 23.0f);
    glVertex2f(9.0f, 14.0f);

    glVertex2f(9.0f, 14.0f);
    glVertex2f(8.0f, 14.0f);

    glVertex2f(8.0f, 13.0f);
    glVertex2f(7.0f, 13.0f);

    glVertex2f(7.0f, 13.0f);
    glVertex2f(7.0f, 12.0f);

    glVertex2f(7.0f, 12.0f);
    glVertex2f(6.0f, 12.0f);

    glVertex2f(6.0f, 12.0f);
    glVertex2f(6.0f, 11.0f);

    glVertex2f(6.0f, 11.0f);
    glVertex2f(-3.0f, 11.0f);


    glVertex2f(-3.0f, 11.0f);
    glVertex2f(-3.0f, 12.0f);

    glVertex2f(-3.0f, 12.0f);
    glVertex2f(-4.0f, 12.0f);

    glVertex2f(-4.0f, 12.0f);
    glVertex2f(-4.0f, 13.0f);

    glVertex2f(-4.0f, 13.0f);
    glVertex2f(-5.0f, 13.0f);

    glVertex2f(-5.0f, 13.0f);
    glVertex2f(-5.0f, 14.0f);

    glVertex2f(-5.0f, 14.0f);
    glVertex2f(-6.0f, 14.0f);

    glVertex2f(-6.0f, 14.0f);
    glVertex2f(-6.0f, 23.0f);

    glEnd();

    
    //eyes
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);

    //right eye
    glVertex2f(4.0f, 21.0f);
    glVertex2f(6.0f, 21.0f);
    glVertex2f(6.0f, 18.0f);
    glVertex2f(4.0f, 18.0f);

    //left eye
    glVertex2f(-2.0f, 21.0f);
    glVertex2f(0.0f, 21.0f);
    glVertex2f(0.0f, 18.0f);
    glVertex2f(-2.0f, 18.0f);

    //cheeks
    glColor3ub(214, 160, 144);

     //right cheeks
    glVertex2f(6.0f, 16.0f);
    glVertex2f(8.0f, 16.0f);
    glVertex2f(8.0f, 14.0f);
    glVertex2f(6.0f, 14.0f);

    //left cheeks
    glVertex2f(-4.0f, 16.0f);
    glVertex2f(-2.0f, 16.0f);
    glVertex2f(-2.0f, 14.0f);
    glVertex2f(-4.0f, 14.0f);

    glEnd();

    //eyes highlight
    glPointSize(6);
    glBegin(GL_POINTS);
    glColor3ub(255, 255, 255);
    //right eye highlight
    glVertex2f(4.5f, 20.0f);
    //left eye highlight
    glVertex2f(-1.5f, 20.0f);

    //nose
    glColor3ub(0, 0, 0);
    glVertex2f(2.0f, 17.0f);
    glEnd();

    //mouth
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);

    glVertex2f(-1.0f, 15.0f);
    glVertex2f(-1.0f, 14.0f);

    glVertex2f(-1.0f, 14.0f);
    glVertex2f(1.0f, 14.0f);

    glVertex2f(1.0f, 14.0f);
    glVertex2f(1.0f, 15.0f);

    glVertex2f(1.0f, 14.0f);
    glVertex2f(1.0f, 15.0f);

    glVertex2f(1.0f, 14.0f);
    glVertex2f(4.0f, 14.0f);

    glVertex2f(4.0f, 14.0f);
    glVertex2f(4.0f, 15.0f);


    glEnd();

    //hands and feet
    glBegin(GL_QUADS);
    glColor3ub(150, 151, 153);

    //right hand
    glVertex2f(3.0f, 11.0f);
    glVertex2f(5.0f, 11.0f);
    glVertex2f(5.0f, 9.0f);
    glVertex2f(3.0f, 9.0f);

    //left hand 
    glVertex2f(-3.0f, 11.0f);
    glVertex2f(-1.0f, 11.0f);
    glVertex2f(-1.0f, 9.0f);
    glVertex2f(-3.0f, 9.0f);

    //right foot
    glVertex2f(-16.0f, 11.0f);
    glVertex2f(-14.0f, 11.0f);
    glVertex2f(-14.0f, 9.0f);
    glVertex2f(-16.0f, 9.0f);

   //left foot
    glVertex2f(-21.0f, 11.0f);
    glVertex2f(-19.0f, 11.0f);
    glVertex2f(-19.0f, 9.0f);
    glVertex2f(-21.0f, 9.0f);
    glEnd();


    //hands and feet LINES
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);

    //right hand
    glVertex2f(3.0f, 11.0f);
    glVertex2f(5.0f, 11.0f);

    glVertex2f(5.0f, 11.0f);
    glVertex2f(5.0f, 9.0f);

    glVertex2f(5.0f, 9.0f);
    glVertex2f(3.0f, 9.0f);

    glVertex2f(3.0f, 9.0f);
    glVertex2f(3.0f, 11.0f);


    //left hand 
    glVertex2f(-3.0f, 11.0f);
    glVertex2f(-1.0f, 11.0f);

    glVertex2f(-1.0f, 11.0f);
    glVertex2f(-1.0f, 9.0f);

    glVertex2f(-1.0f, 9.0f);
    glVertex2f(-3.0f, 9.0f);

    glVertex2f(-3.0f, 9.0f);
    glVertex2f(-3.0f, 11.0f);

    //right foot
    glVertex2f(-16.0f, 11.0f);
    glVertex2f(-14.0f, 11.0f);

    glVertex2f(-14.0f, 11.0f);
    glVertex2f(-14.0f, 9.0f);

    glVertex2f(-14.0f, 9.0f);
    glVertex2f(-16.0f, 9.0f);

    glVertex2f(-16.0f, 9.0f);
    glVertex2f(-16.0f, 11.0f);

    //left foot
    glVertex2f(-21.0f, 11.0f);
    glVertex2f(-19.0f, 11.0f);

    glVertex2f(-19.0f, 11.0f);
    glVertex2f(-19.0f, 9.0f);

    glVertex2f(-19.0f, 9.0f);
    glVertex2f(-21.0f, 9.0f);

    glVertex2f(-21.0f, 9.0f);
    glVertex2f(-21.0f, 11.0f);

    glEnd();


    //tail
    glBegin(GL_POLYGON);
    glColor3ub(150, 151, 153);

    glVertex2f(-30.0f, 22.0f);
    glVertex2f(-27.0f, 22.0f);
    glVertex2f(-27.0f, 21.0f);
    glVertex2f(-25.0f, 21.0f);
    glVertex2f(-25.0f, 20.0f);
    glVertex2f(-24.0f, 20.0f);
    glVertex2f(-24.0f, 19.0f);
    glVertex2f(-26.0f, 19.0f);
    glVertex2f(-26.0f, 20.0f);
    glVertex2f(-29.0f, 20.0f);
    glVertex2f(-29.0f, 21.0f);
    glVertex2f(-30.0f, 21.0f);

    glEnd();

    // tail lines
    glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);

    glVertex2f(-30.0f, 22.0f);
    glVertex2f(-27.0f, 22.0f);

    glVertex2f(-27.0f, 22.0f);
    glVertex2f(-27.0f, 21.0f);

    glVertex2f(-27.0f, 21.0f);
    glVertex2f(-25.0f, 21.0f);

    glVertex2f(-25.0f, 21.0f);
    glVertex2f(-25.0f, 20.0f);

    glVertex2f(-25.0f, 20.0f);
    glVertex2f(-24.0f, 20.0f);

    glVertex2f(-24.0f, 20.0f);
    glVertex2f(-24.0f, 19.0f);

    glVertex2f(-24.0f, 19.0f);
    glVertex2f(-26.0f, 19.0f);

    glVertex2f(-26.0f, 19.0f);
    glVertex2f(-26.0f, 20.0f);

    glVertex2f(-26.0f, 20.0f);
    glVertex2f(-29.0f, 20.0f);

    glVertex2f(-29.0f, 20.0f);
    glVertex2f(-29.0f, 21.0f);

    glVertex2f(-30.0f, 21.0f);
    glVertex2f(-30.0f, 22.0f);

    glEnd();
}

void rainbow() {

    glBegin(GL_QUADS);
    glColor3ub(253, 0, 0);//red

    glVertex2f(-52.0f, 32.0f);
    glVertex2f(-48.0f, 32.0f);
    glVertex2f(-48.0f, 29.0f);
    glVertex2f(-52.0f, 29.0f);

    glVertex2f(-48.0f, 33.0f);
    glVertex2f(-44.0f, 33.0f);
    glVertex2f(-44.0f, 30.0f);
    glVertex2f(-48.0f, 30.0f);

    glVertex2f(-44.0f, 32.0f);
    glVertex2f(-40.0f, 32.0f);
    glVertex2f(-40.0f, 29.0f);
    glVertex2f(-44.0f, 29.0f);

    glVertex2f(-40.0f, 33.0f);
    glVertex2f(-36.0f, 33.0f);
    glVertex2f(-36.0f, 30.0f);
    glVertex2f(-40.0f, 30.0f);

    glVertex2f(-36.0f, 32.0f);
    glVertex2f(-32.0f, 32.0f);
    glVertex2f(-32.0f, 29.0f);
    glVertex2f(-36.0f, 29.0f);

    glVertex2f(-32.0f, 33.0f);
    glVertex2f(-28.0f, 33.0f);
    glVertex2f(-28.0f, 30.0f);
    glVertex2f(-32.0f, 30.0f);


    glVertex2f(-28.0f, 32.0f);
    glVertex2f(-24.0f, 32.0f);
    glVertex2f(-24.0f, 29.0f);
    glVertex2f(-28.0f, 29.0f);

    glVertex2f(-24.0f, 33.0f);
    glVertex2f(-20.0f, 33.0f);
    glVertex2f(-20.0f, 30.0f);
    glVertex2f(-24.0f, 30.0f);


    glEnd();


    glPushMatrix();
    glTranslatef(0, -3, 0);
    glBegin(GL_QUADS);
    glColor3ub(254, 152, 0);//orange

    glVertex2f(-52.0f, 32.0f);
    glVertex2f(-48.0f, 32.0f);
    glVertex2f(-48.0f, 29.0f);
    glVertex2f(-52.0f, 29.0f);

    glVertex2f(-48.0f, 33.0f);
    glVertex2f(-44.0f, 33.0f);
    glVertex2f(-44.0f, 30.0f);
    glVertex2f(-48.0f, 30.0f);

    glVertex2f(-44.0f, 32.0f);
    glVertex2f(-40.0f, 32.0f);
    glVertex2f(-40.0f, 29.0f);
    glVertex2f(-44.0f, 29.0f);

    glVertex2f(-40.0f, 33.0f);
    glVertex2f(-36.0f, 33.0f);
    glVertex2f(-36.0f, 30.0f);
    glVertex2f(-40.0f, 30.0f);

    glVertex2f(-36.0f, 32.0f);
    glVertex2f(-32.0f, 32.0f);
    glVertex2f(-32.0f, 29.0f);
    glVertex2f(-36.0f, 29.0f);

    glVertex2f(-32.0f, 33.0f);
    glVertex2f(-28.0f, 33.0f);
    glVertex2f(-28.0f, 30.0f);
    glVertex2f(-32.0f, 30.0f);


    glVertex2f(-28.0f, 32.0f);
    glVertex2f(-24.0f, 32.0f);
    glVertex2f(-24.0f, 29.0f);
    glVertex2f(-28.0f, 29.0f);

    glVertex2f(-24.0f, 33.0f);
    glVertex2f(-20.0f, 33.0f);
    glVertex2f(-20.0f, 30.0f);
    glVertex2f(-24.0f, 30.0f);


    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -6, 0);
    glBegin(GL_QUADS);
    glColor3ub(252, 252, 0);//yellow

    glVertex2f(-52.0f, 32.0f);
    glVertex2f(-48.0f, 32.0f);
    glVertex2f(-48.0f, 29.0f);
    glVertex2f(-52.0f, 29.0f);

    glVertex2f(-48.0f, 33.0f);
    glVertex2f(-44.0f, 33.0f);
    glVertex2f(-44.0f, 30.0f);
    glVertex2f(-48.0f, 30.0f);

    glVertex2f(-44.0f, 32.0f);
    glVertex2f(-40.0f, 32.0f);
    glVertex2f(-40.0f, 29.0f);
    glVertex2f(-44.0f, 29.0f);

    glVertex2f(-40.0f, 33.0f);
    glVertex2f(-36.0f, 33.0f);
    glVertex2f(-36.0f, 30.0f);
    glVertex2f(-40.0f, 30.0f);

    glVertex2f(-36.0f, 32.0f);
    glVertex2f(-32.0f, 32.0f);
    glVertex2f(-32.0f, 29.0f);
    glVertex2f(-36.0f, 29.0f);

    glVertex2f(-32.0f, 33.0f);
    glVertex2f(-28.0f, 33.0f);
    glVertex2f(-28.0f, 30.0f);
    glVertex2f(-32.0f, 30.0f);


    glVertex2f(-28.0f, 32.0f);
    glVertex2f(-24.0f, 32.0f);
    glVertex2f(-24.0f, 29.0f);
    glVertex2f(-28.0f, 29.0f);

    glVertex2f(-24.0f, 33.0f);
    glVertex2f(-20.0f, 33.0f);
    glVertex2f(-20.0f, 30.0f);
    glVertex2f(-24.0f, 30.0f);


    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0, -9, 0);
    glBegin(GL_QUADS);
    glColor3ub(52, 253, 0);//green

    glVertex2f(-52.0f, 32.0f);
    glVertex2f(-48.0f, 32.0f);
    glVertex2f(-48.0f, 29.0f);
    glVertex2f(-52.0f, 29.0f);

    glVertex2f(-48.0f, 33.0f);
    glVertex2f(-44.0f, 33.0f);
    glVertex2f(-44.0f, 30.0f);
    glVertex2f(-48.0f, 30.0f);

    glVertex2f(-44.0f, 32.0f);
    glVertex2f(-40.0f, 32.0f);
    glVertex2f(-40.0f, 29.0f);
    glVertex2f(-44.0f, 29.0f);

    glVertex2f(-40.0f, 33.0f);
    glVertex2f(-36.0f, 33.0f);
    glVertex2f(-36.0f, 30.0f);
    glVertex2f(-40.0f, 30.0f);

    glVertex2f(-36.0f, 32.0f);
    glVertex2f(-32.0f, 32.0f);
    glVertex2f(-32.0f, 29.0f);
    glVertex2f(-36.0f, 29.0f);

    glVertex2f(-32.0f, 33.0f);
    glVertex2f(-28.0f, 33.0f);
    glVertex2f(-28.0f, 30.0f);
    glVertex2f(-32.0f, 30.0f);


    glVertex2f(-28.0f, 32.0f);
    glVertex2f(-24.0f, 32.0f);
    glVertex2f(-24.0f, 29.0f);
    glVertex2f(-28.0f, 29.0f);

    glVertex2f(-24.0f, 33.0f);
    glVertex2f(-20.0f, 33.0f);
    glVertex2f(-20.0f, 30.0f);
    glVertex2f(-24.0f, 30.0f);


    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0, -12, 0);
    glBegin(GL_QUADS);
    glColor3ub(0, 151, 251);//blue

    glVertex2f(-52.0f, 32.0f);
    glVertex2f(-48.0f, 32.0f);
    glVertex2f(-48.0f, 29.0f);
    glVertex2f(-52.0f, 29.0f);

    glVertex2f(-48.0f, 33.0f);
    glVertex2f(-44.0f, 33.0f);
    glVertex2f(-44.0f, 30.0f);
    glVertex2f(-48.0f, 30.0f);

    glVertex2f(-44.0f, 32.0f);
    glVertex2f(-40.0f, 32.0f);
    glVertex2f(-40.0f, 29.0f);
    glVertex2f(-44.0f, 29.0f);

    glVertex2f(-40.0f, 33.0f);
    glVertex2f(-36.0f, 33.0f);
    glVertex2f(-36.0f, 30.0f);
    glVertex2f(-40.0f, 30.0f);

    glVertex2f(-36.0f, 32.0f);
    glVertex2f(-32.0f, 32.0f);
    glVertex2f(-32.0f, 29.0f);
    glVertex2f(-36.0f, 29.0f);

    glVertex2f(-32.0f, 33.0f);
    glVertex2f(-28.0f, 33.0f);
    glVertex2f(-28.0f, 30.0f);
    glVertex2f(-32.0f, 30.0f);


    glVertex2f(-28.0f, 32.0f);
    glVertex2f(-24.0f, 32.0f);
    glVertex2f(-24.0f, 29.0f);
    glVertex2f(-28.0f, 29.0f);

    glVertex2f(-24.0f, 33.0f);
    glVertex2f(-20.0f, 33.0f);
    glVertex2f(-20.0f, 30.0f);
    glVertex2f(-24.0f, 30.0f);


    glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(0, -15, 0);
    glBegin(GL_QUADS);
    glColor3ub(102, 48, 254);//purple

    glVertex2f(-52.0f, 32.0f);
    glVertex2f(-48.0f, 32.0f);
    glVertex2f(-48.0f, 29.0f);
    glVertex2f(-52.0f, 29.0f);

    glVertex2f(-48.0f, 33.0f);
    glVertex2f(-44.0f, 33.0f);
    glVertex2f(-44.0f, 30.0f);
    glVertex2f(-48.0f, 30.0f);

    glVertex2f(-44.0f, 32.0f);
    glVertex2f(-40.0f, 32.0f);
    glVertex2f(-40.0f, 29.0f);
    glVertex2f(-44.0f, 29.0f);

    glVertex2f(-40.0f, 33.0f);
    glVertex2f(-36.0f, 33.0f);
    glVertex2f(-36.0f, 30.0f);
    glVertex2f(-40.0f, 30.0f);

    glVertex2f(-36.0f, 32.0f);
    glVertex2f(-32.0f, 32.0f);
    glVertex2f(-32.0f, 29.0f);
    glVertex2f(-36.0f, 29.0f);

    glVertex2f(-32.0f, 33.0f);
    glVertex2f(-28.0f, 33.0f);
    glVertex2f(-28.0f, 30.0f);
    glVertex2f(-32.0f, 30.0f);


    glVertex2f(-28.0f, 32.0f);
    glVertex2f(-24.0f, 32.0f);
    glVertex2f(-24.0f, 29.0f);
    glVertex2f(-28.0f, 29.0f);

    glVertex2f(-24.0f, 33.0f);
    glVertex2f(-20.0f, 33.0f);
    glVertex2f(-20.0f, 30.0f);
    glVertex2f(-24.0f, 30.0f);


    glEnd();
    glPopMatrix();

}

void translatingStars() {
    glPushMatrix();
    glTranslatef(0, -15, 0);
    stars();


    glTranslatef(-30, -15, 0);
    stars();

    glTranslatef(-30, 50, 0);
    stars();

    glTranslatef(-30, 40, 0);
    stars();

    glPopMatrix();
}

static void play() {
    glutPostRedisplay();
}


void animation() {
    glPushMatrix();
    glTranslatef(k, 0, 0);
    translatingStars();
    stars();
    rainbow();
    myCat();
    glPopMatrix();

}


void display() {
    glMatrixMode(GL_MODELVIEW);
    glClearColor(0.0, 0.0, 0.3, 0.0);
    glClear(GL_COLOR_BUFFER_BIT);

   
   animation();

    glutSwapBuffers();
    glFlush();

}


void timer(int) {
    glutPostRedisplay();
    glutTimerFunc(1000 / 60, timer, 0);


    if (k < 500)
        k += 0.4;
    else
        k = -300;

}

int main(int argc, char** argv) {
    glutInit(&argc, argv); // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // Specify the display Mode – RGB, RGBA or color
    glutCreateWindow("nyan cat"); // Create a window with the given title
    glutInitWindowSize(500, 500); // Set the window's initial width & height
    glutInitWindowPosition(720, 300); // Position the window's initial top-left corner
    init();

    glutDisplayFunc(display);
    glutReshapeFunc(reshapeFunc);
    glutIdleFunc(play);
    glutTimerFunc(0, timer, 0);
    glutMainLoop(); // Enter the infinitely event-processing loop
    glutSwapBuffers();
    return 0;
}