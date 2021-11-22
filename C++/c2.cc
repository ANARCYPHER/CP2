#include<iostream>

using namespace std;

int main()

{

int num,rem;

cin>>num;

int duplicatenum=num;

int newnum=0;

while(num!=0) // till all digits of num are dealt with

{

rem=num%10; //remainder,last digit extracted

newnum=newnum*10+rem; // connect rem to newnum

num=num/10; //trimming last digit from num

}

if(newnum==duplicatenum)

cout<<"palindrome";

else

cout<<"not a palindrome";

return 0;

}