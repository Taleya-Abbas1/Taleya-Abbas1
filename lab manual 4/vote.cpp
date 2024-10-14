#include<iostream>
using namespace std;
void vote(int age);
void novote(int age);
main()
{
     int age ;
     cout<<"Enter age:";
     cin>>age;
     if (age>=18)
     {
       vote(age);
     }
     if (age<18)
     {
       novote(age);
     }        
}
void vote(int age)
   {
    cout<<"you are eligible to vote.";
   }
 
void novote(int age)   
   {
    cout<<"you are not eligible to vote.";
   }

