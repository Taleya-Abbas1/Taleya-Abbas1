#include<iostream>
#include<string>
using namespace std;
int calculatePoolState(float volume , float pipe1, float pipe2 , float hours );
main()
{
  int pipe1 , pipe2 , volume , hours ;
  string output;
  cout<<"Enter the volume of the pool in liters";
  cin>>volume;
  pipe1 = pipe1 * hours ;
  cout<<"Enter the flow rate of first pipe per hour";
  cin>>pipe1;
  pipe2 = pipe2 * hours;
  cout<<"Enter the flow rate of second pipe per hour";
  cin>>pipe2;
  cout<<"Enter the  hours the worker is absent";
  cin>>hours;
  output = calculatePoolState(volume ,  pipe1,  pipe2 ,  hours);
  return output = "For"+ to_string()+ "is" ;
 
}
int calculatePoolState(float volume , float pipe1, float pipe2 , float hours )
{
  float percentagePipe1 , percentagePipe2 , overflow ;
  float flowRate;
  flowRate = pipe1 + pipe2 ;
  float percentageRate = (flowRate/volume)* 100 ;
  if (flowRate > volume)
  {
   percentagePipe1 = (pipe1/flowRate)*100 ;
   percentagePipe2 = (pipe2/flowRate)*100 ;
   
  }
  if (flowRate < volume)
  {
    overflow = flowRate - volume ;
  }



}