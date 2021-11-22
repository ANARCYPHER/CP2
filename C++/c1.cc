#include<iostream>

#include<cstring> //string library

#include <algorithm> //library containing begin() and end()

using namespace std;

int main()

{

int number,remainder;

cin>>number;

string s1=to_string(number);//storing string value of number in s1

string s2=s1;//copy contents of s1

reverse(s2.begin(), s2.end()); //reversing the complete string s2

if(s1==s2)

cout<<"palindrome";

else

cout<<"not a palindrome";

return 0;

}