#include<iostream>
#include<conio.h>
using namespace std;
void printheader();
int menu();
float calculateCostProduct(float price , int quantity , float tax);
void printProductData(string name, float price , int quantity , float tax, float total);

main()
{
    string name1 = "" , name2 = "" , name3 = "" , name = "";
    float price1 = 0.0, price2 = 0.0, price3 = 0.0;
    int quantity1= 0, quantity2 = 0 ,  quantity3 = 0.0 ;
    float tax1 = 0.0, tax2 = 0.0, tax3 = 0.0;
    float total1 = 0.0, total2 = 0.0, total3 = 0.0;
    float price = 0.0 , tax = 0.0 , total = 0.0 ;
    int quantity ;
    int option;

    while (true)
    { 
 
       printheader();
       option = menu();
       calculateCostProduct(price , quantity , tax);
       printProductData( name, price ,quantity , tax, total);
       if (option == 1) 
       {
            cout<< "Enter the name of 1st Product:";
            cin>>   name1 ;
            cout<< "Enter the price of 1st Product:";
            cin>>   price1 ;
            cout<< "Enter the quantity of 1st Product:";
            cin>>   quantity1;
            cout<< "Enter the tax rate on 1st Product (%): ";
            cin>>   tax1;

       }
       if (option == 2) 
       {
            cout<< "Enter the name of 2nd Product:";
            cin>>   name2 ;
            cout<< "Enter the price of 2nd Product:";
            cin>>   price2 ;
            cout<< "Enter the quantity of 2nd Product:";
            cin>>   quantity2;
            cout<< "Enter the tax rate on 2nd Product (%): ";
            cin>>   tax2;
       }
       if (option == 3) 
       {
            cout<< "Enter the name of 3rd Product:";
            cin>>   name3 ;
            cout<< "Enter the price of 3rd Product:";
            cin>>   price3 ;
            cout<< "Enter the quantity of 3rd Product:";
            cin>>   quantity3;
            cout<< "Enter the tax rate on  3rd Product (%): ";
            cin>>   tax3;
        }
       if (option == 4) 
       { 
           total1 = price1 * quantity1;
           total1 = total1 + total1 * ((tax1 / 100));
           total2 = price2 * quantity2;
           total2 = total2 + total2 * ((tax2 / 100));
           total3 = price3 * quantity3;
           total3 = total3 + total3 * ((tax3 / 100));
           float totalPayable = total1  + total2 + total3 ;
           cout << "Total Payable Amount  (including tax): 2150" << endl;
       }
       if (option == 5)
       {
           cout << "All Products Data:" <<endl;
           cout << "Name" << "\t" << "Price " << "\t" << "Quantity" << "\t" << "Tax" << "\t" << "TotalPerProduct"<<endl ;  
           cout<<  endl;
           printProductData(name1 , price1 , quantity1, tax1, total1);
           printProductData(name2 , price2 , quantity2, tax2, total2);
           printProductData(name3 , price2 , quantity3, tax3, total3);
      }
       if (option == 6) 
      {
          return 0;
      }
      cout<<"Press any Key to Continue:  ";
      getch();
      system("cls");
   } 
}
void printheader()
{
   cout<< " *********************************************************** "<<endl;
   cout<< " **         Cosmetics  Management  System                 ** "<<endl;
   cout<< " *********************************************************** "<<endl;
   cout<<endl;
}
int menu()
{
   int option; 
   cout<< "Select one of the following options number .... " <<endl;
   cout<< "1. Add 1st product Data" <<endl;
   cout<< "2. Add 2nd product Data" <<endl;
   cout<< "3. Add 3rd product Data" <<endl;
   cout<< "4. Calculate Total     " <<endl;
   cout<< "5. View All Products Data" <<endl;
   cout<< "6. Exit" <<endl;
   cin >> option;
   return option;
}
float calculateCostProduct(float price , int quantity , float tax)
{
   float total;
   total = price * quantity ;
   total = total + total * ((tax /100));
   return total;
}
void printProductData(string name, float price , int quantity , float tax, float total)
{
  cout<< name << "\t" << price << "\t" <<quantity << "\t\t" << tax << "\t" << total <<endl; 
}






   







