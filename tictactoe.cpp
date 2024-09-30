#include<simplecpp>
void blue(int x,int y){
	Circle c1(x,y,50);
	Circle c2(x,y,35);
	c1.setFill(1);
	c1.setColor(COLOR("blue"));
	c2.setFill(1);
	c2.setColor(COLOR(204,255,255));
	c1.imprint();
	c2.imprint();
	c1.hide();
	c2.hide();
}
void red(int x,int y){
	Rectangle r1(x,y,110,15);
	Rectangle r2(x,y,110,15);
	r1.rotate(45);
	r2.rotate(-45);
	r1.setFill(1);
	r2.setFill(1);
	r1.setColor(COLOR("red"));
	r2.setColor(COLOR("red"));
	r1.imprint();
	r2.imprint();
	r1.hide();
	r2.hide();
}

main_program{
	initCanvas("TIC TAC TOE",700,600);
	Rectangle r(350,300,720,620);
	r.setFill(1);
	r.setColor(COLOR(204,255,255));
	r.imprint();
	r.hide();
	Text p1(350,50,"PLAYER-1: O");
	p1.setColor(COLOR("blue"));
	Text p2(350,100,"PLAYER-2: X");
	p2.setColor(COLOR("red"));

	Turtle t1,t2;
	t1.hide();
	t1.penUp();
	t1.move(-60,-135);
	t1.penDown();
	t1.move(0,360);

	t1.penUp();
	t1.move(-120,-120);
	t1.penDown();
	t1.move(360,0);
	
	t2.hide();
	t2.penUp();
	t2.move(60,-135);
	t2.penDown();
	t2.move(0,360);
	
	t2.penUp();
	t2.move(120,-240);
	t2.penDown();
	t2.move(-360,0);
	int m[10]={0,0,0,0,0,0,0,0,0,0};
	int &m1=m[1], &m2=m[2], &m3=m[3], &m4=m[4],&m5=m[5], &m6=m[6],&m7=m[7],&m8=m[8],&m9=m[9];
	int click,x,y;
	while(1){

	while(1){
	click=getClick();
	x=click/65536 ;y=click%65536;

	if (x>170 && x<290 && y<285 && y>165){
		if(m[1]==0){
		blue(230,225);
		m[1]=1;
		break;}
		else continue;
	}
	if (x>290 && x<410 && y<285 && y>165){
		if(m[2]==0){
		blue(350,225);
		m[2]=1;
		break;}
		else continue;
	}
	if (m[3]==0 && x>410 && x<530 && y<285 && y>165){
		if(m[3]==0){
		blue(470,225);
		m[3]=1;
		break;
	}
	else continue;}
	if (x>170 && x<290 && y<405 && y>285){
		if(m[4]==0){
		blue(230,345);
		m[4]=1;
		break;
	}
	else continue;}
	if (x>290 && x<410 && y<405 && y>285){
		if(m[5]==0){
		blue(350,345);
		m[5]=1;
		break;
	}
	else continue;}
	if (x>410 && x<530 && y<405 && y>285){
		if(m[6]==0){
		blue(470,345);
		m[6]=1;
		break;
	}
	else continue;}
	if (x>170 && x<290 && y<525 && y>405){
		if(m[7]==0){
		blue(230,465);
		m[7]=1;
		break;
	}
	else continue;}
	if (x>290 && x<410 && y<525 && y>405){
		if(m[8]==0){
		blue(350,465);
		m[8]=1;
		break;
	}
	else continue;}
	if (x>410 && x<530 && y<525 && y>405){
		if(m[9]==0){
		blue(470,465);
		m[9]=1;
		break;
	}
	else continue;}
	}

	if   (  m1*m2*m3==1 || m4*m5*m6==1 || m7*m8*m9==1 ||
		m1*m4*m7==1 || m2*m5*m8==1 || m3*m6*m9==1 ||
	        m1*m5*m9==1 || m3*m5*m7==1   ){

		Rectangle winP1(350,82,360,150);
		winP1.setFill(1);
		winP1.setColor(COLOR("yellow"));
		winP1.imprint();
		winP1.hide();
		Text p1win(350,80,"PLAYER-1 WINS !!");
		p1win.setColor(COLOR("blue"));
		p1win.imprint();
		Rectangle close(500,19,60,24);
		close.setFill(1);
		close.setColor(COLOR(192,192,192));
		close.imprint();
		close.hide();
		Text closex(500,19,"Close X");
		closex.imprint();
		p1.hide();
		p2.hide();
		break;
		
	}
	else if (m1*m2*m3!=0 && m4*m5*m6!=0 && m7*m8*m9!=0 &&
		 m1*m4*m7!=0 && m2*m5*m8!=0 && m3*m6*m9!=0 &&
		 m1*m5*m9!=0 && m3*m5*m7!=0   ){
		Rectangle tie(350,82,360,150);
		tie.setFill(1);
		tie.setColor(COLOR("yellow"));
		tie.imprint();
		tie.hide();
		Text Tie(350,80,"GAME IS TIED!!");
		Tie.setColor(COLOR("black"));
		Tie.imprint();
		Rectangle close(500,19,60,24);
		close.setFill(1);
		close.setColor(COLOR(192,192,192));
		close.imprint();
		close.hide();
		Text closex(500,19,"Close X");
		closex.imprint();
		p1.hide();
		p2.hide();
		break;
	}

	while(1){
	click=getClick();
	x=click/65536 ;y=click%65536;
	if (x>170 && x<290 && y<285 && y>165){
		if(m[1]==0){
		red(230,225);
		m[1]=2;
		break;
	}
	else continue;}
	if (x>290 && x<410 && y<285 && y>165){
		if(m[2]==0){
		red(350,225);
		m[2]=2;
		break;
	}
	else continue;}
	if (x>410 && x<530 && y<285 && y>165){
		if(m[3]==0){
		red(470,225);
		m[3]=2;
		break;
	}
	else continue;}
	if (x>170 && x<290 && y<405 && y>285){
		if(m[4]==0){
		red(230,345);
		m[4]=2;
		break;
	}
	else continue;}
	if (x>290 && x<410 && y<405 && y>285){
		if(m[5]==0){
		red(350,345);
		m[5]=2;
		break;
	}
	else continue;}
	if (x>410 && x<530 && y<405 && y>285){
		if(m[6]==0){
		red(470,345);
		m[6]=2;
		break;
	}
	else continue;}
	if (x>170 && x<290 && y<525 && y>405){
		if(m[7]==0){
		red(230,465);
		m[7]=2;
		break;
	}
	else continue;}
	if (x>290 && x<410 && y<525 && y>405){
		if(m[8]==0){
		red(350,465);
		m[8]=2;
		break;
	}
	else continue;}
	if (x>410 && x<530 && y<525 && y>405){
		if(m[9]==0){
		red(470,465);
		m[9]=2;
		break;
	}
	else continue;}
	}
	if   (  m1*m2*m3==8 || m4*m5*m6==8 || m7*m8*m9==8 ||
		m1*m4*m7==8 || m2*m5*m8==8 || m3*m6*m9==8 ||
		m1*m5*m9==8 || m3*m5*m7==8   ){

                Rectangle winP2(350,82,360,150);
		winP2.setFill(1);
		winP2.setColor(COLOR("yellow"));
		winP2.imprint();
		winP2.hide();
		Text P2win(350,80,"PLAYER-2 WINS !!");
		P2win.setColor(COLOR("red"));
		P2win.imprint();
		Rectangle close(500,19,60,24);
		close.setFill(1);
		close.setColor(COLOR(192,192,192));
		close.imprint();
		close.hide();
		Text closex(500,19,"Close X");
		closex.imprint();
		p1.hide();
		p2.hide();
		break;
	}
	else if (m1*m2*m3!=0 && m4*m5*m6!=0 && m7*m8*m9!=0 &&
		 m1*m4*m7!=0 && m2*m5*m8!=0 && m3*m6*m9!=0 &&
		 m1*m5*m9!=0 && m3*m5*m7!=0   ){
		Rectangle tie(350,82,360,150);
		tie.setFill(1);
		tie.setColor(COLOR("yellow"));
		tie.imprint();
		tie.hide();
		Text Tie(350,80,"GAME IS TIED!!");
		Tie.setColor(COLOR("black"));
		Tie.imprint();
		Rectangle close(500,19,60,24);
		close.setFill(1);
		close.setColor(COLOR(192,192,192));
		close.imprint();
		close.hide();
		Text closex(500,19,"Close X");
		closex.imprint();
		p1.hide();
		p2.hide();
		break;
	}
}

getClick();

}
