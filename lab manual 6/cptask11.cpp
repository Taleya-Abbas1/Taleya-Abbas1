#include<iostream>
#include<string>
using namespace std;
string checkSpeed(float speed);
main()
{
  float speed ;
  string output ;
  cout<<"Enter the speed :";
  cin>>speed;
  output = checkSpeed(speed);
  cout<<output ;
  
}
string checkSpeed(float speed)
{
 
  if(speed < 10)
  {
    return "slow" ;
  }
  if(speed > 10 && speed < 50 )
  {
   return  "average" ;
  }
  if(speed > 50 && speed < 150)
  {
    return  "fast" ;
  }
  if(speed > 150 && speed < 1000)
  {
    return  "ultra-fast" ;
  }
  if(speed > 1000 )
  {
   return  "extremely fast" ;
  }
  
  
  
}