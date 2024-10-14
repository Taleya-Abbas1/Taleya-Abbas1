#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x ,  int y);
void printEnemy();
void eraseEnemy();
void moveEnemy();
void printMaze();
void printPlayer();
void movePlayerLeft();
void movePlayerRight();
void erasePlayer();
char getCharAtxy(short int x , short int y);

int eX = 2 ,  eY = 2;
int pX = 10 , pY = 14;

main()
{
  int x , y ;
   system("cls");
   printMaze();
   printEnemy();
   eraseEnemy();
   moveEnemy();
   printMaze();
   printPlayer();
   movePlayerLeft();
   movePlayerRight();
   erasePlayer();
   getCharAtxy( x , y);

   while(true)
   {
     if (GetAsyncKeyState(VK_LEFT))
     {
         movePlayerLeft(); 
     }
     if (GetAsyncKeyState(VK_RIGHT))
     {
         movePlayerRight();
     }
       moveEnemy();
       Sleep(200);
   }

}
void printMaze()
{
cout<<"###############################################";
cout<<"##                                           ##";
cout<<"##                                           ##";
cout<<"##                                           ##";
cout<<"##                                           ##";
cout<<"##                                           ##";
cout<<"##                                           ##";
cout<<"##                                           ##";
cout<<"##                                           ##";
cout<<"##                                           ##";
cout<<"##                                           ##";
cout<<"##                                           ##";
cout<<"##                                           ##";
cout<<"##                                           ##";
cout<<"##                                           ##";
cout<<"###############################################";
}
void gotoxy(int x , int y )
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coordinates );
}
void printEnemy()
{
  gotoxy(eX , eY);
  cout<< " (~~~~)   (~~~~) ";
  gotoxy(eX , eY+1);
  cout<< " |=|  |   |  |=| ";
  gotoxy(eX , eY+2);
  cout<< " |=|  |   |  |=| ";
  gotoxy(eX , eY+3);
  cout<<"     \\    /      ";
  gotoxy(eX , eY+4);
  cout<<"      \\  /       ";  
}
void eraseEnemy()
{
   gotoxy(eX , eY);
  cout<< "                 ";
  gotoxy(eX , eY+1);
  cout<< "                 ";
  gotoxy(eX , eY+2);
  cout<< "                 ";
  gotoxy(eX , eY+3);
  cout<<"                  ";
  gotoxy(eX , eY+4);
  cout<<"                  ";  
}
void moveEnemy()
{
 
   eraseEnemy();
   eX = eX + 1 ;
   if (eX = 20)
   {
       eX = 2;
   }
   printEnemy();
 
}
void printPlayer()
{
   gotoxy(pX , pY);
   cout<< "         /\\     ";
   gotoxy(pX , pY+1);
   cout<<"        /~~~ \\__  ";
   gotoxy(pX , pY+2);
   cout<<"     /  |    |   \\ ";
   gotoxy(pX , pY+3);
   cout<<"    ======   ======= ";
   gotoxy(pX , pY+4);
   cout<<"         |||||       ";
}      
void erasePlayer()
{
   gotoxy(pX , pY);
   cout<< "                   ";
   gotoxy(pX , pY+1);
   cout<<"                    ";
   gotoxy(pX , pY+2);
   cout<<"                    ";
   gotoxy(pX , pY+3);
   cout<<"                    ";
   gotoxy(pX , pY+4);
   cout<<"                    "; 
}
void movePlayerLeft()
{
    if (getCharAtxy(pX - 1 , pY) == ' ')
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
