// Now we will see how to use the already written generic binary search function in STL
// including the header files 

#include <iostream>
#include <algorithm>
using namespace std;

// starting the code 

int main()
{
    int arr[] = {1, 56, 23, 23, 45, 67,67,67, 89};
    int key;
    int n = sizeof(arr) / sizeof(int);
    cout << "enter the keyword you want to find in array : ";
    cin >> key;

    // the synax of binary search is
    // --+- binary_search(<array_name> ,<array_name+no_of_elements_in_array> ,<keyword_to_find>) --+-
    // the binary_search function will return bool type depending on the presence of element 
    bool finding = binary_search(arr, arr + n, key);

    if(finding == true){

        // now we will try to find the location of the founded elemet
        // STL provides us two functions to do this 
        // lowerbound and upperbound with th ehelp of these two function we will find the location of the element  

        // lowerbound   -------------->>>>>>
        // Syntax
        // lower_bound(<array_name> ,<array_name+no_of_elements_in_array> ,<keyword_to_find>)
        // this function returns the address of elemeant of array which is just greater than
        // or equal to the element we are finding

        auto it = lower_bound(arr, arr + n, key);
        cout<<"Lower bound of "<<key<<" is "<<it<<endl;

        // Upperbound   -------------->>>>>>
        // Syntax
        // upper_bound(<array_name> ,<array_name+no_of_elements_in_array> ,<keyword_to_find>)
        // this function returns the address of elemeant of array which is greater than
        // the element we are finding

        auto ot = upper_bound(arr,arr+n,key);
        cout<<"upper bound of "<<key<<" is "<<ot;


        // we can also find the numeber of elements if we simply subtract the upper bound with lower bound

     }

}