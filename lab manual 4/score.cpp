#include<iostream>
using namespace std;
void test(int score);
void notest(int score);
main()
{
    int score;
    cout<<"Enter the score:";
    cin>>score;
    if (score>=50)
    { 
    test(score);
    }
    if (score<50)
    { 
    notest(score);
    }
}
void test(int score)
{
  cout<<"you are pass";
}
void notest(int score)
{
  cout<<"you are fail" ;
}