#include<iostream>
using namespace std;
int main()
{
int num,rem;
cin>>num;
int duplicatenum=num;
int sum=0, count=0;
while(num!=0) // till all digits of num are dealt with
{
rem=num%10; //remainder,last digit extracted
count++;
sum=sum+rem; // add rem to sum
num=num/10; //trimming last digit from num
}
cout<<"Sum of "<<duplicatenum <<" is "<<sum;
cout<<"\nNumber of digits are:"<<count;

return 0;
}