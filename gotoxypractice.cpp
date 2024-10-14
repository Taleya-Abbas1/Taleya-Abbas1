 #include<iostream>
#include<windows.h>
using namespace std;
void printMaze();
void gotoxy(int x , int y );
void playerMove( int x , int y );
main()
{
    int x = 3 , y = 4 ;
    system("cls");
    printMaze();
    playerMove(x , y) ;
    while (true)
    {
       playerMove ( x , y); 
       x = x + 1 ;
       if( x == 25)
       {
         x = 3;
       }
    } 
       gotoxy(0,17);
}
void playerMove(int x , int y )
{
    gotoxy(x , y);
    cout<<" P ";
    Sleep(200);
    gotoxy(x, y );
    cout<<"  ";

}
void printMaze()
{
  cout<<"#################################" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"##                             ##" <<endl;
  cout<<"#################################" <<endl;
}
void gotoxy(int x , int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE) , coordinates);
}






