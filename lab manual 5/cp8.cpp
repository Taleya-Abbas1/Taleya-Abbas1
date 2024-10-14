#include<iostream>
using namespace std;
string Check(int num);
main()
{
    int num = 0;
    string output;
    cout<<"Enter a 5 digits number";
    cin>>num;
    int sum = 0 ;
    sum = (num %10) + (num/10)%10 + (num/100)%10 + (num/1000)%10 + (num/10000)%10;
    output = Check(num);
    cout<<output;
    
}
string Check(int num)
{
   //Calculate the sum of all digits
    int sum = 0 ;
    sum = (num %10) + (num/10)%10 + (num/100)%10 + (num/1000)%10 + (num/10000)%10;
   //return evenish if is sum is even otherwise oddish  
   if( sum % 2 == 0)
    {
    return "Evenish";
    }
    else
   {
    return "Oddish";
   }
}