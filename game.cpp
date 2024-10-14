#include<iostream>
#include<windows.h>
#include<conio.h>	
using namespace std;
void printmaze();
void gotoxy( int x , int y );
void printPlayer();
void erasePlayer();
void printEnemy1();
void eraseEnemy1();
void printEnemy2();
void eraseEnemy2();
void printEnemy3();
void eraseEnemy3();
void movePlayerLeft();
void movePlayerRight();
void moveEnemy1();
void moveEnemy2();
void moveEnemy3();
char getCharAtxy(short int x , short int y);

 
 int pX , pY ;
 int e1X , e1Y ;
 int e2X , e2Y ;
 int e3X , e3Y ; 
main()
{ 
    int x ,  y  ;
    system("cls");
    printmaze();
   
    
  
   
}
void gotoxy(int x , int y )
{
  COORD coordinates ;
  coordinates.X = x ;
  coordinates.Y = y ;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coordinates );
}
void printmaze()
{
  cout<< "_________________________________________________________________________________________________________________________|@@@@|"<<endl;
  cout<<"|@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ |@@@@|"<<endl;
  cout<<"|_________________________________________________________________________________________________________________________|@@@@| "<<endl;
  cout<<"|@@@@|                                                                                                                    |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                    |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                    |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                    |@@@@|"<<endl;
  cout<<"|@@@@|        ______         _______        _______        _______          _________       ________       _______     ___|@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                    |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                    |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                    |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                    |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                    |@@@@|"<<endl;
  cout<<"|@@@@|____________________________________________________________________________________________________________________|@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                  ______         _______        _______        _______          _________       ________       _______     _________     _______       ________       __________    __ |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|_______________________________________________________________________________________________________________________________________________________________________________________|@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|          ______         _______        _______        _______          _________       ________       _______     _________     _______       ________       __________    _________  |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|_______________________________________________________________________________________________________________________________________________________________________________________|@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                   ____              _____              _____              _____              ______            _______              _____              ______         |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|                                                                                                                                                                                       |@@@@|"<<endl;
  cout<<"|@@@@|______________________________________________________________________________________________________________________________________________________________________________________ |@@@@|"<<endl;
  cout<<"|@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@|@@@@|"<<endl;
  cout<<"|____________________________________________________________________________________________________________________________________________________________________________________________|@@@@|"<<endl;
}
void printPlayer()
{  
  gotoxy(pX+6 , pY+51);
 cout<<"    _________    "<<endl;
  gotoxy(pX+6 , pY +52);
 cout<<"   /|__||__\\\\ '.___ "<<endl;
  gotoxy(pX+6 , pY + 53) ;
  cout<<"(   __        __ __\\\\"<<endl;
  gotoxy(pX+6 , pY + 54) ;
   cout<<"= - (__)-- -(__)- '"<<endl;
 
}
void erasePlayer()
{
gotoxy(pX+6 , pY+51);
 cout<<"                                  "<<endl;
  gotoxy(pX+6 , pY +52);
 cout<<"                                     "<<endl;
  gotoxy(pX+6 , pY + 53) ;
  cout<<"                                  "<<endl;
  gotoxy(pX+6 , pY + 54) ;
   cout<<"                              "<<endl;
 
}
void printEnemy1()
{
 gotoxy( e1X + 96 ,e1Y + 21);
  cout<<"         _____________       " <<endl ;
 gotoxy(e1X + 97 , e1Y + 22);
  cout<<"    ___/ //__||___| \\__    " <<endl ;
 gotoxy( e1X +98 , e1Y + 23);
  cout<<"  //-.   -    -   |    )   "<<endl ;
 gotoxy( e1X + 99 , e1X + 24);
  cout<<"    ''--(_) ---- (_)- =.  "<<endl ;

}
void eraseEnemy1()
{
 gotoxy( e1X + 96 ,e1Y + 21);
  cout<<"                         " <<endl ;
 gotoxy(e1X + 97 , e1Y + 22);
  cout<<"                         " <<endl ;
 gotoxy( e1X + 98 , e1Y + 23);
  cout<<"                          "<<endl ;
 gotoxy( e1X + 99 , e1X + 24);
  cout<<"                         "<<endl ;
 
}
void moveEnemy1()
{
 
   eraseEnemy1();
   e1X = e1X + 1 ;
   if (e1X == 156)
   {
       e1X = 10;
   }
   printEnemy1();
 
}

void printEnemy2()
{
  gotoxy( e1X + 150 ,e1Y + 7);
  cout<<"         _____________      " <<endl ;
 gotoxy(e1X + 151 , e1Y + 8);
  cout<<"    ___/ //__||___|  \\__    " <<endl ;
 gotoxy( e1X + 152 , e1Y + 9);
  cout<<"   //'-.  -    -   |    )  "<<endl ;
 gotoxy( e1X + 153 , e1X + 10);
  cout<<"    ''--(_) ---- (_)-'=.  "<<endl ;

 
}
void eraseEnemy2()
{
  gotoxy( e1X + 150 ,e1Y + 7);
  cout<<"                           " <<endl ;
 gotoxy(e1X + 151 , e1Y + 8);
  cout<<"                              " <<endl ;
 gotoxy( e1X + 152 , e1Y + 9);
  cout<<"                                "<<endl ;
 gotoxy( e1X + 153 , e1X + 10);
  cout<<"                                  "<<endl ;
  
}
void moveEnemy2()
{
 
   eraseEnemy2();
   e2X = e2X + 1 ;
   if (e2X == 199)
   {
       e2X = 55;
   }
   printEnemy2();
 
}
void printEnemy3()
{
 gotoxy( e1X + 200 ,e1Y + 33);
  cout<<"         ____________       " <<endl ;
 gotoxy(e1X + 201 , e1Y + 34);
  cout<<"    ___/ //__||___| \\__   " <<endl ;
 gotoxy( e1X + 202 , e1Y + 35);
  cout<<"   //'-.   -    -   |   )  "<<endl ;
 gotoxy( e1X + 203 , e1X + 36);
  cout<<"     ''--(_) ---- (_)-'=.  "<<endl ; 

}
void eraseEnemy3()
{
   gotoxy( e1X + 200 ,e1Y + 33);
  cout<<"                                " <<endl ;
 gotoxy(e1X + 201 , e1Y + 34);
  cout<<"                                 " <<endl ;
 gotoxy( e1X + 202 , e1Y + 35);
  cout<<"                                "<<endl ;
 gotoxy( e1X + 203 , e1X + 36);
  cout<<"                                "<<endl ; 
}
void moveEnemy3()
{
 
   eraseEnemy3();
   e3X = e3X + 1 ;
   if (e3X == 198)
   {
       e3X = 14;
   }
   printEnemy3();
 
}
void movePlayerLeft()
{
    if (getCharAtxy(pX + 1 , pY) == ' ')
    {
     erasePlayer();
     pX = pY - 1;
     printPlayer();
    }
}
 void movePlayerRight()
{
    if (getCharAtxy(pX + 15 , pY) == ' ')
    {
     erasePlayer();
     pX = pY + 15;
     printPlayer();
     }

}
char getCharAtxy(short int x , short int y)
{
    CHAR_INFO ci;
    COORD xy = { 0, 0};
    SMALL_RECT rect = { x , y , x , y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci , coordBufSize , xy , &rect) ? ci.Char.AsciiChar :' ' ;
}    

