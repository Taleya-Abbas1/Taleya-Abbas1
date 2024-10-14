#include<iostream>
using namespace std;
int Take( string day , string month , int amount );
main()
{
 string day;
 string month;
 int amount;
 cout<<"Enter the day:";
 cin>>day;
 cout<<"Enter the month:";
 cin>>month;
 cout<<"Enter purchase amount" ;
 cin>>amount ;
 cout<<Take( day , month , amount );
  
}
int Take( string day , string month , int amount )
{
 float  total_Amount  ;
 if(day != "Sunday" || month == "October" )
 {
  total_Amount = amount - ((amount * 10)/100) ;
 }
 if(day == "Sunday" ||  month != "October" )
 {
  total_Amount = amount -((amount * 10)/100) ;
 }
return total_Amount ;
}