#include<iostream>
using namespace std;
void calculate(float distance);

main()
{
     float distance;
     cout<<" Enter distance: ";
     cin>> distance;
     calculate(distance);
}
void calculate(float distance)
{
      float  fuel_needed;
      if(fuel_needed >= 100)
      {
      fuel_needed = distance * 10;
      }
      if(fuel_needed < 100)
      { 
      fuel_needed = 100 ;
      }  
      cout<<"fuel needed is: "<<fuel_needed;
}
