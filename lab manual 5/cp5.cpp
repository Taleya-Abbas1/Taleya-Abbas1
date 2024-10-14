#include<iostream>
#include<cmath>
using namespace std;
main()
{
   int a , b , c ;
   cout<<"Enter the value of a:" ;
   cin>>a;
   cout<<"Enter the value of b:" ;
   cin>>b;
   cout<<"Enter the value of c:" ;
   cin>>c;
   int discriminant = 0;
   discriminant = ((b*b) - (4*a*c));
   int x1 = 0 , x= 0  , x2= 0;
   double realPart , imaginaryPart ;
   if  (discriminant > 0)
    { 
	int sqrt_n = sqrt (discriminant);
	cout<<"The sqrt of discriminant is: " <<sqrt_n<<endl;
      x1 = ((-b + sqrt(discriminant))/(2*a)) ;
      x2 = ((-b - sqrt(discriminant))/(2*a)) ;
      cout<<"solution is :" <<" x1  =" << x1 <<" and " << " x2 = " << x2;
    }
    if (discriminant == 0)
    {
      // x1 = x2 
      x = (-b/(2*a));
     cout<<"solutions : " <<" x =" << x;
    }
    if (discriminant < 0)
    {
      realPart = (-b/(2*a))  ;

      imaginaryPart = ((sqrt(-(discriminant))))/(2*a));
      cout<<" Complex solutions : x =" <<realPart <<" +  Imaginary part is: " <<imaginaryPart<< "i" ;
     

    } 
}