#include<iostream>
#include<string>
using namespace std;
string areSameNumber( int num1 , int num2  , int num3 );
main()
{
  int num1 , num2 , num3 ;
  cout<<"Enter number 1:" ;
  cin>>num1 ;
  cout<<"Enter number 2:" ;
  cin>>num2;
  cout<<"Enter number 3:" ;
  cin>>num3;
  cout<< areSameNumber(num1 , num2 , num3 ) ;  
}
string areSameNumber( int num1 , int num2  , int num3 )
{
 if(num1 == num2 && num1 == num3 && num2 == num3)
 {
   return "yes";
 }
 else
 {
   return "no" ;
 }
}