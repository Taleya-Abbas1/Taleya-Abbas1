#include<iostream>
#include<windows.h>
using namespace std;
string IsSymmetrical(int num);
main()
{
  int num = 0 ;
  string result;
  cout<<"Enter 3 digits numbers: ";
  cin>>num;
  result = IsSymmetrical(num);
  cout<<result;


}
string IsSymmetrical(int num)
{
  int quotient;
  quotient = num/100 ;
  int remainder;
  remainder = num%10;
  if (remainder == quotient )
  {
    return "This number is symmetrical";
   
  }
  if (remainder != quotient )
  {
     return "This number is not symmetrical";
     
  }
}