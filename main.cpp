#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>
#include <iostream>
//int n,x_position[10],y_position[10];
int ch;
float a=0.0,b=0.0,c=0.0,d=0.6,e=0.8,f=0.196078;;
int stateb =1,statep =1,states=1;
float x_positionb = 0,x_positionp=0,x_positions1=0;
using namespace std;
void home()
{
    //home

	glColor3f(0.5,1.0,0.5);
	glBegin(GL_POLYGON);
    glVertex2f(350,100);
    glVertex2f(350,330);
    glVertex2f(750,330);
    glVertex2f(750,100);
    glVertex2f(650,100);
    glVertex2f(650,250);
    glVertex2f(450,250);
    glVertex2f(450,100);
	glEnd();
	//chim

	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
    glVertex2f(340,330);
    glVertex2f(340,430);
    glVertex2f(760,430);
    glVertex2f(760,330);
	glEnd();

	//window border

	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
    glVertex2f(395,205);
    glVertex2f(395,285);
    glVertex2f(475,285);
    glVertex2f(475,205);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(625,205);
    glVertex2f(625,285);
    glVertex2f(705,285);
    glVertex2f(705,205);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(645,205);
    glVertex2f(645,285);
    glVertex2f(650,285);
    glVertex2f(650,205);
	glEnd();



	//door
	glColor3f(1,0.5,0.5);
	glBegin(GL_POLYGON);
    glVertex2f(600,100);
    glVertex2f(600,220);
    glVertex2f(500,220);
    glVertex2f(500,100);
	glEnd();

	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
    glVertex2f(560,120);
    glVertex2f(560,200);
    glVertex2f(500,220);
    glVertex2f(500,100);
	glEnd();



	//window
	glColor3f(1,0.5,0.5);
	glBegin(GL_POLYGON);
    glVertex2f(400,210);
    glVertex2f(400,280);
    glVertex2f(470,280);
    glVertex2f(470,210);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(630,210);
    glVertex2f(630,280);
    glVertex2f(700,280);
    glVertex2f(700,210);
	glEnd();

	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
    glVertex2f(420,210);
    glVertex2f(420,280);
    glVertex2f(425,280);
    glVertex2f(425,210);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(450,210);
    glVertex2f(450,280);
    glVertex2f(455,280);
    glVertex2f(455,210);
	glEnd();



	glColor3f(0.35,0.0,0.0);
	glBegin(GL_POLYGON);
    glVertex2f(650,205);
    glVertex2f(650,285);
    glVertex2f(655,285);
    glVertex2f(655,205);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(680,205);
    glVertex2f(680,285);
    glVertex2f(685,285);
    glVertex2f(685,205);
	glEnd();

}
void wall()
{
    //grass
    glColor3f(d,e,f);
    glBegin(GL_POLYGON);
    glVertex2f(0,160);
    glVertex2f(0,380);
    glVertex2f(1100,380);
    glVertex2f(1100,160);
    glEnd();

}
void ground()
{
  //Ground
	glColor3f(0.0,0.3,0.0);
	glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(0,185);
    glVertex2f(1100,185);
    glVertex2f(1100,0);
	glEnd();
}
void stars()
{

//star1

    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(575,653);
    glVertex2f(570,645);
    glVertex2f(580,645);
    glVertex2f(575,642);
    glVertex2f(570,650);
    glVertex2f(580,650);
    glEnd();

//star2
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(975,643);
    glVertex2f(970,635);
    glVertex2f(980,635);
    glVertex2f(975,632);
    glVertex2f(970,640);
    glVertex2f(980,640);
    glEnd();

//star3
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(875,483);
    glVertex2f(870,475);
    glVertex2f(880,475);
    glVertex2f(875,472);
    glVertex2f(870,480);
    glVertex2f(880,480);
    glEnd();

//star4
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(375,598);
    glVertex2f(370,590);
    glVertex2f(380,590);
    glVertex2f(375,587);
    glVertex2f(370,595);
    glVertex2f(380,595);
    glEnd();

//star5
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(750,628);
    glVertex2f(745,620);
    glVertex2f(755,620);
    glVertex2f(750,618);
    glVertex2f(745,625);
    glVertex2f(755,625);
    glEnd();

//star6
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(200,628);
    glVertex2f(195,620);
    glVertex2f(205,620);
    glVertex2f(200,618);
    glVertex2f(195,625);
    glVertex2f(205,625);
    glEnd();

//star7
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(100,528);
    glVertex2f(95,520);
    glVertex2f(105,520);
    glVertex2f(100,518);
    glVertex2f(95,525);
    glVertex2f(105,525);
    glEnd();

//star8
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(300,468);
    glVertex2f(295,460);
    glVertex2f(305,460);
    glVertex2f(300,458);
    glVertex2f(295,465);
    glVertex2f(305,465);
    glEnd();

//star9
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(500+x_positions1,543);
    glVertex2f(495+x_positions1,535);
    glVertex2f(505+x_positions1,535);
    glVertex2f(500+x_positions1,532);
    glVertex2f(495+x_positions1,540);
    glVertex2f(505+x_positions1,540);
    glEnd();

}
void birds()
{
   //bird 1
	glColor3f(0.73,0.16,0.96 );
	glBegin(GL_POLYGON);
    glVertex2f(150+x_positionb,465);
    glVertex2f(180+x_positionb,465);
    glVertex2f(180+x_positionb,450);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(180+x_positionb,475);
    glVertex2f(190+x_positionb,475);
    glVertex2f(180+x_positionb,465);
	glEnd();

	//bird 2

	glBegin(GL_POLYGON);
    glVertex2f(100+x_positionb,485);
    glVertex2f(130+x_positionb,485);
    glVertex2f(130+x_positionb,470);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(130+x_positionb,495);
    glVertex2f(140+x_positionb,495);
    glVertex2f(130+x_positionb,485);
	glEnd();


	//bird 3

	glBegin(GL_POLYGON);
    glVertex2f(50+x_positionb,505);
    glVertex2f(80+x_positionb,505);
    glVertex2f(80+x_positionb,490);
	glEnd();

	glBegin(GL_POLYGON);
    glVertex2f(80+x_positionb,515);
    glVertex2f(90+x_positionb,515);
    glVertex2f(80+x_positionb,505);
	glEnd();
}
void grass(float x_positiong, float y_positiong)
{
    glColor3f(0.0,1.0,0.0);
    glBegin(GL_LINE_STRIP);
    glVertex2f(10+x_positiong,30+y_positiong);
    glVertex2f(30+x_positiong,10+y_positiong);
    glVertex2f(30+x_positiong,30+y_positiong);
    glVertex2f(30+x_positiong,10+y_positiong);
    glVertex2f(50+x_positiong,30+y_positiong);
    glEnd();
}
void plane()
{
    //glTranslated(x_position,0.0,0.0);
   //plane
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex2f(925+x_positionp,625);
    glVertex2f(950+x_positionp,640);
    glVertex2f(1015+x_positionp,640);
    glVertex2f(1030+x_positionp,650);
    glVertex2f(1050+x_positionp,650);
    glVertex2f(1010+x_positionp,625);
    glEnd();

    glColor3f(0.8,0.8,0.8);
    glBegin(GL_LINE_LOOP);
    glVertex2f(925+x_positionp,625);
    glVertex2f(950+x_positionp,640);
    glVertex2f(1015+x_positionp,640);
    glVertex2f(1030+x_positionp,650);
    glVertex2f(1050+x_positionp,650);
    glVertex2f(1010+x_positionp,625);
    glEnd();
}
void sky()
{
    //sky
    glColor3f(a,b,c);
    glBegin(GL_POLYGON);
    glVertex2f(0,380);
    glVertex2f(0,700);
    glVertex2f(1100,700);
    glVertex2f(1100,380);
    glEnd();
}
void trees()
{
    //tree
    glColor3f(0.9,0.2,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(280,185);
    glVertex2f(280,255);
    glVertex2f(295,255);
    glVertex2f(295,185);
    glEnd();
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

}
void treeb()
{
    //tree 1
    glColor3f(0.9,0.2,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(100,135);
    glVertex2f(100,285);
    glVertex2f(140,285);
    glVertex2f(140,135);
    glEnd();
    glColor3f(0.0,0.5,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(23,285);
    glVertex2f(217,285);
    glVertex2f(120,380);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(43,335);
    glVertex2f(197,335);
    glVertex2f(120.5,420);
    glEnd();
}
void trees1()
{
    //tree
    glColor3f(0.9,0.2,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(840,185);
    glVertex2f(840,255);
    glVertex2f(855,255);
    glVertex2f(855,185);
    glEnd();
    glColor3f(0.0,0.5,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(800,255);
    glVertex2f(895,255);
    glVertex2f(847.5,315);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(810,285);
    glVertex2f(885,285);
    glVertex2f(847.5,345);
    glEnd();

}
void treeb1()
{
    //tree 1
    glColor3f(0.9,0.2,0.0);
    glBegin(GL_POLYGON);
    glVertex2f(980,135);
    glVertex2f(980,285);
    glVertex2f(1020,285);
    glVertex2f(1020,135);
    glEnd();
    glColor3f(0.0,0.5,0.0);
    glBegin(GL_TRIANGLES);
    glVertex2f(903,285);
    glVertex2f(1097,285);
    glVertex2f(1000,380);
    glEnd();
    glBegin(GL_TRIANGLES);
    glVertex2f(923,335);
    glVertex2f(1077,335);
    glVertex2f(1000.5,420);
    glEnd();
}
void day()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    sky();
    wall();
    ground();
    birds();
    plane();
    trees();
    treeb();
    trees1();
    treeb1();
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
    glFlush();
}
void night()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();
    sky();
    stars();
    wall();
    ground();
    trees();
    treeb();
    trees1();
    treeb1();
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
    glFlush();

}

void timer (int)
{
    glutPostRedisplay();
    glutTimerFunc(100,timer,0);
    //bird
    switch(stateb)
    {
        case 1: if(x_positionb<1050)
                    x_positionb+=3;
                else
                    x_positionb=-190;
                    stateb=-1;
                break;
        case -1:if(x_positionb<1050)
                    x_positionb+=3;
                else
                    stateb=1;
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
                glutCreateWindow("Day");
                glutDisplayFunc(day);
                glutReshapeFunc(reshape);
                glutTimerFunc(0,timer,0);
                init();
                glutMainLoop();
                break;
        case 2:
                d=0.0;
                e=0.0;
                f=0.0;
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
