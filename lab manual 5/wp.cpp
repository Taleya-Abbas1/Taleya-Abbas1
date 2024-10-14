#include<iostream>
using namespace std;
int multiply(int num) ;
main()
{
  int num , result;
  cout<<"Enter the number 1:";
  cin>>num;
  result = multiply(num);
  cout<<"result is:"<<result;

}
int multiply(int num)
{ 
  int total;
  total = (num * 5);
  return total;
}