#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int array[50], *maximum, *minimum, size, i; //pointer variables declared for max and min
    cout<<"Enter the number of elements in array\n";
    cin>>size;
    //input for array elemets
    cout<<"Enter array elements\n";
    for ( i = 0 ; i < size ; i++ )
        cin>>array[i];
    //minimum pointer points in the range from first element of array to last
    // Returns the first one if more than one numbers
    // are same
    minimum= std::min_element(array,array+size);
    cout<<"Minimum element in the array is "<< *minimum <<"\n";
    //maximum pointer points in the range from first element of array to last
    maximum= std::max_element(array,array+size);
    cout<<"Maximum element in the array is "<< *maximum <<"\n";

return 0;
}