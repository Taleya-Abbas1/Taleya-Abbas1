#include<iostream>
#include<cmath>
using namespace std;
void take(float length) ;

main()
{  
  float length ;
  cout<<"Enter the side length of cube: ";
  cin>>length;
  take(length);
}
void take(float length)
{
  float stickers;
  stickers = (pow(length , 2)* 6);
  cout<<"number of stickers = "<<stickers;
}