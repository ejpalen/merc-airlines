 #include <windows.h> //contains declarations for all of the functions in the windows api.
 #include <iostream> //contains all the functions of the program
 #include <ctime> //converts given time since epoch to a calendar local time and then to a character representation.
 #include <cstdlib> //defines dynamic memory management, few mathematical functions..
 #include <dos.h> //contains functions for handling interrupts, producing sound, date and time, etc.
 #include <conio.h> // provide console input/output.
 #include<sstream> //convert data types to string
 #include<unistd.h>
 #include<iomanip>
 #include <process.h>
#include <fstream>
 
  #define KEY_UP 72
 #define KEY_DOWN 80
 #define KEY_LEFT 75
 #define KEY_RIGHT 77
 #define ENTER 13

 #include <stdio.h> //used for getting the input from the user (keyboard) and output result text to the monitor (screen)
 using namespace std;
  #include "merc-airlines-functions.h"

menframe(){

					cout<<endl<<endl;
						
	cout<<"                                                                 "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<m<<endl;
	cout<<"                                                                 "<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<" "<<m<<m<<m<<"     "<<m<<m<<m<<"  "<<m<<m<<m<<"  "<<m<<m<<m<<endl;
	cout<<"                                                                 "<<m<<m<<m<<" "<<m<<m<<" "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<endl;
	cout<<"                                                                 "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<"     "<<m<<m<<m<<"  "<<m<<m<<m<<"  "<<m<<m<<m<<endl;
	cout<<"                                                                 "<<m<<m<<m<<"    "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<"   "<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<endl;
	cout<<"                                                                     TICKETING AIRLINE SERVICES                                                                         \n\n";

						cout<<"                                                       "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						cout<<"                                                       "<<g<<"                                                   "<<g<<endl;
						cout<<"                    "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<"         Choose what you would like to do:         "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
						cout<<"                    "<<g<<"                                  "<<g<<"                                                   "<<g<<"                                  "<<g<<endl;
					    cout<<"                    "<<g<<"                                  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"                                  "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<"                                                                                                                         "<<g<<endl;
                        cout<<"                    "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
}

men1(){

gotoxy(26,15);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn    <<endl;
gotoxy(26,16);     cout<<g<<"                              "<<g<<endl;
gotoxy(26,17);     cout<<g<<"  "<<g<<g<<g<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g        <<"  "<<g<<endl;
gotoxy(26,18);     cout<<g<<"  "<<mt<<mt<<" "<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g    <<"  "<<g<<endl;
gotoxy(26,19);     cout<<g<<"  "<<g<<g<<g<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g        <<"  "<<g<<endl;
gotoxy(26,20);     cout<<g<<"  "<<g<<g<<g<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g        <<"  "<<g<<endl;
gotoxy(26,21);     cout<<g<<"  "<<mt<<mt<<" "<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g    <<"  "<<g<<endl;
gotoxy(26,22);     cout<<g<<"  "<<g<<g<<g<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g        <<"  "<<g<<endl;
gotoxy(26,23);     cout<<g<<"  "<<g<<g<<g<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g        <<"  "<<g<<endl;
gotoxy(26,24);     cout<<g<<"  "<<mt<<mt<<" "<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g    <<"  "<<g<<endl;
gotoxy(26,25);     cout<<g<<"  "<<g<<g<<g<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g        <<"  "<<g<<endl;
gotoxy(26,26);     cout<<g<<"  "<<g<<g<<g<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g        <<"  "<<g<<endl;
gotoxy(26,27);     cout<<g<<"  "<<mt<<mt<<" "<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g    <<"  "<<g<<endl;
gotoxy(26,28);     cout<<g<<"  "<<g<<g<<g<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g        <<"  "<<g<<endl;
gotoxy(26,29);     cout<<g<<"                              "<<g<<endl;
gotoxy(26,30);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g     <<endl;
gotoxy(26,31);     cout<<g<<"        Book A Flight         "<<g<<endl;
gotoxy(26,32);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g     <<endl;
}

men2(){

gotoxy(42,15);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn    <<endl;
gotoxy(42,16);     cout<<g<<"             "<<mn<<"          "<<mn<<"              "<<g<<endl;
gotoxy(42,17);     cout<<g<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g   <<g<<g<<"  "<<g<<endl;
gotoxy(42,18);     cout<<g<<"  "<<g<<"          "<<mm<<"          "<<mm<<"           "                                                       <<g<<"  "<<g<<endl;
gotoxy(42,19);     cout<<g<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g       <<g<<"  "<<g<<endl;
gotoxy(42,20);     cout<<g<<"  "<<g<<"                                 "                                                                     <<g<<"  "<<g<<endl;
gotoxy(42,21);     cout<<g<<"  "<<g<<"      |      |      |      |     "                                                                     <<g<<"  "<<g<<endl;
gotoxy(42,22);     cout<<g<<"  "<<g<<"    __|______|______|______|__   "                                                                     <<g<<"  "<<g<<endl;
gotoxy(42,23);     cout<<g<<"  "<<g<<"      |      |      |      |     "                                                                     <<g<<"  "<<g<<endl;
gotoxy(42,24);     cout<<g<<"  "<<g<<"    __|______|______|______|__   "                                                                     <<g<<"  "<<g<<endl;
gotoxy(42,25);     cout<<g<<"  "<<g<<"      |      |      |      |     "                                                                     <<g<<"  "<<g<<endl;
gotoxy(42,26);     cout<<g<<"  "<<g<<"      |      |      |      |     "                                                                     <<g<<"  "<<g<<endl;
gotoxy(42,27);     cout<<g<<"  "<<g<<"                                 "                                                                     <<g<<"  "<<g<<endl;
gotoxy(42,28);     cout<<g<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g       <<g<<"  "<<g<<endl;
gotoxy(42,29);     cout<<g<<"                                       "<<g<<endl;
gotoxy(42,30);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g     <<endl;
gotoxy(42,31);     cout<<g<<"           Flight Schedules            "<<g<<endl;
gotoxy(42,32);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g     <<endl;
}

men3(){

gotoxy(61,15);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn    <<endl;
gotoxy(61,16);     cout<<g<<"             "<<mn<<mn<<"         "<<mn<<mn<<"             "<<g<<endl;
gotoxy(61,17);     cout<<g<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<" "<<g<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<" "<<g<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g       <<"  "<<g<<endl;
gotoxy(61,18);     cout<<g<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<" "<<g<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<" "<<g<<g<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g       <<"  "<<g<<endl;
gotoxy(61,19);     cout<<g<<"  "<<g<<"          "<<g<<g<<"         "<<g<<g<<"          "<<g                                                             <<"  "<<g<<endl;
gotoxy(61,20);     cout<<g<<"  "<<g<<"                                 "<<g                                                                             <<"  "<<g<<endl;
gotoxy(61,21);     cout<<g<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g               <<"  "<<g<<endl;
gotoxy(61,22);     cout<<g<<"  "<<g<<"                                 "<<g                                                                             <<"  "<<g<<endl;
gotoxy(61,23);     cout<<g<<"  "<<g<<"                  "<<mf<<mf<<"             "<<g                                                                   <<"  "<<g<<endl;
gotoxy(61,24);     cout<<g<<"  "<<g<<"                 "<<mf<<mf<<"              "<<g                                                                   <<"  "<<g<<endl;
gotoxy(61,25);     cout<<g<<"  "<<g<<"             "<<mf<<mf<<" "<<mf<<mf<<"               "<<g                                                         <<"  "<<g<<endl;
gotoxy(61,26);     cout<<g<<"  "<<g<<"              "<<mf<<mf<<mf<<"                "<<g                                                                <<"  "<<g<<endl;
gotoxy(61,27);     cout<<g<<"  "<<g<<"                                 "<<g                                                                             <<"  "<<g<<endl;
gotoxy(61,28);     cout<<g<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g               <<"  "<<g<<endl;
gotoxy(61,29);     cout<<g<<"                                       "<<g<<endl;
gotoxy(61,30);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g     <<endl;
gotoxy(61,31);     cout<<g<<"             Flight Status             "<<g<<endl;
gotoxy(61,32);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g     <<endl;
}

men4(){

gotoxy(105,15);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn    <<endl;
gotoxy(105,16);     cout<<g<<"                              "<<g<<endl;
gotoxy(105,17);     cout<<g<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"  "<<g<<endl;
gotoxy(105,18);     cout<<g<<"  "<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<"  "<<g<<endl;
gotoxy(105,19);     cout<<g<<"  "<<g<<"                        "<<g<<"  "<<g<<endl;
gotoxy(105,20);     cout<<g<<"  "<<g<<"           "<<mn<<mn<<mn<<"          "<<g<<"  "<<g<<endl;
gotoxy(105,21);     cout<<g<<"  "<<g<<"           "<<g<<g<<g<<"          "<<g<<"  "<<g<<endl;
gotoxy(105,22);     cout<<g<<"  "<<g<<"                        "<<g<<"  "<<g<<endl;
gotoxy(105,23);     cout<<g<<"  "<<g<<"          "<<mm<<g<<g<<g<<"          "<<g<<"  "<<g<<endl;
gotoxy(105,24);     cout<<g<<"  "<<g<<"           "<<g<<g<<g<<"          "<<g<<"  "<<g<<endl;
gotoxy(105,25);     cout<<g<<"  "<<g<<"           "<<g<<g<<g<<"          "<<g<<"  "<<g<<endl;
gotoxy(105,26);     cout<<g<<"  "<<g<<"           "<<g<<g<<g<<mn<<"         "<<g<<"  "<<g<<endl;
gotoxy(105,27);     cout<<g<<"  "<<g<<"                        "<<g<<"  "<<g<<endl;
gotoxy(105,28);     cout<<g<<"  "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<"  "<<g<<endl;
gotoxy(105,29);     cout<<g<<"                              "<<g<<endl;
gotoxy(105,30);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(105,31);     cout<<g<<"             About            "<<g<<endl;
gotoxy(105,32);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
}

men5(){

gotoxy(69,34);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(69,35);     cout<<g<<"      "<<" "<<mn<<"  "<<mn<<"            "<<g<<endl;
gotoxy(69,36);     cout<<g<<"      "<<"  "       <<g<<g<<"  EXIT       "<<g<<endl;
gotoxy(69,37);     cout<<g<<"      "<<" "<<mm<<"  "<<mm<<"            "<<g<<endl;
gotoxy(69,38);     cout<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<endl;
}


frametype(){

	cout<<endl<<endl;

						mercheader();

	                    cout<<"                                                    "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						cout<<"                                                    "<<g<<"                                                   "<<g<<endl;
						cout<<"                      "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<" What type of trip would would you like to choose? "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
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

type1design(){

gotoxy(51,16);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(51,17);     cout<<g<<"                        "<<g<<endl;
gotoxy(51,18);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,19);     cout<<g<<"         "<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,20);     cout<<g<<"        "<<g<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,21);     cout<<g<<"       "<<g<<g<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,22);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,23);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,24);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,25);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,26);     cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(51,27);     cout<<g<<"      "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<"      "<<g<<endl;
gotoxy(51,28);     cout<<g<<"                        "<<g<<endl;
gotoxy(51,29);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(51,30);     cout<<g<<"        One Way         "<<g<<endl;
gotoxy(51,31);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;

}

type2design(){

gotoxy(80,16);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(80,17);     cout<<g<<"                        "<<g<<endl;
gotoxy(80,18);     cout<<g<<"      "<<"    "<<g<<g<<g<<g<<"          "                            <<g<<endl;
gotoxy(80,19);     cout<<g<<"      "<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<"        "                      <<g<<endl;
gotoxy(80,20);     cout<<g<<"      "<<g<<g<<g<<g<<"   "<<g<<g<<g<<g<<"       "                    <<g<<endl;
gotoxy(80,21);     cout<<g<<"      "<<"       "<<g<<g<<g<<g<<"       "                             <<g<<endl;
gotoxy(80,22);     cout<<g<<"      "<<"       "<<g<<g<<g<<g<<"       "                            <<g<<endl;
gotoxy(80,23);     cout<<g<<"      "<<"     "<<g<<g<<g<<g<<"         "                            <<g<<endl;
gotoxy(80,24);     cout<<g<<"      "<<"   "<<g<<g<<g<<g<<"           "                            <<g<<endl;
gotoxy(80,25);     cout<<g<<"      "<<" "<<g<<g<<g<<g<<"             "                            <<g<<endl;
gotoxy(80,26);     cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"      "                <<g<<endl;
gotoxy(80,27);     cout<<g<<"      "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<"      "    <<g<<endl;
gotoxy(80,28);     cout<<g<<"                        "<<g<<endl;
gotoxy(80,29);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(80,30);     cout<<g<<"       Roundtrip        "<<g<<endl;
gotoxy(80,31);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;

}

//Choose what type of destination

frametdes(){



	cout<<endl<<endl;

						mercheader();

	                    cout<<"                                                    "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						cout<<"                                                    "<<g<<"                                                   "<<g<<endl;
						cout<<"                      "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<"          Choose what type of destination          "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
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

tdes1design(){

gotoxy(51,16);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(51,17);     cout<<g<<"                        "<<g<<endl;
gotoxy(51,18);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,19);     cout<<g<<"         "<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,20);     cout<<g<<"        "<<g<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,21);     cout<<g<<"       "<<g<<g<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,22);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,23);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,24);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,25);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,26);     cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(51,27);     cout<<g<<"      "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<"      "<<g<<endl;
gotoxy(51,28);     cout<<g<<"                        "<<g<<endl;
gotoxy(51,29);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(51,30);     cout<<g<<"        Local Trip      "<<g<<endl;
gotoxy(51,31);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;

}

tdes2design(){

gotoxy(80,16);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(80,17);     cout<<g<<"                        "<<g<<endl;
gotoxy(80,18);     cout<<g<<"      "<<"    "<<g<<g<<g<<g<<"          "                            <<g<<endl;
gotoxy(80,19);     cout<<g<<"      "<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<"        "                      <<g<<endl;
gotoxy(80,20);     cout<<g<<"      "<<g<<g<<g<<g<<"   "<<g<<g<<g<<g<<"       "                    <<g<<endl;
gotoxy(80,21);     cout<<g<<"      "<<"       "<<g<<g<<g<<g<<"       "                             <<g<<endl;
gotoxy(80,22);     cout<<g<<"      "<<"       "<<g<<g<<g<<g<<"       "                            <<g<<endl;
gotoxy(80,23);     cout<<g<<"      "<<"     "<<g<<g<<g<<g<<"         "                            <<g<<endl;
gotoxy(80,24);     cout<<g<<"      "<<"   "<<g<<g<<g<<g<<"           "                            <<g<<endl;
gotoxy(80,25);     cout<<g<<"      "<<" "<<g<<g<<g<<g<<"             "                            <<g<<endl;
gotoxy(80,26);     cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"      "                <<g<<endl;
gotoxy(80,27);     cout<<g<<"      "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<"      "    <<g<<endl;
gotoxy(80,28);     cout<<g<<"                        "<<g<<endl;
gotoxy(80,29);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(80,30);     cout<<g<<"   International Trip   "<<g<<endl;
gotoxy(80,31);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
}



/////choose your destination local
framelocal(){

system("cls");


					cout<<endl<<endl;
						mercheader();
						
	                    cout<<"                                                    "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						cout<<"                                                    "<<g<<"                                                   "<<g<<endl;
						cout<<"                "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<"             Choose your DESTINATION:              "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
						cout<<"                "<<g<<"                                   "<<g<<"                                                   "<<g<<"                                       "<<g<<endl;
					    cout<<"                "<<g<<"                                   "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"                                       "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<"                                                                                                                               "<<g<<endl;
                        cout<<"                "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;

}

des1loc(){

gotoxy(21,16);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(21,17);     cout<<g<<"                        "<<g<<endl;
gotoxy(21,18);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(21,19);     cout<<g<<"         "<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(21,20);     cout<<g<<"        "<<g<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(21,21);     cout<<g<<"       "<<g<<g<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(21,22);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(21,23);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(21,24);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(21,25);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(21,26);     cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(21,27);     cout<<g<<"      "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<"      "<<g<<endl;
gotoxy(21,28);     cout<<g<<"                        "<<g<<endl;
gotoxy(21,29);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(21,30);     cout<<g<<"        Batanes         "<<g<<endl;
gotoxy(21,31);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
}

des2loc(){

gotoxy(52,16);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(52,17);     cout<<g<<"                        "<<g<<endl;
gotoxy(52,18);     cout<<g<<"      "<<"    "<<g<<g<<g<<g<<"          "                            <<g<<endl;
gotoxy(52,19);     cout<<g<<"      "<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<"        "                      <<g<<endl;
gotoxy(52,20);     cout<<g<<"      "<<g<<g<<g<<g<<"   "<<g<<g<<g<<g<<"       "                    <<g<<endl;
gotoxy(52,21);     cout<<g<<"      "<<"       "<<g<<g<<g<<g<<"       "                             <<g<<endl;
gotoxy(52,22);     cout<<g<<"      "<<"       "<<g<<g<<g<<g<<"       "                            <<g<<endl;
gotoxy(52,23);     cout<<g<<"      "<<"     "<<g<<g<<g<<g<<"         "                            <<g<<endl;
gotoxy(52,24);     cout<<g<<"      "<<"   "<<g<<g<<g<<g<<"           "                            <<g<<endl;
gotoxy(52,25);     cout<<g<<"      "<<" "<<g<<g<<g<<g<<"             "                            <<g<<endl;
gotoxy(52,26);     cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"      "                <<g<<endl;
gotoxy(52,27);     cout<<g<<"      "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<"      "    <<g<<endl;
gotoxy(52,28);     cout<<g<<"                        "<<g<<endl;
gotoxy(52,29);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(52,30);     cout<<g<<"        Bacolod         "<<g<<endl;
gotoxy(52,31);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
}

des3loc(){

gotoxy(83,16);        cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(83,17);        cout<<g<<"                        "<<g<<endl;
gotoxy(83,18);        cout<<g<<"       "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"       "<<g<<endl;
gotoxy(83,19);        cout<<g<<"      "<<g<<g<<g<<g<<"    "<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(83,20);        cout<<g<<"              "<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(83,21);        cout<<g<<"            "<<g<<g<<g<<g<<g<<"       "<<g<<endl;
gotoxy(83,22);        cout<<g<<"            "<<g<<g<<g<<g<<g<<"       "<<g<<endl;
gotoxy(83,23);        cout<<g<<"              "<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(83,24);        cout<<g<<"              "<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(83,25);        cout<<g<<"      "<<g<<g<<g<<g<<"    "<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(83,26);        cout<<g<<"       "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"       "<<g<<endl;
gotoxy(83,27);        cout<<g<<"        "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<"        "<<g<<endl;
gotoxy(83,28);        cout<<g<<"                        "<<g<<endl;
gotoxy(83,29);        cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(83,30);        cout<<g<<"        Palawan         "<<g<<endl;
gotoxy(83,31);        cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
}

des4loc(){

gotoxy(114,16);        cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(114,17);        cout<<g<<"                        "<<g<<endl;
gotoxy(114,18);        cout<<g<<"           "<<g<<g<<g<<g<<g<<"        "<<g<<endl;
gotoxy(114,19);        cout<<g<<"          "<<g<<g<<g<<g<<g<<g<<"        "<<g<<endl;
gotoxy(114,20);        cout<<g<<"         "<<g<<g<<" "<<g<<g<<g<<g<<"        "<<g<<endl;
gotoxy(114,21);        cout<<g<<"        "<<g<<g<<"  "<<g<<g<<g<<g<<"        "<<g<<endl;
gotoxy(114,22);        cout<<g<<"       "<<g<<g<<"   "<<g<<g<<g<<g<<"        "<<g<<endl;
gotoxy(114,23);        cout<<g<<"      "<<g<<g<<"    "<<g<<g<<g<<g<<"        "<<g<<endl;
gotoxy(114,24);        cout<<g<<"      "<<g<<g<<mn<<mn<<mn<<mn<<g<<g<<g<<g<<mn<<mn<<"      "<<g<<endl;
gotoxy(114,25);        cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(114,26);        cout<<g<<"      ""      "<<g<<g<<g<<g<<"        "<<g<<endl;
gotoxy(114,27);        cout<<g<<"      ""      "<<mm<<mm<<mm<<mm<<"        "<<g<<endl;
gotoxy(114,28);        cout<<g<<"                        "<<g<<endl;
gotoxy(114,29);        cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(114,30);        cout<<g<<"         Davao          "<<g<<endl;
gotoxy(114,31);        cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
}


/////choose your destination international

frameinter(){

system("cls");



					cout<<endl<<endl;
					
						mercheader();
	                    cout<<"                                                    "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						cout<<"                                                    "<<g<<"                                                   "<<g<<endl;
						cout<<"  "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<"             Choose your DESTINATION:              "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
						cout<<"  "<<g<<"                                                 "<<g<<"                                                   "<<g<<"                                                      "<<g<<endl;
					    cout<<"  "<<g<<"                                                 "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"                                                      "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<"                                                                                                                                                            "<<g<<endl;
                        cout<<"  "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
}

des1inter(){

gotoxy(8,16);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(8,17);     cout<<g<<"                        "<<g<<endl;
gotoxy(8,18);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(8,19);     cout<<g<<"         "<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(8,20);     cout<<g<<"        "<<g<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(8,21);     cout<<g<<"       "<<g<<g<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(8,22);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(8,23);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(8,24);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(8,25);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(8,26);     cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(8,27);     cout<<g<<"      "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<"      "<<g<<endl;
gotoxy(8,28);     cout<<g<<"                        "<<g<<endl;
gotoxy(8,29);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(8,30);     cout<<g<<"        Malaysia        "<<g<<endl;
gotoxy(8,31);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
}

des2inter(){

gotoxy(38,16);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(38,17);     cout<<g<<"                        "<<g<<endl;
gotoxy(38,18);     cout<<g<<"      "<<"    "<<g<<g<<g<<g<<"          "                            <<g<<endl;
gotoxy(38,19);     cout<<g<<"      "<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<"        "                      <<g<<endl;
gotoxy(38,20);     cout<<g<<"      "<<g<<g<<g<<g<<"   "<<g<<g<<g<<g<<"       "                    <<g<<endl;
gotoxy(38,21);     cout<<g<<"      "<<"       "<<g<<g<<g<<g<<"       "                             <<g<<endl;
gotoxy(38,22);     cout<<g<<"      "<<"       "<<g<<g<<g<<g<<"       "                            <<g<<endl;
gotoxy(38,23);     cout<<g<<"      "<<"     "<<g<<g<<g<<g<<"         "                            <<g<<endl;
gotoxy(38,24);     cout<<g<<"      "<<"   "<<g<<g<<g<<g<<"           "                            <<g<<endl;
gotoxy(38,25);     cout<<g<<"      "<<" "<<g<<g<<g<<g<<"             "                            <<g<<endl;
gotoxy(38,26);     cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"      "                <<g<<endl;
gotoxy(38,27);     cout<<g<<"      "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<"      "    <<g<<endl;
gotoxy(38,28);     cout<<g<<"                        "<<g<<endl;
gotoxy(38,29);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(38,30);     cout<<g<<"       Indonesia        "<<g<<endl;
gotoxy(38,31);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
}


des3inter(){

gotoxy(68,16);        cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(68,17);        cout<<g<<"                        "<<g<<endl;
gotoxy(68,18);        cout<<g<<"       "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"       "<<g<<endl;
gotoxy(68,19);        cout<<g<<"      "<<g<<g<<g<<g<<"    "<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(68,20);        cout<<g<<"              "<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(68,21);        cout<<g<<"            "<<g<<g<<g<<g<<g<<"       "<<g<<endl;
gotoxy(68,22);        cout<<g<<"            "<<g<<g<<g<<g<<g<<"       "<<g<<endl;
gotoxy(68,23);        cout<<g<<"              "<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(68,24);        cout<<g<<"              "<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(68,25);        cout<<g<<"      "<<g<<g<<g<<g<<"    "<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(68,26);        cout<<g<<"       "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"       "<<g<<endl;
gotoxy(68,27);        cout<<g<<"        "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<"        "<<g<<endl;
gotoxy(68,28);        cout<<g<<"                        "<<g<<endl;
gotoxy(68,29);        cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(68,30);        cout<<g<<"       Singapore        "<<g<<endl;
gotoxy(68,31);        cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
}

des4inter(){

gotoxy(98,16);        cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(98,17);        cout<<g<<"                        "<<g<<endl;
gotoxy(98,18);        cout<<g<<"           "<<g<<g<<g<<g<<g<<"        "<<g<<endl;
gotoxy(98,19);        cout<<g<<"          "<<g<<g<<g<<g<<g<<g<<"        "<<g<<endl;
gotoxy(98,20);        cout<<g<<"         "<<g<<g<<" "<<g<<g<<g<<g<<"        "<<g<<endl;
gotoxy(98,21);        cout<<g<<"        "<<g<<g<<"  "<<g<<g<<g<<g<<"        "<<g<<endl;
gotoxy(98,22);        cout<<g<<"       "<<g<<g<<"   "<<g<<g<<g<<g<<"        "<<g<<endl;
gotoxy(98,23);        cout<<g<<"      "<<g<<g<<"    "<<g<<g<<g<<g<<"        "<<g<<endl;
gotoxy(98,24);        cout<<g<<"      "<<g<<g<<mn<<mn<<mn<<mn<<g<<g<<g<<g<<mn<<mn<<"      "<<g<<endl;
gotoxy(98,25);        cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(98,26);        cout<<g<<"      ""      "<<g<<g<<g<<g<<"        "<<g<<endl;
gotoxy(98,27);        cout<<g<<"      ""      "<<mm<<mm<<mm<<mm<<"        "<<g<<endl;
gotoxy(98,28);        cout<<g<<"                        "<<g<<endl;
gotoxy(98,29);        cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(98,30);        cout<<g<<"      South Korea       "<<g<<endl;
gotoxy(98,31);        cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
}

des5inter(){

gotoxy(128,16);        cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(128,17);        cout<<g<<"                        "<<g<<endl;
gotoxy(128,18);        cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(128,19);        cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(128,20);        cout<<g<<"      "<<g<<g<<g<<g<<"              "<<g<<endl;
gotoxy(128,21);        cout<<g<<"      "<<g<<g<<g<<g<<mn<<mn<<mn<<mn<<mn<<mn<<"        "<<g<<endl;
gotoxy(128,22);        cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"       "<<g<<endl;
gotoxy(128,23);        cout<<g<<"      "<<"        "<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(128,24);        cout<<g<<"      "<<"        "<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(128,25);        cout<<g<<"      "<<"        "<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(128,26);        cout<<g<<"      "<<g<<g<<g<<g<<"   "<<g<<g<<g<<g<<"       "<<g<<endl;
gotoxy(128,27);        cout<<g<<"      "<<" "<<g<<g<<g<<g<<g<<g<<g<<g<<"         "<<g<<endl;
gotoxy(128,28);        cout<<g<<"                        "<<g<<endl;
gotoxy(128,29);        cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(128,30);        cout<<g<<"         Japan          "<<g<<endl;
gotoxy(128,31);        cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
}



///Select cabin Class

framecab(){

system("cls");

	cout<<endl<<endl;

						mercheader();

	                    cout<<"                                                    "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						cout<<"                                                    "<<g<<"                                                   "<<g<<endl;
						cout<<"                      "<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<"           Please select a CABIN CLASS:            "<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
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


cab1design(){

gotoxy(51,16);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(51,17);     cout<<g<<"                        "<<g<<endl;
gotoxy(51,18);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,19);     cout<<g<<"         "<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,20);     cout<<g<<"        "<<g<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,21);     cout<<g<<"       "<<g<<g<<g<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,22);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,23);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,24);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,25);     cout<<g<<"          "<<g<<g<<g<<g<<"          "<<g<<endl;
gotoxy(51,26);     cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"      "<<g<<endl;
gotoxy(51,27);     cout<<g<<"      "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<"      "<<g<<endl;
gotoxy(51,28);     cout<<g<<"                        "<<g<<endl;
gotoxy(51,29);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(51,30);     cout<<g<<"     PRIVATE Class      "<<g<<endl;
gotoxy(51,31);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
}


cab2design(){

gotoxy(80,16);     cout<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<endl;
gotoxy(80,17);     cout<<g<<"                        "<<g<<endl;
gotoxy(80,18);     cout<<g<<"      "<<"    "<<g<<g<<g<<g<<"          "                            <<g<<endl;
gotoxy(80,19);     cout<<g<<"      "<<"  "<<g<<g<<g<<g<<g<<g<<g<<g<<"        "                      <<g<<endl;
gotoxy(80,20);     cout<<g<<"      "<<g<<g<<g<<g<<"   "<<g<<g<<g<<g<<"       "                    <<g<<endl;
gotoxy(80,21);     cout<<g<<"      "<<"       "<<g<<g<<g<<g<<"       "                             <<g<<endl;
gotoxy(80,22);     cout<<g<<"      "<<"       "<<g<<g<<g<<g<<"       "                            <<g<<endl;
gotoxy(80,23);     cout<<g<<"      "<<"     "<<g<<g<<g<<g<<"         "                            <<g<<endl;
gotoxy(80,24);     cout<<g<<"      "<<"   "<<g<<g<<g<<g<<"           "                            <<g<<endl;
gotoxy(80,25);     cout<<g<<"      "<<" "<<g<<g<<g<<g<<"             "                            <<g<<endl;
gotoxy(80,26);     cout<<g<<"      "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<"      "                <<g<<endl;
gotoxy(80,27);     cout<<g<<"      "<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<"      "    <<g<<endl;
gotoxy(80,28);     cout<<g<<"                        "<<g<<endl;
gotoxy(80,29);     cout<<g<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<mm<<g<<endl;
gotoxy(80,30);     cout<<g<<"     BUSINESS Class     "<<g<<endl;
gotoxy(80,31);     cout<<g<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<mn<<g<<endl;
cout<<endl<<endl<<endl<<endl;
}


noteget(){
	
	gotoxy(42,34);
	cout<<"+------------------------------------------------------------------------+";
	gotoxy(42,35);
	cout<<"|                                                                        |";
	gotoxy(42,36);
	cout<<"|        PRESS RIGHT and LEFT arrow keys to choose an option.            |";
	gotoxy(42,37);
	cout<<"|              PRESS ENTER to submit or confirm choice.                  |"; 
	gotoxy(42,38);
	cout<<"|                                                                        |";
	gotoxy(42,39);
	cout<<"+------------------------------------------------------------------------+";

	}


	depdate2func(){ //function to be called if choosen to flight schedules
				
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
	
gotoxy(74,14);     cout<<"ENTER A DATE:";
gotoxy(74,16);     cout<<"<mm/dd/yyyy>";
gotoxy(47,22);     cout<<"Enter MONTH here (1-12):";
gotoxy(47,28);     cout<<"Enter DAY here (1-30/31):";
gotoxy(41,34);     cout<<"Enter YEAR here (Current year-2020):";


}

        int main(){
//to set the size of the screen buffer without the scroll bar.
		
		HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(handle, &info);
    COORD new_size = 
    {
        info.srWindow.Right - info.srWindow.Left + 1,
        info.srWindow.Bottom - info.srWindow.Top + 1
    };
    SetConsoleScreenBufferSize(handle, new_size);

		HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);

				char 	b=219, agree;
			system("color 0e");

			introchoose:

			cout<<"\n\n\n\n\n";
Sleep(200);
			cout<<"                                                                                                                                           00         "<<endl;
			Sleep(200);
			cout<<"                                           0000000                                                                                          00    "<<endl;
			Sleep(100);
			cout<<"                                         0000 000  00               000                                        0000000000                 000                          "<<endl;
			Sleep(100);
			cout<<"                                         0000   00000   000           000                 00000               000000000000              00000           0000  "<<endl;
			Sleep(100);
			cout<<"            00000                       0000     000  00  00   000000000                000  000               00    000000           000000          00  00 "<<endl;
			Sleep(100);
			cout<<"          00  0000                     0000             0000  000000000                      000                     00000000       0000000             0000   "<<endl;
			Sleep(100);
			cout<<"          00   0000                  0000  00000000000000   00 0000           0000000000000000   00000000000000     000000000    000000000  00000000000000 "<<endl;
			Sleep(100);
			cout<<"           00  00000                0000   000000000000  000   0000           00000000000000    00000000000000000   0000 00000  00000 0000   000000000000"<<endl;
			Sleep(100);
			cout<<"                0000               0000    00000              0000           00000            0000          00000  0000  000000000   0000    00000    "<<endl;
			Sleep(100);
			cout<<"                0000               0000    00000              0000           0000             0000          00000  0000  000000000   0000    00000"<<endl;
			Sleep(100);
			cout<<"                0000               0000    000000000          0000           00000            0000          00000  0000    0000      0000    000000000  "<<endl;
			Sleep(100);
			cout<<"                0000               0000   000000000000        0000           00000            0000          00000  0000              0000    00000000000"<<endl;
			Sleep(100);
			cout<<"                0000       00      0000    000000000          0000           00000            0000          00000  0000              0000    000000000    "<<endl;
			Sleep(100);
			cout<<"                 0000     0000     0000    00000          0   0000   000     00000            0000          00000  0000              0000    00000 "<<endl;
			Sleep(100);
			cout<<"                  0000  000  000  0000     00000      0 00   00000    000    00000            0000          00000  0000             00000    00000      0  "<<endl;
			Sleep(100);
			cout<<"                   0000000     0000000     0000000000000 000000000000000     0000000000000000  00000000000000000  00000            0000000   0000000000000 "<<endl;
			Sleep(100);
			cout<<"                      0000        0000     000000000000000  000000000000000   00000000000000000  00000000000000   000000           00000000000000000000000 "<<endl;
			Sleep(100);
			cout<<"                                                                                            000                  00000   "<<endl;
			Sleep(100);
			cout<<"                                                                                          00  000              00000"<<endl;
			Sleep(100);
			cout<<"                                                                                           00000                    "<<endl;
			
			SetConsoleTextAttribute(color, 11);
			gotoxy(135,23);
			Sleep(100);
			cout<<"           00";
			gotoxy(135,24);
			Sleep(100);
			cout<<"   000000000  ";
			gotoxy(135,25);
			Sleep(100);
			cout<<" 000000000";
			gotoxy(135,26);
			Sleep(100);
			cout<<"0    00            00";  
			gotoxy(135,26);
			Sleep(100);
			cout<<"     00    000000000"; 
			gotoxy(135,27);
			Sleep(100);
			cout<<"     00   000    000"; 
			gotoxy(135,28);
			Sleep(100);
			cout<<"     00   00      00";  
			gotoxy(135,29);
			Sleep(100);
			cout<<"    0000  000    000";  
			gotoxy(135,30);
			Sleep(100);
			cout<<"    0000   00000000";  
			SetConsoleTextAttribute(color, 14);
			
			unahan();


			//about us



	
			menu:
			genl=0;menl=0;typel=0;men=0;type=0;des=0;cab=0;typel=0;tdesl=0;desl=0;cabl=0;infl=0;chl=0;adul=0;scl=0;avll=0;avl=0;
	cout<<"\n\n\n\n\n\n";

	system("cls");
	sttl[11];attl[11];ittl;cttl[7];dscnt=0;vat=0;prc;
	string afn[10];amn[10];aln[10];sfn[10];smn[10];sln[10];cfn[7];cmn[7];cln[7];bfn[10];bmn[10];bln[10];
	tamt=0;adua[10];inf=0;ch=0;adu=0;sc=0;sca[10];cha[7];infa=0;f=0;nump=0;ibd=0;iby=0;abd[10];aby[10];sbd[10];sby[10];cbd[7];cby[7];ibm=0;abm[10];sbm[10];cbm[7];dd=0;bg=0;ins=0;/* total insurance lahat lahat na ba*/l=0;regis=0;

	tdis=0;tvat=0;ramt=0;cash;change=0;tins=0;sumbgall=0;
	i=0;conbook=0;conbookl=0;iage=0;chage=0;aduage=0;scage=0;
    int bggpch[7];bggpinf[4];bggpsc[10];bggpadu[10];
	infins[10];/* insurance ng infant*/chins[10];/* sa child*/aduins[10];/*sa adult*/scins[10];/*senior*/busins=4500;priins=8500;
	avl=0; /*ung maga=avail o hinde*/
	//loop iterators
	menl=0;genl=0;typel=0;tdesl=0;desl=0;cabl=0;infl=0;chl=0;scl=0;adul=0;bookl=0;book=0;timedl=0;timerl=0;
	depm=0;retm=0;retd=0;rety=0;depd=0;depy=0;avd=0;avm=0;avy=0;
	fnum=200;
 	men=0;type=0;tdes=0;des=0;cab=0;
	 //baggage:
	//seat1;seat2;seat3;seat4;seat5;seat6;seat7;seat8;seat9;seat10;	
	//variables whohold the baggage price oramount of apassenger bg(baggage)p(price or amount)inf(passenger can be adu orsc orch)
	bggpinf[10];bggpch[7];bggpadu[10];bggpsc[10];rhrs=0;rmins=0;
	
	bgsc[10];bgadu[10];bginf[10];bgch[10];sumbgsc=0;sumbgch=0;sumbgadu=0;sumbginf=0;sumbginf2=0;sumbginf3=0;sumbgch2=0;sumbgch3=0;sumbgadu2=0;
	sumbgadu3=0;sumbgsc2=0;sumbgsc3=0;
	//BAGONG VARS
	timech=1;arrth=0;depth=0;arrtm=0;deptm=0;yt=0;timeit=0;
	//depende saan ang lugar
	hrs=0;mins=0;
	//para sa presyo
	fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
	system("cls");			
	menframe();
	men1();
//	men2();
	men3();
	men4();
	men5();
	
		while(menl!=1)
	{
	gotoxy(34,31);

	while(genl!=1){
		int v=0;

		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
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
			SetConsoleTextAttribute(color, 11);
			men1();
//			SetConsoleTextAttribute(color, 14);
//			men2();
			SetConsoleTextAttribute(color, 14);
			men3();
			SetConsoleTextAttribute(color, 14);
			men4();
			SetConsoleTextAttribute(color, 14);
			men5();
			SetConsoleTextAttribute(color, 14);
			    break;
			case 2:
			SetConsoleTextAttribute(color, 14);
			men1();
//			SetConsoleTextAttribute(color, 14);
//			men2();
			SetConsoleTextAttribute(color, 11);
			men3();
			SetConsoleTextAttribute(color, 14);
			men4();
			SetConsoleTextAttribute(color, 14);
			men5();
			SetConsoleTextAttribute(color, 14);
				break;
			case 3:
			SetConsoleTextAttribute(color, 14);
			men1();
//			SetConsoleTextAttribute(color, 14);
//			men2();
			SetConsoleTextAttribute(color, 14);
			men3();
			SetConsoleTextAttribute(color, 11);
			men4();
			SetConsoleTextAttribute(color, 14);
			men5();
			SetConsoleTextAttribute(color, 14);
				break;
			case 4:
			SetConsoleTextAttribute(color, 14);
			men1();
//			SetConsoleTextAttribute(color, 14);
//			men2();
			SetConsoleTextAttribute(color, 14);
			men3();
			SetConsoleTextAttribute(color, 14);
			men4();
			SetConsoleTextAttribute(color, 11);
			men5();
			SetConsoleTextAttribute(color, 14);
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

			
			//When the user chooses '1. Book a flight'
			switch(men){
				//Type of Trip: One-way or Roundtrip.
				genl=0;menl=0;typel=0;men=0;type=0;des=0;cab=0;typel=0;tdesl=0;desl=0;cabl=0;infl=0;chl=0;adul=0;scl=0;avll=0;avl=0;
				
			case 1:
				
			system("cls");
			tripchoose1:
				
				type=0;
				//functions such as design and actions to be executed for the type of trip screen. 
		frametype();
		type1design();
		type2design();
		noteget();
		
	genl=0;
	while(typel!=1)
	{
	gotoxy(34,36);

	while(genl!=1){
		int v=0;

		
		if(v == 0 || v == 224 || v== 13 ||  v==10 || v==72){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(type==1)
			{
			}
			else
			{
				type-=1;
			}
			break;
		case KEY_RIGHT:
			if(type==2)
			{
			}
			else
			{
			
				type+=1;
			}
			break;
		case KEY_UP:
			system("cls");
			goto menu;
			break;
		case ENTER:
			if(type==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}
		
		switch(type)
		{
			case 1:

		SetConsoleTextAttribute(color, 11);
		type1design();
		SetConsoleTextAttribute(color, 14);
		type2design();
		SetConsoleTextAttribute(color, 14);

				break;
			case 2:
		
		SetConsoleTextAttribute(color, 14);
		type1design();
		SetConsoleTextAttribute(color, 11);
		type2design();
		SetConsoleTextAttribute(color, 14);
		
				break;
			
		}
	}
	if(type!=1&&type!=2){
		typel--;
		system("cls");
	}
	else
	{
	typel=1;
		
	}
} //while type
typel=0;

		
			//Execution of actions if One-way is chosen or Roundtrip.
			    switch(type){

		        case 1:
		        	system("cls");
		        	tdeschoose1:
		        		tdes=0;
		        	frametdes();
					tdes1design();
					tdes2design();
					noteget();
		        	
		while(tdesl!=1){
	genl=0;
	gotoxy(34,36);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 || v==72 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
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
			case KEY_UP:
				system("cls");
			goto tripchoose1;
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
		SetConsoleTextAttribute(color, 11);
		tdes1design();
		SetConsoleTextAttribute(color, 14);
		tdes2design();
		SetConsoleTextAttribute(color, 14);
				break;
			case 2:
		SetConsoleTextAttribute(color, 14);
		tdes1design();
		SetConsoleTextAttribute(color, 11);
		tdes2design();
		SetConsoleTextAttribute(color, 14);
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

		            switch(tdes){
		                case 1: //LOCAL
		                system("cls");
		                	desloc1:
		                		des=0;
		                framelocal();
					des1loc();
					des2loc();
					des3loc();
					des4loc();
					noteget();
					
					while(desl!=1){
	genl=0;
	gotoxy(34,31);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 || v==72 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
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
		case KEY_UP:
			system("cls");
			goto tdeschoose1;
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
			SetConsoleTextAttribute(color, 11);	
			des1loc();
			SetConsoleTextAttribute(color, 14);
			des2loc();
			SetConsoleTextAttribute(color, 14);
			des3loc();
			SetConsoleTextAttribute(color, 14);
			des4loc();
			SetConsoleTextAttribute(color, 14);
				break;
			case 2:
				SetConsoleTextAttribute(color, 14);
			des1loc();
			SetConsoleTextAttribute(color, 11);
			des2loc();
			SetConsoleTextAttribute(color, 14);
			des3loc();
			SetConsoleTextAttribute(color, 14);
			des4loc();
			SetConsoleTextAttribute(color, 14);
				break;
			case 3:
				SetConsoleTextAttribute(color, 14);
			des1loc();
			SetConsoleTextAttribute(color, 14);
			des2loc();
			SetConsoleTextAttribute(color, 11);
			des3loc();
			SetConsoleTextAttribute(color, 14);
			des4loc();
			SetConsoleTextAttribute(color, 14);
				break;
			case 4:
				SetConsoleTextAttribute(color, 14);
			des1loc();
			SetConsoleTextAttribute(color, 14);
			des2loc();
			SetConsoleTextAttribute(color, 14);
			des3loc();
			SetConsoleTextAttribute(color, 11);
			des4loc();
			SetConsoleTextAttribute(color, 14);
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
						
						if(des>=1&&des<=4){
						
							datechoose1:
								depd=0;depm=0;depy=0;
								
							system("cls");
							depdatefunc();
						
	


							cabchoose1:
								cab=0;
				         	system("cls");
				         	
				         	framecab();
							cab1design();
							cab2design();
							noteget();
				         	
				         	while(cabl!=1){
	genl=0;
	gotoxy(34,36);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 || v==72 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
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
		case KEY_UP:
			system("cls");
			goto datechoose1;
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
				SetConsoleTextAttribute(color, 11);
				cab1design();
				SetConsoleTextAttribute(color, 14);
				cab2design();
				SetConsoleTextAttribute(color, 14);
				break;
			case 2:
				SetConsoleTextAttribute(color, 14);
				cab1design();
				SetConsoleTextAttribute(color, 11);
				cab2design();
				SetConsoleTextAttribute(color, 14);
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
	
	
			         	
	booksched:
				         	 switch(cab){

				          	case 1: //case 1: Private class of switch cab.
	passchoose1:
	
		
	system("cls");
	cout<<endl<<endl;
	mercheader();
	passfunc();
						
gotoxy(95,22);
cin>>inf;
gotoxy(95,27);
cin>>ch;
gotoxy(95,32);
cin>>adu;
gotoxy(95,37);
cin>>sc;

getch();


				          	if(inf>=1&&inf<=4&&ch>=1&&ch<=7&&adu>=1&&adu<=10&&sc>=1&&sc<=10){
				          		goto numpchoose1;
				          	}
				          	else if(inf>=0&&inf<=4&&ch>=1&&ch<=7&&adu>=1&&adu<=10||sc>=1&&sc<=10){
				          	 	goto numpchoose1;
							  }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=7&&adu>=1&&adu<=10||sc>=1&&sc<=10){
				          	 	goto numpchoose1;
							  }
							  else if(inf>=1&&inf<=4&&ch==0&&adu==0&&sc==0){
				          	    infantonly();
						 		goto passchoose1;
								   }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=7&&adu>=0&&adu<=10&&sc>=1&&sc<=10){
				          	 	
								   	
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


SetConsoleTextAttribute(color, 14);
getch();
system("cls");
						 		goto passchoose1;
								   }
							else if(inf>=0&&inf<=4||inf>=1&&inf<=4||inf==2&&ch>=0&&ch<=7&&adu>=0&&adu<=10&&sc>=1&&sc<=10){



				          	 	numpchoose1:
				          	 		nump=adu+inf+ch+sc;
				          	 		if(nump>=1&&nump<=10){
				          	 			goto deschoose1;
									   }
									else{
										invalidtotal();
										goto passchoose1;
									}
				  				deschoose1:


								if(des==1){

								bataneschoose1:

				depth=6; deptm=30;
				hrs=1;mins=40;
				fare=8650.0;
				system("cls");
				   SetConsoleTextAttribute(color, 14);
				   	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                      [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      BATANES (BTS)     ----------------------      ";
			
			timetebdep();

	
			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
			                cout<<"\n                      Press any key to confirm and proceed.";
		                    system("pause");
			                system("cls");
							goto baggpay;

							}
								else if(des==2){

								bacolodchoose1:

			depth=4; deptm=25;
				hrs=1;mins=20;
				fare=4543.0;
				fnum=fnum+5;
				system("cls");
				    SetConsoleTextAttribute(color, 14);
						cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                      [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     BACOLOD (BCD)       ----------------------      ";
		
			timetebdep();



			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;


							}
								else if(des==3){

								palawanchoose1:

				depth=7; deptm=0;
				hrs=1;mins=25;
				fare=5882.0;
				fnum=fnum+5;
				system("cls");
				    SetConsoleTextAttribute(color, 14);
						cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     PALAWAN (PLN)  ------------------------      ";

				timetebdep();




			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;

							}
								else if(des==4){

								davaochoose1:

				depth=5; deptm=25;
				hrs=1;mins=50;
				fare=4096.0;
				fnum=fnum+5;
				system("cls");
				    SetConsoleTextAttribute(color, 14);
						cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     DAVAO (DVO)       ----------------------      ";

				timetebdep();


			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;

								  }

				            }
				            else if(inf>=0&&inf<=4&&ch==0&&sc==0&&adu==0){

				            nopass();
						 	goto passchoose1;
							}
				            else{//action of invalid pass of private class.
				            nopasschoose1:
				            	invalidpass();
						 	goto passchoose1;
							}

							break;//of case 1 - private class-local.



							//BUSINESS OF LOCAL OF PRIVATE OF ONE WAY



				        case 2: //case 2 of switch cab.business class.of local
				        passchoose2:
				        	
							
	system("cls");
	cout<<endl<<endl;
	mercheader();
	passfunc();
												
gotoxy(95,22);
cin>>inf;
gotoxy(95,27);
cin>>ch;
gotoxy(95,32);
cin>>adu;
gotoxy(95,37);
cin>>sc;

							if(inf>=1&&inf<=4&&ch>=1&&ch<=4&&adu>=1&&adu<=6&&sc>=1&&sc<=6){
				          		goto numpchoose2;
				          	}
				          	else if(inf>=0&&inf<=4&&ch>=1&&ch<=4&&adu>=1&&adu<=6||sc>=1&&sc<=6){
				          	 	goto numpchoose2;
							  }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=4&&adu>=1&&adu<=6||sc>=1&&sc<=6){
				          	 	goto numpchoose2;
							  }
							  else if(inf>=1&&inf<=4&&ch==0&&adu==0&&sc==0){
				          	    infantonly();
						 		goto passchoose2;
								   }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=4&&adu>=0&&adu<=6&&sc>=1&&sc<=6){




				          	 		numpchoose2:
				          	 			nump=adu+inf+ch+sc;
				          	 		if(nump>=1&&nump<=6){
				          	 			goto deschoose2;
									   }
									else{
										invalidtotal();
										goto passchoose2;
									}
				          		deschoose2:

		if(des==1){

								bataneschoose2:
				
				depth=6; deptm=30;
				hrs=1;mins=40;
				fare=15500.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      BATANES (BTS)     ----------------------      ";

				timetebdep();



			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;

							}
								else if(des==2){

								bacolodchoose2:

				depth=4; deptm=25;
				hrs=1;mins=20;
				fare=9500.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     BACOLOD (BCD)      ----------------------      ";

				timetebdep();


			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;

							}
								else if(des==3){

								palawanchoose2:

				depth=6; deptm=20;
				hrs=1;mins=30;
				fare=13200.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      PALAWAN (PLN)  ------------------------      ";

				timetebdep();



			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;


							}
								else if(des==4){

								davaochoose2:

				depth=5; deptm=25;
				hrs=1;mins=50;
				fare=9230.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     DAVAO (DVO)       ----------------------      ";

				timetebdep();


			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;

						}



				            }//if of valid number of passengers.
				            else if(inf>=0&&inf<=4&&ch==0&&adu==0&&sc==0){
				            		cout<<endl;

							nopass();
				            	goto passchoose2;
							}

				            else{//action of invalid pass of private class international.

				            	invalidpass();
						 	goto passchoose2;
							}

				        break;//of case 2 business class of cab.

				    	default://switch cab
				            invalidcab();
						 	goto cabchoose1;

				          }//CLOSING OF switch cab.


						  
				     	
						 }//if of des of local
						 else{//ACTION IF INVALID NUMBER OF CHOICE:DES OF LOCAL
						    invalidlocdes();
					    	goto desloc1;
						 }
						 break;//of tdes of local.







				    case 2://tdes of international INTERNATIONAL./////////////////////////   INTERNATIONAL ////////////////////////////////////////////
				    system("cls");
				    desint1:
		            des=0;
		            frameinter();
					des1inter();
					des2inter();
					des3inter();
					des4inter();
					des5inter();
					noteget();
					
					while(desl!=1){
	genl=0;
	gotoxy(34,31);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 || v==72 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
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
		case KEY_UP:
			system("cls");
			goto tdeschoose1;
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
			SetConsoleTextAttribute(color, 11);	
			des1inter();
			SetConsoleTextAttribute(color, 14);
			des2inter();
			SetConsoleTextAttribute(color, 14);
			des3inter();
			SetConsoleTextAttribute(color, 14);
			des4inter();
			SetConsoleTextAttribute(color, 14);
			des5inter();
			SetConsoleTextAttribute(color, 14);
				break;
			case 2:
				SetConsoleTextAttribute(color, 14);
			des1inter();
			SetConsoleTextAttribute(color, 11);
			des2inter();
			SetConsoleTextAttribute(color, 14);
			des3inter();
			SetConsoleTextAttribute(color, 14);
			des4inter();
			SetConsoleTextAttribute(color, 14);
			des5inter();
			SetConsoleTextAttribute(color, 14);
				break;
			case 3:
				SetConsoleTextAttribute(color, 14);
			des1inter();
			SetConsoleTextAttribute(color, 14);
			des2inter();
			SetConsoleTextAttribute(color, 11);
			des3inter();
			SetConsoleTextAttribute(color, 14);
			des4inter();
			SetConsoleTextAttribute(color, 14);
			des5inter();
			SetConsoleTextAttribute(color, 14);
				break;
			case 4:
				SetConsoleTextAttribute(color, 14);
			des1inter();
			SetConsoleTextAttribute(color, 14);
			des2inter();
			SetConsoleTextAttribute(color, 14);
			des3inter();
			SetConsoleTextAttribute(color, 11);
			des4inter();
			SetConsoleTextAttribute(color, 14);
			des5inter();
			SetConsoleTextAttribute(color, 14);
				break;
			case 5:
				SetConsoleTextAttribute(color, 14);
			des1inter();
			SetConsoleTextAttribute(color, 14);
			des2inter();
			SetConsoleTextAttribute(color, 14);
			des3inter();
			SetConsoleTextAttribute(color, 14);
			des4inter();
			SetConsoleTextAttribute(color, 11);
			des5inter();
			SetConsoleTextAttribute(color, 14);
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
						if(des>=1&&des<=5){
							datechoose3:
							system("cls");

					    	depdatefunc();
				        //goes back to desint1 if key up is pressed.

					cabchoose3:
				         	system("cls");
				         	cab=0;
				         	
				         	framecab();
							cab1design();
							cab2design();
							noteget();
				         	
				         	while(cabl!=1){
	genl=0;
	gotoxy(34,36);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 || v==72 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
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
		case KEY_UP:
			system("cls");
			goto datechoose3;
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
				SetConsoleTextAttribute(color, 11);
				cab1design();
				SetConsoleTextAttribute(color, 14);
				cab2design();
				SetConsoleTextAttribute(color, 14);
				break;
			case 2:
				SetConsoleTextAttribute(color, 14);
				cab1design();
				SetConsoleTextAttribute(color, 11);
				cab2design();
				SetConsoleTextAttribute(color, 14);
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


				         	 switch(cab){

				          	case 1: //case 1 of switch cab.
				          	passchoose3:


	system("cls");
	cout<<endl<<endl;
	mercheader();
	passfunc();
																		
gotoxy(95,22);
cin>>inf;
gotoxy(95,27);
cin>>ch;
gotoxy(95,32);
cin>>adu;
gotoxy(95,37);
cin>>sc;


				          	if(inf>=1&&inf<=4&&ch>=1&&ch<=7&&adu>=1&&adu<=10&&sc>=1&&sc<=10){
				          		goto numpchoose3;
				          	}
				          	else if(inf>=0&&inf<=4&&ch>=1&&ch<=7&&adu>=1&&adu<=10||sc>=1&&sc<=10){
				          	 	goto numpchoose3;
							  }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=7&&adu>=1&&adu<=10||sc>=1&&sc<=10){
				          	 	goto numpchoose3;
							  }
							  else if(inf>=1&&inf<=4&&ch==0&&adu==0&&sc==0){
				          	    infantonly();
						 		goto passchoose3;
								   }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=7&&adu>=0&&adu<=10&&sc>=1&&sc<=10){



				          	 numpchoose3:
				          	 		nump=adu+inf+ch+sc;
				          	 		if(nump<=10){
				          	 			goto deschoose3;
									   }
									else{
										invalidtotal();
										goto passchoose3;
									}


				  				deschoose3:


								if(des==1){

								malaysiachoose1:

				depth=1; deptm=40;
				hrs=3;mins=55;
				fare=6199.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      MALAYSIA (MLYA)       ----------------------      ";

				timetebdep();



			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;




							}
								else if(des==2){

								indonesiachoose1:

				depth=1; deptm=50;
				hrs=3;mins=35;
				fare=5699.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      INDONESIA (IND)        ----------------------      ";

				timetebdep();


			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;


							}
								else if(des==3){

								singaporechoose1:

				depth=1; deptm=20;
				hrs=3;mins=25;
				fare=6899.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     SINGAPORE (SIN)       ----------------------      ";

				timetebdep();

			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;

							}
								else if(des==4){

								sokorchoose1:

			  	depth=2; deptm=5;
				hrs=4;mins=35;
				fare=12500.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      SOUTH KOREA (SHKA)       ----------------------      ";

				timetebdep();


			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;



								  }
							else if(des==5){
						japchoose1:
				depth=3; deptm=50;
				hrs=5;mins=15;
				fare=24800.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      JAPAN (JPN)       ----------------------      ";

				timetebdep();


			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
							
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;

					
							}

				            }
				            else if(inf>=0&&inf<=4&&ch==0&&adu==0&&sc==0){
				            				cout<<endl<<endl;
							nopass();
							goto passchoose3;
			     	}
				            else{//action of invalid pass of private class international.

				            invalidpass();
						 	goto passchoose3;
							}

							break;//of case 1 - private class-local.







				        case 2: //case 2 of switch cab.business class.of INTERNATIONAL
				        passchoose4:
				        
							
	system("cls");
	cout<<endl<<endl;
	mercheader();
	
	passfunc();
																		
gotoxy(95,22);
cin>>inf;
gotoxy(95,27);
cin>>ch;
gotoxy(95,32);
cin>>adu;
gotoxy(95,37);
cin>>sc;



				         	if(inf>=1&&inf<=4&&ch>=1&&ch<=4&&adu>=1&&adu<=6&&sc>=1&&sc<=6){
				          		goto numpchoose3;
				          	}
				          	else if(inf>=0&&inf<=4&&ch>=1&&ch<=4&&adu>=1&&adu<=6||sc>=1&&sc<=6){
				          	 	goto numpchoose3;
							  }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=4&&adu>=1&&adu<=6||sc>=1&&sc<=6){
				          	 	goto numpchoose3;
							  }
							  else if(inf>=1&&inf<=4&&ch==0&&adu==0&&sc==0){
				          	    infantonly();
						 		goto passchoose3;
								   }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=4&&adu>=0&&adu<=6&&sc>=1&&sc<=6){



				          	 	numpchoose4:
				          	 		nump=adu+inf+ch+sc;
				          	 		if(nump>=1&&nump<=6){
				          	 			goto deschoose4;
									   }
									else{
										invalidtotal();
										goto passchoose4;
									}

				          		deschoose4:

	if(des==1){

								malaysiachoose2:

				depth=3; deptm=20;
				hrs=3;mins=55;
				fare=12150.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      MALAYSIA (MLYA)       ----------------------      ";

				timetebdep();



			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;


							}
								else if(des==2){

								indonesiachoose2:

				depth=1; deptm=35;
				hrs=3;mins=15;
				fare=10850.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      INDONESIA (IND)       ----------------------      ";

				timetebdep();

			                cout<<"\n\t\t    Enter your chosen TIME: ";
		                 	cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;

							}
								else if(des==3){

								singaporechoose2:

				depth=6; deptm=5;
				hrs=3;mins=35;
				fare=13110.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     SINGAPORE (SIN)       ----------------------      ";

				timetebdep();


			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;


							}
								else if(des==4){

								sokorchoose2:

				depth=2; deptm=15;
				hrs=4;mins=40;
				fare=23850.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      SOUTH KOREA (SHKA)       ----------------------      ";

				timetebdep();


			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;


						}
						else if(des==5){

								japanchoose2:

				depth=1; deptm=40;
				hrs=5;mins=30;
				fare=31450.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      JAPAN (JPN)       ----------------------      ";

				timetebdep();

			                cout<<"\n\t\t    Enter your chosen TIME: ";
			                cin>>timed;
			                cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
							goto baggpay;

						}

				            }//if of valid number of passengers.
				           else if(inf>=0&&inf<=4&&ch==0&&adu==0&&sc==0){
				            nopass();
				            	goto passchoose4;
							}

				            else{//action of invalid pass of private class international.
				            nopasschoose4:
				            invalidpass();
						 	goto passchoose4;
							}

				        break;//of case 2 business class of cab INTERBATIONAL
				case 'a'...'z':
				case 'A'...'Z':
				    	default://switch cab
				          invalidcab();
						 	goto cabchoose3;

				          }//CLOSING OF switch cab. INTERNATIONAL


					
						 }//if of des of INTERNATIONAL
						 else{//ACTION IF INVALID NUMBER OF CHOICE:DES OF INTERNATIONAL
						 	invalidpass();
					    	goto desint1;
						 }
						 break;//of tdes of INTERNATIONAL.

					}//tdes switch



		break;




				case 2: //type - roundtrip. -----------------------   R   O   U   N   T   R  I   P    -----------------------------------------------------------------------------------------------------------------------------------------------------------------

					system("cls");
		        	tdeschoose2:
		        	tdes=0;
		        	
		        	frametdes();
					tdes1design();
					tdes2design();
					noteget();
		        	
		while(tdesl!=1){
	genl=0;
	gotoxy(34,36);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 || v==72 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
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
			case KEY_UP:
				system("cls");
			goto tripchoose1;
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
		SetConsoleTextAttribute(color, 11);
		tdes1design();
		SetConsoleTextAttribute(color, 14);
		tdes2design();
		SetConsoleTextAttribute(color, 14);
				break;
			case 2:
		SetConsoleTextAttribute(color, 14);
		tdes1design();
		SetConsoleTextAttribute(color, 11);
		tdes2design();
		SetConsoleTextAttribute(color, 14);
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

		            switch(tdes){
		                case 1: //LOCAL
		                system("cls");
		                	desloc2:
		               des=0;
		                framelocal();
					des1loc();
					des2loc();
					des3loc();
					des4loc();
					noteget();
					
					while(desl!=1){
	genl=0;
	gotoxy(34,31);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 || v==72 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
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
		case KEY_UP:
			system("cls");
			goto tdeschoose2;
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
			SetConsoleTextAttribute(color, 11);	
			des1loc();
			SetConsoleTextAttribute(color, 14);
			des2loc();
			SetConsoleTextAttribute(color, 14);
			des3loc();
			SetConsoleTextAttribute(color, 14);
			des4loc();
			SetConsoleTextAttribute(color, 14);
				break;
			case 2:
				SetConsoleTextAttribute(color, 14);
			des1loc();
			SetConsoleTextAttribute(color, 11);
			des2loc();
			SetConsoleTextAttribute(color, 14);
			des3loc();
			SetConsoleTextAttribute(color, 14);
			des4loc();
			SetConsoleTextAttribute(color, 14);
				break;
			case 3:
				SetConsoleTextAttribute(color, 14);
			des1loc();
			SetConsoleTextAttribute(color, 14);
			des2loc();
			SetConsoleTextAttribute(color, 11);
			des3loc();
			SetConsoleTextAttribute(color, 14);
			des4loc();
			SetConsoleTextAttribute(color, 14);
				break;
			case 4:
				SetConsoleTextAttribute(color, 14);
			des1loc();
			SetConsoleTextAttribute(color, 14);
			des2loc();
			SetConsoleTextAttribute(color, 14);
			des3loc();
			SetConsoleTextAttribute(color, 11);
			des4loc();
			SetConsoleTextAttribute(color, 14);
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

						if(des>=1&&des<=4){
							datechoose4:
							system("cls");

					    depdatefunc();

							cabchoose4: //choose which cabin class.
				         	system("cls");
				         	cab=0;
				         	
				         	framecab();
							cab1design();
							cab2design();
							noteget();
				         	
				         	while(cabl!=1){
	genl=0;
	gotoxy(34,36);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 || v==72 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
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
		case KEY_UP:
			system("cls");
			goto datechoose4;
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
				SetConsoleTextAttribute(color, 11);
				cab1design();
				SetConsoleTextAttribute(color, 14);
				cab2design();
				SetConsoleTextAttribute(color, 14);
				break;
			case 2:
				SetConsoleTextAttribute(color, 14);
				cab1design();
				SetConsoleTextAttribute(color, 11);
				cab2design();
				SetConsoleTextAttribute(color, 14);
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


				         	 switch(cab){
type=2;
				          	case 1: //case 1 of switch cab. - private
				          	passchoose5:
				          	
								  
	system("cls");
	cout<<endl<<endl;
	mercheader();
	passfunc();
						gotoxy(95,22);
cin>>inf;
gotoxy(95,27);
cin>>ch;
gotoxy(95,32);
cin>>adu;
gotoxy(95,37);
cin>>sc;

				          	if(inf>=1&&inf<=4&&ch>=1&&ch<=7&&adu>=1&&adu<=10&&sc>=1&&sc<=10){
				          		goto numpchoose5;
				          	}
				          	else if(inf>=0&&inf<=4&&ch>=1&&ch<=7&&adu>=1&&adu<=10||sc>=1&&sc<=10){
				          	 	goto numpchoose5;
							  }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=7&&adu>=1&&adu<=10||sc>=1&&sc<=10){
				          	 	goto numpchoose5;
							  }
							  else if(inf>=1&&inf<=4&&ch==0&&adu==0&&sc==0){
				          	    infantonly();
						 		goto passchoose5;
								   }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=7&&adu>=0&&adu<=10&&sc>=1&&sc<=10){



				          	 	numpchoose5:
				          	 		nump=adu+inf+ch+sc;
				          	 		if(nump>=1&&nump<=10){
				          	 			goto deschoose5;
									   }
									else{ //displays else body if invalid input
										invalidtotal();
										goto numpchoose5;
									}
				  				deschoose5:


								if(des==1){

								bataneschoose5: //timetable for batanes private local oneway.

				depth=6; deptm=30;
				hrs=1;mins=40;
				fare=8650.0;
				fnum=fnum+5;
					system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                      [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      BATANES (BTS)     ----------------------      ";
		
			timetebdep();


							cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
						
							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;

				repth=1; reptm=40;
				rhrs=4;rmins=25;
				fare=8650.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------      BATANES (BTS)    >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;

			goto baggpay;





							}
								else if(des==2){ //timetable for bacolod private local oneway.

								bacolodchoose5:


			depth=4; deptm=25;
				hrs=1;mins=20;
				fare=4543.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                      [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     BACOLOD (BCD)       ----------------------      ";
		
			timetebdep();


							cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");
						
							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;



				repth=5; reptm=55;
				rhrs=1;rmins=25;
				fare=4543.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------     BACOLOD (BCD)    >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;
			goto baggpay;

							}
								else if(des==3){ //timetable for palawan private local oneway.

								palawanchoose5:

					depth=7; deptm=0;
				hrs=1;mins=25;
				fare=5882.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     PALAWAN (PLN)  ------------------------      ";

				timetebdep();
			
				
							cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
						
							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;

			repth=0; reptm=45;
				rhrs=1;rmins=15;
				fare=5882.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------      PALAWAN (PLN)     >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;

			goto baggpay;


							}
								else if(des==4){ //timetable for davao private local oneway.

								davaochoose5:

				depth=5; deptm=25;
				hrs=1;mins=50;
				fare=4096.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     DAVAO (DVO)       ----------------------      ";

				timetebdep();


								cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");

							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
			repth=7; reptm=30;
				rhrs=1;rmins=25;
				fare=5882.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------     DAVAO (DVO)     >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;

			goto baggpay;


								  }

				            }

							else if(inf>=1&&inf<=4&&ch==0&&sc==0&&adu==0){
							nopass();
						 	goto passchoose5;
							}
				            else{//action of invalid pass of private class.
				            nopasschoose5:
							invalidpass();
						 	goto passchoose5;
							}

							break;//of case 1 - private class-local.



							//BUSINESS OF LOCAL OF PRIVATE OF ONE WAY



				        case 2: //case 2 of switch cab.business class.of local
				        passchoose6:
				        
							
				        system("cls");
				          	
							
							system("cls");
							cout<<endl<<endl;
					        mercheader();
					        passfunc();
						gotoxy(95,22);
cin>>inf;
gotoxy(95,27);
cin>>ch;
gotoxy(95,32);
cin>>adu;
gotoxy(95,37);
cin>>sc;


				         if(inf>=1&&inf<=4&&ch>=1&&ch<=4&&adu>=1&&adu<=6&&sc>=1&&sc<=6){
				          		goto numpchoose6;
				          	}
				          	else if(inf>=0&&inf<=4&&ch>=1&&ch<=4&&adu>=1&&adu<=6||sc>=1&&sc<=6){
				          	 	goto numpchoose6;
							  }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=6&&adu>=1&&adu<=6||sc>=1&&sc<=6){
				          	 	goto numpchoose6;
							  }
							  else if(inf>=1&&inf<=4&&ch==0&&adu==0&&sc==0){
				          	    infantonly();
						 		goto passchoose6;
								   }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=4&&adu>=0&&adu<=6&&sc>=1&&sc<=6){




				          	 	numpchoose6:
				          	 			nump=adu+inf+ch+sc;
				          	 		if(nump>=1&&nump<=10){
				          	 			goto deschoose6;
									   }
									else{
										invalidtotal();
										goto numpchoose6;
									}
				          		deschoose6:

								if(des==1){

								bataneschoose6: //timetable for batanes business local oneway.

				depth=6; deptm=30;
				hrs=1;mins=40;
				fare=15500.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      BATANES (BTS)     ----------------------      ";

				timetebdep();
			
				
								cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
					
							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
				repth=3; reptm=0;
				rhrs=2;rmins=25;
				fare=15500.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------      BATANES (BTS)    >>     MANILA, PHILIPPINES       ----------------------      ";

			timetebret();
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;

							 goto baggpay;

							}
								else if(des==2){ //timetable for bacolod business local oneway.

								bacolodchoose6:

				depth=4; deptm=25;
				hrs=1;mins=20;
				fare=9500.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     BACOLOD (BCD)      ----------------------      ";

				timetebdep();

							cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");

							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
			repth=6; reptm=5;
				rhrs=1;rmins=20;
				fare=9500.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------     BACOLOD (BCD)    >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;

						goto baggpay;

							}
								else if(des==3){

								palawanchoose6: //timetable for puerto princesa business local oneway.
				depth=6; deptm=20;
				hrs=1;mins=30;
				fare=13200.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      PALAWAN (PLN)  ------------------------      ";

			timetebdep();



							cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");

							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
				repth=6; reptm=20;
				rhrs=1;rmins=25;
				fare=13200.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURNE DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------      PALAWAN (PLN)     >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;


					goto baggpay;

							}
								else if(des==4){

								davaochoose6: //timetable for davao business local oneway.
				depth=5; deptm=25;
				hrs=1;mins=50;
				fare=9230.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     DAVAO (DVO)       ----------------------      ";

				timetebdep();



						cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");

							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
				repth=7; reptm=5;
				rhrs=1;rmins=55;
				fare=9230.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------     DAVAO (DVO)     >>     MANILA, PHILIPPINES       ----------------------      ";

			timetebret();
				
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;


							 goto baggpay;

						}



				            }//if of valid number of passengers.
				            else if(inf>=0&&inf<=4&&ch==0&&adu==0&&sc==0){
							nopass();
				            	goto passchoose6;
							}

				            else{//ELSE OF INVALID NUMB OF PASS of bussiness class.
								invalidpass();
						 		goto passchoose6;
						    	}

				        break;//of case 2 business class of cab.

				    	default://switch cab
				          invalidcab();
						 	goto cabchoose4;

				          }//CLOSING OF switch cab.


						  
						 }//if of des of local
						 else{//ACTION IF INVALID NUMBER OF CHOICE:DES OF LOCAL
						 	invalidlocdes();
					    	goto desloc2;
						 }
						 break;//of tdes of local.







				    case 2://tdes of international INTERNATIONAL./////////////////////////   INTERNATIONAL ////////////////////////////////////////////
				    system("cls");
				    desint2:
		              des=0;
		                frameinter();
					des1inter();
					des2inter();
					des3inter();
					des4inter();
					des5inter();
					noteget();
					
					while(desl!=1){
	genl=0;
	gotoxy(34,31);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 || v==72 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
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
		case KEY_UP:
			system("cls");
			goto tdeschoose2;
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
			SetConsoleTextAttribute(color, 11);	
			des1inter();
			SetConsoleTextAttribute(color, 14);
			des2inter();
			SetConsoleTextAttribute(color, 14);
			des3inter();
			SetConsoleTextAttribute(color, 14);
			des4inter();
			SetConsoleTextAttribute(color, 14);
			des5inter();
			SetConsoleTextAttribute(color, 14);
				break;
			case 2:
				SetConsoleTextAttribute(color, 14);
			des1inter();
			SetConsoleTextAttribute(color, 11);
			des2inter();
			SetConsoleTextAttribute(color, 14);
			des3inter();
			SetConsoleTextAttribute(color, 14);
			des4inter();
			SetConsoleTextAttribute(color, 14);
			des5inter();
			SetConsoleTextAttribute(color, 14);
				break;
			case 3:
				SetConsoleTextAttribute(color, 14);
			des1inter();
			SetConsoleTextAttribute(color, 14);
			des2inter();
			SetConsoleTextAttribute(color, 11);
			des3inter();
			SetConsoleTextAttribute(color, 14);
			des4inter();
			SetConsoleTextAttribute(color, 14);
			des5inter();
			SetConsoleTextAttribute(color, 14);
				break;
			case 4:
				SetConsoleTextAttribute(color, 14);
			des1inter();
			SetConsoleTextAttribute(color, 14);
			des2inter();
			SetConsoleTextAttribute(color, 14);
			des3inter();
			SetConsoleTextAttribute(color, 11);
			des4inter();
			SetConsoleTextAttribute(color, 14);
			des5inter();
			SetConsoleTextAttribute(color, 14);
				break;
			case 5:
				SetConsoleTextAttribute(color, 14);
			des1inter();
			SetConsoleTextAttribute(color, 14);
			des2inter();
			SetConsoleTextAttribute(color, 14);
			des3inter();
			SetConsoleTextAttribute(color, 14);
			des4inter();
			SetConsoleTextAttribute(color, 11);
			des5inter();
			SetConsoleTextAttribute(color, 14);
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

						if(des>=1&&des<=5){
							datechoose5:
							system("cls");
							depdatefunc();

							cabchoose5:
				         	cab=0;
				         	system("cls");
				         	
				         	framecab();
							cab1design();
							cab2design();
							noteget();
				         	
				         	while(cabl!=1){
	genl=0;
	gotoxy(34,36);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 || v==72 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
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
		case KEY_UP:
			system("cls");
			goto datechoose5;
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
				SetConsoleTextAttribute(color, 11);
				cab1design();
				SetConsoleTextAttribute(color, 14);
				cab2design();
				SetConsoleTextAttribute(color, 14);
				break;
			case 2:
				SetConsoleTextAttribute(color, 14);
				cab1design();
				SetConsoleTextAttribute(color, 11);
				cab2design();
				SetConsoleTextAttribute(color, 14);
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

				         	 switch(cab){

				          	case 1: //case 1 of switch cab.- private
				          	passchoose7:
				          		
								  
				          	system("cls");
system("cls");				          	
cout<<endl<<endl;
mercheader();
passfunc();

gotoxy(95,22);
cin>>inf;
gotoxy(95,27);
cin>>ch;
gotoxy(95,32);
cin>>adu;
gotoxy(95,37);
cin>>sc;


				          	if(inf>=1&&inf<=4&&ch>=1&&ch<=7&&adu>=1&&adu<=10&&sc>=1&&sc<=10){
				          		goto numpchoose7;
				          	}
				          	else if(inf>=0&&inf<=4&&ch>=1&&ch<=7&&adu>=1&&adu<=10||sc>=1&&sc<=10){
				          	 	goto numpchoose7;
							  }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=7&&adu>=1&&adu<=10||sc>=1&&sc<=10){
				          	 	goto numpchoose7;
							  }
							  else if(inf>=1&&inf<=4&&ch==0&&adu==0&&sc==0){
				          	    infantonly();
						 		goto passchoose7;
								   }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=7&&adu>=0&&adu<=10&&sc>=1&&sc<=10){



				          	 	numpchoose7:
				          	 		nump=adu+inf+ch+sc;
				          	 		if(nump<=10){
				          	 			goto deschoose7;
									   }
									else{
										invalidtotal();
										goto numpchoose7;
									}


				  				deschoose7:


								if(des==1){

								malaysiachoose7:

				depth=1; deptm=40;
				hrs=3;mins=55;
				fare=6199.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      MALAYSIA (MLYA)       ----------------------      ";

			timetebdep();


							cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");

							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
	//para sa presyo
	fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
				repth=1; reptm=40;
				rhrs=4;rmins=25;
				fare=6199.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------       MALAYSIA (MLYA)     >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;


							goto baggpay;
							}
								else if(des==2){

								indonesiachoose7:
			depth=1; deptm=50;
				hrs=3;mins=35;
				fare=5699.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      INDONESIA (IND)        ----------------------      ";

				timetebdep();
				
				
							cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
							system("cls");

							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
	//para sa presyo
	fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
				repth=0; reptm=10;
				rhrs=5;rmins=30;
				fare=5699.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------      INDONESIA (IND)     >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;


							goto baggpay;

							}
								else if(des==3){

								singaporechoose7:

				depth=1; deptm=20;
				hrs=3;mins=25;
				fare=6899.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     SINGAPORE (SIN)       ----------------------      ";

				timetebdep();

							cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");

							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
	//para sa presyo
	fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
				repth=1; reptm=35;
				rhrs=3;rmins=45;
				fare=6899.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------     SINGAPORE (SIN)     >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;


							goto baggpay;

							}
								else if(des==4){

								sokorchoose7:

				depth=2; deptm=5;
				hrs=4;mins=35;
				fare=12500.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------     MANILA, PHILIPPINES     >>      SOUTH KOREA (SHKA)       ----------------------      ";

				timetebdep();

				
								cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");

							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
	//para sa presyo
	fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
				repth=7; reptm=45;
				rhrs=2;rmins=20;
				fare=12500.0;
				fnum=fnum+5;
				system("cls");
				    		cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------      SOUTH KOREA (SHKA)     >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
				
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;

								goto baggpay;
								  }
							else if(des==5){

								japanchoose7:
				depth=3; deptm=50;
				hrs=5;mins=15;
				fare=24800.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      JAPAN (JPN)       ----------------------      ";

			timetebdep();


							cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");

							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
	//para sa presyo
	fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
				repth=9; reptm=0;
				rhrs=3;rmins=30;
				fare=24800.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [PRIVATE CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------      JAPAN (JPN)     >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
				
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;

							goto baggpay;
							}

				            }
				            else if(inf>=0&&inf<=4&&ch==0&&adu==0&&sc==0){
		                    nopass();
				            	goto passchoose7;
							}
				            else{//action of invalid pass of private class international.
				            nopasschoose7:
				            invalidpass();
						 	goto passchoose7;
							}

							break;//of case 1 - private class-local.







				        case 2: //case 2 of switch cab.business class.of INTERNATIONAL
				        passchoose8:
				        
							
				        system("cls");
	system("cls");
	cout<<endl<<endl;
	mercheader();
	passfunc();
gotoxy(95,22);
cin>>inf;
gotoxy(95,27);
cin>>ch;
gotoxy(95,32);
cin>>adu;
gotoxy(95,37);
cin>>sc;


				         	if(inf>=1&&inf<=4&&ch>=1&&ch<=4&&adu>=1&&adu<=6&&sc>=1&&sc<=6){
				          		goto numpchoose3;
				          	}
				          	else if(inf>=0&&inf<=4&&ch>=1&&ch<=6&&adu>=1&&adu<=6||sc>=1&&sc<=6){
				          	 	goto numpchoose3;
							  }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=4&&adu>=1&&adu<=6||sc>=1&&sc<=6){
				          	 	goto numpchoose3;
							  }
							  else if(inf>=1&&inf<=4&&ch==0&&adu==0&&sc==0){
				          	    infantonly();
						 		goto passchoose3;
								   }
							else if(inf>=0&&inf<=4&&ch>=0&&ch<=4&&adu>=0&&adu<=6&&sc>=1&&sc<=6){



				          	 	numpchoose8:
				          	 		nump=adu+inf+ch+sc;
				          	 		if(nump>=1&&nump<=6){
				          	 			goto deschoose8;
									   }
									else{
										invalidtotal();
										goto passchoose8;
									}

				          		deschoose8:

								if(des==1){

								malaysiachoose8:

		depth=3; deptm=20;
				hrs=3;mins=55;
				fare=12150.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      MALAYSIA (MLYA)       ----------------------      ";

				timetebdep();
		
				
							cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");

							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
	//para sa presyo
	fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
				repth=1; reptm=35;
				rhrs=4;rmins=5;
				fare=12150.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------       MALAYSIA (MLYA)     >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
				
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;

							goto baggpay;
							}
								else if(des==2){

								indonesiachoose8:

				depth=1; deptm=35;
				hrs=3;mins=15;
				fare=10850.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      INDONESIA (IND)       ----------------------      ";

				timetebdep();


							cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");

							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
	//para sa presyo
	fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
				repth=0; reptm=40;
				rhrs=5;rmins=15;
				fare=10850.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------      INDONESIA (IND)     >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
				
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;

							goto baggpay;
							}
								else if(des==3){

								singaporechoose8:

				depth=6; deptm=5;
				hrs=3;mins=35;
				fare=13110.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     SINGAPORE (SIN)       ----------------------      ";

				timetebdep();


							cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");
						

							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
	//para sa presyo
	fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
		repth=5; reptm=15;
				rhrs=3;rmins=40;
				fare=13110.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------     SINGAPORE (SIN)     >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;

							goto baggpay;
							}
								else if(des==4){

								sokorchoose8:

				depth=2; deptm=15;
				hrs=4;mins=40;
				fare=23850.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>     SOUTH KOREA (SHKA)       ----------------------      ";

				timetebdep();
			

							cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");

							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
	fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
			repth=0; reptm=25;
				rhrs=3;rmins=40;
				fare=23850.0;
				fnum=fnum+5;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------      SOUTH KOREA (SHKA)     >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;

							goto baggpay;
						}
						else if(des==5){

								japanchoose8:

				depth=1; deptm=40;
				hrs=5;mins=30;
				fare=31450.0;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN DEPARTURE DATE: "<<depm<<"/"<<depd<<"/"<<depy<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                        -------------------------   MANILA, PHILIPPINES     >>      JAPAN (JPN)       ----------------------      ";

			timetebdep();
			
				
							cout<<"\n                      Enter chosen time ex. (1-5): ";
							cin>>timed;
							cout<<endl<<endl;
							cout<<"\n                      Press any key to confirm and proceed.";
							system("pause");

							returndatechoose();
timech=1;yt=0;timeit=0; fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
			repth=7; reptm=0;
				rhrs=1;rmins=25;
				fare=5882.0;
				system("cls");
				    	cout<<endl<<endl;
				mercheader();
			gotoxy(2,11);
			cout<<"                                                       LIST OF TIME ON YOUR GIVEN RETURN DATE: "<<retm<<"/"<<retd<<"/"<<rety<<endl<<endl;
		    gotoxy(2,13);
			cout<<"                                                                       [BUSINESS CLASS]";
			gotoxy(2,15);
			cout<<"                              ----------------------      JAPAN (JPN)     >>     MANILA, PHILIPPINES       ----------------------      ";

				timetebret();
				
			cout<<"\n\t\t    Enter your chosen TIME: ";
			cin>>timer;
			cout<<endl<<endl;
							goto baggpay;
						}



				            }
							else if(inf>=0&&inf<=4&&ch==0&&adu==0&&sc==0){
							nopass();
				            	goto passchoose8;
							}//if of valid number of passengers.
				            else{//ELSE OF INVALID NUMB OF PASS of bussiness class. INTERNATIONAL ONE WAY
				            invalidpass();
						 		goto passchoose8;
						    	}

				        break;//of case 2 business class of cab INTERBATIONAL
				        	case 'a'...'z':
				case 'A'...'Z':
				    	default://switch cab
				          invalidcab();
						 	goto cabchoose5;

				          }//CLOSING OF switch cab. INTERNATIONAL


					
						 }//if of des of INTERNATIONAL
						 else{//ACTION IF INVALID NUMBER OF CHOICE:DES OF INTERNATIONAL
						 	invalidintdes();
					 	goto desint2;
						 }
						 break;//of tdes of INTERNATIONAL.
		default:
		                invalidans();
					 	goto tdeschoose2;
					}//tdes switch


				break;
				case 'a'...'z':
				case 'A'...'Z':
				default:
				invalidans();
				 goto tripchoose1;}




				break;

			case 2:
			bookdet();
			    system("pause");
				system("cls");
				system("color 0e");
				goto menu;
			    break;
			case 3:
				system("cls");


	Sleep(200);

SetConsoleTextAttribute(color, 14);
							cout<<"\n\n\n\n\n";
								mercheader();
								cout<<endl;
			SetConsoleTextAttribute(color, 11);
			cout<<"                                                  "<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<"    "<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<"      "<<m<<m<<"    "<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<endl;
			Sleep(100);
			cout<<"                                                 "<<m<<m<<"    "<<m<<m<<" "<<m<<m<<"    "<<m<<" "<<m<<m<<"    "<<m<<m<<" "<<m<<m<<"    "<<m<<m<<"   "<<m<<m<<"        "<<m<<m<<"    "<<m<<m<<" "<<m<<m<<endl;
			Sleep(100);
			cout<<"                                                 "<<m<<m<<m<<m<<m<<m<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<"    "<<m<<m<<" "<<m<<m<<"    "<<m<<m<<"   "<<m<<m<<"        "<<m<<m<<"    "<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<m<<endl;
			Sleep(100);
			cout<<"                                                 "<<m<<m<<"    "<<m<<m<<" "<<m<<m<<"    "<<m<<" "<<m<<m<<"    "<<m<<m<<" "<<m<<m<<"    "<<m<<m<<"   "<<m<<m<<"        "<<m<<m<<"    "<<m<<m<<"      "<<m<<m<<endl;
			Sleep(100);
			cout<<"                                                 "<<m<<m<<"    "<<m<<m<<" "<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<"   "<<m<<m<<m<<m<<m<<m<<"    "<<m<<m<<"         "<<m<<m<<m<<m<<m<<m<<"  "<<m<<m<<m<<m<<m<<m<<m<<endl<<endl;
			
			SetConsoleTextAttribute(color, 12);
			Sleep(100);
			cout<<"                                                 "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
			Sleep(100);
			cout<<"                                              "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl<<endl;
			SetConsoleTextAttribute(color, 10);
			Sleep(100);
			cout<<"                             "<<g<<g<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m
                                                <<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<g<<g<<endl;
			cout<<"                             "<<g<<g<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m
                                                <<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<g<<g<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                 "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                 "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                 "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                 "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                 "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                 "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m
                                                <<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<g<<g<<endl;
			cout<<"                             "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m
                                                <<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl<<endl;
			
			SetConsoleTextAttribute(color, 13);
			Sleep(100);
			cout<<"                                      "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
			Sleep(100);
			cout<<"                                             "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
			
			
			SetConsoleTextAttribute(color, 15);
			
			gotoxy(31,26);
			Sleep(100);
			cout<<"   The MERC AIRLINE TICKETING SERVICE offers private aviation reservation for certain destination.";
			gotoxy(32,27);
			Sleep(100);
			cout<<"    We are dedicated to provide the highest customer service and quality goods to our customers.";
			gotoxy(33,28);
			Sleep(100);
			cout<<"                 We aim to create value to our clients by delivering good services,";
			gotoxy(34,29);
			Sleep(100);
			cout<<"                             to make flight reservations more easily,";
			gotoxy(35,30);
			Sleep(100);
			cout<<"            efficiently and effectively with the best clients, systems and processes.";
			
			SetConsoleTextAttribute(color, 14);
	Sleep(100);
	getch();
	system("cls");
	
	

				goto menu;
				break;
				
				
			case 4: // exit program
				system("cls");
				
				
	Sleep(200);


							cout<<"\n\n\n\n\n";
								mercheader();
								cout<<endl;
			SetConsoleTextAttribute(color, 12);
			Sleep(100);
			cout<<"                                                 "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
			Sleep(100);
			cout<<"                                              "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl<<endl;
			SetConsoleTextAttribute(color, 11);
			Sleep(100);
			cout<<"                             "<<g<<g<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m
                                                <<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<g<<g<<endl;
			cout<<"                             "<<g<<g<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m
                                                <<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<g<<g<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                 "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                 "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                 "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                 "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                 "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                 "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<"                                                                                                     "<<g<<g<<"                "<<endl;
			Sleep(100);
			cout<<"                             "<<g<<g<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m
                                                <<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<g<<g<<endl;
			cout<<"                             "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m
                                                <<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl<<endl;
			
			SetConsoleTextAttribute(color, 13);
			Sleep(100);
			cout<<"                                      "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
			Sleep(100);
			cout<<"                                             "<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<m<<endl;
			
			SetConsoleTextAttribute(color, 15);
			gotoxy(60,21);
			Sleep(100);
			cout<<"You have successfully exited the program.";
			gotoxy(60,23);
			Sleep(100);
			cout<<"          Please come again!";
			
			SetConsoleTextAttribute(color, 14);
			getch();
			
				return 0;

				break;

				case 'a'...'z':
				case 'A'...'Z':
			default:

			invalidans();
			goto menu;
			getch();

		baggpay:
			bagg();
			loading();
			//personal
			detpay();
			
			confirm:
				
				system("cls");
				cout<<"\n\n\n\n\n";
			mercheader();
			cout<<endl<<endl;
					
				        cout<<"                   "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g
						                              <<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g
													  <<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl;
						cout<<"                   "<<g<<"                                                                                                                                "<<g<<endl;
				    	cout<<"                   "<<g<<"                                                                                                                                "<<g<<endl;
				    	cout<<"                   "<<g<<"         < CONFIRMATION ABOUT YOUR BOOKING >                                                                                    "<<g<<endl;
				    	cout<<"                   "<<g<<"                                                                                                                                "<<g<<endl;
						cout<<"                   "<<g<<"         Choose your option.                                                                                                    "<<g<<endl;
				    	cout<<"                   "<<g<<"         Press RIGHT or LEFT arrow keys to view options. ENTER to submit.                                                       "<<g<<endl;
				    	cout<<"                   "<<g<<"                                                                                                                                "<<g<<endl;
						cout<<"                   "<<g<<"         < 1 > Confirm and Continue Booking.      < 2 > Cancel and stop booking. >      < 3 > Cancel and book again.            "<<g<<endl;
				    	cout<<"                   "<<g<<"                                                                                                                                "<<g<<endl;
				    	cout<<"                   "<<g<<"                                                                                                                                "<<g<<endl;
						cout<<"                   "<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g
						                              <<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g
													  <<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<g<<endl<<endl;
						
			cout<<"                              Choose an option: ";
	gotoxy(43,27);
			
	while(conbookl!=1){
	genl=0;
	gotoxy(43,27);
	while(genl!=1){
		int v=0;
		
		if(v == 0 || v == 224 || v== 13 ||  v==10 ){ //to specify arrow keys exemplifying other values such as the ascii code.
	
		switch((v=_getch()))
		{
		case KEY_LEFT:
			if(conbook==1)
			{
				
			}
			else
			{
				
				conbook-=1;
			}
			break;
		case KEY_RIGHT:
			if(conbook==7)
			{

			}
			else
			{
			
				conbook+=1;
			}
			break;
		case ENTER:
			if(conbook==0){
			continue;
			}
			else{
			
			genl=1;
		continue;
		}
		break;	
		}
}
	switch(conbook)
		{
			case 1:
				gotoxy(48,27);
				cout<<"1";
			break;
			case 2:
				gotoxy(48,27);
				cout<<"2";
			break;
			case 3:
				gotoxy(48,27);
				cout<<"3";
			break;
			
		}
	
	}


	if(conbook!=1&&conbook!=2&&conbook!=3){
		conbookl--;
		system("cls");
	}
	else
	{
		conbookl=1;
		
	}
}// while confirm booking

switch(conbook)
		{
			case 1:
			//continue booking-proceeds to payment.
			goto out;
				break;
			case 2:
			//continue booking and stops-proceeds to menu.
			goto menu;
				break;
			case 3:
			//continue booking-proceeds to (type) switch.
			goto tripchoose1;
			//RE DECLARATION OF VARIABLES:
	sttl[11];attl[11];ittl;cttl[7];dscnt=0;vat=0;prc;
	string afn[10];amn[10];aln[10];sfn[10];smn[10];sln[10];cfn[7];cmn[7];cln[7];bfn[10];bmn[10];bln[10];
	tamt=0;adua[10];inf=0;ch=0;adu=0;sc=0;sca[10];cha[7];infa=0;f=0;nump=0;ibd=0;iby=0;abd[10];aby[10];sbd[10];sby[10];cbd[7];cby[7];ibm=0;abm[10];sbm[10];cbm[7];dd=0;bg=0;ins=0;/* total insurance lahat lahat na ba*/l=0;regis=0;

	tdis=0;tvat=0;ramt=0;cash;change=0;tins=0;sumbgall=0;
	i=0;conbook=0;conbookl=0;iage=0;chage=0;aduage=0;scage=0;
    int bggpch[7];bggpinf[4];bggpsc[10];bggpadu[10];
	infins[10];/* insurance ng infant*/chins[10];/* sa child*/aduins[10];/*sa adult*/scins[10];/*senior*/busins=4500;priins=8500;
	avl=0; /*ung maga=avail o hinde*/
	//loop iterators
	menl=0;genl=0;typel=0;tdesl=0;desl=0;cabl=0;infl=0;chl=0;scl=0;adul=0;bookl=0;book=0;avll=0;avl=0;timedl=0;timerl=0; 
	depm=0;retm=0;retd=0;rety=0;depd=0;depy=0;avd=0;avm=0;avy=0;
	fnum=200;
 	men=0;type=0;tdes=0;des=0;cab=0;
	 //baggage:
	//seat1;seat2;seat3;seat4;seat5;seat6;seat7;seat8;seat9;seat10;	
	//variables whohold the baggage price oramount of apassenger bg(baggage)p(price or amount)inf(passenger can be adu orsc orch)
	bggpinf[10];bggpch[7];bggpadu[10];bggpsc[10];
	
	bgsc[10];bgadu[10];bginf[10];bgch[10];sumbgsc=0;sumbgch=0;sumbgadu=0;sumbginf=0;sumbginf2=0;sumbginf3=0;sumbgch2=0;sumbgch3=0;sumbgadu2=0;
	sumbgadu3=0;sumbgsc2=0;sumbgsc3=0;rhrs=0;rmins=0;
	//BAGONG VARS
	timech=1;arrth=0;depth=0;arrtm=0;deptm=0;yt=0;timeit=1;
	//depende saan ang lugar
	hrs=0;mins=0;
	//para sa presyo
	fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;

cout<<"\n\n\n\n\n\n";
			system("pause");
			system("cls");
				break;
			
		}
			
			cout<<"\n\n\n\n\n\n";
			system("pause");
			system("cls");
                
			//end of confirmation
			
			
		}

		 //payment
		 out:
		 	system("pause");
		 	system("cls");
		 payment();
		 system("pause");
		 	system("cls");
		 bookdet();
		 	system("pause");
			system("cls");
		 	//ticketinfo na wala pa aaaaainez
		cout<<endl<<endl;
	
	
	mercheader();
	
///Book Again
bkagainbord();
bkagain1des();
bkagain2des();
noteget();
bookloop();

getch();

	if(book==1){
	genl=0;menl=0;typel=0;men=0;type=0;des=0;cab=0;typel=0;tdesl=0;desl=0;cabl=0;infl=0;chl=0;adul=0;scl=0;avll=0;avl=0;
	cout<<"\n\n\n\n\n\n";
	system("pause");
	system("cls");
	sttl[11];attl[11];ittl;cttl[7];dscnt=0;vat=0;prc;
	string afn[10];amn[10];aln[10];sfn[10];smn[10];sln[10];cfn[7];cmn[7];cln[7];bfn[10];bmn[10];bln[10];
	tamt=0;adua[10];inf=0;ch=0;adu=0;sc=0;sca[10];cha[7];infa=0;f=0;nump=0;ibd=0;iby=0;abd[10];aby[10];sbd[10];sby[10];cbd[7];cby[7];ibm=0;abm[10];sbm[10];cbm[7];dd=0;bg=0;ins=0;/* total insurance lahat lahat na ba*/l=0;regis=0;

	tdis=0;tvat=0;ramt=0;cash;change=0;tins=0;sumbgall=0;
	i=0;conbook=0;conbookl=0;iage=0;chage=0;aduage=0;scage=0;
    int bggpch[7];bggpinf[4];bggpsc[10];bggpadu[10];
	infins[10];/* insurance ng infant*/chins[10];/* sa child*/aduins[10];/*sa adult*/scins[10];/*senior*/busins=4500;priins=8500;
	avl=0; /*ung maga=avail o hinde*/
	//loop iterators
	menl=0;genl=0;typel=0;tdesl=0;desl=0;cabl=0;infl=0;chl=0;scl=0;adul=0;bookl=0;book=0;timedl=0;timerl=0;
	depm=0;retm=0;retd=0;rety=0;depd=0;depy=0;avd=0;avm=0;avy=0;
	fnum=200;
 	men=0;type=0;tdes=0;des=0;cab=0;rhrs=0;rmins=0;
	 //baggage:
	//seat1;seat2;seat3;seat4;seat5;seat6;seat7;seat8;seat9;seat10;	
	//variables whohold the baggage price oramount of apassenger bg(baggage)p(price or amount)inf(passenger can be adu orsc orch)
	bggpinf[10];bggpch[7];bggpadu[10];bggpsc[10];
	
	bgsc[10];bgadu[10];bginf[10];bgch[10];sumbgsc=0;sumbgch=0;sumbgadu=0;sumbginf=0;sumbginf2=0;sumbginf3=0;sumbgch2=0;sumbgch3=0;sumbgadu2=0;
	sumbgadu3=0;sumbgsc2=0;sumbgsc3=0;
	//BAGONG VARS
	timech=1;arrth=0;depth=0;arrtm=0;deptm=0;yt=0;timeit=1;
	//depende saan ang lugar
	hrs=0;mins=0;
	//para sa presyo
	fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
		goto tripchoose1;
	}
	else{
	sttl[11];attl[11];ittl;cttl[7];dscnt=0;vat=0;prc;
	string afn[10];amn[10];aln[10];sfn[10];smn[10];sln[10];cfn[7];cmn[7];cln[7];bfn[10];bmn[10];bln[10];
	tamt=0;adua[10];inf=0;ch=0;adu=0;sc=0;sca[10];cha[7];infa=0;f=0;nump=0;ibd=0;iby=0;abd[10];aby[10];sbd[10];sby[10];cbd[7];cby[7];ibm=0;abm[10];sbm[10];cbm[7];dd=0;bg=0;ins=0;/* total insurance lahat lahat na ba*/l=0;regis=0;

	tdis=0;tvat=0;ramt=0;cash;change=0;tins=0;sumbgall=0;
	i=0;conbook=0;conbookl=0;iage=0;chage=0;aduage=0;scage=0;
    int bggpch[7];bggpinf[4];bggpsc[10];bggpadu[10];
	infins[10];/* insurance ng infant*/chins[10];/* sa child*/aduins[10];/*sa adult*/scins[10];/*senior*/busins=4500;priins=8500;
	avl=0; /*ung maga=avail o hinde*/
	//loop iterators
	menl=0;genl=0;typel=0;tdesl=0;desl=0;cabl=0;infl=0;chl=0;scl=0;adul=0;bookl=0;book=0,avll=0,avl=0;timedl=0;timerl=0;
	depm=0;retm=0;retd=0;rety=0;depd=0;depy=0;avd=0;avm=0;avy=0;
	fnum=200;
 	men=0;type=0;tdes=0;des=0;cab=0;
	 //baggage:
	//seat1;seat2;seat3;seat4;seat5;seat6;seat7;seat8;seat9;seat10;	
	//variables whohold the baggage price oramount of apassenger bg(baggage)p(price or amount)inf(passenger can be adu orsc orch)
	bggpinf[10];bggpch[7];bggpadu[10];bggpsc[10];rhrs=0;rmins=0;
	
	bgsc[10];bgadu[10];bginf[10];bgch[10];sumbgsc=0;sumbgch=0;sumbgadu=0;sumbginf=0;sumbginf2=0;sumbginf3=0;sumbgch2=0;sumbgch3=0;sumbgadu2=0;
	sumbgadu3=0;sumbgsc2=0;sumbgsc3=0;
	//BAGONG VARS
	timech=1;arrth=0;depth=0;arrtm=0;deptm=0;yt=0;timeit=1;
	//depende saan ang lugar
	hrs=0;mins=0;
	//para sa presyo
	fare=0;
	//iterators for gotoxy in payment section
	t=1;yt1=0;yt2=0;sty=16;yt3=0;
	cout<<"\n\n\n\n\n\n";
			system("pause");
			system("cls");
			goto menu;
	}



			return 0;
		
		}

