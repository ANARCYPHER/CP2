#include<bits/stdc++.h>
using namespace std;

void repeated_number(int arr[], int n){

  int i, j, max_count = 0;
  cout << "\nMost occurred number: ";

  for (i = 0; i < n; i++){
    int count = 1;
    for (j = i + 1; j < n; j++)
      if (arr[i] == arr[j])
        count++;

    if (count > max_count)
      max_count = count;
  }

  // this loop checks if there are more than one elements that are repeated

  for (i = 0; i < n; i++){
    int count = 1;
    for (j = i + 1; j < n; j++)
      if (arr[i] == arr[j])
        count++;

    if (count == max_count)
      cout << arr[i] << endl;

  }
}

int main(){
  int arr[100], n, i;
  cout << "Enter number of elements: ";
  cin >> n;
  cout << "\nEnter array: ";
  for (i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Original array: ";

  for (i = 0; i < n; i++)
    cout << arr[i] << " ";

  repeated_number(arr, n);
return 0;
}