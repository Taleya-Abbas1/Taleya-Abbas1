#include<iostream>
using namespace std;
void find(float);

main()
{
   float inches;
   cout<<"Enter inches";
   cin>>inches;
   find(inches);
}
void find(float inches)
{
  float feet;
  feet =  inches/12 ;
  cout<<"feet is:"<<feet;
}