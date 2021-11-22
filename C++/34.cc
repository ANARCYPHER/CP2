// Program to find power of any number

#include <iostream>
#include<math.h>
using namespace std;

int main(){
  float base, expo;
  cout << "Input the base: ";
  cin >> base;
  cout << "Input the exponent: ";
  cin >> expo;
  cout << "Answer: " << pow(base, expo);
}