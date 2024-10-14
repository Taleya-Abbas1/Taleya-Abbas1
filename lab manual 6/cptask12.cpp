#include<iostream>
using namespace std;
float totalIncome(string screening , int rows , int columns );
main()
{
  string screening ;
  int rows , columns ;
  cout<<"Enter the screening type (Premiere/Normal/Discount): " ;
  cin>> screening ;
  cout<<"Enter the number of rows :" ;
  cin>> rows;
  cout<<"Enter the number of columns :" ;
  cin>>columns;
  cout<<totalIncome(screening ,rows ,columns );
}
float totalIncome(string screening , int rows , int columns )
{
   float total ;
   if(screening == "premiere" )
   {
     total = 12.00 * rows * columns ;
   }
   if(screening == "normal") 
   {
     total = 7.50 * rows * columns ;
   }
   if(screening == "discount" )
   {
     total =  5.00 * rows * columns ;
   }
   return total ;
}