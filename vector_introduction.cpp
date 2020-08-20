#include<iostream>
#include<vector>
using namespace std;

// vectors are the dynamic arrays which grow automaticallly and 
// double their original size whenever data tries to overflow them 
// the linit of allocation totally depends on the siz eof ram memory on the
// system

int main()
{
    //  different ways to iniltialize a vector
    vector<int> a;
    vector<int> b(4,10);
    vector<int> c(b.begin(),b.end());
    vector<int> v{2,3,4,5,6,7};

    // iterating over a vector

    for(int i=0;i<v.size();i++)
    {
        cout << v[i] <<",";
    }
    cout<<endl;
    cout<<endl;

    // interating using iterators
    
    for(auto it = b.begin();it!=b.end();it++)
    {
        cout<<*it<<",";
    }
    cout<<endl;
    cout<<endl;
    
    // iterating using for each loop its like a loop in python

    for(int x:v)
    {
        cout<<x<<",";
    }

    // taking vector input from user

    int n;
    cout<<endl;
    cout<<endl;
    cout<<"enter the size needed for the integer vector";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int member;
        cin>>member;
        a.push_back(member);
    }

    for(int x:a)
    {
        cout<<x<<',';
    }
    cout<<endl;    
    cout<<endl;


    // some important functioms for the memory comaparisions 
    // vector.size() *** this shows the present size vector ,i.e the number of values it contains ****
    // vector.capacity() *** this shows the present allocated memory for the vector 
    // vectro.max_size() *** this shows the maximum size the vector can have according to the present available RAM ***

    cout << a.size()<<endl;
    cout << a.capacity()<<endl;
    cout << a.max_size()<<endl;
    cout<<endl;
    cout<<endl;
    
    cout << v.size()<<endl;
    cout << v.capacity()<<endl;
    cout << v.max_size()<<endl;
    cout<<endl;
    cout<<endl;
    
    
    // the observations that the user do after running the code is totally leaved here


}