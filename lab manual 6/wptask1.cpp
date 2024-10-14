#include<iostream>
using namespace std;
string dress(float cost , string brand );
main()
{
  float cost ;
  string brand ;
  cout<<"Enter the cost of the dress: $";
  cin>>cost;
  cout<<"Enter the dress brand";
  cin>>brand ;
  cout<<dress(cost , brand);

}
string dress(float cost , string brand )
{
 if (cost < 1500 )
 {
   if(brand == "MTJ")
   {
   return "Congratulations ! You can buy the dress." ;
   }
 }
    return "Sorry , the dress doesn't meet the criteria for purchase";
 }
}