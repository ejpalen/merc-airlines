
 #include <iostream>

char e=205,a=201,z=202,b=205,c=203,d=186,f1=200,g=219,h=185,ii=186,j=187,k=188,ll=175,m=223,kk=178,ee=196,aa=218,jj=191,r=203,rr=202,uu=204,cc=206,bb=202,oo=200,
mn=220, mt=254, mm=223,mf=157;

//sched
int schnum=0;

int timer,timed,timerr,rev;
	int sttl[11],attl[11],ittl[5],cttl[8],dscnt=0,vat=0,prc,tamt=0;
	string afn[11],amn[11],aln[11],sfn[11],smn[11],sln[11],cfn[8],cmn[8],cln[8],bfn[11],bmn[11],bln[11];
	long int adua[10],inf,ch,adu,sc,sca[10],cha[7],infa,f=0,nump,ibd,iby,abd[11],aby[11],sbd[11],sby[11],cbd[8],cby[8],ibm,abm[11],sbm[11],cbm[8],dd,bg,ins/* total insurance lahat lahat na ba*/,l,regis;

	string conperfn, conpermn, conperln, conumb, conemail, nation, passportinf, passportch, passportadu, passportsc,
	coutch,coutadu,coutsc;

	int rhrs=0,rmins=0;

	double tdis=0,tvat=0,ramt=0,cash,change=0,tins=0,sumbgall=0;
	int v=0; //getch variable
	int i,conbook,conbookl, iage,chage,aduage,scage;
//	int bgpch,bggpinf[i][7],bgpsc[10],bgpadu[10];
	float infins[11]/* insurance ng infant*/,chins[11]/* sa child*/,aduins[11]/*sa adult*/,scins[11]/*senior*/,busins=4500,priins=8500;
	int avl;/*ung maga=avail o hinde*/;

	//loop iterators
	int menl=0,genl=0,typel=0,tdesl=0,desl=0,cabl=0,infl=0,chl=0,scl=0,adul=0,bookl=0,book=0,avll=0,timedl=0,timerl=0,sched=0,schedl=0;
	
		int depm,retm,retd,rety,depd,depy,avd,avm,avy,//month,day, and year inputted by the user for oneway and roundtrip
		   //month,day, and year inputted by the user to search available flights on that day.
		   //handles the number of (infant, adult, senior citizen, and child) passengers inputed by the user
	seatp[6]={10,10,10,10,10,10},seatb[6]={6,6,6,6,6,6},seatbr[6]={6,6,6,6,6,6},seatpr[6]={10,10,10,10,10,10}		//number of reserved seats declared for oneway-private-local and international
	,fnum=200;
			//flight numbers for roundtrip-private-local and international flights per time declared (for return flight)			
			//number of reserved seats declared for roundtrip-private-local and international

			float farpl1=8650.0,farpl2=4543.0,farpl3=5882.0,farpl4=4096.0,farpi1=6199.0,farpi2=5699.0,farpi3=6899.0,farpi4=12500.0,farpi5=24800.0,farbl1=15500.0,farbl2=9500.0,farbl3=13200.0,farbl4=9230.0,farbi1=12150.0,farbi2=10850.0,farbi3=13110.0,farbi4=23850.0,farbi5=31450.0;
			float farpl1r=17300.0,farpl2r=9086.0,farpl3r=11764.0,farpl4r=8192.0,farpi1r=12398.0,farpi2r=11398.0,farpi3r=13798.0,farpi4r=25000.0,farpi5r=49600.0,farbl1r=31000.0,farbl2r=19000.0,farbl3r=26400.0,farbl4r=18460.0,farbi1r=24300.0,farbi2r=21700.0,farbi3r=26220.0,farbi4r=47700.0,farbi5r=62900.0;

			//ascii:
			char men,type,tdes,des,cab;

				
				//baggage:
//	int seat1,seat2,seat3,seat4,seat5,seat6,seat7,seat8,seat9,seat10;
	string seatenteropl1, confirmseatopl1, s1al1op, s1bl1op, s2al1op, s2bl1op, s3al1op, s3bl1op, s4al1op, s4bl1op, s5al1op, s5bl1op;
	
	//variables whohold the baggage price oramount of apassenger bg(baggage)p(price or amount)inf(passenger can be adu orsc orch)
	int bggpinf[5],bggpch[8],bggpadu[11],bggpsc[11];
	
	float bgsc[11],bgadu[11],bginf[11],bgch[11],sumbgsc=0,sumbgch=0,sumbgadu=0,sumbginf=0,sumbginf2=0,sumbginf3=0,sumbgch2=0,sumbgch3=0,sumbgadu2=0,
	sumbgadu3=0,sumbgsc2=0,sumbgsc3=0;

//BAGONG VARS
int timech=1,arrth=0,depth=0,arrtm=0,deptm=0,yt=0,timeit=1;
//depende saan ang lugar
int hrs=0,mins=0;
//para sa presyo
float fare=0;
//iterators for gotoxy in payment section
int t=1,yt1=0,yt2=0,sty=16,yt3=0;

//mga bagong var: sa ticket info file
int stx=18,ytix=0,ytix1=0,ytix2=0,ytix3=0,reff=45823;
int ylab=22,fnum2=0;;
string deslab,monthlab,monthlabr;
int rarrth=0,repth=0,reptm=0,rarrtm=0;

//////////////////////part of the booking details
int reff2;
//memang variable
int mem[12];
string cablab,typelab;
//ewankongvar
int gotg=0;


	void gotoxy (int x, int y)
    {
         COORD coordinates;     // coordinates is declared as COORD
         coordinates.X = x;     // defining x-axis
         coordinates.Y = y;     //defining  y-axis
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
    }
    
    invalidin(){
		HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(color, 12);

	gotoxy(67,39);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn;
	gotoxy(67,40);     cout<<g<<"                        "<<g;
	gotoxy(67,41);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;

SetConsoleTextAttribute(color, 14);
gotoxy(73,40);     cout<<"Invalid Input!";

getch();
system("cls");

}
int validation(string g)
{
	int n,c=0;
	n=g.length();
	char char_array[n];

	strcpy(char_array,g.c_str());
	
	for(int i=0;i<n;i++)
	{
		if(!(char_array[i]>= 'a'&&char_array[i]<= 'z'||char_array[i]>= 'A'&&char_array[i]<= 'Z'))
		{
			i=n;
			invalidin();
			gotg=1;
			goto a;
		}  
	}

    c=1;
    
	a:;

}
		mercheader(){
	cout<<"                                                              "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<endl;
	cout<<"                                                              "<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<" "<<m<<m<<m<<"     "<<m<<m<<m<<"  "<<m<<m<<m<<"  "<<m<<m<<m<<endl;
	cout<<"                                                              "<<m<<m<<m<<" "<<m<<m<<" "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<endl;
	cout<<"                                                              "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<"     "<<m<<m<<m<<"  "<<m<<m<<m<<"  "<<m<<m<<m<<endl;
	cout<<"                                                              "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<"   "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<endl;
	cout<<"                                                                   TICKETING AIRLINE SERVICES                                                                         \n\n";

	}

			unahan(){
				HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
				
			char    b=219;
				system("cls");
				Sleep(400);
    
    cout<<"\n\n\n";
	cout<<"                                      "<<m<<m<<m<<m<<m<<"              "<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"      "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                      "<<m<<m<<m<<m<<m<<m<<"            "<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"      "<<m<<m<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<m<<m<<m<<m<<"     "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                      "<<m<<m<<m<<m<<m<<m<<m<<"          "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<"                   "<<m<<m<<m<<m<<m<<m<<"     "<<m<<m<<m<<m<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                      "<<m<<m<<m<<m<<m<<m<<m<<m<<"        "<<m<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<"                   "<<m<<m<<m<<m<<m<<m<<"      "<<m<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<"       "<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                      "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"      "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<"                   "<<m<<m<<m<<m<<m<<m<<"     "<<m<<m<<m<<m<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                      "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"        "<<m<<m<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<m<<m<<m<<m<<"     "<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                      "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"      "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"          "<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                      "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"      "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"        "<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                      "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"        "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"       "<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                      "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<"                   "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"      "<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                      "<<m<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<"                   "<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"     "<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                      "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<"                   "<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"      "<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                      "<<m<<m<<m<<m<<m<<m<<m<<"          "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"     "<<m<<m<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                      "<<m<<m<<m<<m<<m<<m<<m<<"          "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<endl;
	cout<<endl;
SetConsoleTextAttribute(color, 11);
	cout<<"                                         "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"     "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<"           "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                       "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<"           "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                       "<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<"       "<<m<<m<<m<<m<<m<<"      "<<m<<m<<m<<m<<"   "<<m<<m<<m<<"    "<<m<<m<<m<<m<<"               "<<m<<m<<m<<m<<m<<"      "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                       "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"       "<<m<<m<<m<<m<<m<<"      "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"     "<<m<<m<<m<<m<<"               "<<m<<m<<m<<m<<m<<"      "<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                       "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"       "<<m<<m<<m<<m<<m<<"      "<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<"     "<<m<<m<<m<<m<<"               "<<m<<m<<m<<m<<m<<"      "<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                       "<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                                       "<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<endl;
	SetConsoleTextAttribute(color, 12);
	cout<<"                                       "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                         "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	SetConsoleTextAttribute(color, 13);
	cout<<endl;
	cout<<"                        "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<"  "<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<"  "<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<"  "<<m<<m<<"   "<<m<<m<<" "<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100);
	cout<<"                          "<<m<<m<<"     "<<m<<m<<"   "<<m<<m<<"      "<<m<<m<<" "<<m<<m<<"   "<<m<<m<<"       "<<m<<m<<"     "<<m<<m<<"   "<<m<<m<<m<<" "<<m<<m<<" "<<m<<m<<"         "<<m<<m<<"     "<<m<<m<<"     "<<m<<m<<"  "<<m<<m<<" "<<m<<m<<"   "<<m<<m<<"   "<<m<<m<<"   "<<m<<m<<"     "<<m<<m<<"     "<<m<<m<<endl;
	Sleep(100);
	cout<<"                          "<<m<<m<<"     "<<m<<m<<"   "<<m<<m<<"      "<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<m<<"    "<<m<<m<<"     "<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<"  "<<m<<m<<m<<"    "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<"   "<<m<<m<<"   "<<m<<m<<"   "<<m<<m<<"   "<<m<<m<<"     "<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<endl;
	Sleep(100); 
	cout<<"                          "<<m<<m<<"     "<<m<<m<<"   "<<m<<m<<"      "<<m<<m<<" "<<m<<m<<"   "<<m<<m<<"       "<<m<<m<<"     "<<m<<m<<"   "<<m<<m<<" "<<m<<m<<m<<" "<<m<<m<<"    "<<m<<m<<"       "<<m<<m<<" "<<m<<m<<"     "<<m<<m<<" "<<m<<m<<"   "<<m<<m<<" "<<m<<m<<"    "<<m<<m<<"   "<<m<<m<<"     "<<m<<m<<"         "<<m<<m<<endl;
	Sleep(100);
	cout<<"                          "<<m<<m<<"   "<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<"  "<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<"  "<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"    "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<"  "<<m<<m<<"   "<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<endl;
	cout<<endl;
	SetConsoleTextAttribute(color, 10);
	cout<<"                                        -o0o- MERC GROUP OF COMPANY OFFERS PRIVATE AVIATION RESERVATION FOR CERTAIN DESTINATIONS -o0o-";
	cout<<endl<<endl<<endl;
	
	SetConsoleTextAttribute(color, 14);
	cout<<endl;
	gotoxy(38,38); cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn;
	gotoxy(38,39); cout<<g<<"                                                                                                "<<g;
	gotoxy(38,40); cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;
		
	gotoxy(39,39);
	for (int i=0;i<=95;i=i+1){
		SetConsoleTextAttribute(color, 11);
		cout<<g;
		Sleep(50);   }
	system("cls");
	Sleep(500);
SetConsoleTextAttribute(color, 14);	

			}
	void clears(){
		HANDLE h0ut;
		COORD Position;
		
		h0ut = GetStdHandle(STD_OUTPUT_HANDLE);
		
		Position.X=0;
		Position.Y=0;
		SetConsoleCursorPosition(h0ut, Position);
	}
	
	note(){
		cout<<endl;
	cout<<"                                           +------------------------------------------------------------------------+"<<endl;
	cout<<"                                           |                                  NOTE :                                |"<<endl; 
	cout<<"                                           |        PRESS RIGHT and LEFT arrow keys to choose an option.            |"<<endl;
	cout<<"                                           |              PRESS ENTER to submit or confirm choice.                  |"<<endl; 
	cout<<"                                           |  *All bookings confirmed are not refundable and can't' be rescheduled. |"<<endl;
	cout<<"                                           +------------------------------------------------------------------------+"<<endl<<endl;

	}

		
bkagainbord(){
		system("color 0e");
 
                        cout<<"                                                    "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						cout<<"                                                    "<<g<<"                                                   "<<g<<endl;
						cout<<"                      "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<"           Would you like to book again?           "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
						cout<<"                      "<<g<<"                             "<<g<<"                                                   "<<g<<"                                  "<<g<<endl;
					    cout<<"                      "<<g<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"                                  "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;

}

bkagain1des(){
		
		
gotoxy(51,18);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(51,19);     cout<<g<<"                         "<<g<<endl;
gotoxy(51,20);     cout<<g<<"                "<<g<<g<<g<<"      "<<g<<endl;
gotoxy(51,21);     cout<<g<<"               "<<g<<g<<g<<"       "<<g<<endl;
gotoxy(51,22);     cout<<g<<"              "<<g<<g<<g<<"        "<<g<<endl;
gotoxy(51,23);     cout<<g<<"             "<<g<<g<<g<<"         "<<g<<endl;
gotoxy(51,24);     cout<<g<<"      "<<g<<g<<g<<"   "<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,25);     cout<<g<<"       "<<g<<g<<g<<" "<<g<<g<<g<<"           "<<g<<endl;
gotoxy(51,26);     cout<<g<<"        "<<g<<g<<g<<g<<g<<"            "<<g<<endl;
gotoxy(51,27);     cout<<g<<"                         "<<g<<endl;
gotoxy(51,28);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(51,29);     cout<<g<<"           Yes           "<<g<<endl;
gotoxy(51,30);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;  
}

bkagain2des(){

gotoxy(80,18);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(80,19);     cout<<g<<"                         "<<g<<endl;
gotoxy(80,20);     cout<<g<<"       "<<g<<g<<g<<"     "<<g<<g<<g<<"       "<<g                      <<endl;
gotoxy(80,21);     cout<<g<<"       "" "<<g<<g<<g<<"   "<<g<<g<<g<<"        "<<g                      <<endl;
gotoxy(80,22);     cout<<g<<"       ""  "<<g<<g<<g<<" "<<g<<g<<g<<"         "<<g                      <<endl;
gotoxy(80,23);     cout<<g<<"       ""   "<<g<<g<<g<<g<<g<<"          "<<g                      <<endl;
gotoxy(80,24);     cout<<g<<"       ""  "<<g<<g<<g<<" "<<g<<g<<g<<"         "<<g                      <<endl;
gotoxy(80,25);     cout<<g<<"       "" "<<g<<g<<g<<"   "<<g<<g<<g<<"        "<<g                      <<endl;
gotoxy(80,26);     cout<<g<<"       "<<g<<g<<g<<"     "<<g<<g<<g<<"       "<<g                      <<endl;
gotoxy(80,27);     cout<<g<<"                         "<<g<<endl;
gotoxy(80,28);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
gotoxy(80,29);     cout<<g<<"           No            "<<g<<endl;
gotoxy(80,30);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;

}
	
	
		locfunc(){  //function to be called if the user is needed to be asked of which local destinations would he like to go.
					system("cls");
				cout<<"\n\n\n\n";
					mercheader();
					note();
			                cout<<"                      "<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e
							                              <<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e
														  <<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<j<<endl;
							cout<<"                      "<<ii<<"                                                                                                                          "<<ii<<endl;
					    	cout<<"                      "<<ii<<"       Choose your DESTINATION?                                                                                           "<<ii<<endl;
					    	cout<<"                      "<<ii<<"                                                                                                                          "<<ii<<endl;
					    	cout<<"                      "<<ii<<"       LOCAL:                                                                                                             "<<ii<<endl;
					    	cout<<"                      "<<ii<<"       1. Batanes                                                                                                         "<<ii<<endl;
					    	cout<<"                      "<<ii<<"       2. Bacolod                                                                                                         "<<ii<<endl;
					    	cout<<"                      "<<ii<<"       3. Palawan                                                                                                         "<<ii<<endl;
					    	cout<<"                      "<<ii<<"       4. Davao                                                                                                           "<<ii<<endl;
					    	cout<<"                      "<<ii<<"                                                                                                                          "<<ii<<endl;
					    	cout<<"                      "<<f1<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e
							                              <<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e
														  <<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k<<endl;

			}





			cabfunc(){ //function to be called if the user is needed to be asked of which cabin class would he like to choose.
					system("cls");
				cout<<"\n\n\n\n";
					mercheader();
					note();
								cout<<"                                                   "<<a<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<j<<endl;
						cout<<"                                                   "<<d<<"                                                       "<<d<<endl;
						cout<<"                                                   "<<d<<"              Please select a CABIN CLASS:             "<<d<<endl;
						cout<<"                                                   "<<d<<"                                                       "<<d<<endl;
						cout<<"                                                   "<<f1<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<k<<endl<<endl;
						
						
							
						cout<<"                                "<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<j<<endl;
						cout<<"                                "<<d<<"                                                                                            "<<d<<endl;
				    	cout<<"                                "<<d<<"                                    1. PRIVATE Class                                        "<<d<<endl;
				    	cout<<"                                "<<d<<"                                                                                            "<<d<<endl;
				    	cout<<"                                "<<f1<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k<<endl;
			
				    	
						cout<<"                                "<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<j<<endl;
						cout<<"                                "<<d<<"                                                                                            "<<d<<endl;
				    	cout<<"                                "<<d<<"                                    2. BUSINESS Class                                       "<<d<<endl;
				    	cout<<"                                "<<d<<"                                                                                            "<<d<<endl;
				    	cout<<"                                "<<f1<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k<<endl;

			}



			interfunc(){
				//function to be called if the user is needed to be asked of which international destinations would he like to go from the given choices.
					system("cls");
				cout<<"\n\n\n\n";
					mercheader();
					note();
			                cout<<"                      "<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e
							                              <<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e
														  <<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<j<<endl;
							cout<<"                      "<<ii<<"                                                                                                                          "<<ii<<endl;
					    	cout<<"                      "<<ii<<"       Choose your DESTINATION?                                                                                           "<<ii<<endl;
					    	cout<<"                      "<<ii<<"                                                                                                                          "<<ii<<endl;
					    	cout<<"                      "<<ii<<"       INTERNATIONAL:                                                                                                     "<<ii<<endl;
					    	cout<<"                      "<<ii<<"       1. Malaysia, Kuala Lumpur (XKLA)                                                                                   "<<ii<<endl;
					    	cout<<"                      "<<ii<<"       2. Indonesia, Jakarta (JKTA)                                                                                       "<<ii<<endl;
					    	cout<<"                      "<<ii<<"       3. Singapore (SIN)                                                                                                 "<<ii<<endl;
					    	cout<<"                      "<<ii<<"       4. South Korea, Incheon (ICN)                                                                                      "<<ii<<endl;
					    	cout<<"                      "<<ii<<"       5. JAPAN (TYOA)                                                                                                    "<<ii<<endl;
					    	cout<<"                      "<<ii<<"                                                                                                                          "<<ii<<endl;
					    	cout<<"                      "<<f1<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e
							                              <<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e
														  <<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k<<endl;

			}

			locint(){
				cout<<"                                                   "<<a<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<j<<endl;
						cout<<"                                                   "<<d<<"                                                       "<<d<<endl;
						cout<<"                                                   "<<d<<"             Choose what type of destination:          "<<d<<endl;
						cout<<"                                                   "<<d<<"                                                       "<<d<<endl;
						cout<<"                                                   "<<f1<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<k<<endl<<endl;
						
						
							
						cout<<"                                "<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<j<<endl;
						cout<<"                                "<<d<<"                                                                                            "<<d<<endl;
				    	cout<<"                                "<<d<<"                              1. Local Destination                                          "<<d<<endl;
				    	cout<<"                                "<<d<<"                                                                                            "<<d<<endl;
				    	cout<<"                                "<<f1<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k<<endl;
			
				    	
						cout<<"                                "<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<j<<endl;
						cout<<"                                "<<d<<"                                                                                            "<<d<<endl;
				    	cout<<"                                "<<d<<"                              2. International Destination                                  "<<d<<endl;
				    	cout<<"                                "<<d<<"                                                                                            "<<d<<endl;
				    	cout<<"                                "<<f1<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k<<endl;
			
			}
			passfunc(){ //function to be called if the user is needed to be asked of how many passengers would he like to reserved for per age categories.
					         
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);


	                    cout<<"                                                      "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
						cout<<"                                                      "<<g<<"                                                    "<<g<<endl;
						cout<<"                            "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<"                                                    "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
						cout<<"                            "<<g<<"                         "<<g<<"                                                    "<<g<<"                        "<<g<<endl;
					    cout<<"                            "<<g<<"                         "<<g<<"                                                    "<<g<<"                        "<<g<<endl;
					    cout<<"                            "<<g<<"                         "<<g<<"                                                    "<<g<<"                        "<<g<<endl;
					    cout<<"                            "<<g<<"                         "<<g<<"                                                    "<<g<<"                        "<<g<<endl;
					    cout<<"                            "<<g<<"                         "<<g<<"                                                    "<<g<<"                        "<<g<<endl;
					    cout<<"                            "<<g<<"                         "<<g<<"                                                    "<<g<<"                        "<<g<<endl;
					    cout<<"                            "<<g<<"                         "<<g<<"                                                    "<<g<<"                        "<<g<<endl;
					    cout<<"                            "<<g<<"                         "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<"                        "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<"                                                                                                       "<<g<<endl;
                        cout<<"                            "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;


SetConsoleTextAttribute(color, 11);

gotoxy(38,20);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(38,21);     cout<<g<<"                                                     "<<g<<"                           "<<g;
gotoxy(38,22);     cout<<g<<"                                                     "<<g<<"                           "<<g;
gotoxy(38,23);     cout<<g<<"                                                     "<<g<<"                           "<<g;
gotoxy(38,24);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;

gotoxy(38,25);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(38,26);     cout<<g<<"                                                     "<<g<<"                           "<<g;
gotoxy(38,27);     cout<<g<<"                                                     "<<g<<"                           "<<g;
gotoxy(38,28);     cout<<g<<"                                                     "<<g<<"                           "<<g;
gotoxy(38,29);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;

gotoxy(38,30);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(38,31);     cout<<g<<"                                                     "<<g<<"                           "<<g;
gotoxy(38,32);     cout<<g<<"                                                     "<<g<<"                           "<<g;
gotoxy(38,33);     cout<<g<<"                                                     "<<g<<"                           "<<g;
gotoxy(38,34);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;

gotoxy(38,35);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(38,36);     cout<<g<<"                                                     "<<g<<"                           "<<g;
gotoxy(38,37);     cout<<g<<"                                                     "<<g<<"                           "<<g;
gotoxy(38,38);     cout<<g<<"                                                     "<<g<<"                           "<<g;
gotoxy(38,39);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;

	
SetConsoleTextAttribute(color, 14);
gotoxy(67,11);
cout<<"Enter number of passengers:";
gotoxy(80,13);
cout<<"For:";
gotoxy(66,14);
cout<<"*(0-2) INFANT Passengers only.";
gotoxy(66,15);
cout<<"*(0-7) CHILD Passengers only.";
gotoxy(66,16);
cout<<"*(0-10) ADULT Passengers only.";
gotoxy(63,17);
cout<<"*(0-10) SENIOR CITIZEN Passengers only.";


gotoxy(40,22);     cout<<"ENTER NUMBER OF *INFANT (0-2 years old):";
gotoxy(40,27);     cout<<"ENTER NUMBER OF *CHILD (3-13 years old): ";
gotoxy(40,32);     cout<<"ENTER NUMBER OF *ADULT (14-64 years old):";
gotoxy(40,37);     cout<<"ENTER NUMBER OF *SENIOR CITIZEN (65-100 years old):";

			}


	

			nopass(){

			HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);				
	
SetConsoleTextAttribute(color, 12);
	                    gotoxy(54,9);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
						gotoxy(54,10);     cout<<g<<"                                                    "<<g;
						gotoxy(54,11);     cout<<g<<"                                                    "<<g;
						gotoxy(54,12);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,13);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,14);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,15);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,16);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,17);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,18);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,19);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;
                        
	
SetConsoleTextAttribute(color, 14);
gotoxy(79,11);
cout<<"*NOTE:";
gotoxy(71,13);
cout<<"No number of passengers";
gotoxy(74,14);
cout<<"has been entered.";
gotoxy(69,15);
cout<<"Please enter a valid number";
gotoxy(68,16);
cout<<"Re-enter by pressing any key.";

getch();
system("cls");

			}
			invalidpass(){

				HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);				
SetConsoleTextAttribute(color, 12);
	                    gotoxy(54,9);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
						gotoxy(54,10);     cout<<g<<"                                                    "<<g;
						gotoxy(54,11);     cout<<g<<"                                                    "<<g;
						gotoxy(54,12);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,13);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,14);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,15);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,16);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,17);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,18);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,19);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;
                        
	
SetConsoleTextAttribute(color, 14);
gotoxy(79,11);
cout<<"*NOTE:";
gotoxy(68,13);
cout<<"Invalid number of passengers";
gotoxy(74,14);
cout<<"has been entered.";
gotoxy(68,15);
cout<<"Please enter a valid number.";
gotoxy(68,16);
cout<<"Re-enter by pressing any key.";

getch();
system("cls");
			}
			invalidcab(){

								cout<<endl<<endl;
								cout<<"                                      +--------------------------------------------------------------------------------------+"<<endl;
								cout<<"                                      |                                                                                      |"<<endl;
								cout<<"                                      |            *NOTE: Please enter a valid number of your choice for CABIN CLASS.        |"<<endl;
					          	cout<<"                                      |                            *Re-enter by pressing any key.                            |"<<endl;
					          	cout<<"                                      |                                                                                      |"<<endl;
					          	cout<<"                                      +--------------------------------------------------------------------------------------+"<<endl;
					          	cout<<endl<<endl<<endl;
								system("pause");
				     			system("cls");
			}
			invaliddep(){

HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
							
SetConsoleTextAttribute(color, 13);
gotoxy(29,12);     cout<<g<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<g;
gotoxy(29,13);     cout<<g<<g<<"                                                                                                 "<<g<<g;
gotoxy(29,14);     cout<<g<<g<<"                                                                                                 "<<g<<g;
gotoxy(29,15);     cout<<g<<g<<"                                                                                                 "<<g<<g;
gotoxy(29,16);     cout<<g<<g<<"                                                                                                 "<<g<<g;
gotoxy(29,17);     cout<<g<<g<<"                                                                                                 "<<g<<g;
gotoxy(29,18);     cout<<g<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<g;
								


SetConsoleTextAttribute(color, 14);
gotoxy(46,14);     cout<<"*NOTE: Please enter a valid number for month, day, and year of your";
gotoxy(74,15);     cout<<"departure date.";
gotoxy(66,16);     cout<<"*Re-enter by pressing any key.";
		

getch();

								system("cls");
	
			}
			invalidlocdes(){

							cout<<endl<<endl;
							cout<<"                                      +--------------------------------------------------------------------------------------+"<<endl;
							cout<<"                                      |                                                                                      |"<<endl;
							cout<<"                                      |       *NOTE: Please enter a valid number of your choice for LOCAL DESTINATIONS.      |"<<endl;
							cout<<"                                      |                                    departure date.                                   |"<<endl;
				          	cout<<"                                      |                            *Re-enter by pressing any key.                            |"<<endl;
				          	cout<<"                                      |                                                                                      |"<<endl;
				          	cout<<"                                      +--------------------------------------------------------------------------------------+"<<endl;
				          	cout<<endl<<endl<<endl;
							system("pause");
			     			system("cls");
		}
		invalidintdes(){

							cout<<endl<<endl;
							cout<<"                                      +--------------------------------------------------------------------------------------+"<<endl;
							cout<<"                                      |                                                                                      |"<<endl;
							cout<<"                                      |         *NOTE: Please enter a valid number of your choice for INTERNATIONAL          |"<<endl;
							cout<<"                                      |                                    destinations.                                     |"<<endl;
				          	cout<<"                                      |                            *Re-enter by pressing any key.                            |"<<endl;
				          	cout<<"                                      |                                                                                      |"<<endl;
				          	cout<<"                                      +--------------------------------------------------------------------------------------+"<<endl;
				          	cout<<endl<<endl<<endl;
							system("pause");
			     			system("cls");
		}
		invalidtotal(){

HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
							SetConsoleTextAttribute(color, 12);
	                    gotoxy(54,9);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
						gotoxy(54,10);     cout<<g<<"                                                    "<<g;
						gotoxy(54,11);     cout<<g<<"                                                    "<<g;
						gotoxy(54,12);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,13);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,14);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,15);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,16);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,17);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,18);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,19);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;
                        
	
SetConsoleTextAttribute(color, 14);
gotoxy(79,11);
cout<<"*NOTE:";
gotoxy(65,13);
cout<<"Total number of passengers entered";
gotoxy(74,14);
cout<<"surpasses the limit";
gotoxy(57,15);
cout<<"(Total of 1-10 passengers only per transaction).";
gotoxy(68,16);
cout<<"Re-enter by pressing any key.";


getch();
system("cls");

		}

		infantonly(){
					
					HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);						   	
SetConsoleTextAttribute(color, 12);
	                    gotoxy(54,9);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
						gotoxy(54,10);     cout<<g<<"                                                    "<<g;
						gotoxy(54,11);     cout<<g<<"                                                    "<<g;
						gotoxy(54,12);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,13);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,14);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,15);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,16);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,17);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,18);     cout<<g<<"                                                    "<<g;
					    gotoxy(54,19);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;
                        
	
SetConsoleTextAttribute(color, 14);
gotoxy(79,11);
cout<<"*NOTE:";
gotoxy(71,13);
cout<<"INFANT should be with";
gotoxy(72,14);
cout<<"at least  one Adult";
gotoxy(73,15);
cout<<"or Senior Citizen.";
gotoxy(68,16);
cout<<"Re-enter by pressing any key.";

getch();
system("cls");

		}
		timenot(){
			cout<<endl<<endl;
							cout<<"                                      +---------------------------------------------------------------------------------+"<<endl;
							cout<<"                                      |                                                                                 |"<<endl;
							cout<<"                                      |        *NOTE: TIME slot entered is not available anymore. Please choose         |"<<endl;
				          	cout<<"                                      |               an available time or change departure day instead.                |"<<endl;
				          	cout<<"                                      |                                                                                 |"<<endl;
				          	cout<<"                                      +---------------------------------------------------------------------------------+"<<endl;
				          	cout<<endl<<endl<<endl;
							system("pause");
			     			system("cls");

		}
		invalidtime(){
			cout<<endl<<endl;
							cout<<"                                      +---------------------------------------------------------------------------------+"<<endl;
							cout<<"                                      |                                                                                 |"<<endl;
							cout<<"                                      |        *NOTE: INVALID time slot entered from the given choices on the           |"<<endl;
				          	cout<<"                                      |            table. Enter time again by pressing any key to continue.             |"<<endl;
				          	cout<<"                                      |                                                                                 |"<<endl;
				          	cout<<"                                      +---------------------------------------------------------------------------------+"<<endl;
				          	cout<<endl<<endl<<endl;
							system("pause");
			     			system("cls");

		}


		invalidret(){

			
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
			
SetConsoleTextAttribute(color, 13);
gotoxy(29,12);     cout<<g<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<g;
gotoxy(29,13);     cout<<g<<g<<"                                                                                                 "<<g<<g;
gotoxy(29,14);     cout<<g<<g<<"                                                                                                 "<<g<<g;
gotoxy(29,15);     cout<<g<<g<<"                                                                                                 "<<g<<g;
gotoxy(29,16);     cout<<g<<g<<"                                                                                                 "<<g<<g;
gotoxy(29,17);     cout<<g<<g<<"                                                                                                 "<<g<<g;
gotoxy(29,18);     cout<<g<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<g;
								


SetConsoleTextAttribute(color, 14);
gotoxy(46,14);     cout<<"*NOTE: Please enter a valid number for month, day, and year of your";
gotoxy(68,15);     cout<<"Return date for Roundtrip.";
gotoxy(66,16);     cout<<"*Re-enter by pressing any key.";
			}

		invalidans(){

							cout<<endl<<endl;
							cout<<"                                      +--------------------------------------------------------------------------------------+"<<endl;
							cout<<"                                      |                                                                                      |"<<endl;
							cout<<"                                      |          *NOTE: Invalid number has been entered. Please enter a valid number.        |"<<endl;
				          	cout<<"                                      |                            *Re-enter by pressing any key.                            |"<<endl;
				          	cout<<"                                      |                                                                                      |"<<endl;
				          	cout<<"                                      +--------------------------------------------------------------------------------------+"<<endl;
				          	cout<<endl<<endl<<endl;
							system("pause");
			     			system("cls");
		}

	returndatefunc(){ //function to be called to choose return date
				
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

					cout<<"                                                         "<<g<<g<<"                                         "<<g<<g<<endl;
					cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"     "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"     "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
					cout<<"                             "<<g<<g<<"                          "<<g<<g<<"                                         "<<g<<g<<"                          "<<g<<g<<endl;
					cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;


	 SetConsoleTextAttribute(color, 11);

gotoxy(66,12);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn;;
gotoxy(66,13);     cout<<g<<"                         "<<g;
gotoxy(66,14);     cout<<g<<"                         "<<g;
gotoxy(66,15);     cout<<g<<"                         "<<g;
gotoxy(66,16);     cout<<g<<"                         "<<g;
gotoxy(66,17);     cout<<g<<"                         "<<g;
gotoxy(66,18);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;;


gotoxy(38,20);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(38,21);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,22);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,23);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,24);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;

gotoxy(38,26);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(38,27);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,28);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,29);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,30);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;

gotoxy(38,32);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(38,33);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,34);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,35);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,36);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;

SetConsoleTextAttribute(color, 14);
	
gotoxy(71,14);     cout<<"ENTER RETURN DATE:";
gotoxy(74,16);     cout<<"<mm/dd/yyyy>";
gotoxy(47,22);     cout<<"Enter MONTH here (1-12):";
gotoxy(47,28);     cout<<"Enter DAY here (1-30/31):";
gotoxy(41,34);     cout<<"Enter YEAR here (Current year-2020):";


}

		returndatechoose(){
			returnchoose: //function to be called if the user is needed to be asked of what return date would he like to book a flight from the given choices.
				system("cls");

						    
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);


cout<<endl<<endl;
mercheader();
returndatefunc();

SetConsoleTextAttribute(color, 14);
gotoxy(82,22);     cin>>retm;
gotoxy(82,28);     cin>>retd;
gotoxy(82,34);     cin>>rety;
			                if(retm==1&&retd>=1&&retd<=31&&rety!=depy&&rety==2020){
								goto clear;
							}

							else if(retm==2&&retd>=1&&retd<=29&&rety!=depy&&rety==2020){
								goto clear;
							}

							else if(retm==3&&retd>=1&&retd<=31&&rety!=depy&&rety==2020){
								goto clear;
							}

							else if(retm==4&&retd>=1&&retd<=30&&rety!=depy&&rety==2020){
								goto clear;
							}

							else if(retm==5&&retd>=1&&retd<=31&&rety!=depy&&rety==2020){
								goto clear;
							}

							else if(retm==6&&retd>=1&&retd<=30&&rety!=depy&&rety==2020){
								goto clear;
							}

							else if(retm==7&&retd>=1&&retd<=31&&rety!=depy&&rety==2020){
								goto clear;
							}

							else if(retm==8&&retd>=1&&retd<=31&&rety!=depy&&rety==2020){
								goto clear;
							}

							else if(retm==9&&retd>=1&&retd<=30&&rety!=depy&&rety==2020){
								goto clear;
							}

							else if(retm==10&&retd>=1&&retd<=31&&rety!=depy&&rety==2020){
								goto clear;
							}

							else if(retm==9&&retd>=1&&retd<=30&&rety!=depy&&rety==2019){
								goto clear;
							}

							else if(retm==10&&retd>=1&&retd<=31&&rety!=depy&&rety==2019){
								goto clear;
							}

							else if(retm==11&&retd>=1&&retd<=30&&rety!=depy&&rety==2019){
								goto clear;
							}

							else if(retm==12&&retd>=1&&retd<=31&&rety!=depy&&rety==2019){
								goto clear;
							}



							else if(retm>=depm&&depm==1&&retd>depd&&retd<=31&&rety==depy&&depy==2020){
								goto clear;
							}

							else if(retm>=depm&&depm==2&&retd>depd&&retd<=29&&rety==depy&&depy==2020){
								goto clear;
							}

							else if(retm>=depm&&depm==3&&retd>depd&&retd<=31&&rety==depy&&depy==2020){
								goto clear;
							}

							else if(retm>=depm&&depm==4&&retd>depd&&retd<=30&&rety==depy&&depy==2020){
								goto clear;
							}

							else if(retm>=depm&&depm==5&&retd>depd&&retd<=31&&rety==depy&&depy==2020){
								goto clear;
							}

							else if(retm>=depm&&depm==6&&retd>depd&&retd<=30&&rety==depy&&depy==2020){
								goto clear;
							}

							else if(retm>=depm&&depm==7&&retd>depd&&retd<=31&&rety==depy&&depy==2020){
								goto clear;
							}

							else if(retm>=depm&&depm==8&&retd>depd&&retd<=31&&rety==depy&&depy==2020){
								goto clear;
							}

							else if(retm>=depm&&depm==9&&retd>depd&&retd<=30&&rety==depy&&depy==2020){
								goto clear;
							}

							else if(retm>=depm&&depm==10&&retd>depd&&retd<=31&&rety==depy&&depy==2020){
								goto clear;
							}

							else if(retm>=depm&&depm==9&&retd>depd&&retd<=30&&rety==depy&&depy==2019){
								goto clear;
							}

							else if(retm>=depm&&depm==10&&retd>depd&&retd<=31&&rety==depy&&depy==2019){
								goto clear;
							}

							else if(retm>=depm&&depm==11&&retd>depd&&retd<=30&&rety==depy&&depy==2019){
								goto clear;
							}

							else if(retm>=depm&&depm==12&&retd>depd&&retd<=31&&rety==depy&&depy==2019){
								goto clear;
							}
							else{
								invalidret();
							
							getch();
							
								goto returnchoose;
							}


					    	clear:
					    		system("cls");
			}
						depdatefunc(){ //function to be called if the user is needed to be asked of what departure date would he like to book a flight from the given choices.
					depgochoose:
					system("cls");
				
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

cout<<endl<<endl;
mercheader();

					cout<<"                                                         "<<g<<g<<"                                         "<<g<<g<<endl;
					cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"     "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"     "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
					cout<<"                             "<<g<<g<<"                          "<<g<<g<<"                                         "<<g<<g<<"                          "<<g<<g<<endl;
					cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;


	 SetConsoleTextAttribute(color, 11);

gotoxy(66,12);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn;;
gotoxy(66,13);     cout<<g<<"                         "<<g;
gotoxy(66,14);     cout<<g<<"                         "<<g;
gotoxy(66,15);     cout<<g<<"                         "<<g;
gotoxy(66,16);     cout<<g<<"                         "<<g;
gotoxy(66,17);     cout<<g<<"                         "<<g;
gotoxy(66,18);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;;


gotoxy(38,20);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(38,21);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,22);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,23);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,24);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;

gotoxy(38,26);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(38,27);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,28);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,29);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,30);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;

gotoxy(38,32);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(38,33);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,34);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,35);     cout<<g<<"                                        "<<g<<"                                        "<<g;
gotoxy(38,36);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm;

SetConsoleTextAttribute(color, 14);
	
gotoxy(69,14);     cout<<"ENTER DEPARTURE DATE:";
gotoxy(74,16);     cout<<"<mm/dd/yyyy>";
gotoxy(47,22);     cout<<"Enter MONTH here (1-12):";
gotoxy(47,28);     cout<<"Enter DAY here (1-30/31):";
gotoxy(41,34);     cout<<"Enter YEAR here (Current year-2020):";



gotoxy(82,22);     cin>>depm;
gotoxy(82,28);     cin>>depd;

gotoxy(82,34);     cin>>depy;

getch();

				    		if(depm==10&&depd>=1&&depd<=30&&depy==2019){

				    			goto depgo;
							}
							else if(depm==11&&depm<=12&&depd>=1&&depd<=31&&depy==2019){

				    			goto depgo;
							}
							else if(depm>=12&&depm<=12&&depd>=1&&depd<=31&&depy==2019){

				    			goto depgo;
							}
							else if(depm==2&&depd>=1&&depd<=29&&depy==2020){

				    			goto depgo;}
				    		else if(depm==1&&depd>=1&&depd<=31&&depy==2020){

				    			goto depgo;}
				    		else if(depm==3&&depd>=1&&depd<=31&&depy==2020){

				    			goto depgo;}
				    		else if(depm==5&&depd>=1&&depd<=31&&depy==2020){

								goto depgo;}
							else if(depm==7&&depd>=1&&depd<=31&&depy==2020){

				    			goto depgo;}
				    		else if(depm==8&&depd>=1&&depd<=31&&depy==2020){

								goto depgo;
							}
							else if(depm==10&&depd>=1&&depd<=31&&depy==2020){

								goto depgo;}
							else if(depm==12&&depd>=1&&depd<=31&&depy==2020){

								goto depgo;}
							else if(depm==4&&depd>=1&&depd<=30&&depy==2020){

								goto depgo;}
							else if(depm==6&&depd>=1&&depd<=30&&depy==2020){

								goto depgo;}
							else if(depm==9&&depd>=1&&depd<=30&&depy==2020){

								goto depgo;}
				        	else if(depm==11&&depd>=1&&depd<=30&&depy==2020){
				        		depgo:
				        			system("cls");
			             	}
							else{//ACTION IF INVALID DATE
				            invaliddep();
				            getch();
				            
						 	goto depgochoose;
						 }
			
		}

    	insu1des(){
		
gotoxy(51,23);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(51,24);     cout<<g<<"                         "<<g<<endl;
gotoxy(51,25);     cout<<g<<"                "<<g<<g<<g<<"      "<<g<<endl;
gotoxy(51,26);     cout<<g<<"               "<<g<<g<<g<<"       "<<g<<endl;
gotoxy(51,27);     cout<<g<<"              "<<g<<g<<g<<"        "<<g<<endl;
gotoxy(51,28);     cout<<g<<"             "<<g<<g<<g<<"         "<<g<<endl;
gotoxy(51,29);     cout<<g<<"      "<<g<<g<<g<<"   "<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,30);     cout<<g<<"       "<<g<<g<<g<<" "<<g<<g<<g<<"           "<<g<<endl;
gotoxy(51,31);     cout<<g<<"        "<<g<<g<<g<<g<<g<<"            "<<g<<endl;
gotoxy(51,32);     cout<<g<<"                         "<<g<<endl;
gotoxy(51,33);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(51,34);     cout<<g<<"           Yes           "<<g<<endl;
gotoxy(51,35);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;  
}

insu2des(){

gotoxy(80,23);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(80,24);     cout<<g<<"                         "<<g<<endl;
gotoxy(80,25);     cout<<g<<"       "<<g<<g<<g<<"     "<<g<<g<<g<<"       "<<g                      <<endl;
gotoxy(80,26);     cout<<g<<"       "" "<<g<<g<<g<<"   "<<g<<g<<g<<"        "<<g                      <<endl;
gotoxy(80,27);     cout<<g<<"       ""  "<<g<<g<<g<<" "<<g<<g<<g<<"         "<<g                      <<endl;
gotoxy(80,28);     cout<<g<<"       ""   "<<g<<g<<g<<g<<g<<"          "<<g                      <<endl;
gotoxy(80,29);     cout<<g<<"       ""  "<<g<<g<<g<<" "<<g<<g<<g<<"         "<<g                      <<endl;
gotoxy(80,30);     cout<<g<<"       "" "<<g<<g<<g<<"   "<<g<<g<<g<<"        "<<g                      <<endl;
gotoxy(80,31);     cout<<g<<"       "<<g<<g<<g<<"     "<<g<<g<<g<<"       "<<g                      <<endl;
gotoxy(80,32);     cout<<g<<"                         "<<g<<endl;
gotoxy(80,33);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(80,34);     cout<<g<<"           No            "<<g<<endl;
gotoxy(80,35);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;

}
	insuscreen(){
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE); 
	
	cout<<endl<<endl;
		mercheader();
	
	 SetConsoleTextAttribute(color, 11);		
		
		
                        cout<<"                                                       "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
						cout<<"                                                       "<<g<<"                                             "<<g<<endl;
						cout<<"                                                       "<<g<<"                                             "<<g<<endl;
						cout<<"                                                       "<<g<<"                                             "<<g<<endl;
						cout<<"                                                    "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						cout<<"                                                    "<<g<<"                                                   "<<g<<endl;
						cout<<"                      "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<"                                                   "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
						cout<<"                      "<<g<<"                             "<<g<<"                                                   "<<g<<"                                  "<<g<<endl;
					    cout<<"                      "<<g<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"                                  "<<g<<endl;
                        cout<<"                      "<<g<<"                                "<<g<<"                                             "<<g<<"                                     "<<g<<endl;
                        cout<<"                      "<<g<<"                                "<<g<<"                                             "<<g<<"                                     "<<g<<endl;
                        cout<<"                      "<<g<<"                                "<<g<<"                                             "<<g<<"                                     "<<g<<endl;
                        cout<<"                      "<<g<<"                                "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<"                                     "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl; 
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<"                                                                                                                    "<<g<<endl;
                        cout<<"                      "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
						cout<<"                      "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<endl;

SetConsoleTextAttribute(color, 14);		

gotoxy(61,15);     cout<<"Would you like to avail an Insurance?";
	
	insu1des();

insu2des();


gotoxy(42,38);
	cout<<"+------------------------------------------------------------------------+";
	gotoxy(42,39);
	cout<<"|        PRESS RIGHT and LEFT arrow keys to choose an option.            |";
	gotoxy(42,40);
	cout<<"|              PRESS ENTER to submit or confirm choice.                  |"; 
	gotoxy(42,41);
	cout<<"+------------------------------------------------------------------------+";



	}
	

	avlloop(){
		HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	while(avll!=1){
	genl=0;
	avl=0;
	gotoxy(84,31);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 /*|| v==49 */){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(avl==1)
			{
			}
			else
			{
				avl-=1;
			}
			break;
		case KEY_RIGHT:
			if(avl==2)
			{
			}
			else
			{
			
				avl+=1;
			}
			break;
		case ENTER:
			if(avl==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;
		/*case 49: //if the user presses 1, it will go back to the previous page.
		continue;
		*/break;	
		}
}
		
		switch(avl)
		{

			case 1:
		SetConsoleTextAttribute(color, 11);
		insu1des();
		SetConsoleTextAttribute(color, 14);
		insu2des();
		SetConsoleTextAttribute(color, 14);
				break;
			case 2:
		SetConsoleTextAttribute(color, 14);
		insu1des();
		SetConsoleTextAttribute(color, 11);
		insu2des();
		SetConsoleTextAttribute(color, 14);
				break;
			
		}
	}


	if(avl!=1&&avl!=2){
		avll--;
		system("cls");
	}
	else
	{
		avll=1;
		
	}
}// while book
avll=0;
}//avlfunction

bagborder(){

	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

	                    cout<<"                                                    "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						cout<<"                                                    "<<g<<"                                                   "<<g<<endl;
						cout<<"                           "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<"                                                   "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
						cout<<"                           "<<g<<"                        "<<g<<"                                                   "<<g<<"                        "<<g<<endl;
					    cout<<"                           "<<g<<"                        "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"                        "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;

SetConsoleTextAttribute(color, 11);

gotoxy(40,16);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(40,17);     cout<<g<<"                                                                           "<<g;
gotoxy(40,18);     cout<<g<<"                                                                           "<<g;
gotoxy(40,19);     cout<<g<<"                                                                           "<<g;
gotoxy(40,20);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(40,21);     cout<<g<<"                                                                           "<<g;
gotoxy(40,22);     cout<<g<<"                                                                           "<<g;
gotoxy(40,23);     cout<<g<<"                                                                           "<<g;
gotoxy(40,24);     cout<<g<<"                                                                           "<<g;
gotoxy(40,25);     cout<<g<<"                                                                           "<<g;
gotoxy(40,26);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;

gotoxy(45,29);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(45,30);     cout<<g<<"                                                                 "<<g;
gotoxy(45,31);     cout<<g<<"                                                                 "<<g;
gotoxy(45,32);     cout<<g<<"                                                                 "<<g;
gotoxy(45,33);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;

}

	wrongbagg(){
	
		HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(color, 12);
gotoxy(45,29);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(45,30);     cout<<g<<"                                                                 "<<g;
gotoxy(45,31);     cout<<g<<"                                                                 "<<g;
gotoxy(45,32);     cout<<g<<"                                                                 "<<g;
gotoxy(45,33);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;

SetConsoleTextAttribute(color, 14);
gotoxy(50,31);
cout<<"Please enter a valid number of baggage weight (kilograms).";


getch();
	system("cls");

	}
	
		wrongbagg2(){
	
		HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

SetConsoleTextAttribute(color, 12);
gotoxy(45,32);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(45,33);     cout<<g<<"                                                                 "<<g;
gotoxy(45,34);     cout<<g<<"                                                                 "<<g;
gotoxy(45,35);     cout<<g<<"                                                                 "<<g;
gotoxy(45,36);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;

SetConsoleTextAttribute(color, 14);
gotoxy(50,34);
cout<<"Please enter a valid number of baggage weight (kilograms).";


getch();
	system("cls");

	
}

bagg2(){

	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

	                    cout<<"                                                       "<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
						cout<<"                                                       "<<g<<"                                             "<<g<<endl;
						cout<<"                                                       "<<g<<"                                             "<<g<<endl;
						cout<<"                                                    "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						cout<<"                                                    "<<g<<"                                                   "<<g<<endl;
						cout<<"                           "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<"                                                   "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
						cout<<"                           "<<g<<"                        "<<g<<"                                                   "<<g<<"                        "<<g<<endl;
					    cout<<"                           "<<g<<"                        "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"                        "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<"                                                                                                     "<<g<<endl;
                        cout<<"                           "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;

SetConsoleTextAttribute(color, 11);

gotoxy(40,19);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(40,20);     cout<<g<<"                                                                           "<<g;
gotoxy(40,21);     cout<<g<<"                                                                           "<<g;
gotoxy(40,22);     cout<<g<<"                                                                           "<<g;
gotoxy(40,23);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(40,24);     cout<<g<<"                                                                           "<<g;
gotoxy(40,25);     cout<<g<<"                                                                           "<<g;
gotoxy(40,26);     cout<<g<<"                                                                           "<<g;
gotoxy(40,27);     cout<<g<<"                                                                           "<<g;
gotoxy(40,28);     cout<<g<<"                                                                           "<<g;
gotoxy(40,29);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;

gotoxy(45,32);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(45,33);     cout<<g<<"                                                                 "<<g;
gotoxy(45,34);     cout<<g<<"                                                                 "<<g;
gotoxy(45,35);     cout<<g<<"                                                                 "<<g;
gotoxy(45,36);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;

SetConsoleTextAttribute(color, 14);
gotoxy(68,10);
cout<<"Up to 20 kilograms only.";

	}


	bagg(){
		
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);	
	
	baggagechoose:
	
	switch (tdes)
	{
		case 1:
		
		

	if(inf!=0){
	system("cls");
	for(i=1;i<=inf;i++){
	
		cout<<endl<<endl;
	mercheader();
SetConsoleTextAttribute(color, 11);
	bagborder();
	
SetConsoleTextAttribute(color, 14);
gotoxy(75,11);
cout<<"Infant #"<<i<<" :";

gotoxy(60,18);
cout<<"Enter Baggage Weight (Kg/Kilograms):";

gotoxy(79,23);
	cin>>bginf[i];
	
	
	cout<<endl;
	cout<<endl;

	if(bginf[i]>=9&&bginf[i]<=20)
	{
	
		bginf[i]=bginf[i]-8;
		sumbginf=bginf[i]*1250;
		bggpinf[i]=sumbginf;
	
	gotoxy(62,31);
cout<<"Additional fee per kilo: P"<<sumbginf;

	cout<<endl;
	cout<<endl;
	
	
getch();
	
	system("cls");


	}

	else if(bginf[i]<=8&&bginf[i]>=0)
	{
	SetConsoleTextAttribute(color, 14);
gotoxy(48,31);
cout<<"INFANT PASSENGER #"<<i<<" don't have any additional baggage charges.";

getch();
	system("cls");



		}
	else{
		
		i=i-1;
		
	wrongbagg();

    
    
	}
}
}


if(ch!=0){
	
		
		for(i=1;i<=ch;i++){system("cls");
			
		cout<<endl<<endl;
	mercheader();
SetConsoleTextAttribute(color, 11);
	bagborder();
	
SetConsoleTextAttribute(color, 14);
gotoxy(76,11);
cout<<"Child #"<<i<<" :";

gotoxy(60,18);
cout<<"Enter Baggage Weight (Kg/Kilograms):";

gotoxy(79,23);
	cin>>bgch[i];
	
	
	cout<<endl;
	cout<<endl;
	
	

	if(bgch[i]>=9&&bgch[i]<=20)
	{
		cout<<endl;
		sumbgch2=sumbgch3;
		bgch[i]=bgch[i]-8;
		sumbgch=bgch[i]*1250;
       bggpch[i]=sumbgch;
	
	gotoxy(62,31);
cout<<"Additional fee per kilo: P"<<sumbgch;

	cout<<endl;
	cout<<endl;
	
	
getch();
	
	system("cls");

	}

	else if (bgch[i]<=8&&bgch[i]>=0)
	{
		
SetConsoleTextAttribute(color, 14);
gotoxy(49,31);
cout<<"CHILD PASSENGER #"<<i<<" don't have any additional baggage charges.";


getch();
	system("cls");


		
		}

	else{
		
	wrongbagg();
    i=i-1;
    
	}
	    sumbgch3=sumbgch+sumbgch2;
    
}

}

if(adu!=0){

	
	
	for(i=1;i<=adu;i++){	system("cls");
		
			
		cout<<endl<<endl;
	mercheader();
SetConsoleTextAttribute(color, 11);
	bagborder();
	
SetConsoleTextAttribute(color, 14);
gotoxy(76,11);
cout<<"Adult #"<<i<<" :";

gotoxy(60,18);
cout<<"Enter Baggage Weight (Kg/Kilograms):";

gotoxy(79,23);
	cin>>bgadu[i];
	
	
	cout<<endl;
	cout<<endl;


	if(bgadu[i]>=9&&bgadu[i]<=20)
	{
		cout<<endl;
		sumbgadu2=sumbgadu3;
		bgadu[i]=bgadu[i]-8;
		sumbgadu=bgadu[i]*1250;
       bggpadu[i]=sumbgadu;	
	
	gotoxy(62,31);
cout<<"Additional fee per kilo: P"<<sumbgadu;

	cout<<endl;
	cout<<endl;
	
	
getch();
system("cls");

	}

	else if (bgadu[i]<=8&&bgadu[i]>=0)
	{
	
	SetConsoleTextAttribute(color, 14);
gotoxy(49,31);
cout<<"ADULT PASSENGER #"<<i<<" don't have any additional baggage charges.";


getch();
system("cls");


		}
	else{
		i=i-1;
	wrongbagg();
	}
		sumbgadu3=sumbgadu+sumbgadu2;
}

}

if(sc!=0){
	
	for(i=1;i<=sc;i++){
	
		system("cls");
		
		cout<<endl<<endl;
	mercheader();
SetConsoleTextAttribute(color, 11);
	bagborder();

SetConsoleTextAttribute(color, 14);
gotoxy(71,11);
cout<<"Senior Citizen #"<<i<<" :";
	

gotoxy(60,18);
cout<<"Enter Baggage Weight (Kg/Kilograms):";

gotoxy(79,23);
	cin>>bgsc[i];
		
	cout<<endl;
	cout<<endl;

	if(bgsc[i]>=9&&bgsc[i]<=20)
	{
			cout<<endl;
		sumbgsc2=sumbgsc3;
        bgsc[i]=bgsc[i]-8;    
		sumbgsc=bgsc[i]*1250;
       bggpsc[i]=sumbgsc;
		
	gotoxy(62,31);
cout<<"Additional fee per kilo: P"<<sumbgsc;

	cout<<endl;
	cout<<endl;
	
	
getch();

	
	}

	else if (bgsc[i]<=8&&bgsc[i]>=0)
	{
		
	SetConsoleTextAttribute(color, 14);
gotoxy(49,31);
cout<<"SENIOR CITIZEN #"<<i<<" don't have any additional baggage charges.";

getch();
	system("cls");


		}

	else{
	i=i-1;
	wrongbagg();

	}
		sumbgsc3=sumbgsc+sumbgsc2;
}

}


	break;



	case 2:
		interbgchoose:
		system("cls");
	if(inf!=0){
	
	for(int i=1;i<=inf;i++){
	cout<<endl<<endl;
	mercheader();
SetConsoleTextAttribute(color, 11);
	bagg2();
	
SetConsoleTextAttribute(color, 14);
gotoxy(76,14);
cout<<"Infant #"<<i<<" :";

gotoxy(60,21);
cout<<"Enter Baggage Weight (Kg/Kilograms):";

gotoxy(79,26);
	cin>>bginf[i];
	
	
	cout<<endl;
	cout<<endl;

	if(bginf[i]>=9&&bginf[i]<=20)
	{
		cout<<endl;
		bginf[i]=bginf[i]-9;
		sumbginf=bginf[i]*1250;
		bggpinf[i]=sumbginf;
	
		gotoxy(64,34);
cout<<"Additional fee per kilo: P"<<sumbginf;

getch();
system("cls");

	}

	else if(bginf[i]<=8&&bginf[i]>=0)
	{
	
gotoxy(49,34);
cout<<"INFANT PASSENGER #"<<i<<" don't have any additional baggage charges.";
getch();
system("cls");

		}
	else{
	
	wrongbagg2();

		goto interbgchoose;
	}
}
}


if(ch!=0){
	for(int i=1;i<=ch;i++){
		system("cls");
		cout<<endl<<endl;

					mercheader();

SetConsoleTextAttribute(color, 11);
	bagg2();

SetConsoleTextAttribute(color, 14);
gotoxy(76,14);
cout<<"Child #"<<i<<" :";

gotoxy(60,21);
cout<<"Enter Baggage Weight (Kg/Kilograms):";

gotoxy(79,26);
cin>>bgch[i];
	
	cout<<endl;
	cout<<endl;


	if(bgch[i]>=9&&bgch[i]<=20)
	{
		cout<<endl;
		sumbgch2=sumbgch3;
		bgch[i]=bgch[i]-9;
		sumbgch=bgch[i]*1250;
        bggpch[i]=sumbgch;
		
		gotoxy(64,34);
cout<<"Additional fee per kilo: P"<<sumbgch;

getch();
system("cls");

	}

	else if (bgch[i]<=8&&bgch[i]>=0)
	{
	gotoxy(49,34);
cout<<"CHILD PASSENGER #"<<i<<" don't have any additional baggage charges.";
getch();
system("cls");
		}

		else{
			
	wrongbagg2();
	}
	    sumbgch3=sumbgch+sumbgch2;

}

}

    if(adu!=0){
    	for(int i=1;i<=adu;i++){
    		system("cls");
	 SetConsoleTextAttribute(color, 14);
	cout<<endl<<endl;

	mercheader();

SetConsoleTextAttribute(color, 11);
	bagg2();
	
SetConsoleTextAttribute(color, 14);
gotoxy(76,14);
cout<<"Adult #"<<i<<" :";


gotoxy(60,21);
cout<<"Enter Baggage Weight (Kg/Kilograms):";

gotoxy(79,26);
cin>>bgadu[i];
	
	cout<<endl;
	cout<<endl;



	if(bgadu[i]>=9&&bgadu[i]<=20)
	{
		
		sumbgadu2=sumbgadu3;
		bgadu[i]=bgadu[i]-9;
    	sumbgadu=bgadu[i]*1250;
    	bggpadu[i]=sumbgadu;
    
	gotoxy(64,34);
cout<<"Additional fee per kilo: P"<<sumbgadu;
getch();
system("cls");

	}

	else if (bgadu[i]<=8&&bgadu[i]>=0)
	{
SetConsoleTextAttribute(color, 14);
gotoxy(49,34);
cout<<"ADULT PASSENGER #"<<i<<" don't have any additional baggage charges.";
getch();
system("cls");

		}
	else{
	wrongbagg2();	
	}
		sumbgadu3=sumbgadu+sumbgadu2;
}

}

if(sc!=0){
	for(int i=1;i<=sc;i++){
	system("cls");
	
	 SetConsoleTextAttribute(color, 14);


	cout<<endl<<endl;

					mercheader();
	bagg2();

SetConsoleTextAttribute(color, 14);
gotoxy(71,14);
cout<<"Senior Citizen #"<<i<<" :";
gotoxy(79,26);
cin>>bgsc[i];
	


	if(bgsc[i]>=9&&bgsc[i]<=20)
	{
		cout<<endl;
		sumbgsc2=sumbgsc3;
		bgsc[i]=bgsc[i]-9;
		sumbgsc=bgsc[i]*1250;
		bggpsc[i]=sumbgsc;

	gotoxy(64,34);
cout<<"Additional fee per kilo: P"<<sumbgsc;
getch();
	system("cls");
	}

	else if (bgsc[i]<=8&&bgsc[i]>=0)
	{
		SetConsoleTextAttribute(color, 14);
gotoxy(49,34);
cout<<"SENIOR CITIZEN #"<<i<<" don't have any additional baggage charges.";
getch();
	system("cls");

		}

	else{
	wrongbagg2();
		
		
		goto interbgchoose;
	}
		sumbgsc3=sumbgsc+sumbgsc2;
	
}

}
	}
	sumbgall=sumbgsc3+sumbgadu3+sumbgch3+sumbginf;
}

	
	loading(){
	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	
	char load=219;
	int i;
	system("cls");
	Sleep(500);
	
		
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	
	cout<<"                                                              "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<endl;
	cout<<"                                                              "<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<" "<<m<<m<<m<<"     "<<m<<m<<m<<"  "<<m<<m<<m<<"  "<<m<<m<<m<<endl;
	cout<<"                                                              "<<m<<m<<m<<" "<<m<<m<<" "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<endl;
	cout<<"                                                              "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<"     "<<m<<m<<m<<"  "<<m<<m<<m<<"  "<<m<<m<<m<<endl;
	cout<<"                                                              "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<"   "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<endl;

	cout<<"                                                         ------------- TICKETING SERVICES -------------"<<endl; Sleep(100);
	cout<<"                                     -o0o- MERC GROUP OF COMPANY OFFERS PRIVATE AVIATION RESERVATION FOR CERTAIN DESTINATIONS -o0o-"<<endl<<endl<<endl<<endl<<endl;Sleep(100);
	
gotoxy(54,24);
	cout<<"+--------------------------------------------------+"<<endl;
gotoxy(54,25);
	cout<<"|                                                  |"<<endl;
gotoxy(54,26);
	cout<<"+--------------------------------------------------+"<<endl;
	
	cout<<"                                                       ";
		
gotoxy(72,27);
cout<<"L O A D I N G . . ."<<endl;


gotoxy(55,25);
	for(i=1;i<=50;i++)
	{
			SetConsoleTextAttribute(color, 11);
		cout<<load;
		Sleep(75);
			}		
SetConsoleTextAttribute(color, 14);
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

}

info(){
	
    	
      HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

cout<<endl<<endl;

					cout<<"                                                             "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<endl;
					cout<<"                                                          "<<g<<"  "<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<" "<<m<<m<<m<<"     "<<m<<m<<m<<"  "<<m<<m<<m<<"  "<<m<<m<<m<<"      "<<g<<endl;
					cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"  "<<m<<m<<m<<" "<<m<<m<<" "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
					cout<<"                             "<<g<<g<<"                           "<<g<<"  "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<"     "<<m<<m<<m<<"  "<<m<<m<<m<<"  "<<m<<m<<m<<"      "<<g<<"                            "<<g<<g<<endl;
					cout<<"                             "<<g<<g<<"                              "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<"   "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"                               "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;



	gotoxy(44,10);    cout<<"IMPORTANT: Passport valid for at least 6 months from departure date "<<endl;
	gotoxy(52,11);    cout<<"is required for international travel or transit abroad      "<<endl;


//PAra sa parang warning ganernnn

SetConsoleTextAttribute(color, 11);

    gotoxy(42,7);     cout<<"+------------------------------------------------------------------------+"<<endl;
	gotoxy(42,8);     cout<<"|                                                                        |"<<endl;
	gotoxy(42,9);    cout<<"|                                                                        |"<<endl;
	gotoxy(42,10);    cout<<"|                                                                        |"<<endl;
	gotoxy(42,11);    cout<<"|                                                                        |"<<endl;
	gotoxy(42,12);    cout<<"+------------------------------------------------------------------------+"<<endl;

	SetConsoleTextAttribute(color, 14);
	gotoxy(44,9);    cout<<"IMPORTANT: Passport valid for at least 6 months from departure date "<<endl;
	gotoxy(52,10);    cout<<"is required for international travel or transit abroad      "<<endl;




///PAra sa illustration

SetConsoleTextAttribute(color, 11);


gotoxy(51,14);     cout<<"    "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(51,15);     cout<<"   "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(51,16);     cout<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(51,17);     cout<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(51,18);     cout<<"   "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(51,19);     cout<<"    "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<endl;

gotoxy(51,20);     cout<<"  "<<g<<g<<g<<mn<<"    "<<mn<<g<<g<<g<<endl;
gotoxy(51,21);     cout<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(51,22);     cout<<""<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(51,23);     cout<<""<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<endl;


	gotoxy(72,14);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
	gotoxy(72,15);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
	gotoxy(72,16);     cout<<g<<"                                 "<<g<<endl;
	gotoxy(72,17);     cout<<g<<"                                 "<<g<<endl;
	gotoxy(72,18);     cout<<g<<"                                 "<<g<<endl;
	gotoxy(72,19);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<endl;
	gotoxy(72,20);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
	gotoxy(72,21);     cout<<g<<"                                 "<<g<<endl;
	gotoxy(72,22);     cout<<g<<"                                 "<<g<<endl;
	gotoxy(72,23);     cout<<g<<"                                 "<<g<<endl;
	gotoxy(72,24);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<endl;


///Para sa table

SetConsoleTextAttribute(color, 11);
gotoxy(41,26);     cout<<a<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<c<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<j<<endl;
	gotoxy(41,27);     cout<<d<<"                                   "<<d<<"                                       "<<d<<endl;
	gotoxy(41,28);     cout<<uu<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<cc<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<h<<endl;
	gotoxy(41,29);     cout<<d<<"                                   "<<d<<"                                       "<<d<<endl;
    gotoxy(41,30);     cout<<uu<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<cc<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<h<<endl;
	gotoxy(41,31);     cout<<d<<"                                   "<<d<<"                                       "<<d<<endl;
	gotoxy(41,32);     cout<<uu<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<cc<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<h<<endl;
	gotoxy(41,33);     cout<<d<<"                                   "<<d<<"                                       "<<d<<endl;
	gotoxy(41,34);     cout<<uu<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<cc<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<h<<endl;
	gotoxy(41,35);     cout<<d<<"                                   "<<d<<"                                       "<<d<<endl;
	gotoxy(41,36);     cout<<uu<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<cc<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<h<<endl;
	gotoxy(41,37);     cout<<d<<"                                   "<<d<<"                                       "<<d<<endl;
	gotoxy(41,38);     cout<<oo<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<bb<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<k<<endl;


SetConsoleTextAttribute(color, 14);
gotoxy(45,27);     cout<<"Enter your First Name:"<<endl;
gotoxy(45,29);     cout<<"Enter your Middle Name:"<<endl;
gotoxy(45,31);     cout<<"Enter your Last Name:"<<endl;
gotoxy(45,33);     cout<<"Enter your Age:"<<endl;
gotoxy(45,35);     cout<<"Enter your Nationality:"<<endl;
gotoxy(45,37);     cout<<"Enter your Passport Number:"<<endl;

}

insuinf(){


}

insuch(){

}
	
insuadu(){

}	

insusc(){


}

detpay(){
HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
system("cls");

	
		if(inf>=1)
		{	
			for (int i=1;i<=inf;i++)
			{
				f=i+1;
				inf1:
	
		
    info();
    
    SetConsoleTextAttribute(color, 14);
gotoxy(76,17);     cout<<"Please fill in the details!"<<endl;
///Dito ilagay ung variables
gotoxy(85,22);     cout<<"INFANT #"<<i<<":"<<endl;
	
	gotoxy(80,27);
	getline(cin>>ws,bfn[i]);
	validation(bfn[i]);
	if(gotg==1)
	{
		gotg=0;
		goto inf1;
	}
	gotoxy(80,29);
	getline(cin>>ws,bmn[i]);
	validation(bmn[i]);
	if(gotg==1)
	{
		gotg=0;
		goto inf1;
	}
	gotoxy(80,31);
	getline(cin>>ws,bln[i]);
	validation(bmn[i]);
	if(gotg==1)
	{
		gotg=0;
		goto inf1;
	}
	gotoxy(80,33);
	cin>>iage;
	gotoxy(80,35);
	getline(cin>>ws,nation);
	gotoxy(80,37);
	cin>>passportinf;				

	cout<<endl<<endl;
	getch();


					
					//Validationnnnnnnnnnnnnnnn
					if (iage<=2)
                    { 
	system("cls");
					
//	insuinf();
		insuu:
insuscreen();
insu1des();
insu2des();
gotoxy(75,11);     cout<<"Infant #"<<i<<" :";
    avlloop();
	cout<<endl<<endl;
	
	switch (avl)
	{
		case 1:
				
             	 
             	 switch (cab)/*for cabin class*/
             	 {
             	 	case 1:
                    		gotoxy(65,19);     cout<<"Additional Charge: P4,500";
						getch();
						system("cls");
                       	tins=tins+4500;/*mag aadd unt total*/
                       	infins[i]=busins;/*mag kakaroon ng value ung passengers variable for insurance*/
                     	break;
	                case 2:	
                       	gotoxy(65,19);     cout<<"Additional Charge: P8,500";
						getch();
						system("cls");
						tins=tins+8500;/*mag aadd unt total*/
                    	infins[i]=priins;/*mag kakaroon ng value ung passengers variable for insurance*/
						break;	
                	default:
    
						//goto insuou;
                     	break;		
 				  }
             	
		break;
		case 2://ayaw ng insurance
			getch();
			system("cls");
						
			break;
		default://maling input
	cout<<endl<<endl;
    cout<<"                                                                     +--------------------+"<<endl;	
	cout<<"                                                                     |                    |"<<endl;
	cout<<"                                                                     |   Invalid Input!   |"<<endl;
	cout<<"                                                                     |                    |"<<endl;
	cout<<"                                                                     +--------------------+"<<endl;
	cout<<endl<<endl;
	
		     //goto insuou;
			 break;	
			 getch();
			 system("cls");
		
	}
				
					}    //proceed lng    }
					else{
					invalidin();
             		  	goto inf1;
					}
	         	
			}}
			else{}
			 system("cls");
			 
			if(ch>=1)
			{
				for (int i=1;i<=ch;i++)
			{
				system("cls");
				f=i+1;
				ch1:
				
	info();
	
	SetConsoleTextAttribute(color, 14);
gotoxy(76,17);     cout<<"Please fill in the details!"<<endl;
///Dito ilagay ung variables
gotoxy(84,22);     cout<<"CHILD #"<<i<<":"<<endl;	

	
	gotoxy(80,27); 
	getline(cin>>ws,cfn[i]);
	gotoxy(80,29);
	getline(cin>>ws,cmn[i]);
	gotoxy(80,31);
	getline(cin>>ws,cln[i]);
	gotoxy(80,33);
	cin>>chage;
	gotoxy(80,35);
	cin>>nation;
	gotoxy(80,37);
	cin>>passportch;				

	cout<<endl<<endl;
					
	getch();


					if (chage<=13 && chage>=3)
                    {
					
	system("cls");
//	insuch();
	//child~
	
	
insuscreen();
insu1des();
insu2des();
gotoxy(75,11);     cout<<"CHILD #"<<i<<":"<<endl;	

  avlloop();
	cout<<endl<<endl;
	
	
	switch (avl)
	{
		case 1:
				
             	 switch (cab)/*for cabin class*/
             	 {
             	 	case 1:
                    	gotoxy(65,19);     cout<<"Additional Charge: P4,500";
						getch();
						system("cls");
                       	tins=tins+4500;/*mag aadd unt total*/
                       	chins[i]=busins;/*mag kakaroon ng value ung passengers variable for insurance*/
                     	break;
	                case 2:	
                       	gotoxy(65,19);     cout<<"Additional Charge: P8,500";
						getch();
						system("cls");
                    	tins=tins+8500;/*mag aadd unt total*/
                    	chins[i]=priins;/*mag kakaroon ng value ung passengers variable for insurance*/
						break;	
                	default:
    cout<<endl<<endl;
    cout<<"                                                                     +--------------------+"<<endl;	
	cout<<"                                                                     |                    |"<<endl;
	cout<<"                                                                     |   Invalid Input!   |"<<endl;
	cout<<"                                                                     |                    |"<<endl;
	cout<<"                                                                     +--------------------+"<<endl;
	cout<<endl<<endl;
	
						//goto insuou;
						 break;		
 				  }
             	
		break;
		case 2://ayaw ng insurance
			cout<<""<<endl;
		break;
		default://maling input
	cout<<endl<<endl;
    cout<<"                                                                     +--------------------+"<<endl;	
	cout<<"                                                                     |                    |"<<endl;
	cout<<"                                                                     |   Invalid Input!   |"<<endl;
	cout<<"                                                                     |                    |"<<endl;
	cout<<"                                                                     +--------------------+"<<endl;
	cout<<endl<<endl;
	
			 //goto insuou;
			 break;	
			 getch();
			 system("cls");
		
	}
				
					
					 }    //proceed lng    }
					else{
				invalidin();
             		  	goto ch1;
					}
}/*for loop */
}
else
{}	
		 system("cls");
                if(adu>0)
				{
				 for(int i=1;i<=adu;i++)
				 {
				 	system("cls");
				 		f=i+1;
				 		adu1:
				
				
	  info();
	
	SetConsoleTextAttribute(color, 14);
gotoxy(76,17);     cout<<"Please fill in the details!"<<endl;
///Dito ilagay ung variables
gotoxy(84,22);     cout<<"ADULT #"<<i<<":"<<endl;	

	gotoxy(80,27);
	getline(cin>>ws,afn[i]);
	gotoxy(80,29);
	getline(cin>>ws,amn[i]);
	gotoxy(80,31);
	getline(cin>>ws,aln[i]);
	gotoxy(80,33);
	cin>>aduage;
	gotoxy(80,35);
	cin>>nation;
	gotoxy(80,37);
	cin>>passportadu;				
	
	cout<<endl<<endl;
	getch();

					if (aduage<=64 && aduage>=14)
                    { 
					
	system("cls");
//	insuadu();
		//adult

    	
	
insuscreen();
insu1des();
insu2des();
gotoxy(75,11);     cout<<"ADULT #"<<i<<":"<<endl;	

  avlloop();
	cout<<endl<<endl;
	
	switch (avl)
	{
		case 1:
				
             
             	 switch (cab)/*for cabin class*/
             	 {
             	 	case 1:
                    	gotoxy(65,19);     cout<<"Additional Charge: P4,500";
						getch();
						system("cls");
                       	tins=tins+4500;/*mag aadd unt total*/
                       	aduins[i]=busins;/*mag kakaroon ng value ung passengers variable for insurance*/
                     	break;
	                case 2:	
                       	gotoxy(65,19);     cout<<"Additional Charge: P8,500";
						getch();
						system("cls");
						tins=tins+8500;/*mag aadd unt total*/
                    	aduins[i]=priins;/*mag kakaroon ng value ung passengers variable for insurance*/
						break;	
                	default:
    cout<<endl<<endl;
    cout<<"                                                                     +--------------------+"<<endl;	
	cout<<"                                                                     |                    |"<<endl;
	cout<<"                                                                     |   Invalid Input!   |"<<endl;
	cout<<"                                                                     |                    |"<<endl;
	cout<<"                                                                     +--------------------+"<<endl;
	cout<<endl<<endl;
	
						//goto insuou;
                     	break;		
 				  }
             	
		break;
		case 2://ayaw ng insurance
			cout<<""<<endl;
		break;
		default://maling input
	cout<<endl<<endl;
    cout<<"                                                                     +--------------------+"<<endl;	
	cout<<"                                                                     |                    |"<<endl;
	cout<<"                                                                     |   Invalid Input!   |"<<endl;
	cout<<"                                                                     |                    |"<<endl;
	cout<<"                                                                     +--------------------+"<<endl;
	cout<<endl<<endl;
	
			 //goto insuou;
			 break;	
			 getch();
			 system("cls");
		
	}
				
					
					}    //proceed lng    }
					else{
				invalidin();
             		  	goto adu1;
					}
	 
				 } //for loop
				 }
			
				 else{}
				 
				 
				 //senior
				 system("cls");
				 
		
				 if(sc>0)
				{
				 for(int i=1;i<=sc;i++)
				 {system("cls");
				 		f=i+1;
				sc1:
	  info();
     
     SetConsoleTextAttribute(color, 14);
gotoxy(76,17);     cout<<"Please fill in the details!"<<endl;
///Dito ilagay ung variables
gotoxy(80,22);     cout<<"SENIOR CITIZEN #"<<i<<":"<<endl;	

	
	gotoxy(80,27);
	getline(cin>>ws,sfn[i]);
	gotoxy(80,29);
	getline(cin>>ws,smn[i]);
	gotoxy(80,31);
	getline(cin>>ws,sln[i]);
	gotoxy(80,33);
	cin>>scage;
	gotoxy(80,35);
	cin>>nation;
	gotoxy(80,37);
	cin>>passportsc;				

	cout<<endl<<endl;				
	getch();			  			
				  
    	          
					if (scage>=65 )
                    { 
					
	system("cls");
	//insusc();
	//sc
		
insuscreen();
insu1des();
insu2des();
gotoxy(71,11);     cout<<"Senior Citizen #"<<i<<":";

  avlloop();
	cout<<endl<<endl;
 
	switch (avl)
	{
		case 1:
				
             	 
             	 switch (cab)/*for cabin class*/
             	 {
             	 	case 1:
                    	gotoxy(65,19);     cout<<"Additional Charge: P4,500";
						getch();
						system("cls");
                       	tins=tins+4500;/*mag aadd unt total*/
                       	scins[i]=busins;/*mag kakaroon ng value ung passengers variable for insurance*/
                     	break;
	                case 2:	
                       	gotoxy(65,19);     cout<<"Additional Charge: P8,500";
						getch();
						system("cls");
                    	tins=tins+8500;/*mag aadd unt total*/
                    	scins[i]=priins;/*mag kakaroon ng value ung passengers variable for insurance*/
						break;	
                	default:
    cout<<endl<<endl;
    cout<<"                                                                     +--------------------+"<<endl;	
	cout<<"                                                                     |                    |"<<endl;
	cout<<"                                                                     |   Invalid Input!   |"<<endl;
	cout<<"                                                                     |                    |"<<endl;
	cout<<"                                                                     +--------------------+"<<endl;
	cout<<endl<<endl;
	
						//////goto insuou;;
                     	break;		
 				  }
             	
		break;
		case 2://ayaw ng insurance
			cout<<""<<endl;
		break;
		default://maling input
	cout<<endl<<endl;
    cout<<"                                                                     +--------------------+"<<endl;	
	cout<<"                                                                     |                    |"<<endl;
	cout<<"                                                                     |   Invalid Input!   |"<<endl;
	cout<<"                                                                     |                    |"<<endl;
	cout<<"                                                                     +--------------------+"<<endl;
	cout<<endl<<endl;
	
		     
			 break;	
			 getch();
			 system("cls");
		
	}

					
					
					}    //proceed lng    }
					else{
					invalidin();
             		  	goto sc1;
					}
					
             
				 }//for loop
				 }else
				 {}
				 
				 system("cls");
				
	contactdet:


	system("cls");

cout<<endl<<endl;

					cout<<"                                                             "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<endl;
					cout<<"                                                          "<<g<<"  "<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<" "<<m<<m<<m<<"     "<<m<<m<<m<<"  "<<m<<m<<m<<"  "<<m<<m<<m<<"      "<<g<<endl;
					cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"  "<<m<<m<<m<<" "<<m<<m<<" "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
					cout<<"                             "<<g<<g<<"                           "<<g<<"  "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<"     "<<m<<m<<m<<"  "<<m<<m<<m<<"  "<<m<<m<<m<<"      "<<g<<"                            "<<g<<g<<endl;
					cout<<"                             "<<g<<g<<"                              "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<"   "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"                               "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<"                                                                                                 "<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
                    cout<<"                             "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;




//PAra sa parang warning ganernnn

SetConsoleTextAttribute(color, 11);

    gotoxy(42,7);     cout<<"+------------------------------------------------------------------------+"<<endl;
	gotoxy(42,8);     cout<<"|                                                                        |"<<endl;
	gotoxy(42,9);    cout<<"|                                                                        |"<<endl;
	gotoxy(42,10);    cout<<"|                                                                        |"<<endl;
	gotoxy(42,11);    cout<<"|                                                                        |"<<endl;
	gotoxy(42,12);    cout<<"+------------------------------------------------------------------------+"<<endl;

	SetConsoleTextAttribute(color, 14);
	gotoxy(44,9);    cout<<"IMPORTANT: Passport valid for at least 6 months from departure date "<<endl;
	gotoxy(52,10);    cout<<"is required for international travel or transit abroad      "<<endl;




///PAra sa illustration

SetConsoleTextAttribute(color, 11);

gotoxy(48,14);     cout<<"    "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(48,15);     cout<<"   "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(48,16);     cout<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(48,17);     cout<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(48,18);     cout<<"   "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(48,19);     cout<<"    "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<endl;

gotoxy(48,20);     cout<<"  "<<g<<g<<g<<mn<<"    "<<mn<<g<<g<<g<<endl;
gotoxy(48,21);     cout<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(48,22);     cout<<""<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
gotoxy(48,23);     cout<<""<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<endl;


	gotoxy(67,15);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
	gotoxy(67,16);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
	gotoxy(67,17);     cout<<g<<"                                          "<<g<<endl;
	gotoxy(67,18);     cout<<g<<"                                          "<<g<<endl;
	gotoxy(67,19);     cout<<g<<"                                          "<<g<<endl;
	gotoxy(67,20);     cout<<g<<"                                          "<<g<<endl;
	gotoxy(67,21);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<endl;
	gotoxy(67,22);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
	

SetConsoleTextAttribute(color, 14);
gotoxy(69,18);     cout<<"As on ID Card/ Pasport / Driving License"<<endl;

gotoxy(69,19);     cout<<"      Please fill in the details."<<endl;


SetConsoleTextAttribute(color, 11);
gotoxy(41,25);     cout<<a<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<c<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<j<<endl;
	gotoxy(41,26);     cout<<d<<"                                   "<<d<<"                                       "<<d<<endl;
	gotoxy(41,27);     cout<<uu<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<cc<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<h<<endl;
	gotoxy(41,28);     cout<<d<<"                                   "<<d<<"                                       "<<d<<endl;
    gotoxy(41,29);     cout<<uu<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<cc<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<h<<endl;
	gotoxy(41,30);     cout<<d<<"                                   "<<d<<"                                       "<<d<<endl;
	gotoxy(41,31);     cout<<oo<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<bb<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<k<<endl;
	
	gotoxy(41,32);     cout<<a<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<c<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<j<<endl;
	gotoxy(41,33);     cout<<d<<"                                   "<<d<<"                                       "<<d<<endl;
	gotoxy(41,34);     cout<<oo<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<bb<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<k<<endl;


SetConsoleTextAttribute(color, 14);
gotoxy(45,26);     cout<<"Enter your First Name:"<<endl;
gotoxy(45,28);     cout<<"Enter your Middle Name:"<<endl;
gotoxy(45,30);     cout<<"Enter your Last Name:"<<endl;

gotoxy(45,33);     cout<<"Enter your Contact Number:"<<endl;

gotoxy(80,26);     cin>>conperfn;
gotoxy(80,28);     cin>>conpermn;
gotoxy(80,30);     cin>>conperln;

gotoxy(80,33);     cin>>conumb;

    
SetConsoleTextAttribute(color, 11);

    gotoxy(45,36);     cout<<"+------------------------------------------------------------------+"<<endl;
	gotoxy(45,37);     cout<<"|                                                                  |"<<endl;
	gotoxy(45,38);    cout<<"|                                                                  |"<<endl;
	gotoxy(45,39);    cout<<"|                                                                  |"<<endl;
	gotoxy(45,40);    cout<<"|                                                                  |"<<endl;
	gotoxy(45,41);    cout<<"+------------------------------------------------------------------+"<<endl;

	SetConsoleTextAttribute(color, 14);
	gotoxy(49,38);    cout<<"After confirming the booking, you will proceed to payment."<<endl;
	gotoxy(49,39);    cout<<"                 Press any key to continue."<<endl;
    SetConsoleTextAttribute(color, 14);
	

	cout<<endl<<endl<<endl;
	
getch();

	payment:
	switch (tdes)
	{
	//local
	case 1:
		switch(cab)
		{
			case 1://private
				switch (des)
		{
			case 1:
			prc=8650.00;
			break;
			case 2:
			prc=4543.00;
			break;
			case 3:
	        prc=5882.00;	
	    	break;
			case 4:
			prc=4096.00;
			break;
			default:
				
				break;
		}
				break;
			case 2://busi
			    switch (des)
		{
			case 1:
			prc=15500.00;
			break;
			case 2:
			prc=9500.00;
			break;
			case 3:
	        prc=13200.00;	
	    	break;
			case 4:
			prc=9230.00;
			break;
			default:
				
				break;
		}
				break;	
			
		}
		
		
		break;
		
	
	
  //international
    case 2:
    	switch(cab)
		{
			case 1://private
				switch (des)
		{
			case 1:
			prc=6199.00;
			break;
			case 2:
			prc=5699.00;
			break;
			case 3:
	        prc=6899.00;	
	    	break;
			case 4:
			prc=12500.00;
			break;
			case 5:
			prc=24800.00;	
			break;
			default:
				
				break;
		}
				break;
			case 2://busi
				switch (des)
		{
			case 1:
			prc=12150.00;
			break;
			case 2:
			prc=10850.00;
			break;
			case 3:
	        prc=13110.00;	
	    	break;
			case 4:
			prc=23850.00;
			break;
			case 5:
			prc=31450.00;
			break;
			default:
				
				break;
		}
				break;	
			
		}
		
		
    	
    	break;
}
}  //detpayyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy


payment(){
	switch (tdes)
	{
	//local
	case 1:
		switch(cab)
		{
			case 1://private
				switch (des)
		{
			case 1:
			prc=8650.00;
			break;
			case 2:
			prc=4543.00;
			break;
			case 3:
	        prc=5882.00;	
	    	break;
			case 4:
			prc=4096.00;
			break;
			default:
				
				break;
		}
				break;
			case 2://busi
			    switch (des)
		{
			case 1:
			prc=15500.00;
			break;
			case 2:
			prc=9500.00;
			break;
			case 3:
	        prc=13200.00;	
	    	break;
			case 4:
			prc=9230.00;
			break;
			default:
				
				break;
		}
				break;	
			
		}
		
		
		break;
		
	
	
  //international
    case 2:
    	switch(cab)
		{
			case 1://private
				switch (des)
		{
			case 1:
			prc=6199.00;
			break;
			case 2:
			prc=5699.00;
			break;
			case 3:
	        prc=6899.00;	
	    	break;
			case 4:
			prc=12500.00;
			break;
			case 5:
			prc=24800.00;	
			break;
			default:
				
				break;
		}
				break;
			case 2://busi
				switch (des)
		{
			case 1:
			prc=12150.00;
			break;
			case 2:
			prc=10850.00;
			break;
			case 3:
	        prc=13110.00;	
	    	break;
			case 4:
			prc=23850.00;
			break;
			case 5:
			prc=31450.00;
			break;
			default:
				
				break;
		}
				break;	
			
		}
		
		
    	
    	break;
}
	total:
	t=1;yt1=0;yt2=0;sty=16;yt3=0;f=0;yt=0;
	sttl[11];attl[11];ittl;cttl[8];dscnt=0;vat=0;prc;
	tamt=0;adua[11];inf;ch;adu;sc;sca[11];cha[8];infa;f=0;nump;ibd;iby;abd[11];aby[11];sbd[11];sby[11];cbd[8];cby[8];ibm;abm[11];sbm[11];cbm[8];dd;bg;ins;/* total insurance lahat lahat na ba*/
	l=0;regis=0;bggpinf[5];bggpch[8];bggpadu[11];bggpsc[11];


		    	cout<<endl<<endl;
				mercheader();
			
			//description of the payment from the booked flight	
			gotoxy(2,9);
			cout<<"\t        "<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<j;
			gotoxy(2,10);
			cout<<"\t     "<<m<<m<<m<<ii<<" PAYMENT INFORMATION: "<<ii<<"  INFANT:    pax. "<<ii<<"  CHILD:    pax. "<<ii<<"  ADULT:    pax. "<<ii<<"  SENIOR C.:    pax. "<<ii<<"  NUMBER OF PASSENGERS:    pax. "<<ii<<m<<m<<m;
			gotoxy(2,11);
			cout<<"\t     "<<m<<m<<m<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k<<m<<m<<m;

			
			gotoxy(50,10);
			cout<<inf;
			gotoxy(68,10);
			cout<<ch;
			gotoxy(86,10);
			cout<<adu;
			gotoxy(108,10);
			cout<<sc;
			gotoxy(141,10);
			cout<<nump;
			
			gotoxy(2,13);
			cout<<"\t   "<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<j;
			gotoxy(2,14);
			cout<<"\t   "<<ii<<"              PASSENGER/S:            "<<ii<<"  BAGGAGE AMOUNT:  "<<ii<<"     INSURANCE:    "<<ii<<"      DISCOUNT:     "<<ii<<"  VALUE-ADDED TAX:  "<<ii<<"  TOTAL AMOUNT/pax:  "<<ii;
			gotoxy(2,15);
			cout<<"\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;
			
			while(t<=nump){	
		gotoxy(2,16+yt);
		cout<<"\t   "<<ii<<"                                      "<<ii<<" PHP               "<<ii<<" PHP               "<<ii<<" PHP                "<<ii<<" PHP                "<<ii<<" PHP                 "<<ii;

		if(t==nump){
		gotoxy(2,17+yt);
		cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
		}
		else{
		gotoxy(2,17+yt);
		cout<<"\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;
	}
				yt=yt+2;
				
				t++;

}

if(inf!=0)
	{
		yt=0;
for(int i=1;i<=inf;i++){
		if(type==2){
			prc=prc*2;
		}
		else{
		}
		dscnt=prc*0.02;
		ittl[i]=prc-dscnt;
		vat=prc*0.12;
		//ittl[i]=vat+ittl[i];
		ittl[i]=ittl[i]+infins[i];
		ittl[i]=ittl[i]+bginf[i];
	    tdis=tdis+dscnt;
	  //  tvat=tvat+vat;
	    
	    cout<<endl<<endl;
        
        f=f+1;
////////////ito na nasa loop wag na sama yung sa taas kasi heieieiderrrrrr




	gotoxy(13,sty+yt);
	cout<<"(INF #"<<f<<")";
	
    //nasa baba ng infant passenger:
	gotoxy(22,sty+yt);
	cout<<bln[i]<<", "<<bfn[i];
	
	gotoxy(57,sty+yt);
	cout<<setprecision(2)<<bggpinf[i];
	///baggage total
	
	//insurance
	gotoxy (77,sty+yt);
	cout<<setprecision(2)<<infins[i];
	
	//discount
	gotoxy(97,sty+yt);
	cout<<setprecision(2)<<dscnt;
	
	//vat
	gotoxy(118,sty+yt);
	cout<<setprecision(2)<<vat;
	
	////total amount
	gotoxy(139,sty+yt);
	cout<<setprecision(2)<<ittl[i];
	
	yt=yt+2; 
	tamt=tamt+ittl[i];
	}
	yt1=yt;	
}
else{
	yt1=0;
}

if(ch!=0){
	f=0;
	for (int i=1;i<=ch;i++)
	{
		if(type==2){
			prc=prc*2;
		}
		else{
		}
		dscnt=prc*0.02;
		cttl[i]=prc-dscnt;
		vat=prc*0.12;
	//	cttl[i]=vat+cttl[i];
		cttl[i]=cttl[i]+bggpch[i];
		cttl[i]=cttl[i]+chins[i];
	    f=f+1;
	    tdis=tdis+dscnt;
	  //  tvat=tvat+vat;
	    
	    
	gotoxy(13,sty+yt1);
	cout<<"(CHI #"<<f<<")";
	
    //nasa baba ng child passenger:
	gotoxy(22,sty+yt1);
	cout<<cln[i]<<", "<<cfn[i];
	
	gotoxy(57,sty+yt1);
	cout<<setprecision(2)<<bggpch[i];
	///baggage total;
	
	//insurance
	gotoxy(77,sty+yt1);
	cout<<setprecision(2)<<chins[i];
	
	//discount
	gotoxy(97,sty+yt1);
	cout<<setprecision(2)<<dscnt;
	
	//vat
	gotoxy(118,sty+yt1);
	cout<<setprecision(2)<<vat;
	
	////total amount
	gotoxy(139,sty+yt1);
	cout<<setprecision(2)<<cttl[i];
	
		tamt=tamt+cttl[i];
		yt1=yt1+2;
	}
	yt2=yt1;
}
else{
	yt2=yt1;
}

if(adu!=0){

f=0;	
	for(int i=1;i<=adu;i++)
	{
		if(type==2){
			prc=prc*2;
		}
		else{
		}
		vat=prc*0.12;
		attl[i]=prc;
		attl[i]=attl[i]+bggpadu[i];
		attl[i]=attl[i]+aduins[i];
	    f=f+1;
	    dscnt=0;
	//    tdis=tdis+dscnt;
	    //tvat=tvat+vat;


	gotoxy(13,sty+yt2);
	cout<<"(ADU #"<<f<<")";
	
    //nasa baba ng adult passenger:
	gotoxy(22,sty+yt2);
	cout<<aln[i]<<", "<<afn[i];
	
	gotoxy(57,sty+yt2);
	cout<<setprecision(2)<<bggpadu[i];
	///baggage total;
	
	//insurance
	gotoxy(77,sty+yt2);
	cout<<setprecision(2)<<aduins[i];
	
	//discount
	gotoxy(97,sty+yt2);
	cout<<setprecision(2)<<dscnt;
	
	//vat
	gotoxy(118,sty+yt2);
	cout<<setprecision(2)<<vat;
	
	////total amount
	gotoxy(139,sty+yt2);
	cout<<setprecision(2)<<attl[i];
	
		tamt=tamt+attl[i];
		yt2=yt2+2;
	}
	yt3=yt2;
}
else{
	yt3=yt2;
}

if(sc!=0){
f=0;
for(int i=1;i<=sc;i++)
	{
		if(type==2){
			prc=prc*2;
		}
		else{
		}
		
		
		dscnt=prc*0.20;
		sttl[i]=prc-dscnt;
		mem[1]=sttl[i]*0.12;
		sttl[i]=sttl[i]-mem[1];
		sttl[i]=sttl[i]+bggpsc[i];
		sttl[i]=sttl[i]+scins[i];
		vat=0;
		
	    f=f+1;
	    tdis=tdis+dscnt;
	    tvat=0;

	gotoxy(13,sty+yt3);
	cout<<"(SCTZN #"<<f<<")";
	
    //nasa baba ng senior citizen passenger:
	gotoxy(24,sty+yt3);
	cout<<sln[i]<<", "<<sfn[i];
	
	gotoxy(57,sty+yt3);
	cout<<setprecision(2)<<bggpsc[i];
	///baggage total;
	
	//insurance ganto ba scins? chins kasi nakalagay kasi nun
	gotoxy(77,sty+yt3);
	cout<<setprecision(2)<<scins[i];
	
	//discount
	gotoxy(97,sty+yt3);
	cout<<setprecision(2)<<dscnt;
	
	//vat
	gotoxy(118,sty+yt3);
	cout<<setprecision(2)<<vat;
	
	////total amount
	gotoxy(139,sty+yt3);
	cout<<setprecision(2)<<sttl[i];
	
		
	    tamt=tamt+sttl[i]; 
	    yt3=yt3+2;
	}
}
else{
	
}
	sumbgall=sumbginf+sumbgadu3+sumbgch3+sumbgsc3;
	if(nump>=7)
	{
		dscnt=tamt*.05;
		tamt=tamt-dscnt;
		tdis=tdis+dscnt;
	}
	else{}
	ramt=prc*nump;
	

			gotoxy(2,sty+yt3+1);
			cout<<"\t          "<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<j;
			gotoxy(2,sty+yt3+2);
			cout<<"\t       "<<m<<m<<m<<ii<<"  TOTAL AMOUNT OF BOOKED FLIGHT : PHP                "<<ii<<"   ENTER CASH: PHP                    "<<ii<<"   CHANGE: PHP                    "<<ii<<m<<m<<m;
			gotoxy(2,sty+yt3+3);
			cout<<"\t       "<<m<<m<<m<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k<<m<<m<<m;

			gotoxy(58,sty+yt3+2);
			cout<<tamt;
			gotoxy(92,sty+yt3+2);
			cin>>cash;
			change=cash-tamt;
			gotoxy(127,sty+yt3+2);
			cout<<change;
			
			if (cash<tamt)
    {
    	   while(cash<tamt){
	
    		cout<<"\n\n\n                                           Note!! Cash must be greater than or equal to the Total Amount!\n";
    		system("pause");
    		system("cls");
    		goto total;
    	}
	}
	else{}
				
			
		
		
		
		
			
cout<<"\n\n";
}


//mga bagong functions

menloop(){
		while(menl!=1)
	{
	gotoxy(34,31);

	while(genl!=1){
		int v=0;

		
		if(v == 0 || v == 224 || v== 13 ||  v==10 || v==49 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(men==1)
			{
			}
			else
			{
				men-=1;
			}
			break;
		case KEY_RIGHT:
			if(men==4)
			{
			}
			else
			{
			
				men+=1;
			}
			break;
		case ENTER:
			if(men==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;
		case 49:
		continue;
		break;	
		}
}
		
		switch(men)
		{
			case 1:
				gotoxy(34,31);
				cout<<"                       ";
				gotoxy(34,31);
				cout<<"1";
				break;
			case 2:
				gotoxy(34,31);
				cout<<"                       ";
				gotoxy(34,31);
				cout<<"2";
				break;
			case 3:
				gotoxy(34,31);
				cout<<"                       ";
				gotoxy(34,31);
				cout<<"3";
				break;
			case 4:
				gotoxy(34,31);
				cout<<"                       ";
				gotoxy(34,31);
				cout<<"4";
				break;

			
		}
	}
	if(men!=1&&men!=2&&men!=3&&men!=4){
		menl--;
		system("cls");
	}
	else
	{
	menl=1;
		
	}
} //while menl
menl=0;

}



tdesloop(){
	while(tdesl!=1){
	genl=0;
	gotoxy(34,36);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(tdes==1)
			{
			}
			else
			{
				tdes-=1;
			}
			break;
		case KEY_RIGHT:
			if(tdes==2)
			{
			}
			else
			{
			
				tdes+=1;
			}
			break;
		case ENTER:
			if(tdes==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}
		
		switch(tdes)
		{
			case 1:
				gotoxy(34,36);
				cout<<"                       ";
				gotoxy(34,36);
				cout<<"1";
				break;
			case 2:
				gotoxy(34,36);
				cout<<"                       ";
				gotoxy(34,36);
				cout<<"2";
				break;
			
		}
	}


	if(tdes!=1&&tdes!=2){
		tdesl--;
		system("cls");
	}
	else
	{
		tdesl=1;
		
	}
} //while tdes
tdesl=0;
}

deslooploc(){
		while(desl!=1){
	genl=0;
	gotoxy(34,31);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(des==1)
			{
			}
			else
			{
				des-=1;
			}
			break;
		case KEY_RIGHT:
			if(des==4)
			{
			}
			else
			{
			
				des+=1;
			}
			break;
		case ENTER:
			if(des==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}
		
		switch(des)
		{
			case 1:
				gotoxy(34,31);
				cout<<"                       ";
				gotoxy(34,31);
				cout<<"1";
				break;
			case 2:
				gotoxy(34,31);
				cout<<"                       ";
				gotoxy(34,31);
				cout<<"2";
				break;
			case 3:
				gotoxy(34,31);
				cout<<"                       ";
				gotoxy(34,31);
				cout<<"3";
				break;
			case 4:
				gotoxy(34,31);
				cout<<"                       ";
				gotoxy(34,31);
				cout<<"4";
				break;
			
		}
	}


	if(des!=1&&des!=2&&des!=3&&des!=4){
		desl--;
		system("cls");
	}
	else
	{
		desl=1;
		
	}
}// while des
desl=0;
}//local des getch

desloopint(){
		while(desl!=1){
	genl=0;
	gotoxy(34,31);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(des==1)
			{
			}
			else
			{
				des-=1;
			}
			break;
		case KEY_RIGHT:
			if(des==5)
			{
			}
			else
			{
			
				des+=1;
			}
			break;
		case ENTER:
			if(des==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}
		
		switch(des)
		{
			case 1:
				gotoxy(34,31);
				cout<<"                       ";
				gotoxy(34,31);
				cout<<"1";
				break;
			case 2:
				gotoxy(34,31);
				cout<<"                       ";
				gotoxy(34,31);
				cout<<"2";
				break;
			case 3:
				gotoxy(34,31);
				cout<<"                       ";
				gotoxy(34,31);
				cout<<"3";
				break;
			case 4:
				gotoxy(34,31);
				cout<<"                       ";
				gotoxy(34,31);
				cout<<"4";
				break;
			case 5:
				gotoxy(34,31);
				cout<<"                       ";
				gotoxy(34,31);
				cout<<"5";
				break;
			
		}
	}


	if(des!=1&&des!=2&&des!=3&&des!=4&&des!=5){
		desl--;
		system("cls");
	}
	else
	{
		desl=1;
		
	}
}// while des
desl=0;
}//int des getch

cabloop(){
	while(cabl!=1){
	genl=0;
	gotoxy(34,36);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(cab==1)
			{
			}
			else
			{
				cab-=1;
			}
			break;
		case KEY_RIGHT:
			if(cab==2)
			{
			}
			else
			{
			
				cab+=1;
			}
			break;
		case ENTER:
			if(cab==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}
		
		switch(cab)
		{
			case 1:
				gotoxy(34,36);
				cout<<"                       ";
				gotoxy(34,36);
				cout<<"1";
				break;
			case 2:
				gotoxy(34,36);
				cout<<"                       ";
				gotoxy(34,36);
				cout<<"2";
				break;
			
		}
	}


	if(cab!=1&&cab!=2){
		cabl--;
		system("cls");
	}
	else
	{
		cabl=1;
		
	}
}// while cab
cabl=0;
}


infloopp(){
	while(infl!=1){
	genl=0;
	gotoxy(47,33);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(inf==1)
			{
			}
			else
			{
				inf-=1;
			}
			break;
		case KEY_RIGHT:
			if(inf==2)
			{
			}
			else
			{
			
				inf+=1;
			}
			break;
		case ENTER:
			if(inf==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}
		
		switch(inf)
		{
			case 0:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"0";
				break;
			case 1:
				gotoxy(47,33);
				cout<<"                       ";
				gotoxy(47,33);
				cout<<"1";
				break;
			case 2:
				gotoxy(47,33);
				cout<<"                       ";
				gotoxy(47,33);
				cout<<"2";
				break;
			
		}
	}


	if(inf!=1&&inf!=2){
		infl--;
		system("cls");
	}
	else
	{
		infl=1;
		
	}
}// while inf

}

chloopp(){
while(chl!=1){
	genl=0;
	gotoxy(47,36);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(ch==1)
			{	
			}
			else
			{
				
				ch-=1;
			}
			break;
		case KEY_RIGHT:
			if(ch==7)
			{
			}
			else
			{
			
				ch+=1;
			}
			break;
		case ENTER:
			if(ch==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}

switch(ch)
		{
			case 0:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"0";
				break;
			case 1:
				gotoxy(47,36);
				cout<<"                       ";
				gotoxy(47,36);
				cout<<"1";
				break;
			case 2:
				gotoxy(47,36);
				cout<<"                       ";
				gotoxy(47,36);
				cout<<"2";
				break;
			case 3:
				gotoxy(47,36);
				cout<<"                       ";
				gotoxy(47,36);
				cout<<"3";
				break;
			case 4:
				gotoxy(47,36);
				cout<<"                       ";
				gotoxy(47,36);
				cout<<"4";
				break;
			case 5:
				gotoxy(47,36);
				cout<<"                       ";
				gotoxy(47,36);
				cout<<"5";
				break;
			case 6:
				gotoxy(47,36);
				cout<<"                       ";
				gotoxy(47,36);
				cout<<"6";
				break;
			case 7:
				gotoxy(47,36);
				cout<<"                       ";
				gotoxy(47,36);
				cout<<"7";
				break;
			
		}
	
	}


	if(ch!=1&&ch!=2&&ch!=3&&ch!=4&&ch!=5&&ch!=6&&ch!=7){
		chl--;
		system("cls");
	}
	else
	{
		chl=1;
		
	}
}// while ch

}


aduloopp(){
while(adul!=1){
	genl=0;
	gotoxy(47,39);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(adu==1)
			{	
			}
			else
			{
				
				adu-=1;
			}
			break;
		case KEY_RIGHT:
			if(adu==7)
			{
			}
			else
			{
			
				adu+=1;
			}
			break;
		case ENTER:
			if(adu==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}

switch(adu)
		{
			case 0:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"0";
				break;
			case 1:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"1";
				break;
			case 2:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"2";
				break;
			case 3:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"3";
				break;
			case 4:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"4";
				break;
			case 5:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"5";
				break;
			case 6:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"6";
				break;
			case 7:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"7";
				break;
			case 8:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"8";
				break;
			case 9:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"9";
				break;
			case 10:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"10";
				break;
			
		}
	
	}


	if(adu!=1&&adu!=2&&adu!=3&&adu!=4&&adu!=5&&adu!=6&&adu!=7&&adu!=8&&adu!=9&&adu!=10){
		adul--;
		system("cls");
	}
	else
	{
		adul=1;
		
	}
}// while adu

}

scloopp(){
while(scl!=1){
	genl=0;
	gotoxy(47,53);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(sc==1)
			{	
			}
			else
			{
				
				sc-=1;
			}
			break;
		case KEY_RIGHT:
			if(sc==7)
			{
			}
			else
			{
			
				sc+=1;
			}
			break;
		case ENTER:
			if(sc==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}

switch(sc)
		{
			case 0:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"0";
			case 1:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"1";
				break;
			case 2:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"2";
				break;
			case 3:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"3";
				break;
			case 4:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"4";
				break;
			case 5:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"5";
				break;
			case 6:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"6";
				break;
			case 7:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"7";
				break;
			case 8:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"8";
				break;
			case 9:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"9";
				break;
			case 10:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"10";
				break;
			
		}
	
	}


	if(sc!=1&&sc!=2&&sc!=3&&sc!=4&&sc!=5&&sc!=6&&sc!=7&&sc!=8&&sc!=9&&sc!=10){
		scl--;
		system("cls");
	}
	else
	{
		scl=1;
		
	}
}// while sc

}

infloopb(){
	while(infl!=1){
	genl=0;
	gotoxy(47,33);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(inf==1)
			{
			}
			else
			{
				inf-=1;
			}
			break;
		case KEY_RIGHT:
			if(inf==2)
			{
			}
			else
			{
			
				inf+=1;
			}
			break;
		case ENTER:
			if(inf==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}
		
		switch(inf)
		{
			case 0:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"0";
				break;
			case 1:
				gotoxy(47,33);
				cout<<"                       ";
				gotoxy(47,33);
				cout<<"1";
				break;
			case 2:
				gotoxy(47,33);
				cout<<"                       ";
				gotoxy(47,33);
				cout<<"2";
				break;
			
		}
	}


	if(inf!=1&&inf!=2){
		infl--;
		system("cls");
	}
	else
	{
		infl=1;
		
	}
}// while inf

}

chloopb(){
while(chl!=1){
	genl=0;
	gotoxy(47,36);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(ch==1)
			{	
			}
			else
			{
				
				ch-=1;
			}
			break;
		case KEY_RIGHT:
			if(ch==7)
			{
			}
			else
			{
			
				ch+=1;
			}
			break;
		case ENTER:
			if(ch==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}

switch(ch)
		{
			case 0:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"0";
				break;
			case 1:
				gotoxy(47,36);
				cout<<"                       ";
				gotoxy(47,36);
				cout<<"1";
				break;
			case 2:
				gotoxy(47,36);
				cout<<"                       ";
				gotoxy(47,36);
				cout<<"2";
				break;
			case 3:
				gotoxy(47,36);
				cout<<"                       ";
				gotoxy(47,36);
				cout<<"3";
				break;
			case 4:
				gotoxy(47,36);
				cout<<"                       ";
				gotoxy(47,36);
				cout<<"4";
				break;
			
		}
	
	}


	if(ch!=1&&ch!=2&&ch!=3&&ch!=4){
		chl--;
		system("cls");
	}
	else
	{
		chl=1;
		
	}
}// while ch

}

aduloopb(){
while(adul!=1){
	genl=0;
	gotoxy(47,39);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(adu==1)
			{	
			}
			else
			{
				
				adu-=1;
			}
			break;
		case KEY_RIGHT:
			if(adu==7)
			{
			}
			else
			{
			
				adu+=1;
			}
			break;
		case ENTER:
			if(adu==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}

switch(adu)
		{
			case 0:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"0";
				break;
			case 1:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"1";
				break;
			case 2:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"2";
				break;
			case 3:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"3";
				break;
			case 4:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"4";
				break;
			case 5:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"5";
				break;
			case 6:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"6";
				break;

			
		}
	
	}


	if(adu!=1&&adu!=2&&adu!=3&&adu!=4&&adu!=5&&adu!=6){
		adul--;
		system("cls");
	}
	else
	{
		adul=1;
		
	}
}// while adu
}


scloopb(){
while(scl!=1){
	genl=0;
	gotoxy(47,53);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(sc==1)
			{	
			}
			else
			{
				
				sc-=1;
			}
			break;
		case KEY_RIGHT:
			if(sc==7)
			{
			}
			else
			{
			
				sc+=1;
			}
			break;
		case ENTER:
			if(sc==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}

switch(sc)
		{
			case 0:
				gotoxy(47,39);
				cout<<"                       ";
				gotoxy(47,39);
				cout<<"0";
				break;
			case 1:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"1";
				break;
			case 2:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"2";
				break;
			case 3:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"3";
				break;
			case 4:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"4";
				break;
			case 5:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"5";
				break;
			case 6:
				gotoxy(47,53);
				cout<<"                       ";
				gotoxy(47,53);
				cout<<"6";
				break;

			
		}
	
	}


	if(sc!=1&&sc!=2&&sc!=3&&sc!=4&&sc!=5&&sc!=6){
		scl--;
		system("cls");
	}
	else
	{
		scl=1;
		
	}
}// while sc

}



status(){
	system("cls");


HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

						cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;		
		             	mercheader();
						
						
SetConsoleTextAttribute(color, 11);
cout<<endl<<endl;		
			
						
						cout<<"                            "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g
						                              <<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g
													  <<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						cout<<"                            "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g
						                              <<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g
													  <<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						cout<<"                            "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g
						                              <<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g
													  <<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						cout<<"                            "<<g<<"                                                                                                      "<<g<<endl;
				    	cout<<"                            "<<g<<"                                                                                                      "<<g<<endl;
				    	cout<<"                            "<<g<<"                                                                                                      "<<g<<endl;
				    	cout<<"                            "<<g<<"                                                                                                      "<<g<<endl;
				    	cout<<"                            "<<g<<"                                                                                                      "<<g<<endl;
				    	cout<<"                            "<<g<<"                                                                                                      "<<g<<endl;
				    	cout<<"                            "<<g<<"                                                                                                      "<<g<<endl;
				    	cout<<"                            "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g
						                              <<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g
													  <<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						
SetConsoleTextAttribute(color, 14);
						gotoxy(50,23);
						cout<<"PLEASE ENTER YOUR RESERVATION NUMBER:";
			
			            cout<<"  "; cin>>regis;

}

//time table
 timefuncp(){
    
		
    	gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<"                  "<<ii<<"                    "<<ii<<"                   "<<ii<<"                      "<<ii<<"                      "<<ii<<"                     "<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"                  "<<ii<<"       #            "<<ii<<"         /10       "<<ii<<"        (  :  )       "<<ii<<"        (  :  )       "<<ii<<"      PHP            "<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
			
			gotoxy(29,22+yt);
			cout<<timech;
			gotoxy(48,22+yt);
			cout<<fnum;
			gotoxy(67,22+yt);
			cout<<seatp[timech];	
			gotoxy(112,22+yt);
			cout<<arrth;
			gotoxy(137,22+yt);
			cout<<fare;
	
	
	
}

 timefuncb(){
    
		
    	gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<"                  "<<ii<<"                    "<<ii<<"                   "<<ii<<"                      "<<ii<<"                      "<<ii<<"                     "<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"                  "<<ii<<"       #            "<<ii<<"         /6        "<<ii<<"        (  :  )       "<<ii<<"        (  :  )       "<<ii<<"      PHP            "<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
			
			gotoxy(29,22+yt);
			cout<<timech;
			gotoxy(48,22+yt);
			cout<<fnum;
			gotoxy(67,22+yt);
			cout<<seatb[timech];	
			gotoxy(112,22+yt);
			cout<<arrth;
			gotoxy(137,22+yt);
			cout<<fare;
	
	
	
}
 timefuncbr(){
    
		
    	gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<"                  "<<ii<<"                    "<<ii<<"                   "<<ii<<"                      "<<ii<<"                      "<<ii<<"                     "<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"                  "<<ii<<"       #            "<<ii<<"         /6        "<<ii<<"        (  :  )       "<<ii<<"        (  :  )       "<<ii<<"      PHP            "<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
			
			gotoxy(29,22+yt);
			cout<<timech;
			gotoxy(48,22+yt);
			cout<<fnum;
			gotoxy(67,22+yt);
			cout<<seatbr[timech];	
			gotoxy(112,22+yt);
			cout<<rarrth;
			gotoxy(137,22+yt);
			cout<<fare;
	
	
	
}

timefuncpr(){
    
		
    	gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<"                  "<<ii<<"                    "<<ii<<"                   "<<ii<<"                      "<<ii<<"                      "<<ii<<"                     "<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"                  "<<ii<<"       #            "<<ii<<"         /10       "<<ii<<"        (  :  )       "<<ii<<"        (  :  )       "<<ii<<"      PHP            "<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
			
			gotoxy(29,22+yt);
			cout<<timech;
			gotoxy(48,22+yt);
			cout<<fnum;
			gotoxy(67,22+yt);
			cout<<seatpr[timech];	
			gotoxy(112,22+yt);
			cout<<rarrth;
			gotoxy(137,22+yt);
			cout<<fare;
	
	
	
}


timetebdep(){

			gotoxy(2,17);
			cout<<"\t\t   "<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<j;
			gotoxy(2,18);
			cout<<"\t\t   "<<ii<<"      T I M E     "<<ii<<"    F L I G H T     "<<ii<<"     S E A T S     "<<ii<<"   D E P A R T U R E  "<<ii<<"     A R R I V A L    "<<ii<<"       F A R E :     "<<ii;
			gotoxy(2,19);
			cout<<"\t\t   "<<ii<<"  C H O I C E S : "<<ii<<"    N U M B E R :   "<<ii<<"A V A I L A B L E :"<<ii<<"       T I M E :      "<<ii<<"       T I M E :      "<<ii<<"                     "<<ii;
			gotoxy(2,20);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;
			timech=1;timeit=1;
			while(timech!=6){
			arrth=depth+hrs;
			arrtm=deptm+mins;
			
			if(timech <=5 && depth==0 && arrtm<=59 && deptm<=59){
					if(seatp[timech]!=0){
						
			if(arrtm<=9 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		else if(arrtm<=9 && deptm >=10){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;
		}
		else{
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;			
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if
else if(timech <=5 && depth==0 && arrtm>=60 && deptm>=60){
	arrth++;
	arrtm=arrtm-60;
	depth++;
	deptm=deptm-60;
					if(seatp[timech]!=0){
						
if(arrtm<=9 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;			
		}
		else if(arrtm<=9 && deptm >=10){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;
		}
		else{
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if
				else if(timech <=5 && depth>=1 && arrtm<=59 && deptm<=59){
					if(seatp[timech]!=0){
						
			if(arrtm<=9 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		else if(arrtm<=9 && deptm >=10){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;
		}
		else{
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;			
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if

				else if(timech <=5 && depth>=1 && arrtm>=60 && deptm>=60){
					if(seatp[timech]!=0){
	arrth++;
	arrtm=arrtm-60;
	depth++;
	deptm=deptm-60;
						
			if(arrtm<=9 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		else if(arrtm<=9 && deptm >=10){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;
		}
		else{
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;			
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if





if(timech <=5 && depth==0 && arrtm>=60 && deptm<=59){
					if(seatp[timech]!=0){
	arrth++;
	arrtm=arrtm-60;
			if(arrtm<=9 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		else if(arrtm<=9 && deptm >=10){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;
		}
		else{
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;			
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if
else if(timech <=5 && depth==0 && arrtm<=59 && deptm>=60){

	depth++;
	deptm=deptm-60;
		if(seatp[timech]!=0){
						
	if(arrtm<=9 && deptm <=9){
			
		if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;			
		}
		else if(arrtm<=9 && deptm >=10){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;
		}
		else{
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if
				else if(timech <=5 && depth>=1 && arrtm>=60 && deptm<=59){
					if(seatp[timech]!=0){
	arrth++;
	arrtm=arrtm-60;		
			if(arrtm<=9 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		else if(arrtm<=9 && deptm >=10){
			
		if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;
		}
		else{
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;			
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if

				else if(timech <=5 && depth>=1 && arrtm<=59 && deptm>=60){
					if(seatp[timech]!=0){
	depth++;
	deptm=deptm-60;
						
			if(arrtm<=9 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		else if(arrtm<=9 && deptm >=10){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;
		}
		else{
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;			
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if







	else{	

					if(seatp[timech]!=0){
						if(arrtm<=9 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;			
		}
		else if(arrtm<=9 && deptm >=10){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(115,22+yt);
			cout<<arrtm;
		}
		else{
			if(cab==1){
				timefuncp();
			}
			else{
				timefuncb();
			}
			
			gotoxy(89,22+yt);
			cout<<depth;
			gotoxy(92,22+yt);
			cout<<deptm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

}
depth=depth+timeit;
yt=yt+3;
deptm=deptm+timeit;
mins=mins+timeit;
timeit++;
timech++;
}
		//if(timeit!=5){
		//	for int hi
		//}
			gotoxy(2,35);
			cout<<"\t\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k<<endl;
}


timetebret(){
			timech=1; timeit=1; yt=0;
			gotoxy(2,17);
			cout<<"\t\t   "<<a<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<r<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<j;
			gotoxy(2,18);
			cout<<"\t\t   "<<ii<<"      T I M E     "<<ii<<"    F L I G H T     "<<ii<<"     S E A T S     "<<ii<<"   D E P A R T U R E  "<<ii<<"     A R R I V A L    "<<ii<<"       F A R E :     "<<ii;
			gotoxy(2,19);
			cout<<"\t\t   "<<ii<<"  C H O I C E S : "<<ii<<"    N U M B E R :   "<<ii<<"A V A I L A B L E :"<<ii<<"       T I M E :      "<<ii<<"       T I M E :      "<<ii<<"                     "<<ii;
			gotoxy(2,20);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;
		
			while(timech!=6){
			rarrth=repth+rhrs;
			rarrtm=retm+rmins;
		
			if(timech <=5 && repth==0 && rarrtm<=59 && retm<=59){
					if(seatp[timech]!=0){
						
			if(rarrtm<=9 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		else if(rarrtm<=9 && retm >=10){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
			timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;
		}
		else{
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;			
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if
else if(timech <=5 && repth==0 && rarrtm>=60 && retm>=60){
	rarrth++;
	rarrtm=rarrtm-60;
	repth++;
	retm=retm-60;
					if(seatp[timech]!=0){
						
if(rarrtm<=9 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;			
		}
		else if(rarrtm<=9 && retm >=10){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;
		}
		else{
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if
				else if(timech <=5 && repth>=1 && rarrtm<=59 && retm<=59){
					if(seatp[timech]!=0){
						
			if(rarrtm<=9 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		else if(rarrtm<=9 && retm >=10){
			
			if(cab==1){
				timefuncpr();
			}
			else{
			timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;
		}
		else{
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;			
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if

				else if(timech <=5 && repth>=1 && rarrtm>=60 && retm>=60){
					if(seatp[timech]!=0){
	rarrth++;
	rarrtm=rarrtm-60;
	repth++;
	retm=retm-60;
						
			if(rarrtm<=9 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		else if(rarrtm<=9 && retm >=10){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;
		}
		else{
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;			
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if





if(timech <=5 && repth==0 && rarrtm>=60 && retm<=59){
					if(seatp[timech]!=0){
	rarrth++;
	rarrtm=rarrtm-60;
			if(rarrtm<=9 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		else if(rarrtm<=9 && retm >=10){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;
		}
		else{
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;			
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if
else if(timech <=5 && repth==0 && rarrtm<=59 && retm>=60){

	repth++;
	retm=retm-60;
		if(seatp[timech]!=0){
						
	if(rarrtm<=9 && retm <=9){
			
		if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;			
		}
		else if(rarrtm<=9 && retm >=10){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;
		}
		else{
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if
				else if(timech <=5 && repth>=1 && rarrtm>=60 && retm<=59){
					if(seatp[timech]!=0){
	rarrth++;
	rarrtm=rarrtm-60;		
			if(rarrtm<=9 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		else if(rarrtm<=9 && retm >=10){
			
		if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
			timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;
		}
		else{
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;			
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if

				else if(timech <=5 && repth>=1 && rarrtm<=59 && retm>=60){
					if(seatp[timech]!=0){
	repth++;
	retm=retm-60;
						
			if(rarrtm<=9 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		else if(rarrtm<=9 && retm >=10){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;
		}
		else{
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;			
		}
			
			
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<" -----------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

} //if







	else{	

					if(seatp[timech]!=0){
						if(rarrtm<=9 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;			
		}
		else if(rarrtm<=9 && retm >=10){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && retm <=9){
			
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<setfill('0')<<setw(2)<<retm;
			gotoxy(115,22+yt);
			cout<<rarrtm;
		}
		else{
			if(cab==1){
				timefuncpr();
			}
			else{
				timefuncbr();
			}
			
			gotoxy(89,22+yt);
			cout<<repth;
			gotoxy(92,22+yt);
			cout<<retm;
			gotoxy(115,22+yt);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
	}
	else{
		gotoxy(2,21+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;
			gotoxy(2,22+yt);
			cout<<"\t\t   "<<ii<<"------------------"<<ii<<"--------------------"<<ii<<"-------------------"<<ii<<"----------------------"<<ii<<"----------------------"<<ii<<"---------------------"<<ii;fnum=fnum+1;
			if(timech!=0){
				gotoxy(2,23+yt);
			cout<<"\t\t   "<<uu<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<h;

			}
			else{
			gotoxy(2,23+yt);
			cout<<"\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<cc<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k;
	
			}
		}

}
repth=repth+timeit;
yt=yt+3;
retm=retm+timeit;
rmins=rmins+timeit;
timeit++;
timech++;
}
		//if(timeit!=5){
		//	for int hi
		//}
			gotoxy(2,35);
			cout<<"\t\t   "<<oo<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<rr<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<e<<k<<endl;
}



bookloop(){
	
		HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

	while(bookl!=1){
	genl=0;
	book=0;
	gotoxy(84,29);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(book==1)
			{
			}
			else
			{
				book-=1;
			}
			break;
		case KEY_RIGHT:
			if(book==2)
			{
			}
			else
			{
			
				book+=1;
			}
			break;
		case ENTER:
			if(book==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}
		
		switch(book)
		{

			case 1:
				SetConsoleTextAttribute(color, 11);
				bkagain1des();
				SetConsoleTextAttribute(color, 14);
				bkagain2des();
				SetConsoleTextAttribute(color, 14);
				break;
			case 2:
				SetConsoleTextAttribute(color, 14);
				bkagain1des();
				SetConsoleTextAttribute(color, 11);
				bkagain2des();
				SetConsoleTextAttribute(color, 14);
				break;
			
		}
	}


	if(book!=1&&book!=2){
		bookl--;
		system("cls");
	}
	else
	{
		bookl=1;
		
	}
}// while book
bookl=0;
cout<<"\n\n\n";

}//bookfunction

timedloop(){
	while(timedl!=1){
	genl=0;
	timed=0;
	gotoxy(84,29);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(timed==1)
			{
			}
			else
			{
				timed-=1;
			}
			break;
		case KEY_RIGHT:
			if(timed==5)
			{
			}
			else
			{
			
				timed+=1;
			}
			break;
		case ENTER:
			if(timed==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}
		
		switch(timed)
		{

			case 1:
				gotoxy(84,29);
				cout<<"                       ";
				gotoxy(84,29);
				cout<<"1";
				break;
			case 2:
				gotoxy(84,29);
				cout<<"                       ";
				gotoxy(84,29);
				cout<<"2";
				break;
			case 3:
				gotoxy(84,29);
				cout<<"                       ";
				gotoxy(84,29);
				cout<<"3";
				break;
			case 4:
				gotoxy(84,29);
				cout<<"                       ";
				gotoxy(84,29);
				cout<<"4";
				break;
			case 5:
				gotoxy(84,29);
				cout<<"                       ";
				gotoxy(84,29);
				cout<<"5";
				break;
			
		}
	}


	if(timed!=1&&timed!=2){
		timedl--;
		system("cls");
	}
	else
	{
		timedl=1;
		
	}
}// while book
timedl=0;
cout<<"\n\n\n";

}//time function

timerloop(){
	while(timerl!=1){
	genl=0;
	timer=0;
	gotoxy(84,29);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(timer==1)
			{
			}
			else
			{
				timer-=1;
			}
			break;
		case KEY_RIGHT:
			if(timer==5)
			{
			}
			else
			{
			
				timer+=1;
			}
			break;
		case ENTER:
			if(timer==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}
		
		switch(timer)
		{

			case 1:
				gotoxy(84,29);
				cout<<"                       ";
				gotoxy(84,29);
				cout<<"1";
				break;
			case 2:
				gotoxy(84,29);
				cout<<"                       ";
				gotoxy(84,29);
				cout<<"2";
				break;
			case 3:
				gotoxy(84,29);
				cout<<"                       ";
				gotoxy(84,29);
				cout<<"3";
				break;
			case 4:
				gotoxy(84,29);
				cout<<"                       ";
				gotoxy(84,29);
				cout<<"4";
				break;
			case 5:
				gotoxy(84,29);
				cout<<"                       ";
				gotoxy(84,29);
				cout<<"5";
				break;
			
		}
	}


	if(timer!=1&&timer!=2){
		timerl--;
		system("cls");
	}
	else
	{
		timerl=1;
		
	}
}// while book
timerl=0;
cout<<"\n\n\n";

}//time function

schedloop(){
	while(schedl!=1){
	genl=0;
	sched=0;
	gotoxy(84,29);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(sched==1)
			{
			}
			else
			{
				sched-=1;
			}
			break;
		case KEY_RIGHT:
			if(sched==2)
			{
			}
			else
			{
			
				sched+=1;
			}
			break;
		case ENTER:
			if(sched==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}
		
		switch(sched)
		{

			case 1:
				gotoxy(84,29);
				cout<<"                       ";
				gotoxy(84,29);
				cout<<"YES";
				break;
			case 2:
				gotoxy(84,29);
				cout<<"                       ";
				gotoxy(84,29);
				cout<<"NO";
				break;
			
		}
	}


	if(sched!=1&&sched!=2){
		schedl--;
		system("cls");
	}
	else
	{
		schedl=1;
		
	}
}// while book
schedl=0;
cout<<"\n\n\n";

}//sched function

legitbook(){
	
 system("pause");
			system("cls");
		 	//ticketinfo na wala pa aaaaainez
		 cout<<"\n\n\n\n";
	mercheader();		
	cout<<"\n\n\n";
	cout<<"                                        "<<a<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<j<<endl;
	cout<<"                                        "<<d<<"                                                                           "<<d<<endl;
	cout<<"                                        "<<d<<"                     Would you like to book a flight?                      "<<d<<endl;
	cout<<"                                        "<<d<<"                                                                           "<<d<<endl;
	cout<<"                                        "<<f1<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<k<<endl;
	cout<<endl;
	cout<<"                                           "<<a<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<j<<"       "<<a<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<j<<endl;
    cout<<"                                           "<<d<<"                              "<<d<<"       "<<d<<"                              "<<d<<endl;                                              
	cout<<"                                           "<<d<<"                              "<<d<<"       "<<d<<"                              "<<d<<endl;                                              
	cout<<"                                           "<<d<<"            1. Yes            "<<d<<"       "<<d<<"            2. No             "<<d<<endl;                                              
	cout<<"                                           "<<d<<"                              "<<d<<"       "<<d<<"                              "<<d<<endl;                                              
	cout<<"                                           "<<d<<"                              "<<d<<"       "<<d<<"                              "<<d<<endl;                                              
	cout<<"                                           "<<f1<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<k<<"       "<<f1<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<k<<endl;
	
 
    cout<<endl<<endl;
	cout<<"                                                                       Enter Here: ";
	schedloop();
	if(sched==1){
		

	 //baggage:
	//seat1;seat2;seat3;seat4;seat5;seat6;seat7;seat8;seat9;seat10;	
	//variables whohold the baggage price oramount of apassenger bg(baggage)p(price or amount)inf(passenger can be adu orsc orch)

	fnum=fnum-(5*(des*2));


	//BAGONG VARS
	
	timech=1;arrth=0;depth=0;arrtm=0;deptm=0;yt=0;timeit=1;
	//depende saan ang lugar
	hrs=0;mins=0;
	//para sa presyo
	fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
	}
	else{
		
	}
	cout<<endl<<endl<<endl<<endl<<endl;

}

bookdet(){
	

	cout<<endl<<endl;

cout<<"                                                        "<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
cout<<"                                                        "<<g<<"       "<<g<<g<<g<<"       "<<g<<endl;
cout<<"                                                        "<<g<<"       "<<mm<<mm<<mm<<"       "<<g   <<"  "<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
cout<<"                                                        "<<g<<"      "<<mn<<mn<<mn<<mn<<"       "<<g   <<"  "<<g<<"                                "<<g<<endl;
cout<<"                                  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"       "<<g<<g<<g<<"       "<<g<<"  "<<g<<"                                "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
cout<<"                                  "<<g<<g<<"                    "<<g<<"       "<<g<<g<<g<<"       "<<g   <<"  "<<g<<"                                "<<g<<"                     "<<g<<g<<endl;
cout<<"                                  "<<g<<g<<"                    "<<g<<"       "<<g<<g<<g<<"       "<<g   <<"  "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<"                     "<<g<<g<<endl;
cout<<"                                  "<<g<<g<<"                    "<<g<<"       "<<g<<g<<g<<mn<<"      "<<g<<"                                                         "<<g<<g<<endl;
cout<<"                                  "<<g<<g<<"                    "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"                     "<<g<<g<<endl;



	HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);


       	    cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	        cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<"                                                                                                "<<g<<g<<endl;
	    	cout<<"                                  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g
                                                     <<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g
                                                     <<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;


SetConsoleTextAttribute(color, 11);


            gotoxy(8,13);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
			gotoxy(8,14);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
	    	gotoxy(8,15);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,16);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,17);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,18);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,19);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,20);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,21);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,22);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,23);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
        	gotoxy(8,24);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,25);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,26);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,27);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,28);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,28);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,29);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,30);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,31);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,32);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,33);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,34);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,35);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,36);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,37);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;
			gotoxy(8,38);     cout<<g<<g<<"                                                                        "<<g<<g<<endl;

		    gotoxy(8,39);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;

			gotoxy(89,13);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
			gotoxy(89,14);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
	    	gotoxy(89,15);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,16);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,17);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,18);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,19);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,20);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,21);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,22);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,23);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
        	gotoxy(89,24);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,25);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,26);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,27);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,28);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,28);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,29);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,30);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,31);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,32);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,33);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,34);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,35);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,36);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,37);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
			gotoxy(89,38);     cout<<g<<g<<"                                                                    "<<g<<g<<endl;
 
		    gotoxy(89,39);     cout<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
	


SetConsoleTextAttribute(color, 15);

if(type==1||type==2){
	if(tdes==1){
		
		if(des==1){
			if(cab==1){
			depth=6; deptm=30;
				hrs=1;mins=40;
				repth=1; reptm=40;
				rhrs=4;rmins=25;
		}
		if(cab==2){
				depth=6; deptm=30;
				hrs=1;mins=40;
				repth=3; reptm=0;
				rhrs=2;rmins=25;
				
		}
		}
		if(des==2){
			if(cab==1){
			depth=4; deptm=25;
				hrs=1;mins=20;
				repth=5; reptm=55;
				rhrs=1;rmins=25;
		}
		if(cab==2){
			depth=4; deptm=25;
				hrs=1;mins=20;
					repth=6; reptm=5;
				rhrs=1;rmins=20;
		}
		}
		if(des==3){
			if(cab==1){
			depth=7; deptm=0;
				hrs=1;mins=25;
				repth=0; reptm=45;
				rhrs=1;rmins=15;
		}
		if(cab==2){
			depth=6; deptm=20;
				hrs=1;mins=30;
				repth=6; reptm=20;
				rhrs=1;rmins=25;
		}
		}
		if(des==4){
			if(cab==1){
		depth=5; deptm=25;
				hrs=1;mins=50;
				repth=7; reptm=30;
				rhrs=1;rmins=25;
		}
		if(cab==2){
				depth=5; deptm=25;
				hrs=1;mins=50;
				repth=7; reptm=5;
				rhrs=1;rmins=55;
		}
		}
	}
	if(tdes==2){
	if(des==1){
			if(cab==1){
				depth=1; deptm=40;
				hrs=3;mins=55;
				repth=1; reptm=40;
				rhrs=4;rmins=25;
		}
		if(cab==2){
			depth=3; deptm=20;
				hrs=3;mins=55;
				repth=1; reptm=35;
				rhrs=4;rmins=5;
				
		}
		}
		if(des==2){
			if(cab==1){
				depth=1; deptm=50;
				hrs=3;mins=35;
				repth=0; reptm=10;
				rhrs=5;rmins=30;
		}
		if(cab==2){
			depth=1; deptm=35;
				hrs=3;mins=15;
					repth=0; reptm=40;
				rhrs=5;rmins=15;
		}
		}
		if(des==3){
			if(cab==1){
			depth=1; deptm=20;
				hrs=3;mins=25;
				repth=1; reptm=35;
				rhrs=3;rmins=45;
		}
		if(cab==2){
				depth=6; deptm=5;
				hrs=3;mins=35;
					repth=5; reptm=15;
				rhrs=3;rmins=40;
		}
		}
		if(des==4){
			if(cab==1){
				depth=2; deptm=5;
				hrs=4;mins=35;
				repth=7; reptm=45;
				rhrs=2;rmins=20;
		}
		if(cab==2){
			depth=2; deptm=15;
				hrs=4;mins=40;
				repth=0; reptm=25;
				rhrs=3;rmins=40;
		}
		}
		if(des==5){
			if(cab==1){
			depth=3; deptm=50;
				hrs=5;mins=15;
				repth=9; reptm=0;
				rhrs=3;rmins=30;
		}
		if(cab==2){
			depth=1; deptm=40;
				hrs=5;mins=30;
				repth=7; reptm=0;
				rhrs=1;rmins=25;
		}
		}
		
	}
}

//left box //list of passengers
	gotoxy(11,15);
			cout<<"                           Guest Details:                             ";
	gotoxy(11,16);
		cout<<"----------------------------------------------------------------------";
if(inf!=0){
	f=1;
	for(int i=1; i<=inf; i++ ){
	
	gotoxy(12,stx+ytix);
	cout<<"INF #"<<f<<" :"<<setw(8)<<bln[i]<<", "<<bfn[i];
	f++;
	ytix=ytix+2;
	}
}
else{
	ytix=0;
}

if(ch!=0){
	f=1;
	for(int i=1; i<=ch; i++ ){
	
	gotoxy(12,stx+ytix);
	cout<<"CHI #"<<f<<" :"<<setw(8)<<cln[i]<<", "<<cfn[i];
	f++;
	ytix=ytix+2;
	}
	ytix2=ytix;
}
else{
	ytix2=ytix;
}

if(adu!=0){
	f=1;
	for(int i=1; i<=adu; i++ ){
	
	gotoxy(12,stx+ytix2);
	cout<<"ADU #"<<f<<" :"<<setw(8)<<aln[i]<<", "<<afn[i];
	f++;
	ytix2=ytix2+2;
	}
	ytix3=ytix2;
}
else{
	ytix3=ytix2;
}

if(sc!=0){
	f=1;
	for(int i=1; i<=sc; i++ ){
	
	gotoxy(12,stx+ytix3);
	cout<<"SEN. C. #"<<f<<" :"<<setw(4)<<sln[i]<<", "<<sfn[i];
	f++;
	ytix3=ytix3+2;
	}
}

//formula to get fnum
if(type==1){
	fnum=fnum-(5-timed);
	}
	if(type==2){
fnum=fnum-(5-timed);
fnum2=fnum2-(5-timer);
	}

//formula to get the time chosen by the user for departure:///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


timech=1;timeit=0;
while(timech<=timed){
	
depth=depth+timeit;
deptm=deptm+timeit;
mins=mins+timeit;

arrth=depth+hrs;
arrtm=deptm+mins;

 if(timech <=5 && depth==0 && arrtm<=59 && deptm<=59){		
	}
	
 else if(timech <=5 && depth==0 && arrtm>=60 && deptm>=60){
	arrth++;
	arrtm=arrtm-60;
	depth++;
	deptm=deptm-60;

	}

  else if(timech <=5 && depth>=1 && arrtm<=59 && deptm<=59){
						
	}
 else if(timech <=5 && depth>=1 && arrtm>=60 && deptm>=60){
	arrth++;
	arrtm=arrtm-60;
	depth++;
	deptm=deptm-60;	
	}

 else if(timech <=5 && depth==0 && arrtm>=60 && deptm<=59){
					
	arrth++;
	arrtm=arrtm-60;

	}
 else if(timech <=5 && depth==0 && arrtm<=59 && deptm>=60){

	depth++;
	deptm=deptm-60;
}
 else if(timech <=5 && depth>=1 && arrtm>=60 && deptm<=59){
	arrth++;
	arrtm=arrtm-60;				
	}
 else if(timech <=5 && depth>=1 && arrtm<=59 && deptm>=60){
	depth++;
	deptm=deptm-60;
}
 else{	
}

timeit++;
timech++;
} //while loop 
	


//formula to get the time chose by the user for return date if one chooses roundtrip://///////////////////////////////////////////////////////////////////////////////////////////////////////////////
if(type==2){

timech=1;timeit=0;

while(timech<=timer){
			
			
			repth=repth+timeit;
			reptm=reptm+timeit;
			rmins=rmins+timeit;
			
			rarrth=repth+rhrs;
			rarrtm=reptm+rmins;
			
			if(timech <=5 && repth==0 && rarrtm<=59 && reptm<=59){		
	}
	
 else if(timech <=5 && repth==0 && rarrtm>=60 && reptm>=60){
	rarrth++;
	rarrtm=rarrtm-60;
	repth++;
	reptm=reptm-60;

	}

  else if(timech <=5 && repth>=1 && rarrtm<=59 && reptm<=59){
						
	}
 else if(timech <=5 && repth>=1 && rarrtm>=60 && reptm>=60){
	rarrth++;
	rarrtm=rarrtm-60;
	repth++;
	reptm=reptm-60;	
	}

 else if(timech <=5 && repth==0 && rarrtm>=60 && reptm<=59){
					
	rarrth++;
	rarrtm=rarrtm-60;
	

	}
 else if(timech <=5 && repth==0 && rarrtm<=59 && reptm>=60){

	repth++;
	reptm=reptm-60;
}
 else if(timech <=5 && repth>=1 && rarrtm>=60 && reptm<=59){
	rarrth++;
	rarrtm=rarrtm-60;				
	}
 else if(timech <=5 && repth>=1 && rarrtm<=59 && reptm>=60){
	repth++;
	reptm=reptm-60;
}
 else{	
}


timeit++;
timech++;
} //while loop 
}
//output////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//right box 

gotoxy(91,15);
			cout<<"                          Flight Details:                         ";
	gotoxy(91,16);
		cout<<"-------------------------------------------------------------------";

gotoxy(84,6);
cout<<"BOOKING INFORMATION:";

gotoxy(93,18);
cout<<"Type of trip: ";



if(type==1){
		gotoxy(112,18);
		cout<<"One-Way Trip";
	}
	
	if(type==2){
		gotoxy(112,18);
		cout<<"Roundtrip";
	}	

gotoxy(93,19);
cout<<"Route: ";


gotoxy(112,19);
cout<<"Manila to ";

if(tdes==1){
	if(des==1){
		deslab="BSO ( Basco ) Batanes ";
	}
	if(des==2){
		deslab="BCD Bacolod";
	}
	if(des==3){
		deslab="PPS Puerto Princesa, Palawan";
	}
	if(des==4){
		deslab="DVO Davao";
	}
}
if(tdes==2){
	if(des==1){
		deslab="Malaysia";
	}
	if(des==2){
		deslab="Indonesia";
	}
	if(des==3){
		deslab="Singapore";
	}
	if(des==4){
		deslab="South Korea";
	}
	if(des==5){
		deslab="Japan";
	}
}
gotoxy(122,19);
cout<<deslab;


if(depm==1){

	monthlab="Jan";
}
if(depm==2){

	monthlab="Feb";
}
if(depm==3){

	monthlab="Mar";
}
if(depm==4){

	monthlab="Apr";
}
if(depm==5){

	monthlab="May";
}
if(depm==6){

	monthlab="Jun";
}
if(depm==7){

	monthlab="Jul";
}
if(depm==8){

	monthlab="Aug";
}
if(depm==9){

	monthlab="Sept";
}
if(depm==10){

	monthlab="Oct";
}
if(depm==11){

	monthlab="Nov";
}
if(depm==12){
	monthlab="Dec";
}


gotoxy(93,20);
cout<<"Departure: ";

gotoxy(112,20);
cout<<monthlab<<" "<<depd<<""<<setfill(',')<<setw(5)<<depy;

gotoxy(132,20);
cout<<"(  :  )";

	

gotoxy(93,21);
cout<<"Arrival: ";

gotoxy(112,21);
cout<<monthlab<<" "<<depd<<""<<setfill(',')<<setw(5)<<depy;

gotoxy(132,21);
cout<<"(  :  )";

gotoxy(93,ylab);
cout<<"Flight Number:";
gotoxy(112,ylab);
cout<<"# "<<fnum;


if(type==2){
	
	gotoxy(93,ylab+2);
	cout<<"Route #2: ";
	
	gotoxy(112,ylab+2);
	cout<<deslab<<" to Manila";
	gotoxy(93,ylab+3);
	cout<<"Flight Number:";
	gotoxy(112,ylab+3);
	fnum=fnum-timed;
	cout<<"# "<<fnum;
	
	if(retm==1){

	monthlabr="Jan";
}
if(retm==2){

	monthlabr="Feb";
}
if(retm==3){

	monthlabr="Mar";
}
if(retm==4){

	monthlabr="Apr";
}
if(retm==5){

	monthlabr="May";
}
if(retm==6){

	monthlabr="Jun";
}
if(retm==7){

	monthlabr="Jul";
}
if(retm==8){

	monthlabr="Aug";
}
if(retm==9){

	monthlabr="Sept";
}
if(retm==10){

	monthlabr="Oct";
}
if(retm==11){

	monthlabr="Nov";
}
if(retm==12){
	monthlabr="Dec";
}
	
gotoxy(93,ylab+4);
cout<<"Departure: ";

gotoxy(112,ylab+4);
cout<<monthlab<<" "<<retd<<""<<setfill(',')<<setw(5)<<rety;

gotoxy(132,ylab+4);
cout<<"(  :  )";

	

gotoxy(93,ylab+5);
cout<<"Arrival: ";

gotoxy(112,ylab+5);
cout<<monthlab<<" "<<retd<<""<<setfill(',')<<setw(5)<<rety;

gotoxy(132,ylab+5);
cout<<"(  :  )";

//time of 




}
else{
	ylab=22;
}

if(type==1){
gotoxy(93,ylab+1);
}
else{
gotoxy(93,ylab+6);
}

cout<<"Cabin Class:";
if(type==1){
gotoxy(112,ylab+1);
}
else{
gotoxy(112,ylab+6);
}
if(type==1){
gotoxy(112,ylab+1);
}
else{
gotoxy(112,ylab+6);
}
if(cab==1){
	cout<<"Private Jet";
}
if(cab==2){
	cout<<"Business Class";
}

//output/////////////////////////////////////////////////////////////////////////  O              U             T                P                    U                   T

if(timech <=5 && depth==0 && arrtm<=59 && deptm<=59){
						
			if(arrtm<=9 && deptm <=9){
			
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		else if(arrtm<=9 && deptm >=10){
			
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;
		}
		else{
			
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;			
		}


} //if
else if(timech <=5 && depth==0 && arrtm>=60 && deptm>=60){
	arrth++;
	arrtm=arrtm-60;
	depth++;
	deptm=deptm-60;
						
if(arrtm<=9 && deptm <=9){
			
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;			
		}
		else if(arrtm<=9 && deptm >=10){
			
			
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;
		}
		else{
			
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;
		}
} //if
				else if(timech <=5 && depth>=1 && arrtm<=59 && deptm<=59){
						
			if(arrtm<=9 && deptm <=9){
			
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		else if(arrtm<=9 && deptm >=10){
			
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;
		}
		else{
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;			
		}
} //if

			else if(timech <=5 && depth>=1 && arrtm>=60 && deptm>=60){
		
			if(arrtm<=9 && deptm <=9){
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		else if(arrtm<=9 && deptm >=10){
			
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;
		}
		else{

			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;			
		}
} //if

if(timech <=5 && depth==0 && arrtm>=60 && deptm<=59){

			if(arrtm<=9 && deptm <=9){
			
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		else if(arrtm<=9 && deptm >=10){
			
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;
		}
		else{

			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;			
		}

} //if
else if(timech <=5 && depth==0 && arrtm<=59 && deptm>=60){
						
	if(arrtm<=9 && deptm <=9){
		
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);;
			cout<<setfill('0')<<setw(2)<<arrtm;			
		}
		else if(arrtm<=9 && deptm >=10){
		
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;
		}
		else{
		
			gotoxy(133,20);
			cout<<setfill('0')<<setw(2)<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;
		}
} //if
		else if(timech <=5 && depth>=1 && arrtm>=60 && deptm<=59){		
			if(arrtm<=9 && deptm <=9){
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		else if(arrtm<=9 && deptm >=10){
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;
		}
		else{
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;			
		}
} //if
		else if(timech <=5 && depth>=1 && arrtm<=59 && deptm>=60){
			
			if(arrtm<=9 && deptm <=9){
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		else if(arrtm<=9 && deptm >=10){
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		else if(arrtm>=10 && deptm <=9){
			
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;
		}
		else{
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;			
		}
} //if

	else{			
			if(arrtm<=9 && deptm <=9){

			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;			
		}
		else if(arrtm<=9 && deptm >=10){
			
			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
		
		else if(arrtm>=10 && deptm <=9){

			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<setfill('0')<<setw(2)<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<arrtm;
		}
		else{

			gotoxy(133,20);
			cout<<depth;
			gotoxy(136,20);
			cout<<deptm;
			gotoxy(133,21);
			cout<<arrth;
			gotoxy(136,21);
			cout<<setfill('0')<<setw(2)<<arrtm;
		}
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
if(type==2){

if(timech <=5 && repth==0 && rarrtm<=59 && reptm<=59){
						
			if(rarrtm<=9 && reptm <=9){
			
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
			
		}
		else if(rarrtm<=9 && reptm >=10){
			
			
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && reptm <=9){
			
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;
		}
		else{
			
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;			
		}


} //if
else if(timech <=5 && repth==0 && rarrtm>=60 && reptm>=60){

						
if(rarrtm<=9 && reptm <=9){
			
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;			
		}
		else if(rarrtm<=9 && reptm >=10){
			
			
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && reptm <=9){
			
			
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;
		}
		else{
			
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;
		}
} //if
				else if(timech <=5 && repth>=1 && rarrtm<=59 && reptm<=59){
						
			if(rarrtm<=9 && reptm <=9){
			
			
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		else if(rarrtm<=9 && reptm >=10){
			
			
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && reptm <=9){
			
			
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;
		}
		else{
			
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;			
		}
} //if

			else if(timech <=5 && repth>=1 && rarrtm>=60 && reptm>=60){
		
			if(rarrtm<=9 && reptm <=9){
			
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		else if(rarrtm<=9 && reptm >=10){
			
			
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && reptm <=9){
			
			
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;
		}
		else{

			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;			
		}
} //if

if(timech <=5 && repth==0 && rarrtm>=60 && reptm<=59){

			if(rarrtm<=9 && reptm <=9){
			
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		else if(rarrtm<=9 && reptm >=10){
			
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && reptm <=9){
			
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;
		}
		else{

			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;			
		}

} //if
else if(timech <=5 && repth==0 && rarrtm<=59 && reptm>=60){
						
	if(rarrtm<=9 && reptm <=9){
		
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;			
		}
		else if(rarrtm<=9 && reptm >=10){
		
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && reptm <=9){
			
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;
		}
		else{
		
			gotoxy(133,26);
			cout<<setfill('0')<<setw(2)<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;
		}
} //if
		else if(timech <=5 && repth>=1 && rarrtm>=60 && reptm<=59){		
			if(rarrtm<=9 && reptm <=9){
			
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		else if(rarrtm<=9 && reptm >=10){
			
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && reptm <=9){
			
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;
		}
		else{
			
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;			
		}
} //if
		else if(timech <=5 && repth>=1 && rarrtm<=59 && reptm>=60){
			
			if(rarrtm<=9 && reptm <=9){
			
			gotoxy(133,26);
			cout<<repth;
		gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		else if(rarrtm<=9 && reptm >=10){
			
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		else if(rarrtm>=10 && reptm <=9){
			
			
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;
		}
		else{
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(136,27);
			cout<<rarrtm;			
		}
} //if

	else{			
			if(rarrtm<=9 && reptm <=9){

			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;			
		}
		else if(rarrtm<=9 && reptm >=10){
			
			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
		
		else if(rarrtm>=10 && reptm <=9){

			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<setfill('0')<<setw(2)<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<rarrtm;
		}
		else{

			gotoxy(133,26);
			cout<<repth;
			gotoxy(136,26);
			cout<<reptm;
			gotoxy(133,27);
			cout<<rarrth;
			gotoxy(136,27);
			cout<<setfill('0')<<setw(2)<<rarrtm;
		}
}


//gotoxy(51,28);
//cout<<"PASSENGER:";

//reservation number:
}






	gotoxy(99,35);
	cout<<a<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<j;
	gotoxy(99,36);
	cout<<d<<"  Booking Reference Number:                     "<<d;
	gotoxy(99,37);
	cout<<oo<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<b<<k;

gotoxy(132,36);
cout<<reff;

getch();


getch();
ofstream outFile;	

int NumPassenger;
    char NamePassenger;
    char DepartFrom;
    char DepartTo;

  ofstream file;
  file.open ("print.txt");
  
file <<"***    *** ******* *******   *******"<<endl;
file <<"****  **** ***     ***  ***  ***    "<<endl;
file <<"*** ** *** ******* *******   ***    "<<endl;
file <<"***    *** ***     ***  ***  ***    "<<endl;
file <<"***    *** ******* ***   *** *******"<<endl;
file <<"------------------------------------"<<endl;
file <<"------------------------------------"<<endl<<endl;

file <<"P A S S E N G E R S :"<<endl;
file <<"----------------------"<<endl<<endl;

if(inf!=0){
	f=1;
	for(int i=1; i<=inf; i++){
	file <<"INF #"<<f<<" :"<<setw(2)<<bln[i]<<", "<<bfn[i]<<endl;
	f++;
	}
}


if(ch!=0){
	f=1;
for(int i=1; i<=ch; i++){
	file <<"CHI #"<<f<<" :"<<setw(2)<<cln[i]<<", "<<cfn[i]<<endl;  
	f++;
}
}


if(adu!=0){
	f=1;
for(int i=1; i<=adu; i++){
	file <<"ADU #"<<f<<" :"<<setw(2)<<aln[i]<<", "<<afn[i]<<endl;
	f++;  
}
}


if(sc!=0){
	f=1;
	for(int i=1; i<=sc; i++){
	file <<"SEN. C. #"<<f<<" :"<<setw(4)<<sln[i]<<", "<<sfn[i]<<endl;
	f++;  
}
}


file <<endl;


file <<"T Y P E  O F  T R I P :"<<endl;
file <<"-----------------------"<<endl<<endl;


if(type==1){
		
		file <<"One-Way Trip"<<endl<<endl;
	

file <<"R O U T E :"<<endl;
file <<"-----------"<<endl<<endl;


if(tdes==1){
	if(des==1){
		deslab="BSO ( Basco ) Batanes ";
	}
	if(des==2){
		deslab="BCD Bacolod";
	}
	if(des==3){
		deslab="PPS Puerto Princesa, Palawan";
	}
	if(des==4){
		deslab="DVO Davao";
	}
}
if(tdes==2){
	if(des==1){
		deslab="Malaysia";
	}
	if(des==2){
		deslab="Indonesia";
	}
	if(des==3){
		deslab="Singapore";
	}
	if(des==4){
		deslab="South Korea";
	}
	if(des==5){
		deslab="Japan";
	}
}


////routeeee hihiii
file <<"Manila to "<<deslab<<endl<<endl;


file <<"D E P A R T U R E :"<<endl;
file <<"-------------------"<<endl<<endl;


if(depm==1){

	monthlab="Jan";
}
if(depm==2){

	monthlab="Feb";
}
if(depm==3){

	monthlab="Mar";
}
if(depm==4){

	monthlab="Apr";
}
if(depm==5){

	monthlab="May";
}
if(depm==6){

	monthlab="Jun";
}
if(depm==7){

	monthlab="Jul";
}
if(depm==8){

	monthlab="Aug";
}
if(depm==9){

	monthlab="Sept";
}
if(depm==10){

	monthlab="Oct";
}
if(depm==11){

	monthlab="Nov";
}
if(depm==12){
	monthlab="Dec";
}


file <<monthlab<<" "<<depd<<""<<setfill(',')<<setw(5)<<depy<<"     (  :  )"<<endl<<endl;


file <<"A R R I V A L :"<<endl;
file <<"---------------"<<endl<<endl;



file <<monthlab<<" "<<depd<<""<<setfill(',')<<setw(5)<<depy<<"     (  :  )"<<endl<<endl;

file <<"F L I G H T  N U M B E R :"<<endl;
file <<"--------------------------"<<endl<<endl;



file <<" #"<<fnum<<endl<<endl;

file <<"C A B I N  C L A S S :"<<endl;
file <<"----------------------"<<endl<<endl;


if(cab==1){
	file <<"Private Jet"<<endl<<endl;
}
if(cab==2){
	file <<"Business Class"<<endl<<endl;
}

}

if(type==2){
		
		
		file <<"Roundtrip"<<endl<<endl;
		

file <<"R O U T E :"<<endl;
file <<"-----------"<<endl<<endl;


if(tdes==1){
	if(des==1){
		deslab="BSO ( Basco ) Batanes ";
	}
	if(des==2){
		deslab="BCD Bacolod";
	}
	if(des==3){
		deslab="PPS Puerto Princesa, Palawan";
	}
	if(des==4){
		deslab="DVO Davao";
	}
}
if(tdes==2){
	if(des==1){
		deslab="Malaysia";
	}
	if(des==2){
		deslab="Indonesia";
	}
	if(des==3){
		deslab="Singapore";
	}
	if(des==4){
		deslab="South Korea";
	}
	if(des==5){
		deslab="Japan";
	}
}

file <<"Manila to "<<deslab<<endl<<endl;



file <<"D E P A R T U R E :"<<endl;
file <<"-------------------"<<endl<<endl;


if(depm==1){

	monthlab="Jan";
}
if(depm==2){

	monthlab="Feb";
}
if(depm==3){

	monthlab="Mar";
}
if(depm==4){

	monthlab="Apr";
}
if(depm==5){

	monthlab="May";
}
if(depm==6){

	monthlab="Jun";
}
if(depm==7){

	monthlab="Jul";
}
if(depm==8){

	monthlab="Aug";
}
if(depm==9){

	monthlab="Sept";
}
if(depm==10){

	monthlab="Oct";
}
if(depm==11){

	monthlab="Nov";
}
if(depm==12){
	monthlab="Dec";
}


file <<monthlab<<" "<<depd<<""<<setfill(',')<<setw(5)<<depy<<"     (  :  )"<<endl<<endl;


file <<"A R R I V A L :"<<endl;
file <<"---------------"<<endl<<endl;



file <<monthlab<<" "<<depd<<""<<setfill(',')<<setw(5)<<depy<<"     (  :  )"<<endl<<endl;

file <<"F L I G H T  N U M B E R :"<<endl;
file <<"--------------------------"<<endl<<endl;

fnum=fnum-timed;
	file <<"# "<<fnum<<endl<<endl;


	
file <<"R O U T E # 2  :"<<endl;
file <<"-----------"<<endl<<endl;

file <<deslab<<" to Manila"<<endl<<endl;

file <<"F L I G H T  N U M B E R :"<<endl;
file <<"--------------------------"<<endl<<endl;
fnum=fnum-timed;
	file <<"# "<<fnum<<endl<<endl;


	if(retm==1){

	monthlabr="Jan";
}
if(retm==2){

	monthlabr="Feb";
}
if(retm==3){

	monthlabr="Mar";
}
if(retm==4){

	monthlabr="Apr";
}
if(retm==5){

	monthlabr="May";
}
if(retm==6){

	monthlabr="Jun";
}
if(retm==7){

	monthlabr="Jul";
}
if(retm==8){

	monthlabr="Aug";
}
if(retm==9){

	monthlabr="Sept";
}
if(retm==10){

	monthlabr="Oct";
}
if(retm==11){

	monthlabr="Nov";
}
if(retm==12){
	monthlabr="Dec";
}


file <<"D E P A R T U R E :"<<endl;
file <<"-------------------"<<endl<<endl;

file <<monthlabr<<" "<<retd<<""<<setfill(',')<<setw(5)<<rety<<"     (  :  )"<<endl<<endl;


file <<"A R R I V A L :"<<endl;
file <<"---------------"<<endl<<endl;

file <<monthlabr<<" "<<retd<<""<<setfill(',')<<setw(5)<<rety<<"     (  :  )"<<endl<<endl;


file <<"C A B I N  C L A S S :"<<endl;
file <<"----------------------"<<endl<<endl;


if(cab==1){
	file <<"Private Jet"<<endl<<endl;
}
if(cab==2){
	file <<"Business Class"<<endl<<endl;
	
}

}
file <<"B O O K I N G  R E F E R E N C E  N U M B E R :"<<endl;
file <<"-----------------------------------------------"<<endl<<endl;

file <<reff<<endl<<endl;

  file.close();

getch();
  system("notepad /p print.txt");
  
cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


}

