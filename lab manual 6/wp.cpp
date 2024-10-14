#include<iostream>
using namespace std;
char assignGrade( int marks ); 
main()
{
 int marks ;
 char output ;
 cout<<"Enter your marks :";
 cin>>marks ;
 cout<<assignGrade( marks );
 output = assignGrade( marks );
 cout<<"Grade is:" <<output;  

}
char assignGrade( int marks )
{
 char grade ;
 if(marks < 50 )
 {
   grade = 'F' ;
 }
 if(marks >=50  && marks <=60 )
 {
   grade = 'E';
 }
 if(marks >60  && marks <=70 )
 {
   grade = 'D';
 }
 if(marks  >70 && marks <=80 )
 {
   grade = 'C';
 }
 if(marks  >80 && marks <=85 )
 {
   grade = 'B';
 }
 if(marks  >85 )
 {
  grade = 'A';
  }
  return grade; 
 
}