#include<iostream>
using namespace std;
void calculate(float);

main()
{
 float distance;
 cout<<" Enter distance: ";
 cin>> distance;
 calculate(distance);
 }

void calculate(float distance)
{

 float fuel;
 fuel= distance*10;
 cout<<"fuel is: "<< fuel;
}