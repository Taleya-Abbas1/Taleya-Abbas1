#include<iostream>
using namespace std;
void value1(int num);
void value2(int num);

main()
{
  int num;
  cout<<"Enter number:";
  cin>>num;
  if (num %2 == 0)
  { 
   value1(num);
  } 
  if (num %2 != 0)
  {
   value2(num);
  }
}
void value1(int num)
{ 
  cout<<"number is even";
}
void value2(int num)
{
  cout<<"number is odd";
}