#include<iostream>
using namespace std ;
float findPerimeter(string character , float value );
main()
{
  string character  ;
  float value ;
  int result ;
  cout<<"Enter a  character(s for square , c for circle , t for triangle , h for hexagon): ";
  cin>>character;
  cout<<"Enter the value :";
  cin>>value ;
  cout<<"The perimeter is :" <<findPerimeter(character , value ) ;
  
}
float findPerimeter(string character , float value )
{
   float perimeter ;
   if (character == "s")
   {
     perimeter =4 * value ;
   }
   if (character == "c")
   {
     perimeter  = 6.28 * value ;
   }
   if (character == "t" )
   {
    perimeter  = 3*value ;
    }
   if ( character == "h")
   {
    perimeter = 6*value ;
   }
   return perimeter ;
}                                        