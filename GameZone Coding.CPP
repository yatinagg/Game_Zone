/* GameZone.cpp */
#include<fstream.h>
#include<stdlib.h> //for rand(),exit() and srand() functions
#include<string.h> //for strcpy() function
#include<stdio.h>  //for gets(), remove() and rename() functions
#include<conio.h>  //for textbackground(), textcolor(), clrscr() and getch() functions
#include<time.h> //for clock() function and CLOCKS_PER_SEC
#include<dos.h>  //for delay() function

//////////////////////////////////////////////////////////////////////////////
//*****************************function prototypes**************************//
//////////////////////////////////////////////////////////////////////////////
int srandomvalue();
long randomtimevalue();
void maindisplay();
void casino();
void quiz();
void calmaster();
void cricket();
void rock();
void animation();
//////////////////////////////////////////////////////////////////////////////
//*****************************function prototypes ends*********************//
//////////////////////////////////////////////////////////////////////////////

int a1=0,ca1=0,c1=0,r1=0,q1=0;

//////////////////////////////////////////////////////////////////////////////
//*****************************void main()**********************************//
//////////////////////////////////////////////////////////////////////////////
void main()
{
	textbackground(7);
	textcolor(BLACK);
	maindisplay();
}
//////////////////////////////////////////////////////////////////////////////
//*****************************void main() ends*****************************//
//////////////////////////////////////////////////////////////////////////////


//*****************************void srandomvalue()**************************//
int srandomvalue()
{
	int srandom;
	unsigned int sval;
	sval=time(NULL);
	srand(sval);
	srandom=rand();
	return srandom;
}
//*****************************void srandomvalue()**************************//

//*****************************void srandomtimevalue()**********************//
long randomtimevalue()
{
	long random;
	random=time(NULL);
	return random;
}
//*****************************void srandomtimevalue()**********************//

//////////////////////////////////////////////////////////////////////////////
//*****************************void maindisplay()***************************//
//////////////////////////////////////////////////////////////////////////////
void maindisplay()
{
	while(a1!=9)
	{
		ca1=0;
		q1=0;
		a1=0;
		c1=0;
		r1=0;
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"1. Casino : A Number Guessing Game\n";
		cout<<"2. Quiz\n";
		cout<<"3. Calculation Master\n";
		cout<<"4. Cricket\n";
		cout<<"5. Rock Paper and Scissor\n";
		cout<<"6. Exit\n";
		cout<<"Your Choice : ";
		a1=getch();
		switch(a1)
		{
		 case '1':
		 casino();
		 break;

		 case '2':
		 quiz();
		 break;

		 case '3':
		 calmaster();
		 break;

		 case '4':
		 cricket();
		 break;

		 case '5':
		 rock();
		 break;

		 case '6':
		 exit(0);
		}
	}
}
//////////////////////////////////////////////////////////////////////////////
//*****************************void maindisplay() ends**********************//
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//*****************************void casino()********************************//
//////////////////////////////////////////////////////////////////////////////
void casino()
{

 ///////////////////////////////////////////////////////////////////////////
	void casino1player();
	void casino2player();
 ///////////////////////////////////////////////////////////////////////////

	while(ca1!='3')
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCasino";
		cout<<"\n1. 1-Player";
		cout<<"\n2. 2-Player";
		cout<<"\n3. Main Menu";
		cout<<"\n4. Exit";
		cout<<"\nYour Choice : ";
		ca1=getch();
		switch(ca1)
		{
			case '1':
			casino1player();
			break;
			case '2':
			casino2player();
			break;
			case '3':
			break;
			case '4':
			exit(0);
		}
	}
}

 //////////////////////////class casinoclass/////////////////////////////////
	class casinoclass
	{
		int i;
		long amount1,amount2,bet,betnum1,random0to9;
		char continue1,betnum2;
		public:
		int won;
		void casinoclass1()
		{
			i=0;
			amount1=0;
			amount2=0;
			bet=0;
			won=0;
			continue1=NULL;
			betnum2=NULL;
			betnum1=0;
			random0to9=0;
		}
		void casino1playerrules();
		void casino1playerdeposit();
		void casino1playermain();
		~casinoclass()
		{}
	};
 ///////////////////////////class casinoclass ends///////////////////////////

 ///////////////////////void casino1playerrules()/////////////////////////////
	void casinoclass :: casino1playerrules()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCasino\n\t\t\t\t1 Player\n\t\t\t\tRules\n\n";
		cout<<"-> This is a 1 Player Number Guessing game\n";
		cout<<"-> Player deposits an initial amount to start the game\n";
		cout<<"-> He/She Enters betting amount and guesses a number between 0 to 9\n";
		cout<<"-> If he/she wins he/she will get 10 times of money he bets\n";
		cout<<"-> If he/she bets on wrong number he will lost his betting amount.\n";
		cout<<"-> The player (user or computer) who will have his amount 0 will lose the game\n";
		cout<<"-> And the other Player will WIN the game";
		cout<<"\n\nPress a enter to continue";
		getch();
	}
 ///////////////////////void casino1playerrules() ends///////////////////////

 ///////////////////////void casino1playerdeposit()///////////////////////////
	void casinoclass :: casino1playerdeposit()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCasino\n\t\t\t\t1 Player\n\n";
		cout<<"Enter the amount to be deposited : ";
		cin>>amount2;
		cout<<endl<<amount2<<" is deposited by the user";
		amount1=amount2;
		cout<<"\nThe same amount is also deposited by the computer";
		cout<<"\n\nUser Amount = "<<amount2;
		cout<<"\nComputer Amount = "<<amount1;
		cout<<"\n\nPress a enter to continue";
		getch();
	}
 ///////////////////////void casino1playerdeposit() ends/////////////////////

 ///////////////////////void casino1playermain()//////////////////////////////
	void casinoclass :: casino1playermain()
	{
		while(((amount1!=0)&&(amount2!=0))&&continue1!='n')
		{
			random0to9=srandomvalue();
			random0to9=random0to9%10;
			clrscr();
			cout<<"\n\t\t\t\tGame Zone\n\n";
			cout<<"\t\t\t\tCasino\n\t\t\t\t1 Player\n\n";
			if(i!=0)
			{
				cout<<"\nDo you want to change the Betting amount (y,any key) : ";
				continue1=getch();
			}
			if((continue1=='y')||(i==0))
			{
				cout<<"\nYour Amount = "<<amount2;
				cout<<"\nEnter the Betting amount : ";
				cin>>bet;
			}

			if(amount1<bet)
			{
				bet=amount1;
				cout<<"\nBet value changed to Computer Amount";
				cout<<"\nBet Value = "<<bet;
			}

			else if(amount2<bet)
			{
				cout<<"\nBet not allowed (Less Money)";
				getch();
				continue;
			}

			cout<<"\nEnter the number on which you want to bet : ";
			betnum2=getch();
			if(betnum2=='0')
			{
				cout<<'0';
				if(random0to9==0)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='1')
			{
				cout<<'1';
				if(random0to9==1)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='2')
			{
				cout<<'2';
				if(random0to9==2)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='3')
			{
				cout<<'3';
				if(random0to9==3)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='4')
			{
				cout<<'4';
				if(random0to9==4)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='5')
			{
				cout<<'5';
				if(random0to9==5)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='6')
			{
				cout<<'6';
				if(random0to9==6)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='7')
			{
				cout<<'7';
				if(random0to9==7)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='8')
			{
				cout<<'8';
				if(random0to9==8)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else
			{
				cout<<'9';
				if(random0to9==9)
				amount2+=bet*10;
				else
				amount2-=bet;
			}

			betnum1=randomtimevalue();
			betnum1=betnum1%10;
			for(int j=0;j<=9;j++)
			{
				if(betnum1==j)
				{
					if(random0to9==j)
					amount1+=bet*10;
					else
					amount1-=bet;
				}
			}

			cout<<"\n\nReal Value = "<<random0to9;
			cout<<"\nBetting Amount = "<<bet;
			cout<<"\nComputer Bet Value = "<<betnum1;
			cout<<"\nComputer Amount = "<<amount1;
			cout<<"\nYour Bet Value = "<<betnum2;
			cout<<"\nYour Amount = "<<amount2;

			if(amount1==0&&amount2==0)
			{
				cout<<"\n\nIts a Draw";
				cout<<"\nPress Enter to continue";
				getch();
				break;
			}
			if(amount1==0)
			{
				cout<<"\n\nYou Won";
				cout<<"\nPress Enter to continue";
				getch();
				break;
			}
			if(amount2==0)
			{
				cout<<"\n\nYou Lost";
				cout<<"\nPress Enter to continue";
				getch();
				break;
			}
			cout<<"\n\nDo you want to continue (any key/n) : ";
			continue1=getch();
			i++;
		}
	}
 ///////////////////////void casino1playermain() ends////////////////////////

 casinoclass cac1;

 ///////////////////////void casino1player()/////////////////////////////////
	void casino1player()
	{
		 cac1.casinoclass1();
		 cac1.casino1playerrules();
		 cac1.casino1playerdeposit();
		 cac1.casino1playermain();
	}
 ///////////////////////void casino1player() ends////////////////////////////

 //////////////////////////class casinoclass1////////////////////////////////
	class casinoclass1
	{
		int i;
		long amount1,amount2,bet,random0to9;
		char continue1,continue2,betnum1,betnum2,player1[30],player2[30];
		public:
		int won;
		void casinoclass2()
		{
			i=0;
			amount1=0;
			amount2=0;
			bet=0;
			won=0;
			continue1=NULL;
			continue2=NULL;
			betnum1=NULL;
			betnum2=NULL;
			strcpy(player1,NULL);
			strcpy(player2,NULL);
		}
		void casino2playerrules();
		void casino2playergetnames();
		void casino2playerdeposit();
		void casino2playermain();
		~casinoclass1()
		{}
	};
 ///////////////////////////class casinoclass1 ends//////////////////////////

 ///////////////////////void casino2playerrules()////////////////////////////
	void casinoclass1 :: casino2playerrules()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCasino\n\t\t\t\t2 Players\n\t\t\t\tRules\n\n";
		cout<<"-> This is a 2 Player Number Guessing game\n";
		cout<<"-> Players deposits an initial amount to start the game\n";
		cout<<"-> Both the Players enters a betting amount and guesses a number between 0 to 9\n";
		cout<<"   respectively\n";
		cout<<"-> The player who wins will get 10 times of money he/she bets\n";
		cout<<"-> If the player bets on wrong number he will lose his betting amount.\n";
		cout<<"-> The player who will have his amount 0 will lose the game\n";
		cout<<"-> And the other Player will WIN the game";
		cout<<"\n\nPress a enter to continue";
		getch();
	}
 ///////////////////////void casino2playerrules() ends///////////////////////

 ///////////////////////void casino2playergetnames()/////////////////////////
	void casinoclass1 :: casino2playergetnames()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCasino\n\t\t\t\t2 Players\n";
		cout<<"Enter your names\n";
		cout<<"Player 1 : ";
		gets(player1);
		cout<<"Player 2 : ";
		gets(player2);
		cout<<"\n\nPress enter to continue";
		getch();
	}
 ///////////////////////void casino2playergetnames() ends/////////////////////

 ///////////////////////void casino2playerdeposit()///////////////////////////
	void casinoclass1 :: casino2playerdeposit()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCasino\n\t\t\t\t2 Players\n\n";
		cout<<"Enter the amount to be deposited : ";
		cin>>amount1;
		amount2=amount1;
		cout<<"\n\n"<<player1<<"'s Amount = "<<amount1;
		cout<<"\n"<<player2<<"'s Amount = "<<amount2;
		cout<<"\n\nPress a enter to continue";
		getch();
	}
 ///////////////////////void casino2playerdeposit() ends/////////////////////

 ///////////////////////void casino2playermain()//////////////////////////////
	void casinoclass1 :: casino2playermain()
	{
		while(((amount1!=0)&&(amount2!=0))&&continue1!='n')
		{
			random0to9=srandomvalue();
			random0to9=random0to9%10;
			clrscr();
			cout<<"\n\t\t\t\tGame Zone\n\n";
			cout<<"\t\t\t\tCasino\n\t\t\t\t2 Players\n\n";
			cout<<"\n"<<player1<<"'s Amount = "<<amount1;
			cout<<"\n"<<player2<<"'s Amount = "<<amount2;
			if((i!=0)&&(i!=2))
			{
				cout<<"\nDo you want to change the Betting amount (y,any key) : ";
				continue2=getch();
			}
			if((continue2=='y')||(i==0)||(i==2))
			{
				cout<<"\nEnter the Betting amount : ";
				cin>>bet;
			}
			if((amount1<bet)||(amount2<bet))
			{
				cout<<"\nBet not allowed, Less Money";
				if(amount1<bet)
				cout<<" of "<<player1<<endl<<player1<<"'s Amount = "<<amount1;
				else if(amount2<bet)
				cout<<" of "<<player2<<endl<<player2<<"'s Amount = "<<amount2;
				getch();
				i=2;
				continue;
			}
			cout<<endl<<player1<<"'s Turn\nEnter the number on which you want to bet : ";
			betnum1=getch();
			if(betnum2=='0')
			{
				cout<<'0';
				if(random0to9==0)
				amount1+=bet*10;
				else
				amount1-=bet;
			}
			else if(betnum1=='1')
			{
				cout<<'1';
				if(random0to9==1)
				amount1+=bet*10;
				else
				amount1-=bet;
			}
			else if(betnum1=='2')
			{
				cout<<'2';
				if(random0to9==2)
				amount1+=bet*10;
				else
				amount1-=bet;
			}
			else if(betnum1=='3')
			{
				cout<<'3';
				if(random0to9==3)
				amount1+=bet*10;
				else
				amount1-=bet;
			}
			else if(betnum1=='4')
			{
				cout<<'4';
				if(random0to9==4)
				amount1+=bet*10;
				else
				amount1-=bet;
			}
			else if(betnum1=='5')
			{
				cout<<'5';
				if(random0to9==5)
				amount1+=bet*10;
				else
				amount1-=bet;
			}
			else if(betnum1=='6')
			{
				cout<<'6';
				if(random0to9==6)
				amount1+=bet*10;
				else
				amount1-=bet;
			}
			else if(betnum1=='7')
			{
				cout<<'7';
				if(random0to9==7)
				amount1+=bet*10;
				else
				amount1-=bet;
			}
			else if(betnum1=='8')
			{
				cout<<'8';
				if(random0to9==8)
				amount1+=bet*10;
				else
				amount1-=bet;
			}
			else
			{
				cout<<'9';
				if(random0to9==9)
				amount1+=bet*10;
				else
				amount1-=bet;
			}

			cout<<endl<<player2<<"'s Turn\nEnter the number on which you want to bet : ";
			betnum2=getch();
			if(betnum2=='0')
			{
				cout<<'0';
				if(random0to9==0)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='1')
			{
				cout<<'1';
				if(random0to9==1)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='2')
			{
				cout<<'2';
				if(random0to9==2)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='3')
			{
				cout<<'3';
				if(random0to9==3)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='4')
			{
				cout<<'4';
				if(random0to9==4)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='5')
			{
				cout<<'5';
				if(random0to9==5)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='6')
			{
				cout<<'6';
				if(random0to9==6)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='7')
			{
				cout<<'7';
				if(random0to9==7)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else if(betnum2=='8')
			{
				cout<<'8';
				if(random0to9==8)
				amount2+=bet*10;
				else
				amount2-=bet;
			}
			else
			{
				cout<<'9';
				if(random0to9==9)
				amount2+=bet*10;
				else
				amount2-=bet;
			}

			cout<<"\n\nReal Value = "<<random0to9;
			cout<<"\nBetting Amount = "<<bet;
			cout<<"\n"<<player1<<"'s Bet Value = "<<betnum1;
			cout<<"\n"<<player1<<"'s Amount = "<<amount1;
			cout<<"\n"<<player2<<"'s Bet Value = "<<betnum2;
			cout<<"\n"<<player2<<"'s Amount = "<<amount2;

			if(amount1==0&&amount2==0)
			{
				cout<<"\n\nIts a Draw";
				cout<<"\nPress Enter to continue";
				getch();
				break;
			}
			if(amount1==0)
			{
				cout<<"\n\n"<<player2<<" Won";
				cout<<"\nPress Enter to continue";
				getch();
				break;
			}
			if(amount2==0)
			{
				cout<<"\n\n"<<player1<<" Won";
				cout<<"\nPress Enter to continue";
				getch();
				break;
			}
			cout<<"\n\nDo you want to continue (any key/n) : ";
			continue1=getch();
			i=1;
		}
	}
 ///////////////////////void casino2playermain() ends////////////////////////


 casinoclass1 cac2;

 ///////////////////////void casino2player()/////////////////////////////////
	void casino2player()
	{
		 cac2.casinoclass2();
		 cac2.casino2playerrules();
		 cac2.casino2playergetnames();
		 cac2.casino2playerdeposit();
		 cac2.casino2playermain();
	}
 ///////////////////////void casino1player() ends////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//*****************************void casino() ends***************************//
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//*****************************void quiz()**********************************//
//////////////////////////////////////////////////////////////////////////////
void quiz()
{

 ///////////////////////////////////////////////////////////////////////////
	void quiz1player();
	void quiz2player();
 ///////////////////////////////////////////////////////////////////////////

	while(q1!='3')
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tQuiz";
		cout<<"\n1. 1-Player";
		cout<<"\n2. 2-Player";
		cout<<"\n3. Main Menu";
		cout<<"\n4. Exit";
		cout<<"\nYour Choice : ";
		q1=getch();
		switch(q1)
		{
			case '1':
			quiz1player();
			break;
			case '2':
			quiz2player();
			break;
			case '3':
			break;
			case '4':
			exit(0);
		}
	}
}

 //////////////////////////class quizclass////////////////////////////////////
	class quizclass
	{
	int an[5],i,ans;
	float extratime;
	char start,games,q[5][200];
	public:
	int won;
	void quizclass1();
	void quizrules();
	void quizmain();
	~quizclass()
	{}
	};
 ///////////////////////////class quizclass ends//////////////////////////

  ///////////////////////void quizclass1()/////////////////////////////////////
	void quizclass :: quizclass1()
	{
		i=0;
		won=0;
		extratime=0;
		start=NULL;
		games=NULL;
		for(int i=0;i<3;i++)
		{
			an[i]=0;
			strcpy(q[i],NULL);
		}
	}
 ///////////////////////void quizclass1() ends///////////////////////////////

 ////////////////////////void quizrules()////////////////////////////////////
 void quizclass :: quizrules()
 {
	 clrscr();
	 cout<<"\n\t\t\t   C++ PROGRAM QUIZ GAME\n";
	 cout<<"\n\n    ________________________________________________________________________    ";
	 cout<<"\t\t\t    WELCOME TO THE GAME\n";
	 cout<<"\n    ________________________________________________________________________    ";
	 cout<<"    ________________________________________________________________________    \n";
	 cout<<"\nPress any key to continue";
	 getch();
 }
 ////////////////////////void quizrules() ends///////////////////////////////

  ///////////////////////void quizmain()/////////////////////////////////////
  void quizclass :: quizmain()
  {
////////////////////////////QUESTIONS/////////////////////////////////////////
 ////////////////////////QUESTION 1//////////////////////////////////////////
 i=srandomvalue()%3;
 if(i==0)
 {
  strcpy(q[0]," QUESTION 1 : Which Planet is not named after god?\n 1. Mercury\t\t\t2. Saturn\n 3. Earth\t\t\t4. None of these\n Your Choice : ");
  an[0]=3;
 }
 else if(i==1)
 {
  strcpy(q[0]," Question 1 : Which part of human body reamains constant in size till death?\n 1. Eye Lens\t\t\t2. Nose\n 3. Tongue\t\t\t4. Heart\n Your Choice : ");
  an[0]=1;
 }
 else
 {
  strcpy(q[0]," QUESTION 1 : How many times does a broken clock is right every day?\n 1. Four\t\t\t2. One\n 3. Two\t\t\t\t4. None of these\n Your Choice : ");
  an[0]=3;
 }
 //////////////////QUESTION 2//////////////////////////////////////////////////////////
 i=srandomvalue()%3;
 if(i==0)
 {
  strcpy(q[1]," QUESTION 2 : Babies are born with?\n 1. Red Eyes\t\t\t\t2. Black Eyes\n 3. Blue Eyes\t\t\t\t4. None of these\n Your Choice : ");
  an[1]=3;
 }
 else if(i==1)
 {
  strcpy(q[1]," Question 2 : Which animal can live for several weeks with its head cut off?\n 1. Chicken\t\t\t2. Rat\n 3. Cockroach\t\t\t4. Snake\n Your Choice : ");
  an[1]=3;
 }
 else
 {
  strcpy(q[1]," QUESTION 2 : Which of the following sleeps with one eye open?\n 1. Cat\t\t\t\t\t2. Snake\n 3. Lion\t\t\t\t4. Dolphin\n Your Choice : ");
  an[1]=4;
 }
 //////////////QUESTION 3//////////////////////////////////////////////////////////////
 i=srandomvalue()%3;
 if(i==0)
 {
  strcpy(q[2]," QUESTION 3 : Every time you sneeze some of your brain cells?\n 1. Increase in Size\t\t\t2. Decrease in Size\n 3. Die\t\t\t\t\t4. None of these\n Your Choice : ");
  an[2]=3;
 }
 else if(i==1)
 {
  strcpy(q[2]," Question 3 : Which of the following never spoils?\n 1. Honey\t\t\t2. Potato\n 3. Milk\t\t\t4. None of these\n Your Choice : ");
  an[2]=1;
 }
 else
 {
  strcpy(q[2]," QUESTION 3 : When you sneeze your heart stops for a?\n 1. Second\t\t\t\t2. Millisecond\n 3. Microsecond\t\t\t\t4. None of these\n Your Choice : ");
  an[2]=2;
 }

 clock_t t;
 for(i=0;i<3;i++)
 {
	   extratime=0;
	   won=1;
	   clrscr();
	   cout<<"\n\t\t\t   C++ PROGRAM QUIZ GAME\n"<<q[i];
	   extratime=clock();
	   ans=getch();
	   if((ans=='1'&&an[i]!=1)||(ans=='2'&&an[i]!=2)||(ans=='3'&&an[i]!=3)||(ans=='4'&&an[i]!=4))
	   won=2;

 extratime=clock()-extratime;
 extratime=float(extratime)/CLOCKS_PER_SEC;

 if(won==1)
 cout<<"Right Answer";
 else
 cout<<"Wrong Answer";
 cout<<"\nTime : "<<extratime;
 getch();
 }
}
 ////////////////////////////////////////////////////////////////////////////
 quizclass qc1;

 ///////////////////////void quiz1player()///////////////////////////////////
	void quiz1player()
	{
		 qc1.quizclass1();
		 qc1.quizrules();
		 qc1.quizmain();
	}
 ///////////////////////void quiz1player() ends//////////////////////////////


 //////////////////////////class quizclass1////////////////////////////////////
	class quizclass1
	{
	int an1[5],an2[5],i,ans1,ans2;
	float extratime1,extratime2;
	char start,games,q1[3][200],q2[3][200];
	public:
	int won1,won2;
	void quiz2playerclass1();
	void quiz2playerrules();
	void quiz2playermain();
	~quizclass1()
	{}
	};
 ///////////////////////////class quizclass1 ends//////////////////////////

  ///////////////////////void quizclass1()/////////////////////////////////////
	void quizclass1 :: quiz2playerclass1()
	{
		i=0;
		won1=0;
		won2=0;
		extratime1=0;
		extratime2=0;
		start=NULL;
		games=NULL;
		for(int i=0;i<3;i++)
		{
			an1[i]=0;
			an2[i]=0;
			strcpy(q1[i],NULL);
			strcpy(q2[i],NULL);
		}
	}
 ///////////////////////void quizclass1() ends///////////////////////////////

 ////////////////////////void quiz1playerrules()////////////////////////////////////
 void quizclass1 :: quiz2playerrules()
 {
	 clrscr();
	 cout<<"\n\t\t\t   C++ PROGRAM QUIZ GAME\n";
	 cout<<"\n\n    ________________________________________________________________________    ";
	 cout<<"\t\t\t    WELCOME TO THE GAME\n";
	 cout<<"\n    ________________________________________________________________________    ";
	 cout<<"    ________________________________________________________________________    \n";
	 cout<<"\nPress any key to continue";
	 getch();
 }
 ////////////////////////void quiz1playerrules() ends////////////////////////

  ///////////////////////void quiz1playermain()//////////////////////////////
  void quizclass1 :: quiz2playermain()
  {
////////////////////////////QUESTIONS/////////////////////////////////////////
 ////////////////////////QUESTION 1//////////////////////////////////////////
 i=srandomvalue()%3;
 if(i==0)
 {
  strcpy(q1[0]," QUESTION 1 : Which Planet is not named after god?\n 1. Mercury\t\t\t2. Saturn\n 3. Earth\t\t\t4. None of these\n Your Choice : ");
  an1[0]=3;
  strcpy(q2[0]," QUESTION 1 : Which part of human body reamains constant in size till death?\n 1. Eye Lens\t\t\t2. Nose\n 3. Tongue\t\t\t4. Heart\n Your Choice : ");
  an2[0]=1;
 }
 else if(i==1)
 {
  strcpy(q1[0]," QUESTION 1 : Which part of human body reamains constant in size till death?\n 1. Eye Lens\t\t\t2. Nose\n 3. Tongue\t\t\t4. Heart\n Your Choice : ");
  an1[0]=1;
  strcpy(q2[0]," QUESTION 1 : Which Planet is not named after god?\n 1. Mercury\t\t\t2. Saturn\n 3. Earth\t\t\t4. None of these\n Your Choice : ");
  an2[0]=3;
 }
 else
 {
  strcpy(q1[0]," QUESTION 1 : How many times does a broken clock is right every day?\n 1. Four\t\t\t2. One\n 3. Two\t\t\t\t4. None of these\n Your Choice : ");
  an1[0]=3;
  strcpy(q2[0]," QUESTION 1 : Which part of human body reamains constant in size till death?\n 1. Eye Lens\t\t\t2. Nose\n 3. Tongue\t\t\t4. Heart\n Your Choice : ");
  an2[0]=1;

 }
 //////////////////QUESTION 2//////////////////////////////////////////////////////////
 i=srandomvalue()%3;
 if(i==0)
 {
  strcpy(q1[1]," QUESTION 2 : Babies are born with?\n 1. Red Eyes\t\t\t\t2. Black Eyes\n 3. Blue Eyes\t\t\t\t4. None of these\n Your Choice : ");
  an1[1]=3;
  strcpy(q2[1]," QUESTION 2 : Which animal can live for several weeks with its head cut off?\n 1. Chicken\t\t\t2. Rat\n 3. Cockroach\t\t\t4. Snake\n Your Choice : ");
  an2[1]=3;
 }
 else if(i==1)
 {
  strcpy(q1[1]," QUESTION 2 : Which animal can live for several weeks with its head cut off?\n 1. Chicken\t\t\t2. Rat\n 3. Cockroach\t\t\t4. Snake\n Your Choice : ");
  an1[1]=3;
  strcpy(q2[1]," QUESTION 2 : Which of the following sleeps with one eye open?\n 1. Cat\t\t\t\t\t2. Snake\n 3. Lion\t\t\t\t4. Dolphin\n Your Choice : ");
  an2[1]=4;
 }
 else
 {
  strcpy(q1[1]," QUESTION 2 : Which of the following sleeps with one eye open?\n 1. Cat\t\t\t\t\t2. Snake\n 3. Lion\t\t\t\t4. Dolphin\n Your Choice : ");
  an1[1]=4;
  strcpy(q2[1]," QUESTION 2 : Which animal can live for several weeks with its head cut off?\n 1. Chicken\t\t\t2. Rat\n 3. Cockroach\t\t\t4. Snake\n Your Choice : ");
  an2[1]=3;

 }
 //////////////QUESTION 3//////////////////////////////////////////////////////////////
 i=srandomvalue()%3;
 if(i==0)
 {
  strcpy(q1[2]," QUESTION 3 : Every time you sneeze some of your brain cells?\n 1. Increase in Size\t\t\t2. Decrease in Size\n 3. Die\t\t\t\t\t4. None of these\n Your Choice : ");
  an1[2]=3;
  strcpy(q2[2]," QUESTION 3 : Which of the following never spoils?\n 1. Honey\t\t\t2. Potato\n 3. Milk\t\t\t4. None of these\n Your Choice : ");
  an2[2]=1;
 }
 else if(i==1)
 {
  strcpy(q1[2]," QUESTION 3 : Which of the following never spoils?\n 1. Honey\t\t\t2. Potato\n 3. Milk\t\t\t4. None of these\n Your Choice : ");
  an1[2]=1;
  strcpy(q2[2]," QUESTION 3 : Every time you sneeze some of your brain cells?\n 1. Increase in Size\t\t\t2. Decrease in Size\n 3. Die\t\t\t\t\t4. None of these\n Your Choice : ");
  an2[2]=3;
 }
 else
 {
  strcpy(q1[2]," QUESTION 3 : Every time you sneeze some of your brain cells?\n 1. Increase in Size\t\t\t2. Decrease in Size\n 3. Die\t\t\t\t\t4. None of these\n Your Choice : ");
  an1[2]=3;
  strcpy(q2[2]," QUESTION 3 : When you sneeze your heart stops for a?\n 1. Second\t\t\t\t2. Millisecond\n 3. Microsecond\t\t\t\t4. None of these\n Your Choice : ");
  an2[2]=2;
 }

 clock_t t;
 for(i=0;i<3;i++)
 {
	   extratime1=0;
	   extratime2=0;
	   won1=0;
	   won2=0;
	   clrscr();
	   cout<<"\n\t\t\t   C++ PROGRAM QUIZ GAME\n\n First Player\n"<<q1[i];
	   extratime1=clock();
	   ans1=getch();
	   extratime1=clock()-extratime1;
	   extratime1=float(extratime1)/CLOCKS_PER_SEC;
	   if((ans1=='1'&&an1[i]!=1)||(ans1=='2'&&an1[i]!=2)||(ans1=='3'&&an1[i]!=3)||(ans1=='4'&&an1[i]!=4))
	   won1=1;
	   clrscr();
	   cout<<"\n\t\t\t   C++ PROGRAM QUIZ GAME\n\n Second Player\n"<<q2[i];
	   extratime2=clock();
	   ans2=getch();
	   extratime2=clock()-extratime2;
	   extratime2=float(extratime2)/CLOCKS_PER_SEC;
	   if((ans2=='1'&&an2[i]!=1)||(ans2=='2'&&an2[i]!=2)||(ans2=='3'&&an2[i]!=3)||(ans2=='4'&&an2[i]!=4))
	   won2=1;

 clrscr();
 cout<<"\n\t\t\t   C++ PROGRAM QUIZ GAME\n\t\t\t\tScoreboard";
 if(won1==1)
 cout<<"\n Player 1 gave the Wrong Answer";
 else
 cout<<"\n Player 1 gave the Right Answer";
 if(won2==1)
 cout<<"\n Player 2 gave the Wrong Answer";
 else
 cout<<"\n Player 2 gave the Right Answer";
 cout<<"\n\n Player 1 time : "<<extratime1<<"\n Player 2 time : "<<extratime2<<endl;
 if((won1==0)&&(won2==0))
 {
	if(extratime1<extratime2)
	cout<<" Player 1 won";
	else if(extratime2<extratime1)
	cout<<" Player 2 won";
 }
 else if(won1==0)
 cout<<" Player 1 won";
 else if(won2==0)
 cout<<" Player 2 won";
 else
 cout<<" Draw";
 getch();
 }
}
 ////////////////////////////////////////////////////////////////////////////
 quizclass1 qc2;

 ///////////////////////void quiz1player()///////////////////////////////////
	void quiz2player()
	{
		 qc2.quiz2playerclass1();
		 qc2.quiz2playerrules();
		 qc2.quiz2playermain();
	}
 ///////////////////////void casino1player() ends////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//*****************************void quiz() ends*****************************//
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//*****************************void calmaster()*****************************//
//////////////////////////////////////////////////////////////////////////////

 //////////////////////////class calclassname////////////////////////////////
	class calclassname
	{
		public:
		float timetaken;
		char name[30];
		calclassname()
		{
			 timetaken=0;
			 strcpy(name,NULL);
		}
		void calmastergetname();
		~calclassname()
		{}
	};
 //////////////////////////class calclassname ends///////////////////////

 //////////////////////////class calclass////////////////////////////////////
	class calclass : public calclassname
	{
	long truevalue;
	int truesum,usersum;
	public:
	int won;
	void calclass1()
	{
		truevalue=0;
		truesum=0;
		usersum=0;
		won=0;
	}

	void calmasterrules();
	void calmastermain();
	void calmasterputscore();
	void calmasterscore();
	float calmastergettimetaken()
	{
		return timetaken;
	}
	~calclass()
	{}
	};
 ///////////////////////////class cricketclass ends//////////////////////////

 ///////////////////////void calmasterrules()/////////////////////////////////
	void calclass :: calmasterrules()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCalculation Master\n\n";
		cout<<"\n\nPress a enter to continue";
		getch();
	}
 ///////////////////////void calmasterrules() ends////////////////////////////

 ///////////////////////void calmastermain()/////////////////////////////////
	void calclass :: calmastermain()
	{
		clrscr();
		clock_t t;
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"Calculation Master\n\n";
		cout<<"Add the following numbers\n";
		cout<<"Press Enter to start\n";
		getch();
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"Calculation Master\n\n";
		t=clock();
		for(int i=1;i<11;i++)
		{
			truevalue=(srandomvalue()%i)+1;
			gotoxy(10,3+i+i);
			cout<<truevalue<<endl;
			truesum+=truevalue;
			srandomvalue();
		}
		cout<<"Enter the Sum : ";
		cin>>usersum;
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"Calculation Master\n\n";
		t=clock()-t;
		timetaken=float(t)/CLOCKS_PER_SEC;
		if(usersum==truesum)
		{
			cout<<"Well Done...";
			won=1;
		}
		else
		{
			cout<<"Oops.....";
			won=0;
		}
		cout<<"\nTime taken : "<<timetaken<<" seconds";
		getch();
	}
 ///////////////////////void calmastermain() ends////////////////////////////

///////////////////////void calmastergetname()////////////////////////////
	void calclassname :: calmastergetname()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCalculation Master\n\n";
		cout<<"Enter your name : ";
		gets(name);
		getch();
	}
 ///////////////////////void calmastergetname() ends///////////////////////

  calclassname cacn1;

 ///////////////////////void calmasterputscore()///////////////////////////
	void calclass :: calmasterputscore()
	{
		 int i=0,n;
		 float timetaken[11];
		 char name[11][30];
		 fstream f;
		 f.open("yca1p.dat",ios::binary|ios::in);
		 timetaken[i]=cacn1.timetaken;
		 strcpy(name[i],cacn1.name);
		 i++;
		 while(f.read((char *)&cacn1,sizeof(cacn1)))
		 {
			timetaken[i]=cacn1.timetaken;
			strcpy(name[i],cacn1.name);
			i++;
		 }
		 n=i;
		 if(n>11)
		 n=11;
		 f.close();
		 remove("yca1p.dat");

		 int j=0,h=0;
		 float temp;
		 char temp1[30];
		 f.open("yca1pe.dat",ios::binary|ios::out);
		 for(i=0;i<n;i++)
		 {
			if(i>9)
			continue;
			h=0;
			for(j=i+1;j<n;j++)
			{
				if((timetaken[i]>=timetaken[j])&&(i!=n-1))
				{
					temp=timetaken[j];
					timetaken[j]=timetaken[i];
					cacn1.timetaken=temp;
					timetaken[i]=temp;
					strcpy(temp1,name[j]);
					strcpy(name[j],name[i]);
					strcpy(cacn1.name,temp1);
					strcpy(name[i],temp1);
					h=1;
				}
			}
			if(h==0)
			{
				cacn1.timetaken=timetaken[i];
				strcpy(cacn1.name,name[i]);
			}
			f.write((char *)&cacn1,sizeof(cacn1));
	}
	f.close();
	 }
 ///////////////////////void calmasterscore()///////////////////////////////
	void calclass :: calmasterscore()
	{

		 fstream f;
		 int i;
		 if(won==1)
		 f.open("yca1pe.dat",ios::binary|ios::in);
		 else
		 f.open("yca1p.dat",ios::binary|ios::in);
		 clrscr();
		 cout<<"\n\t\t\t\tGame Zone\n";
		 cout<<"\t\t\t\tCalculation Master\n";
		 cout<<"\n\t\t\tScoreboard : ";
		 gotoxy(1,6);
		 cout<<"Rank";
		 gotoxy(10,6);
		 cout<<"Name";
		 gotoxy(60,6);
		 cout<<"Timetaken\n";
		 i=0;
		 while((f.read((char *)&cacn1,sizeof(cacn1)))&&(i<10))
		 {
				gotoxy(1,i+7);
				cout<<i+1;
				gotoxy(10,i+7);
				cout<<cacn1.name;
				gotoxy(60,i+7);
				cout<<cacn1.timetaken<<endl;
				i++;
		 }
		 getch();
		 f.close();
		 rename("yca1pe.dat","yca1p.dat");
	}
 ///////////////////////void calmasterscore()/////////////////////////////

 calclass cal1;

 ////////////////////////////////////////////////////////////////////////////
	void calmaster()
	{
		cal1.calclass1();
		cal1.calmasterrules();
		cal1.calmastermain();
		if(cal1.won==1)
		{
			 cacn1.calmastergetname();
			 cacn1.timetaken=cal1.calmastergettimetaken();
			 cal1.calmasterputscore();
		}
		cal1.calmasterscore();
	}
//////////////////////////////////////////////////////////////////////////////
//*****************************void camlmaster() ends***********************//
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
//*****************************void cricket()*******************************//
//////////////////////////////////////////////////////////////////////////////
void cricket()
{

 ///////////////////////////////////////////////////////////////////////////
 void cricket1player();
 void cricket2player();
 ///////////////////////////////////////////////////////////////////////////

	while(c1!='3')
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCricket";
		cout<<"\n1. 1-Player";
		cout<<"\n2. 2-Player";
		cout<<"\n3. Main Menu";
		cout<<"\n4. Exit";
		cout<<"\nYour Choice : ";
		c1=getch();
		switch(c1)
		{
			case '1':
			cricket1player();
			break;
			case '2':
			cricket2player();
			break;
			case '3':
			break;
			case '4':
			exit(0);
		}
	}
}

 //////////////////////////class cricketclassname////////////////////////////
	class cricketclassname
	{
		public:
		float runrate;
		char name[30];
		cricketclassname()
		{
			 runrate=0;
			 strcpy(name,NULL);
		}
		void cricket1playergetname();
		~cricketclassname()
		{}
	};
 //////////////////////////class cricketclassname ends///////////////////////

 //////////////////////////class cricketclass////////////////////////////////
	class cricketclass : public cricketclassname
	{
	int totalovers,random1to6,totalruns,over,ball,randomvalue,level,target,overrun;
	float reqrunrate;
	char continue1,run;
	public:
	int won;
	void cricketclass1()
	{
		random1to6=0;
		run='0';
		overrun=0;
		totalruns=0;
		over=0;
		randomvalue=0;
		ball=0;
		won=0;
		continue1=NULL;
	}
	void cricket1playerrules();
	void cricket1playerlevel();
	void cricket1playerovers();
	void cricket1playertargetscore();
	void cricket1playerscoreboard();
	void cricket1playermain();
	void cricket1playerputscore();
	void cricket1playerscores();
	float cricket1playergetrunrate()
	{
		 return runrate;
	}
	~cricketclass()
	{}
	};
 ///////////////////////////class cricketclass ends//////////////////////////

 ///////////////////////void cricket1playerrules()////////////////////////////
	void cricketclass :: cricket1playerrules()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCricket\n\t\t\t\t1 Player\n\t\t\t\tRules\n\n";
		cout<<"-> This is a 1 Player Cricket game in which the player will guess any number\n";
		cout<<"   from 1 to 6 which would be considered as his run.\n";
		cout<<"\n-> A number is generated at random by the computer\n";
		cout<<"\n-> If the number generated by the computer is same as the number guessed by the\n";
		cout<<"   user then the user is OUT, else his number is considered as runs and would be";
		cout<<"   added in the total score.\n";
		cout<<"   You will also have to decide the number of overs (min-5,max-20) of the match\n";
		cout<<"\n-> There are three levels in this game - Easy, Intermeditae and Expert\n";
		cout<<"   You will be given the Target according to the level chosen\n";
		cout<<"\n-> If you are able to achieve the TARGET score in the specified overs\n";
		cout<<"   You will WIN the game";
		cout<<"\n\nPress a enter to continue";
		getch();
	}
 ///////////////////////void cricket1playerrules() ends///////////////////////

 ///////////////////////void cricket1playerlevel()////////////////////////////
	void cricketclass :: cricket1playerlevel()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCricket\n\t\t\t\t1 Player\n\n\n";
		cout<<"1. Easy\n2. Intermediate\n3. Expert\n";
		cout<<"Your choice : ";
		level=getch();
		switch(level)
		{
		 case '2':
		 cout<<2<<"\n\nYour level is ";
		 cout<<"Intermediate";
		 break;
		 case '3':
		 cout<<3<<"\n\nYour level is ";
		 cout<<"Expert";
		 break;
		 default:
		 level='1';
		 cout<<1<<"\n\nYour level is ";
		 cout<<"Easy";
		}
		cout<<"\nPress a enter to continue";
		getch();
	}
 ///////////////////////void cricket1playerlevel() ends///////////////////////

 ///////////////////////void cricket1playerovers()////////////////////////////
	void cricketclass :: cricket1playerovers()
	{
		do
		{
			clrscr();
			cout<<"\n\t\t\t\tGame Zone\n\n";
			cout<<"\t\t\t\tCricket\n\t\t\t\t1 Player\nEnter Overs to play : ";
			cin>>totalovers;
			if(totalovers>20)
			cout<<"Overs should not exceed the limit of 20\nTRY AGAIN";
			else if(totalovers<1)
			totalovers=5;
			cout<<"Total Overs = "<<totalovers;
			getch();
		}
		while(totalovers>20);
	}
 ///////////////////////void cricket1playerovers() ends///////////////////////

 ///////////////////////void cricket1playertargetscore()//////////////////////
	void cricketclass :: cricket1playertargetscore()
	{
	 target=srandomvalue();
	 target=1+target%3;
	 switch(level)
	 {                       //2 4	 7 9 	11 13
		 case '2':
		 target+=6;
		 break;
		 case '3':
		 target+=10;
		 break;
		 default:
		 target+=1;
	 }
	 randomvalue=srandomvalue();
	 randomvalue=1+randomvalue%6;
	 target=(totalovers*target)+randomvalue;
	}
 ///////////////////////void cricket1playertargetscore() ends/////////////////

 ///////////////////////void cricket1playermain()/////////////////////////////
	void cricketclass :: cricket1playermain()
	{
		for(int i=0;i<(totalovers*6);i++)
		{
			if(totalruns<target)
			{
				clrscr();
				cout<<"\n\t\t\t\tGame Zone\n\n";
				randomvalue=srandomvalue();
				random1to6=(randomvalue%6)+1;
				cout<<"\t\t\t\tCricket\n\t\t\t\t1 Player\n\n";
				cout<<"Total Runs : "<<totalruns<<endl;
				cout<<"Over "<<over;
				cout<<"\tBalls "<<ball;
				cout<<"\nTarget : "<<target;
				cout<<"\nEnter your run : ";
				run=getch();
				if(run=='0')
				cout<<'0';
				else if(run=='1')
				cout<<'1';
				else if(run=='2')
				cout<<'2';
				else if(run=='3')
				cout<<'3';
				else if(run=='4')
				cout<<'4';
				else if(run=='5')
				cout<<'5';
				else if(run=='6')
				cout<<'6';
				else
				cout<<"Wrong Choice";
				cout<<"\nComputer Run : "<<random1to6;
				delay(1000);
				if(((run=='1')&&(random1to6==1))||((run=='2')&&(random1to6==2))||((run=='3')&&(random1to6==3))||((run=='4')&&(random1to6==4))||((run=='5')&&(random1to6==5))||((run=='6')&&(random1to6==6)))
				{
					cout<<"\nYou are out";
					getch();
					break;
				}
				else if(run=='1')
				{
					totalruns+=1;
					overrun+=1;
				}
				else if(run=='2')
				{
					totalruns+=2;
					overrun+=2;
				}
				else if(run=='3')
				{
					totalruns+=3;
					overrun+=3;
				}
				else if(run=='4')
				{
					totalruns+=4;
					overrun+=4;
				}
				else if(run=='5')
				{
					totalruns+=5;
					overrun+=5;
				}
				else if(run=='6')
				{
					totalruns+=6;
					overrun+=6;
				}
				ball++;
				if(i%6==5)
				{
					over++;
					ball=0;
				}
				animation();
				if(totalruns>=target)
				{
					won=1;
					cricket1playerscoreboard();
					cout<<"\nYou won";
					getch();
				}
				if(won==0)
				{
				if(i%6==5)
				{
					cricket1playerscoreboard();
					if(over*6==totalovers*6)
					break;
					cout<<"\nDo you want to continue (any key/0) : ";
					continue1=getch();
					if(continue1=='0')
					break;
					overrun=0;
				}
				}
			}

		}
	}
 ///////////////////////void cricket1playermain() ends////////////////////////

 ///////////////////////void cricket1playerscoreboard()///////////////////////
	void cricketclass :: cricket1playerscoreboard()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCricket\n\t\t\t\t1 Player";
		cout<<"\n\t\t\t\tSCOREBOARD\n\n\n";       //4 18
		cout<<"Overs : "<<over;
		cout<<"\nBalls : "<<ball;
		cout<<"\nOver runs : "<<overrun;        //1  1/6*10
		cout<<"\nTotal Runs : "<<totalruns;
		runrate=(float(totalruns)/float(over*6+ball))*6;
		cout<<"\nRun rate : "<<runrate;
		reqrunrate=(float(target-totalruns)/float((totalovers-over)*6-ball))*6;
		if(reqrunrate<0)
		reqrunrate=0;
		cout<<"\nRequired Run rate : "<<reqrunrate;
		cout<<"\nTarget : "<<target;
		delay(1000);
	}

///////////////////////void cricket1playergetname()////////////////////////////
	void cricketclassname :: cricket1playergetname()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCricket\n\t\t\t\t1 Player\n\n";
		cout<<"Enter your name : ";
		gets(name);
		getch();
	}
 ///////////////////////void cricket1playergetname() ends///////////////////////

	cricketclassname ccn1;

 ///////////////////////void cricket1playerscoresputscore()//////////////////
	void cricketclass :: cricket1playerputscore()
	{
		 int i=0,n;
		 float runrate[11];
		 char name[11][30];
		 fstream f;
		 f.open("yc1p.dat",ios::binary|ios::in);
		 runrate[i]=ccn1.runrate;
		 strcpy(name[i],ccn1.name);
		 i++;
		 while(f.read((char *)&ccn1,sizeof(ccn1)))
		 {
			runrate[i]=ccn1.runrate;
			strcpy(name[i],ccn1.name);
			i++;
		 }
		 n=i;
		 if(n>11)
		 n=11;
		 f.close();
		 remove("yc1p.dat");

		 int j=0,h=0;
		 float temp;
		 char temp1[30];
		 f.open("yc1pe.dat",ios::binary|ios::out);
		 for(i=0;i<n;i++)
		 {
			if(i>9)
			continue;
			h=0;
			for(j=i+1;j<n;j++)
			{
				if((runrate[i]<=runrate[j])&&(i!=n-1))
				{
					temp=runrate[j];
					runrate[j]=runrate[i];
					ccn1.runrate=temp;
					runrate[i]=temp;
					strcpy(temp1,name[j]);
					strcpy(name[j],name[i]);
					strcpy(ccn1.name,temp1);
					strcpy(name[i],temp1);
					h=1;
				}
			}
			if(h==0)
			{
				ccn1.runrate=runrate[i];
				strcpy(ccn1.name,name[i]);
			}
			f.write((char *)&ccn1,sizeof(ccn1));
}
f.close();
getch();
	 }
 ///////////////////////void cricket1playerscoresputscore()//////////////////
	void cricketclass :: cricket1playerscores()
	{

		 fstream f;
		 int i;
		 if(won==1)
		 f.open("yc1pe.dat",ios::binary|ios::in);
		 else
		 f.open("yc1p.dat",ios::binary|ios::in);
		 clrscr();
		 cout<<"\n\t\t\t\tGame Zone\n";
		 cout<<"\t\t\t\tCricket\n";
		 cout<<"\n\t\t\tScoreboard : 1 Player";
		 gotoxy(1,6);
		 cout<<"Rank";
		 gotoxy(10,6);
		 cout<<"Name";
		 gotoxy(60,6);
		 cout<<"Runrate\n";
		 i=0;
		 while((f.read((char *)&ccn1,sizeof(ccn1)))&&(i<10))
		 {
				gotoxy(1,i+7);
				cout<<i+1;
				gotoxy(10,i+7);
				cout<<ccn1.name;
				gotoxy(60,i+7);
				cout<<ccn1.runrate<<endl;
				i++;
		 }
		 getch();
		 f.close();
		 rename("yc1pe.dat","yc1p.dat");
	}
 ///////////////////////void cricket1putscores()//////////////////////////

	cricketclass cc1;

 ///////////////////////void cricket1player()////////////////////////////////
	void cricket1player()
	{
		 cc1.cricketclass1();
		 cc1.cricket1playerrules();
		 cc1.cricket1playerlevel();
		 cc1.cricket1playerovers();
		 cc1.cricket1playertargetscore();
		 cc1.cricket1playermain();
		 if(cc1.won==1)
		 {
			 ccn1.cricket1playergetname();
			 ccn1.runrate=cc1.cricket1playergetrunrate();
			 cc1.cricket1playerputscore();
		 }
		 cc1.cricket1playerscores();
	}

 ///////////////////////void cricket1player() ends///////////////////////////
///////////////////////////////////////////////////////////////////////////////

 //////////////////////////class cricketclass2name///////////////////////////
	class cricketclass2name
	{
		public:
		float runrate;
		char name[30];
		cricketclass2name()
		{
			runrate=0;
			strcpy(name,NULL);
		}
		~cricketclass2name()
		{}
	};
 //////////////////////////class cricketclass2name ends//////////////////////
 //////////////////////////class cricketclass2///////////////////////////////
	class cricketclass2 : public cricketclass2name
	{
	int randomvalue,tossturn,toss,tosswin,totalovers,choice,target,totalruns,over,ball,level,overrun;
	float reqrunrate,runrate1,runrate2;
	char continue1,run1,run2,ball1,ball2,playertemp[30],player1[30],player2[30];
	public:
	int won;
	void cricketclass3()
	{
		reqrunrate=0;
		runrate1=0;
		runrate2=0;
		won=0;
		continue1=NULL;
		run1=NULL;
		run2=NULL;
		ball1=NULL;
		ball2=NULL;
		strcpy(player1,NULL);
		strcpy(player2,NULL);
		strcpy(playertemp,NULL);
		run1=0;
		run2=0;
		overrun=0;
		target=0;
		totalruns=0;
		over=0;
		randomvalue=0;
		toss=0;
		ball=0;
	}
	void cricket2playerrules();
	void cricket2playerovers();
	void cricket2playergetnames();
	void cricket2playertoss();
	void cricket2playerinning1();
	void cricket2playerinning2();
	void cricket2playerscoreboard1();
	void cricket2playerscoreboard2();
	void cricket2playerputscore();
	void cricket2playerscores();
	~cricketclass2()
	{}
	};
 ///////////////////////////class cricketclass2 ends/////////////////////////


 ///////////////////////void cricket2playerrules()////////////////////////////
	void cricketclass2 :: cricket2playerrules()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCricket\n\t\t\t\t2 Players\n\t\t\t\tRules\n\n";
		cout<<"-> This is a 2 Player Cricket game in which the players will guess any number\n";
		cout<<"   respectively from 1 to 6 which would be considered as run of the batsman and\n";
		cout<<"   if the bowler number is same to that of batsman he will be out, else batsman\n";
		cout<<"   number would be considered as run and would be added in the total score.\n";
		cout<<"   You will also have to decide the number of overs (min-5,max-20) of the match\n";
		cout<<"   The player with more runs will WIN the game";
		cout<<"\n\nPress a enter to continue";
		getch();
	}
 ///////////////////////void cricket2playerrules() ends///////////////////////

 ///////////////////////void cricket2playerovers()////////////////////////////
	void cricketclass2 :: cricket2playerovers()
	{
		do
		{
			clrscr();
			cout<<"\n\t\t\t\tGame Zone\n\n";
			cout<<"Cricket\n2 Players\nEnter Overs to play : ";
			cin>>totalovers;
			if(totalovers>20)
			cout<<"Overs should not exceed the limit of 20\nTRY AGAIN";
			getch();
		}
		while(totalovers>20);
	}
 ///////////////////////void cricket2playerovers() ends///////////////////////

 ///////////////////////void cricket2playergetnames()/////////////////////////
	void cricketclass2 :: cricket2playergetnames()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCricket\n\t\t\t\t2 Players\n";
		cout<<"Enter your names\n";
		cout<<"Player 1 : ";
		gets(player1);
		cout<<"Player 2 : ";
		gets(player2);
		cout<<"\n\nPress enter to continue";
		getch();
	}
 ///////////////////////void cricket2playergetnames() ends////////////////////

 ///////////////////////void cricket2playertoss()/////////////////////////////
	void cricketclass2 :: cricket2playertoss()
	{
			clrscr();
			cout<<"\n\t\t\t\tGame Zone\n\n";
			cout<<"Cricket\n2 Players\n\t\t\t\tToss\n";
			randomvalue=srandomvalue();
			tossturn=1+(randomvalue%2);
			if(tossturn==1)
			cout<<player1;
			else if(tossturn==2)
			cout<<player2;
			cout<<"'s turn\nHead(1) or Tail(0) : ";
			cin>>toss;
			randomvalue=srandomvalue();
			randomvalue=randomvalue%2;
			if(randomvalue==0)
			cout<<"Its Tails\n\n";
			else
			cout<<"Its Heads\n\n";
			if(tossturn==1)
			{
				if(randomvalue==toss)
				{
					cout<<player1<<" wins the toss";
					tosswin=1;
				}
				else
				{
					cout<<player2<<" wins the toss";
					tosswin=2;
				}
			}
			else
			{
				if(randomvalue==toss)
				{
					cout<<player2<<" wins the toss";
					tosswin=2;
				}
				else
				{
					cout<<player1<<" wins the toss";
					tosswin=1;
				}
			}
			if(tosswin==1)
			cout<<endl<<endl<<player1<<"'s turn";
			else
			cout<<endl<<endl<<player2<<"'s turn";
			cout<<"\nBatting(1) or Bowling(0)";
			cout<<"\nEnter your Choice : ";
			cin>>choice;
			if(((tosswin==1)&&(choice==0))||((tosswin==2)&&(choice==1)))
			{
				strcpy(playertemp,player1);
				strcpy(player1,player2);
				strcpy(player2,playertemp);
			}
			cout<<endl<<player1<<" will Bat first and ";
			cout<<player2<<" will Bowl first";
			cout<<"\n\nPress enter to continue";
			getch();
	}
 ///////////////////////void cricket2playertoss() ends////////////////////////

 ///////////////////////void cricket2playerinning1()//////////////////////////
	void cricketclass2 :: cricket2playerinning1()
	{
		for(int i=0;i<(totalovers*6);i++)
		{
			clrscr();
			cout<<"\n\t\t\t\tGame Zone\n\n";
			cout<<"\t\t\t\tCricket\n\t\t\t\t2 Players";
			cout<<"\n\t\t\t\tFirst Innings\n";
			gotoxy(1,8);
			cout<<"\t\t\t\tOver "<<over;
			cout<<"\tBalls "<<ball;
			gotoxy(1,10);
			cout<<"Batting Side : "<<player1;
			gotoxy(1,13);
			cout<<"Bowling Side : "<<player2;
			gotoxy(1,15);
			cout<<"Total Runs : "<<target<<endl;
			cout<<"Over "<<over;
			cout<<"\tBalls "<<ball;
			gotoxy(1,11);
			cout<<"Enter your run : ";
			run1=getch();
			gotoxy(1,13);
			cout<<"Bowling Side : "<<player2;
			clrscr();
			cout<<"\n\t\t\t\tGame Zone\n\n";
			cout<<"\t\t\t\tCricket\n\t\t\t\t2 Players";
			cout<<"\n\t\t\t\tFirst Innings\n";
			gotoxy(1,8);
			cout<<"\t\t\t\tOver "<<over;
			cout<<"\tBalls "<<ball;
			gotoxy(1,10);
			cout<<"Batting Side : "<<player1;
			gotoxy(1,13);
			cout<<"Bowling Side : "<<player2;
			gotoxy(1,16);
			cout<<"Total Runs : "<<target<<endl;
			cout<<"Over "<<over;
			cout<<"\tBalls "<<ball;
			gotoxy(1,14);
			cout<<"Enter your ball : ";
			ball2=getch();

			ball++;
			if(i%6==5)
			{
				over++;
				ball=0;
			}
			if(((run1=='1')&&(ball2=='1'))||((run1=='2')&&(ball2=='2'))||((run1=='3')&&(ball2=='3'))||((run1=='4')&&(ball2=='4'))||((run1=='5')&&(ball2=='5'))||((run1=='6')&&(ball2=='6')))
			{
				gotoxy(1,20);
				cout<<player1<<" is out\n";
				cout<<"Press enter to continue";
				getch();
				cricket2playerscoreboard1();
				break;
			}
			else if(run1=='1')
			{
				target+=1;
				overrun+=1;
			}
			else if(run1=='2')
			{
				target+=2;
				overrun+=2;
			}
			else if(run1=='3')
			{
				target+=3;
				overrun+=3;
			}
			else if(run1=='4')
			{
				target+=4;
				overrun+=4;
			}
			else if(run1=='5')
			{
				target+=5;
				overrun+=5;
			}
			else if(run1=='6')
			{
				target+=6;
				overrun+=6;
			}
			if(i%6==5)
			{
				cricket2playerscoreboard1();
				if(over*6==totalovers*6)
				{
					break;
				}
				cout<<"\nDo you want to continue (any key/0) : ";
				continue1=getch();
				if(continue1=='0')
				break;
				overrun=0;
			}


			clrscr();
			cout<<"\n\t\t\t\tGame Zone\n\n";
			cout<<"\t\t\t\tCricket\n\t\t\t\t2 Players";
			cout<<"\n\t\t\t\tFirst Innings\n";
			gotoxy(1,8);
			cout<<"\t\t\t\tOver "<<over;
			cout<<"\tBalls "<<ball;
			gotoxy(1,10);
			cout<<"Batting : "<<player1<<endl;
			cout<<"Run : ";
			if(run1=='0')
			cout<<'0';
			else if(run1=='1')
			cout<<'1';
			else if(run1=='2')
			cout<<'2';
			else if(run1=='3')
			cout<<'3';
			else if(run1=='4')
			cout<<'4';
			else if(run1=='5')
			cout<<'5';
			else if(run1=='6')
			cout<<'6';
			else
			cout<<"Wrong Choice";
			gotoxy(1,13);
			cout<<"Bowling : "<<player2<<endl;
			cout<<"Ball : ";
			if(ball2=='0')
			cout<<'0';
			else if(ball2=='1')
			cout<<'1';
			else if(ball2=='2')
			cout<<'2';
			else if(ball2=='3')
			cout<<'3';
			else if(ball2=='4')
			cout<<'4';
			else if(ball2=='5')
			cout<<'5';
			else if(ball2=='6')
			cout<<'6';
			else
			cout<<"Wrong Choice";
			gotoxy(1,15);
			cout<<"\t\t\tTotal Runs : "<<target<<endl;
			cout<<"\t\t\tOver "<<over;
			cout<<"\tBalls "<<ball<<endl;
			delay(1000);
		}
	target+=1;
	}
 ///////////////////////void cricket2playerinning1() ends/////////////////////

 ///////////////////////void cricket2playerinning2()//////////////////////////
	void cricketclass2 :: cricket2playerinning2()
	{
		ball=0;
		over=0;
		for(int i=0;i<(totalovers*6);i++)
		{
			if(totalruns<target)
			{
			clrscr();
			cout<<"\n\t\t\t\tGame Zone\n\n";
			cout<<"\t\t\t\tCricket\n\t\t\t\t2 Players";
			cout<<"\n\t\t\t\tSecond Innings\n";
			gotoxy(1,8);
			cout<<"\t\t\t\tOver "<<over;
			cout<<"\tBalls "<<ball;
			gotoxy(1,10);
			cout<<"Batting Side : "<<player2;
			gotoxy(1,13);
			cout<<"Bowling Side : "<<player1;
			gotoxy(1,15);
			cout<<"Total Runs : "<<totalruns<<endl;
			cout<<"Target : "<<target<<endl;
			cout<<"Over "<<over;
			cout<<"\tBalls "<<ball;
			gotoxy(1,11);
			cout<<"Enter your run : ";
			run2=getch();
			gotoxy(1,13);
			cout<<"Bowling Side : "<<player1;
			clrscr();
			cout<<"\n\t\t\t\tGame Zone\n\n";
			cout<<"\t\t\t\tCricket\n\t\t\t\t2 Players";
			cout<<"\n\t\t\t\tSecond Innings\n";
			gotoxy(1,8);
			cout<<"\t\t\t\tOver "<<over;
			cout<<"\tBalls "<<ball;
			gotoxy(1,10);
			cout<<"Batting Side : "<<player2;
			gotoxy(1,13);
			cout<<"Bowling Side : "<<player1;
			gotoxy(1,16);
			cout<<"Total Runs : "<<totalruns<<endl;
			cout<<"Target : "<<target<<endl;
			cout<<"Over "<<over;
			cout<<"\tBalls "<<ball;
			gotoxy(1,14);
			cout<<"Enter your ball : ";
			ball1=getch();

			ball++;
			if(i%6==5)
			{
				over++;
				ball=0;
			}
			if(((run2=='1')&&(ball1=='1'))||((run2=='2')&&(ball1=='2'))||((run2=='3')&&(ball1=='3'))||((run2=='4')&&(ball1=='4'))||((run2=='5')&&(ball1=='5'))||((run2=='6')&&(ball1=='6')))
			{

				gotoxy(1,20);
				cout<<player2<<" is out\n";
				cout<<"Press enter to continue";
				getch();
				cricket2playerscoreboard2();
				break;
			}
			else if(run2=='1')
			{
				totalruns+=1;
				overrun+=1;
			}
			else if(run2=='2')
			{
				totalruns+=2;
				overrun+=2;
			}
			else if(run2=='3')
			{
				totalruns+=3;
				overrun+=3;
			}
			else if(run2=='4')
			{
				totalruns+=4;
				overrun+=4;
			}
			else if(run2=='5')
			{
				totalruns+=5;
				overrun+=5;
			}
			else if(run2=='6')
			{
				totalruns+=6;
				overrun+=6;
			}

			clrscr();
			cout<<"\n\t\t\t\tGame Zone\n\n";
			cout<<"\t\t\t\tCricket\n\t\t\t\t2 Players";
			cout<<"\n\t\t\t\tSecond Innings\n";
			gotoxy(1,8);
			cout<<"\t\t\t\tOver "<<over;
			cout<<"\tBalls "<<ball;
			gotoxy(1,10);
			cout<<"Batting : "<<player2<<endl;
			cout<<"Run : ";
			if(run2=='0')
			cout<<'0';
			else if(run2=='1')
			cout<<'1';
			else if(run2=='2')
			cout<<'2';
			else if(run2=='3')
			cout<<'3';
			else if(run2=='4')
			cout<<'4';
			else if(run2=='5')
			cout<<'5';
			else if(run2=='6')
			cout<<'6';
			else
			cout<<"Wrong Choice";
			gotoxy(1,13);
			cout<<"Bowling : "<<player1<<endl;
			cout<<"Ball : ";
			if(ball2=='0')
			cout<<'0';
			else if(ball1=='1')
			cout<<'1';
			else if(ball1=='2')
			cout<<'2';
			else if(ball1=='3')
			cout<<'3';
			else if(ball1=='4')
			cout<<'4';
			else if(ball1=='5')
			cout<<'5';
			else if(ball1=='6')
			cout<<'6';
			else
			cout<<"Wrong Choice";
			gotoxy(1,15);
			cout<<"\t\t\tTotal Runs : "<<totalruns<<endl;
			cout<<"\t\t\tTarget : "<<target<<endl;
			cout<<"\t\t\tOver "<<over;
			cout<<"\tBalls "<<ball<<endl;

			if(totalruns>=target)
			{
				won=2;
				cricket2playerscoreboard2();
				cout<<endl<<player2<<" wins the Game";
				cout<<"\nPress enter to continue";
				getch();
			}
			if(won!=2)
			{
			if(i%6==5)
			{
				if((over==totalovers)&&(totalruns<target-1))
				{
					won=1;
					cricket2playerscoreboard2();
					cout<<endl<<player1<<" wins the Game";
					cout<<"\nPress enter to continue";
					getch();
					break;
				}
				else if((over==totalovers)&&(totalruns==target-1))
				{
					won=3;
					cricket2playerscoreboard2();
					cout<<"\nIt's a Draw";
					cout<<"\nPress enter to continue";
					getch();
					break;
				}

				cricket2playerscoreboard2();
				cout<<"\nDo you want to continue (any key/0) : ";
				continue1=getch();
				if(continue1=='0')
				break;
				overrun=0;
			}
			delay(1000);
			}

		 }
		}
	}
 ///////////////////////void cricket2playerinning2() ends////////////////////

 ///////////////////////void cricket1playerscoreboard()///////////////////////
	void cricketclass2 :: cricket2playerscoreboard1()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCricket\n\t\t\t\t2 Players";
		cout<<"\n\t\t\t\tSCOREBOARD\n\n\n";       //4 18
		cout<<"Overs : "<<over;
		cout<<"\nBalls : "<<ball;
		cout<<"\nOver runs : "<<overrun;        //1  1/6*10
		cout<<"\nTotal Runs : "<<target;
		runrate1=(float(target)/float(over*6+ball))*6;
		cout<<"\nRun rate : "<<runrate1<<endl;
		if((((run1=='1')&&(ball2=='1'))||((run1=='2')&&(ball2=='2'))||((run1=='3')&&(ball2=='3'))||((run1=='4')&&(ball2=='4'))||((run1=='5')&&(ball2=='5'))||((run1=='6')&&(ball2=='6')))||(over*6==totalovers*6))
		{
			cout<<"\nEnd of first Innings";
			cout<<"\nPress enter to start the Second Innings";
			getch();
		}

	}
 ///////////////////////void cricket1playerscoreboard1() ends//////////////////


 ///////////////////////void cricket1playerscoreboard2()/////////////////////
	void cricketclass2 :: cricket2playerscoreboard2()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tCricket\n\t\t\t\t2 Players";
		cout<<"\n\t\t\t\tSCOREBOARD\n\n\n";       //4 18
		cout<<"Overs : "<<over;
		cout<<"\nBalls : "<<ball;
		cout<<"\nOver runs : "<<overrun;        //1  1/6*10
		cout<<"\nTotal Runs : "<<totalruns;
		cout<<"\nTarget : "<<target;
		cout<<"\nRun rate of "<<player1<<" : "<<runrate1;
		runrate2=(float(totalruns)/float(over*6+ball))*6;
		cout<<"\nRun rate of "<<player2<<" : "<<runrate2;
		reqrunrate=(float(target-totalruns)/float((totalovers-over)*6-ball))*6;
		if((reqrunrate<0)||((totalovers-over)==0))
		reqrunrate=0;
		cout<<"\nRequired run rate : "<<reqrunrate<<endl;
		if(((run2=='1')&&(ball1=='1'))||((run2=='2')&&(ball1=='2'))||((run2=='3')&&(ball1=='3'))||((run2=='4')&&(ball1=='4'))||((run2=='5')&&(ball1=='5'))||((run2=='6')&&(ball1=='6')))
		{
			cout<<"\nEnd of second Innings";
			if(totalruns>=target)
			{
				won=2;
				cout<<endl<<player2<<" wins the Game";
			}
			if(totalruns<target-1)
			{
				won=1;
				cout<<endl<<player1<<" wins the Game";
			}
			else if(totalruns==target-1)
			{
				won=3;
				cout<<"\nIt's a Draw";
			}
			cout<<"\nPress enter to continue";
			getch();

		}
		if(won==0)
		getch();
	}
 ///////////////////////void cricket1playerscoreboard() ends//////////////////

	cricketclass2 cc2;

 ///////////////////////void cricket2player()////////////////////////////////
	void cricket2player()
	{
		 cc2.cricketclass3();
		 cc2.cricket2playerrules();
		 cc2.cricket2playerovers();
		 cc2.cricket2playergetnames();
		 cc2.cricket2playertoss();
		 cc2.cricket2playerinning1();
		 cc2.cricket2playerinning2();
	}
 ///////////////////////void cricket2player() ends///////////////////////////

//////////////////////////////////////////////////////////////////////////////
//*****************************void cricket() ends**************************//
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//*****************************void rock()**********************************//
//////////////////////////////////////////////////////////////////////////////
void rock()
{

 ///////////////////////////////////////////////////////////////////////////
	void rock1player();
	void rock2player();
 ///////////////////////////////////////////////////////////////////////////

	while(r1!='3')
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"Rock Paper Scissor";
		cout<<"\n1. 1-Player";
		cout<<"\n2. 2-Player";
		cout<<"\n3. Main Menu";
		cout<<"\n4. Exit";
		cout<<"\nYour Choice : ";
		r1=getch();
		switch(r1)
		{
			case '1':
			rock1player();
			break;
			case '2':
			rock2player();
			break;
			case '3':
			break;
			case '4':
			exit(0);
		}
	}
}

 //////////////////////////class rockclass/////////////////////////////////
	class rockclass
	{
		long compchoice;
		char userchoice,continue1;
		public:
		int won;
		void rockclass1()
		{
			compchoice=0;
			userchoice='0';
			continue1='0';
		}
		void rock1playerrules();
		void rock1playermain();
		~rockclass()
		{}
	};
 ///////////////////////////class rockclass ends/////////////////////////////

 ///////////////////////void rock1playerrules()//////////////////////////////
	void rockclass :: rock1playerrules()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tRock Paper and Scissors\n\t\t\t\t1 Player\n\t\t\t\tRules\n\n";
		cout<<"-> This is a 1 Player Number Guessing game\n";
		cout<<"\n\nPress a enter to continue";
		getch();
	}
 ///////////////////////void rock1playerrules() ends/////////////////////////

 ///////////////////////void rock1playermain()//////////////////////////////
	void rockclass :: rock1playermain()
	{
		while(continue1!='4')
		{
			clrscr();
			cout<<"\n\t\t\t\tGame Zone\n\n";
			cout<<"\t\t\t\tRock Paper Scissor\n\t\t\t\t1 Player\n\n";
			cout<<"1. Rock\n";
			cout<<"2. Paper\n";
			cout<<"3. Scissor\n";
			cout<<"4. Main Menu\n";
			cout<<"5. Exit\n";
			cout<<"Enter your Choice : ";
			userchoice=getch();
			if(userchoice=='1')
			cout<<"You chosed Rock\n";
			else if(userchoice=='2')
			cout<<"You chosed Paper\n";
			else if(userchoice=='3')
			cout<<"You chosed Scissor\n";
			else if(userchoice=='4')
			break;
			else if(userchoice=='5')
			exit(0);
			compchoice=srandomvalue();
			compchoice=(compchoice%3)+1;
			cout<<"Computer chosed ";
			if(compchoice==1)
			cout<<"Rock";
			else if(compchoice==2)
			cout<<"Paper";
			else if(compchoice==3)
			cout<<"Scissor";
			if(userchoice=='1'&&compchoice==3)
			won=1;
			else if(userchoice=='1'&&compchoice==2)
			won=2;
			else if(userchoice=='2'&&compchoice==1)
			won=1;
			else if(userchoice=='2'&&compchoice==3)
			won=2;
			else if(userchoice=='3'&&compchoice==2)
			won=1;
			else if(userchoice=='3'&&compchoice==1)
			won=2;
			else
			won=0;
			if(won==1)
			cout<<"\nYou Won";
			else if(won==2)
			cout<<"\nYou Lost";
			else
			cout<<"\nIts a Tie";
			getch();
		}
	}
 ///////////////////////void rock1playermain() ends//////////////////////////

 rockclass ro1;

 ///////////////////////void rock1player()///////////////////////////////////
	void rock1player()
	{
		 ro1.rockclass1();
		 ro1.rock1playerrules();
		 ro1.rock1playermain();
	}
 ///////////////////////void rock1player() ends//////////////////////////////


 //////////////////////////class rockclass1////////////////////////////////
	class rockclass1
	{
		int i;
		char userchoice1,userchoice2,continue2;
		public:
		int won1;
		void rockclass2()
		{
			userchoice1='0';
			userchoice2='0';
			continue2='0';
			won1=0;
		}
		void rock2playerrules();
		void rock2playermain();
		~rockclass1()
		{}
	};
 ///////////////////////////class rockclass1 ends////////////////////////////

 ///////////////////////void rock2playerrules()//////////////////////////////
	void rockclass1 :: rock2playerrules()
	{
		clrscr();
		cout<<"\n\t\t\t\tGame Zone\n\n";
		cout<<"\t\t\t\tRock Paper and Scissors\n\t\t\t\t1 Player\n\t\t\t\tRules\n\n";
		cout<<"-> This is a 2 Player Number Guessing game\n";
		cout<<"\n\nPress a enter to continue";
		getch();
	}
 ///////////////////////void rock2playerrules() ends/////////////////////////

 ///////////////////////void rock2playermain()//////////////////////////////
	void rockclass1 :: rock2playermain()
	{
		while(continue2!='n')
		{
			clrscr();
			cout<<"\n\t\t\t\tGame Zone\n\n";
			cout<<"\t\t\t\tRock Paper Scissor\n\t\t\t\t1 Player\n\n";
			cout<<"1. Rock\n";
			cout<<"2. Paper\n";
			cout<<"3. Scissor\n";
			cout<<"First Player\n";
			cout<<"Enter your Choice : ";
			userchoice1=getch();

			clrscr();
			cout<<"\n\t\t\t\tGame Zone\n\n";
			cout<<"\t\t\t\tRock Paper Scissor\n\t\t\t\t1 Player\n\n";
			cout<<"1. Rock\n";
			cout<<"2. Paper\n";
			cout<<"3. Scissor\n";
			cout<<"Second Player\n";
			cout<<"Enter your Choice : ";
			userchoice2=getch();

			if(userchoice1=='1'&&userchoice2=='3')
			won1=1;
			else if(userchoice1=='1'&&userchoice2=='2')
			won1=2;
			else if(userchoice1=='2'&&userchoice2=='1')
			won1=1;
			else if(userchoice1=='2'&&userchoice2=='3')
			won1=2;
			else if(userchoice1=='3'&&userchoice2=='2')
			won1=1;
			else if(userchoice1=='3'&&userchoice2=='1')
			won1=2;
			else
			won1=0;
			if(won1==1)
			cout<<"\nPlayer 1 Won";
			else if(won1==2)
			cout<<"\nPlayer 2 Won";
			else
			cout<<"\nIts a Tie";
			cout<<"\nDo you wnat to continue (any key:n) : ";
			continue2=getch();
		}
	}
 ///////////////////////void rock2playermain() ends//////////////////////////

 rockclass1 ro2;

 ///////////////////////void rock2player()///////////////////////////////////
	void rock2player()
	{
		 ro2.rockclass2();
		 ro2.rock2playerrules();
		 ro2.rock2playermain();
	}
 ///////////////////////void rock1player() ends//////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//*****************************void rock() ends*****************************//
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
//*****************************void animation()*****************************//
//////////////////////////////////////////////////////////////////////////////
void animation()
{
	clrscr();
	gotoxy(30,10);
	cout<<"Loading";
	for(int i=0;i<6;i++)
	{
	 cout<<".";
	 delay(200);
	}

}
//////////////////////////////////////////////////////////////////////////////
//*****************************void animation() ends************************//
//////////////////////////////////////////////////////////////////////////////
