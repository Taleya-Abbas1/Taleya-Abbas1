#include<iostream>
#include<string>
using namespace std;
string checkTitle(int age , char gender);
main()
{
 int age;
 char gender;
 string output ;
 cout<<"Enter your age :" ;
 cin>>age;
 cout<<"Enter your gender (m/f):";
 cin>>gender;
 output = checkTitle( age ,gender);
 cout<<"Your personal title is :" <<output ;

}
string checkTitle(int age , char gender)
{
 if(gender == 'm' )
 {
   if(age >= 16)
   {
    return "man" ;
   }
   if(age < 16) ;
   {
    return "boy" ;
   }
 }
  if(gender == 'f' )
  {
    if(age >= 16 )
    {
    return "women" ;
    }
    if(age < 16 )
    {
     return "girl" ;
    }
  }
}