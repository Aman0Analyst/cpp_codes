#include<iostream>
#include<algorithm>
using namespace std;

// defining a comaparator function to compare differetly

bool compare(int a,int b){
    return a>b;
}

int main()
{   int n;
    cout<<"enter the number of elements you want in array :"<<endl;
    cin>>n;
    int key;
    int a[500];
    cout<<"enter the array : "<<endl;

    for(int i;i<n;i++){
        cin>>a[i];
    }
    // now as we know the array we have entered is unsorted 
    // we can easily sort this by using the inbuilt sort function in stl
    // this is how it works
    // 
    // sort(<array_name>,<array_name + no_of_elements_in_array>,<comparator_if_needed>);

    sort(a,a+n,compare);

    // By default the sort function will sort the elements in ascending order
    // to make it work in descending order we can pass a fucntion to it which will 
    // compare the elements differently to sort them in descending order

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}


