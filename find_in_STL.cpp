// To use algorithms of stl library you need to use the following header file
// ................
// #include <algorithm>
// ................
// to check the different types of datatypes we use the typeinfo header file
// ...................
// #include <typeinfo>
// ...................
// So now we can write the code as

#include <iostream>
#include <algorithm>
#include <typeinfo>

using namespace std;

int main()
{
    int arr[] = {1, 56, 78, 23, 45, 67, 89};
    int key;
    int n = sizeof(arr) / sizeof(n);

    //
    //
    // Now we can use the find algorithm written in c++ stl
    // syntax for find is
    // ->  --+- find(<array_name> ,<array_name+no_of_elements_in_array> ,<keyword_to_find>) --+-
    // The find return the memory location of the searched element in array
    // and if the element is not present then it simply returns the location of end of array
    // NOTE :::: {last element of array and ending of array both are different thimgs}
    //
    //
    // example

    cout << "enter the keyword you want to find in array : ";
    cin >> key;
    auto finding = find(arr, arr + n, key);

    // here finding will store the memory location of searched element
    // or the location of end of array if the element was not found

    cout << "the menory location returned by find function is : " << finding << endl;
    //  cout<<typeid(finding).name()<<endl;
    // uncomment above line to see the datatype of the finding

    // here the typeid(finding).name() will return "pi" which means a pointer to integer
    // now to check if we really found the element we can use this logic

    int index = finding - arr;

    // both finding and arr are the ponters to integers so on subtraction
    // they will give ans to, how many integers are pesent between them ?

    if (index == n)
    {
        cout << "element not found" << endl;
    }
    else
        cout << "element found at " << index << " position \n";
}
