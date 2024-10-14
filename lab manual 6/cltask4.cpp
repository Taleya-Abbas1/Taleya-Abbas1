#include<iostream>
using namespace std;
string Find( int num1 , int num2 , int num3 );
main()
{
  int num1 , num2 , num3 ;
  string output ;
  cout<<"Enter number 1 :" ;
  cin>>num1;
  cout<<"Enter number 2:" ;
  cin>>num2;
  cout<<"Enter number 3:" ;
  cin>>num3;
  output = Find( num1 , num2 , num3 ); 
  cout<<output ;
}
string Find( int num1 , int num2 , int num3 )
{
   if(num1 > num2 && num1 > num3 )
   { 
    return "num1" ;
   } 
   if(num2 > num1 && num2 > num3 )
   {
    return "num2" ;
   }
   if(num3 > num1 && num3 > num2 )
   {
    return "num3" ;
   }
} 





