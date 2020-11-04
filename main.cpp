#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <iostream>
#include<math.h>
int ch;
float a=0.11,b=0.11,c=0.11;//sky
//float d=0.6,e=0.8,f=0.196078;//wall
float d=0.0,e=0.9,f=0.9;//wall
float g=0,h=0,i=0;//home
float j=0,k=0,l=0;//moon sun
float dd=0,db=0,dbl=0;
int statebx =1,statep =1,states=1,stateby=1;
int statesm = 1;
int statec = 1;
float x_positionb = 0,y_positionb=0;//birds
float y_positionts=0,x_positionts=0; //tree
float x_positionp=0,x_positions1=0; //plane and star
float x_positionsm = 0;//sun moon
float x_positionc=0,x_positionc1=0;//for cloud
using namespace std;
void circle(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)
{
    int i;
    float rad = 0;
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    for(i = 0;i<=360; i++){
    rad = i*(3.1416/180);
    glVertex2f(x+rx*cos(rad),y+ry*sin(rad));

    }
    glEnd();


}
void rectangle(float l,float r, float u,float d)
{
    glBegin(GL_POLYGON);
    glVertex2f(l,d);
    glVertex2f(l,u);
    glVertex2f(r,u);
    glVertex2f(r,d);
    glEnd();
}
void sun(float j,float k,float l,float x_positionsm)
{
    glTranslatef(x_positionsm,0.0,0.0);
    glColor3f(j,k,l);
    circle(40,40,80+x_positionsm,630);
}
void make_cloud(int rx,int ry ,int x, int y)
{
    glPushMatrix();
    glColor3f(1.0, 1.0, 1.0);
    circle(rx,ry,x,y);
    circle(rx,ry,x+20,y);
    circle(rx,ry,x+40,y);
    circle(rx,ry,x+10,y-12);
    circle(rx,ry,x+30,y-12);
    circle(rx,ry,x+10,y+12);
    circle(rx,ry,x+30,y+12);
    glPopMatrix();
}
void cloud()
{
    make_cloud(25,10,50+x_positionc,550);
    make_cloud(25,10,250+x_positionc,590);
    make_cloud(25,10,450+x_positionc,500);
    make_cloud(25,10,600+x_positionc1,580);
    make_cloud(25,10,750+x_positionc1,600);
    make_cloud(25,10,1000+x_positionc1,500);
}
void home()
{
    //home
    //front
	glColor3f(0.5,1.0,0.5);
	glTranslatef(g,h,i);
	rectangle(350,750,330,100);
	//chim
	glColor3f(0.35,0.0,0.0);
	rectangle(340,760,430,330);
	//window border
    //left window
	glColor3f(0.35,0.0,0.0);
	rectangle(395,475,285,205);
    //right window
    rectangle(625,705,285,205);
	//door support
	glColor3f(1,0.5,0.5);
	rectangle(500,600,220,100);
    //door
	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(500,100);
	glVertex2f(500,220);
	glVertex2f(600-db,220-dbl);
	glVertex2f(600-db,100+dbl);
	glEnd();
	// right window
	glColor3f(1,0.5,0.5);
	rectangle(400,470,280,210);
    //left windows
    rectangle(630,700,280,210);
    //left bar
	glColor3f(0.35,0.0,0.0);
	rectangle(420,425,280,210);
	rectangle(450,455,280,210);
    //right bar
	glColor3f(0.35,0.0,0.0);
	rectangle(650,655,285,205);
	rectangle(680,685,285,205);

}
void home1(float g,float h,float i)
{
    //home
    //front
	glColor3f(0.5,1.0,0.5);
	glTranslatef(g,h,i);
	rectangle(350,500,200,100);
	//chim
	glColor3f(0.35,0.0,0.0);
	rectangle(345,505,260,200);
	//window border
    //left window
	glColor3f(0.35,0.0,0.0);
	rectangle(358,392,172,138);
    //right window
    rectangle(458,492,172,138);
	//door support
	glColor3f(1,0.5,0.5);
	rectangle(405,445,150,100);
	//door
	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
    glVertex2f(445-dd,100+dd);
    glVertex2f(445-dd,150-dd);
    glVertex2f(405,150);
    glVertex2f(405,100);
	glEnd();

	// left window
	glColor3f(1,0.5,0.5);
	rectangle(360,390,170,140);
    //right windows
    rectangle(460,490,170,140);
    //left bar
	glColor3f(0.35,0.0,0.0);
	rectangle(368,370,170,140);
	rectangle(380,382,170,140);
    //right bar
	glColor3f(0.35,0.0,0.0);
	rectangle(468,470,170,140);
	rectangle(480,482,170,140);
}
void wall()
{
    //grass
    glColor3f(d,e,f);
    rectangle(0,1100,380,160);
}
void ground()
{
  //Ground
	glColor3f(0.0,0.3,0.0);
	rectangle(0,1100,185,0);
}
void triangle(float l,float m,float r,float d,float d1,float u1,float u)
{
  glBegin(GL_TRIANGLES);
    glVertex2f(m,u);
    glVertex2f(l,d1);
    glVertex2f(r,d1);
    glVertex2f(m,d);
    glVertex2f(l,u1);
    glVertex2f(r,u1);
    glEnd();
}
void stars()
{

//star1
    glColor3f(0.99,0.90,0.29);
    triangle(570,575,580,642,645,650,653);
//star2
    triangle(970,975,980,632,635,640,643);

//star3
    triangle(870,875,880,472,473,475,480);

//star4
    triangle(370,375,380,587,590,595,598);

//star5
    triangle(745,750,755,618,620,625,628);

//star6
    triangle(195,200,205,618,620,625,628);

//star7
    triangle(95,100,105,518,520,525,528);

//star8
    triangle(295,300,305,458,460,465,468);
//star9
    glPushMatrix();
    glTranslatef(x_positions1,0.0,0.0);
    triangle(495,500,505,532,535,540,543);
    glPopMatrix();
}
void bird(float l,float mx,float r,float d ,float my,float u)
{
    glPushMatrix();
    glColor3f(0.73,0.16,0.96 );
    glTranslated(x_positionb,0.0,0.0);
    //wings
    glBegin(GL_POLYGON);
    glVertex2f(l,my+y_positionb);
    glVertex2f(mx,my);
    glVertex2f(mx,d+y_positionb);
	glEnd();
    //head
	glBegin(GL_POLYGON);
    glVertex2f(mx,u);
    glVertex2f(r,u);
    glVertex2f(mx,my);
	glEnd();
	glPopMatrix();
}
void birds()
{
   //bird 1
    bird(150,180,190,450,465,475);
	//bird 2
    bird(100,130,140,470,485,495);
	//bird 3
    bird(50,80,90,490,505,515);
}
void grass(float x_positiong, float y_positiong)
{
    glPushMatrix();
    glColor3f(0.0,1.0,0.0);
    glTranslatef(x_positiong,y_positiong,0.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(10,30);
    glVertex2f(30,10);
    glVertex2f(30,30);
    glVertex2f(30,10);
    glVertex2f(50,30);
    glEnd();
    glPopMatrix();
}
void plane()
{

   //plane
    glPushMatrix();
    glTranslatef(x_positionp,0.0,0.0);
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(925,625);
    glVertex2f(950,640);
    glVertex2f(1015,640);
    glVertex2f(1030,650);
    glVertex2f(1050,650);
    glVertex2f(1010,625);
    glEnd();
    glColor3f(0.8,0.8,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f(925,625);
    glVertex2f(950,640);
    glVertex2f(1015,640);
    glVertex2f(1030,650);
    glVertex2f(1050,650);
    glVertex2f(1010,625);
    glEnd();
    glPopMatrix();

}
void sky()
{
    //sky
    glColor3f(a,b,c);
    rectangle(0,1100,380,700);
}
void trees(float x_positionts,float y_positionts)
{
    //tree
    glPushMatrix();
    glTranslatef(x_positionts,y_positionts,0.0);
    glColor3f(0.9,0.2,0.0);
    rectangle(280,295,255,185);
    glColor3f(0.0,0.5,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(240,255);
    glVertex2f(335,255);
    glVertex2f(287.5,315);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(250,285);
    glVertex2f(325,285);
    glVertex2f(287.5,345);
    glEnd();
    glPopMatrix();

}
void day()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    sky();
    sun(1.0, 0.76, 0.3,x_positionsm);
    cloud();
    plane();
    wall();
    ground();
    birds();
    trees(-190,-30);
    //treeb(0);
    trees(720,-30);
    //treeb(880);
    //left
    grass(0,0);
    grass(10,140);
    grass(80,30);
    grass(0,70);
    grass(130,90);
    grass(150,0);
    grass(190,50);
    grass(230,80);
    grass(230,140);
    grass(170,130);
    grass(250,20);
    //right
    grass(760,0);
    grass(770,140);
    grass(980,30);
    grass(750,70);
    grass(830,90);
    grass(910,0);
    grass(930,50);
    grass(1030,80);
    grass(1030,140);
    grass(870,130);
    grass(1030,20);
    //middle
    grass(500,20);
    grass(580,30);
    grass(420,40);
    grass(360,20);
    grass(660,20);
   // home(-200,0,0);
    home();
    home1(-170,40,0);
    home1(600,0,0);
    glFlush();
}
void night()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    sky();
    sun(1.0, 1.0,1.0,x_positionsm);
    stars();
    wall();
    ground();
    trees(-190,-30);
    //treeb(0);
    trees(720,-30);
    //treeb(880);
     //left
    grass(0,0);
    grass(10,140);
    grass(80,30);
    grass(0,70);
    grass(130,90);
    grass(150,0);
    grass(190,50);
    grass(230,80);
    grass(230,140);
    grass(170,130);
    grass(250,20);
    //right
    grass(760,0);
    grass(770,140);
    grass(980,30);
    grass(750,70);
    grass(830,90);
    grass(910,0);
    grass(930,50);
    grass(1030,80);
    grass(1030,140);
    grass(870,130);
    grass(1030,20);
    //middle
    grass(500,20);
    grass(580,30);
    grass(420,40);
    grass(360,20);
    grass(660,20);
    home();
    home1(-170,40,0);
    home1(600,0,0);
    glFlush();

}
void init()
{
    glClearColor(0.0,0.0,0.0,1.0);
    glColor3f(0.0,0.0,1.0);
    glPointSize(2.0);
}

void reshape(int w,int h)
{
   glViewport(0,0,w,h);
   glMatrixMode(GL_PROJECTION);
   glLoadIdentity();
   gluOrtho2D(0,1100,0,700);
   glMatrixMode(GL_MODELVIEW);

}


void timer (int)
{
    glutPostRedisplay();
    glutTimerFunc(100,timer,0);
    //bird
    switch(statebx)
    {
        case 1: if(x_positionb<1050)
                    x_positionb+=3;
                else
                    x_positionb=-190;
                    statebx=-1;
                break;
        case -1:if(x_positionb<1050)
                    x_positionb+=3;
                else
                    statebx=1;
                break;
    }
    //plane
    switch(statep)
    {
        case 1:if(x_positionp<175)
                    x_positionp+=7;
               else
                    x_positionp=-1050;
                    statep=-1;
                break;
        case -1:if(x_positionp<0)
                    x_positionp+=7;
                else
                    statep=1;
                break;
    }
    switch(states)
    {
    case 1:
            if(x_positions1<605)
                x_positions1+=1;
            else
                x_positions1=-505;
                states=-1;
            break;
    case -1:
            if(x_positions1<0)
                x_positions1+=1;
            else
                states=1;
            break;
    }
    switch(stateby)
    {
    case 1:
            if(y_positionb<15)
                y_positionb+=3;
            else
                y_positionb=0;
                stateby=-1;
                break;
    case -1:
            if(y_positionb>0)
                y_positionb-=1;
            else
                stateby=1;
            break;
    }
    switch(statesm)
    {
    case 1:
            if(x_positionsm<980)
                x_positionsm+=0.001;
            else
                x_positionsm=0;
                statesm=-1;
            break;
    case -1:
            if(x_positionsm<980)
                x_positionsm+=0.001;
            else
                statesm=1;
            break;
    }
    //cloud
    switch(statec)
    {
        case 1:
            if(x_positionc<1050)
                x_positionc+=0.5;
            else
                x_positionc=-490;
                statec=-1;
                break;
        case -1:
            if(x_positionc1<500)
                x_positionc1+=0.5;
            else
                x_positionc1=-1040;
            statec=1;
            break;
    }

}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB);
    glutInitWindowPosition(50,5);
    glutInitWindowSize(1100.0,700.0);
    cout<<"1.Day"<<endl;
    cout<<"2.Night"<<endl;
    cout<<"enter your choice"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
                b=0.9;
                c=0.9;
                dd=10;
                db=40;
                dbl=20;
                glutCreateWindow("Day");
                glutDisplayFunc(day);
                glutReshapeFunc(reshape);
                glutTimerFunc(0,timer,0);
                init();
                glutMainLoop();
                break;
        case 2:
                d=0.11;
                e=0.11;
                f=0.11;
                glutCreateWindow("Night");
                glutDisplayFunc(night);
                glutReshapeFunc(reshape);
                glutTimerFunc(0,timer,0);
                init();
                glutMainLoop();
                break;
        default: cout<<"invalid input"<<endl;
                break;


    }
}
