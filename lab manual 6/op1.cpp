#include<iostream>
using namespace std;
string greaterNumber(int num1 , int num2);
main()
{
  int num1 , num2 ;
  string result  ;
  cout<<"Enter the value of num 1 :";
  cin>>num1 ;
  cout<<"Enter the value of num 2 :";
  cin>>num2;
  result = greaterNumber(num1 , num2 );
  cout<<result;

} 
string greaterNumber(int num1 , int num2 )
{
  if (num1 > num2 ) 
  {
   return "True" ;
  }
  else 
  {
   return "False" ;
  }
}