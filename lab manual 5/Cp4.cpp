#include<iostream>
#include<cmath>
using namespace std;
main()
{
  int distance;
  int angle;
  cout<<"Enter the horizontal distance of trees in feets:";
  cin>>distance;
  cout<<"Enter the angle of elevation in degrees:"<<"degrees"; 
  cin>>angle ;
  float radian ;
  radian = 0.0174 * angle ;
  cout<<"Height of tree is:"<<(tan(radian) * distance)<<"feets";
}