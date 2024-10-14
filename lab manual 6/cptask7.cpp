#include<iostream>
using namespace std;
float Take( string day , string month , float amount );
main()
{
 string day;
 string month;
 float amount;
 cout<<"Enter the purchase day:";
 cin>>day;
 cout<<"Enter the purchase month:";
 cin>>month;
 cout<<"Enter purchase amount" ;
 cin>>amount ;
 cout<<Take( day , month , amount );
  
}
float Take( string day , string month , float amount )
{
 float  total_Amount  ;
 if(day == "Sunday" )
 {
  if( month == "October" || month == "March"  || month == "August" )
  {
   total_Amount = amount - ((amount * 10)/100) ;
  }
 }
  else
  {
   total_Amount = amount ;
  }
  return total_Amount ;
}
 
