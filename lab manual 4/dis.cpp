#include<iostream>
using namespace std;
void calculateAmount1(string purchase_day , float purchase_amout);
void calculateAmount2(string purchase_day , float purchase_amount);
main(){
        string purchase_day ;
        float purchase_amount ;
        cout<<"Enter the purchase day:";
        cin>>purchase_day;
        cout<<"Enter the purchase amount :$";
        cin>>purchase_amount;
        if (purchase_day == "sunday")
        {
        
          calculateAmount1(purchase_day , purchase_amount);
        }
        if (purchase_day != "sunday" )
        {
         calculateAmount2(purchase_day , purchase_amount);
        } 
}
void calculateAmount1(string purchase_day , float purchase_amount)
{   
       float payable_amount;
       payable_amount = purchase_amount-(purchase_amount/10);
       cout<<"payable amount is:$" <<payable_amount;
      
}
void calculateAmount2(string purchase_day , float purchase_amount) 
{
       float payable_Amount ;
       payable_Amount = purchase_amount ;
       cout<<"payable amount is:$" <<payable_Amount;
}
   