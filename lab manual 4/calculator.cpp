#include<iostream>
using namespace std;
void addition(int num1,int num2);
void subtraction(int num1,int num2);
void multiplication(int num1,int num2);
void divide(int num1 ,int num2);
main()
{
     int num1 , num2 ;
     char op;
     cout<<"Enter number 1:" ;
     cin>>num1;
     cout<<"Enter number 2:" ;
     cin>>num2;
     cout<<"Enter operator(+,-,*,/)";
     cin>>op;
     if (op == '+')
     {
       addition( num1 , num2);
     }
     if (op == '-')
     {
       subtraction( num1 , num2);
     }
     if (op == '*')
     {
       multiplication( num1 , num2);
     }
     if (op == '/')
     {
       divide (num1 , num2);
     }
     
}

void addition(int num1 ,int num2) 
   {
       int sum;
       sum = num1 + num2;
       cout<<"sum is :"<<sum;
   }
void multiplication(int num1,int num2)
   {  
       int product;
       product = num1*num2;
       cout<<"product is:"<<product;
   }
void divide(int num1 ,int num2)
   {
       int division;
       division=num1/num2;
       cout<<"division is:"<<division;
    }
void subtraction(int num1,int num2)
   {  
       int minus;  
       minus = num1 - num2;
       cout<<"subtraction is:"<<minus;
    }
