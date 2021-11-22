#include <iostream>
using namespace std;
int  main()
{
   int  num1, num2;
   int  *ptr1,* ptr2;
   int  sum;
   cout<<"\n Enter first number: ";
   cin>>num1;
   cout<<"\n Enter second number: ";
   cin>>num2;
   ptr1 = &num1; //assigning an address to pointer
   ptr2 = &num2; 
   sum = *ptr1 + * ptr2; //values at address stored by pointer
   cout<<"\n Sum is: "<< sum;
   return  0;
}