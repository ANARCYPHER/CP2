#include<bits/stdc++.h>

using namespace std;

void greater_elements(int arr[], int n){

  sort(arr, arr + n);

  for (int i = 0; i < n - 2; i++)

    cout << "\n" << arr[i] << " ";

}

// Driver Code 

int main(){

  int arr[100], n, i;

  cout << "Enter number of elements: ";

  cin >> n;

  cout << "\nEnter elements: ";

  for (i = 0; i < n; i++)

    cin >> arr[i];

  cout << "\nElements are: ";

  for (i = 0; i < n; i++)

    cout << arr[i] << ", ";

  cout << endl;

  greater_elements(arr, n);

  return 0;

}