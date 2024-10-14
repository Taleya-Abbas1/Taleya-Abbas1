#include<iostream>
using namespace std;
string parity(int number);
main()
{
  int number;
  string result ;
  cout<<"Enter the 3 digits number :";
  cin>>number ;   
  result = parity(number);
  cout<<result;
}
string parity(int number)
{
  int sum = number%10 + (number/10)%10 + (number/100)%10 ;
   if ( number%2 != 0 &&  sum%2 != 0  || number%2 ==0  && sum%2 == 0 )
  {
   return "True" ;
  }
  else
  {
   return "False" ; 
  }
}