#include<iostream>
using namespacce std;
int timeTravel(int hours , int min  )
main()
{
  int hours ;
  int mins ;
  cout<<"Enter time in hours :";
  cin>>hours;
  cout<<"Enter time in mins :";
  cin>>mins;
  if ( hours > 0 && hours < 24 && mins > 0  && mins < 59 )
  {
   timeTravel(hours , mins , travel);
  }

}
int timeTravel(int hours , int mins  )
{ 
  int Totalmins = hours*60 + mins + 15 ;
  int newHours ;
  int newMintues ;
  newHours = (Totalmins / 60) % 24;
  newMins = Totalmins % 60 ;
  return +to_string(newHours)+  +to_string(newMins)+ 
    