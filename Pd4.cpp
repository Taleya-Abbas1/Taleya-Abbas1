#include<windows.h>
using namespace std;
//WP1
void gotoxy(int x, int y);

main()
{ 
  int x = 15 ;
  int y = 15 ;
  cout<< "Test";
  
  gotoxy(15,15);
  cout<< "My name is Taleya Abbas";
}

void gotoxy(int x,int y)
{
   COORD coordinates;
   coordinates.X= x;
   coordinates.Y= y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
.
.
.
.
#include<iostream>
#include<windows.h>
using namespace std;
//CL2
void printMaze();
void gotoxy(int x, int y);

main()
{ 
  int x = 0;
  int y = 0;
  system("cls");
  printMaze();
  gotoxy(0,10); 
}

void gotoxy(int x,int y)
{
   COORD coordinates;
   coordinates.X= x;
   coordinates.Y= y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printMaze()
{
    cout<<"################################"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"#                              #"<<endl;
    cout<<"################################"<<endl;
} 
.
.
.
#include <iostream>
#include <windows.h>
using namespace std;
//CL3
void printMaze();
void gotoxy(int x,int y);
void playerMove(int x, int y);
main()
{
   int x = 4, y = 4;
   system("cls");
   printMaze();
   playerMove(x,y);
   
}

void playerMove(int x , int y)
{
   gotoxy(x, y);
   cout << " P ";
   gotoxy(x, y);
   cout << "  ";
   gotoxy(0,10);
}
void printMaze()
{
   cout <<"#######################" <<endl;
   cout <<"#                     #"<<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#######################" <<endl;
}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
.
.
.
.
#include <iostream>
#include <windows.h>
using namespace std;
//CL4
void printMaze();
void gotoxy(int x,int y);
void playerMove(int x, int y);
main()
{
   int x = 3, y = 4;
   system("cls");
   printMaze();
   while (true)
   {
      playerMove(x,y);
      x = x + 1;
      if(x == 20)
      {
        x = 4;
      }
      
   }
    gotoxy(0, 10);
}

void playerMove(int x,int y)
{
   gotoxy(x, y);
   cout << "P";
   Sleep(200);
   gotoxy(x, y);
   cout << " ";
}
void printMaze()
{
   cout <<"#######################" <<endl;
   cout <<"#                     #"<<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#######################" <<endl;
}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
.
.
.
.
#include<iostream>
#include<windows.h>
using namespace std;
//OP5
void gotoxy(int x,int y);
main()
{
  int x;
  x = 80;
  int y;
  y = 20;
  system("cls");
  gotoxy(x,y) ;
  cout<<"TALEYA";
}
void gotoxy(int x , int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coordinates);
} 
.
.
.
.
#include<iostream>
#include<windows.h>
using namespace std; 
//op6
void printH();
void printA();
void printS();
void printN();
void gotoxy(int x, int y);
main()
{
   int x;
   int y;
   system("cls");
   gotoxy(1,1);
   printH();
   gotoxy(1,2);
   printA();
   gotoxy(1,3);
   printS();
   gotoxy(1,4);
   printS();
   gotoxy(1,5);
   printA();
   gotoxy(1,6);
   printN();
}
void gotoxy(int x , int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coordinates);
}
void printH()
{
   cout<<"H";
}
void printA()
{
   cout<<"A";
}

void printS()
{
   cout<<"S";
}

void printN()
{
   cout<<"N";
}
.
.
.
.
#include <iostream>
#include <windows.h>
using namespace std;
//op7
void printMaze();
void gotoxy(int x,int y);
void playerMove(int x, int y);
main()
{
   int x = 3, y = 2;
   system("cls");
   printMaze();
   while (true)
   {
      playerMove(x,y);
      y =  y+ 1;
      if (y == 8)
      {
         y = 2;
      }
   }
    gotoxy(0, 10);
}
  
void playerMove(int x,int y)
{
   gotoxy(x, y);
   cout << "Patrol";
   Sleep(500);
   gotoxy(x,y);
   cout<<"       ";
   
}
void printMaze()
{
   cout <<"#######################" <<endl;
   cout <<"#                     #"<<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#                     #" <<endl;
   cout <<"#######################" <<endl;
}

void gotoxy(int x,int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
.
.
.
.
#include<iostream>
using namespace std;
//op8
void printMenu();
void calculateAggregate(string name , int matricMarks , int interMarks, int ecatMarks);
void compareMarks(string nameStd1 , int ecatMarksStd1 , string nameStd2 , int ecatMarksStd2 );
main()
{
    string name;
    int matricMarks;
    int interMarks ;
    int ecatMarks  ;
    string nameStd1 ; 
    int ecatMarksStd1; 
    string nameStd2 ; 
    int ecatMarksStd2;
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the matric marks:";
    cin>>matricMarks;
    cout<<"Enter the inter marks:";
    cin>>interMarks;
    cout<<"Enter the ecat marks:";
    cin>>ecatMarks; 
    printMenu();
    calculateAggregate( name ,  matricMarks ,  interMarks, ecatMarks);
    cout<<"Enter name of student1:";
    cin>>nameStd1;
    cout<<"Enter name of student2:";
    cin>>nameStd2;
    cout<<"Enter student 1 ecat marks:";
    cin>>ecatMarksStd1;
    cout<<"Enter student 2 ecat marks:";
    cin>>ecatMarksStd2;    
    compareMarks( nameStd1 ,  ecatMarksStd1 ,  nameStd2 , ecatMarksStd2 );
}
void printMenu()
{
              cout<<" ########################################## "<<endl ;
              cout<<" UNIVERSITY  ADMISSION   MANAGEMENT  SYSTEM "<<endl ;
              cout<<" ########################################## "<<endl ;
}
void calculateAggregate(string name , int matricMarks , int interMarks, int ecatMarks)
{
   float aggregate ;
   aggregate = ((matricMarks*30)/1100) + ((interMarks*30)/570) + ((ecatMarks*40)/400);
   cout<<"aggregate is :" <<aggregate;
}
void compareMarks(string nameStd1 , int ecatMarksStd1 , string nameStd2 , int ecatMarksStd2 )
{
  if(ecatMarksStd1>ecatMarksStd2)
  {
   cout<<"1st roll number is :" <<nameStd1;
  }
  else
  {
   cout<<"2nd roll number is:" <<nameStd2;
  }
}
.
.
.
.
#include<iostream>
using namespace std;
//cptask1
void integers(int x , int y);
main()
{
    int x ;
    cout<<"Enter  the number 1:";
    cin>> x;
    int y;
    cout<<"Enter the number 2:";
    cin>>y ;
    integers( x , y);
}
void integers(int x , int y)
{
    if (x == y)
    { 
      cout<<"true";
    }
    else
    { 
      cout<<"False";
    }
}
.
.
.
.
#include<iostream>
using namespace std;
//cptask2
void value(string country , float price);
main()
{
    string country;
    cout<<"Enter the country name:";
    cin>>country;
    float price;
    cout<<"Enter ticket price in dollars:"<<"$";
    cin>>price;
    value(country , price);
}
void value(string country , float price)
{  
    float final;
    float discount;
    if(country == "Pakistan")
    { 
     discount =price* 5/100;
     final = price - discount;
     }
    if(country == "Ireland")
    {
    discount = price*10/100;
    final = price - discount;
    }
    if(country == "India")
    {
    discount = price*20/100;
    final = price - discount;
    }
    if(country == "England")
    {
    discount = price*30/100;
    final = price - discount;
    }
    if(country == "Canada")
    {
    discount = price*45/100;
    final = price - discount;
    }
    cout<<"Enter the final price:"<<final;
}
.
.
.
.
#include<iostream>
using namespace std;
//cptask3
void checkSpeed(int speed);
main()
{
   int speed;
   cout<<"Enter the speed:";
   cin>>speed;
   checkSpeed(speed);
}
void checkSpeed(int speed)
{
   if(speed > 100)
   {
   cout<<"Halt.. YOU WILL BE CHALLANGED!!!";
   }
   if(speed <=100)
   {
   cout<<"Perfect!You're going good";
   }

}
.
.
.
#include<iostream>
using namespace std;
//cptask4
void longestTime(int min , int hours);
main()
{
  int min;
  cout<<"Enter time in mintues :";
  cin>>min;
  int hours;
  cout<<"Enter time in hours :";
  cin>>hours;
  longestTime(min , hours);
}
void longestTime(int min , int hours)
{
  int hours_to_min;
  hours_to_min = hours * 60;
  if (hours_to_min > min)
  {
   cout<<hours;
  } 
  if (hours_to_min < min)
  {
   cout<<min;
  }
}
.
.
.
.
#include<iostream>
using namespace std;
//cptask5
void position(int a , int b);
main()
{
  int a;
  cout<<"Enter the position a:";
  cin>>a;
  int b;
  cout<<"Enter the position b:";
  cin>>b;
  position(a,b);
}
void position(int a, int b)
{ 
  int c;
  c= b-a;
  if (c < 6)
  {
   cout<<"true";
  }
  else
  {
   cout<<"false";
  }
}
.
.
.
#include<iostream>
using namespace std;
//cptask6
void flowerShop(int redRose ,int whiteRose ,int Tulips);
main()
{
   int redRose , whiteRose , Tulips ;
   cout<<"Enter the number of Red rose:";
   cin>>redRose ;
   cout<<"Enter the number of White rose:";
   cin>>whiteRose;
   cout<<"Enter the number of tulips:";
   cin>>Tulips;
   flowerShop(redRose, whiteRose , Tulips);
}
void flowerShop(int redRose, int whiteRose, int Tulips)
{
  float price;
  float discount;
  price = (redRose*2) + (whiteRose*4.10) + (Tulips*2.50);
  cout<<price;
  float payableAmount;
  if (price >200 )
  {
   discount = price - (price*0.2);
   cout<<endl<<"Price after discount:"<<discount;
  }
  else
  { 
   cout<<"No discount applied";
  }
}
.
.
.
#include<iostream>
using namespace std;
//cptask7
void pet(int holidays);
main()
{
    int holidays;
    cout<<"Enter the holidays:";
    cin>>holidays;
    pet(holidays); 
}
void pet(int holidays)
{
  int workingDays;
  workingDays = 365 - holidays;
  int timeForGame;
  int difference;
  timeForGame = (63*workingDays) + (127*holidays);
  int hours;
  int min; 
  if (timeForGame <30000)
  {
    cout<<"Tom sleep well "<<endl;
    difference = 30000 - timeForGame;
    hours = difference/60;
    min = difference%60; 
    cout<<  hours<<"  hours and  " <<min << " mintues for play";
    }
    if(timeForGame > 30000)
   {
    cout<<"Tom will run away "<<endl;
    difference =  timeForGame -30000;
    hours = difference/60;
    min = difference%60; 
    cout<<  hours<<"  hours and  " <<min << " mintues for play";
 }
}
.
.
.
#include<iostream>
using namespace std;
//cptask8
void take(int people , int tp);
main()
{
   int people;
   cout<<"Enter number of peoples";
   cin>>people;
   int tp;
   cout<<"Enter tissue papers";
   cin>>tp;
   take(people , tp);

}
void take(int people , int tp)
{
   int days ;
   days = (500*tp)/(people*57);
   if( days<14 )
   { 
     cout<<" your tissue will last only "<<days<<" days  , buy more!";
   }
   if( days>14 )
   {
     cout<<" your tissue will last only "<<days<<" days  , no need to panic! ";
   }

}

.
.
.
#include<iostream>
using namespace std;
//cptask9
void take(string reverse);
main()
{
    string reverse;
    cout<<"Enter true or false:";
    cin>>reverse;
    take(reverse);
}
void take(string reverse)
{ 
    if(reverse == "true")
    { 
     cout<<"False";
    }
    if (reverse == "false")
    {
     cout<<"True";
    }
}








