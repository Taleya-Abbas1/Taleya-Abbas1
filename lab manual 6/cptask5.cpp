#include<iostream>
using namespace std;
string Take( string day , string month , int amount );
main()
{
 string day;
 string month;
 int output;
 int amount;
 cout<<"Enter the day:";
 cin>>day;
 cout<<"Enter the month:";
 cin>>month;
 cout<<"Enter purchase month" ;
 output = Take( day , month , amount );
 cout<<
}
string Take( string day , string month , int amount )
{
 int  total_Amount  ;
 if(day == "Sunday" &&  month == "October" )
 {
  total_Amount = amount * 0.1 ;
 }
 if(day == "Sunday" &&  month != "October" )
 {
  total_Amount = amount * 0.5 ;
 }
return total_Amount ;
}