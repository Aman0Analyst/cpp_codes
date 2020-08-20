#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> b{2,3,4,5,67,78};
    
    // adding new elements to vector array 
    b.push_back(45);
    cout<<"    New element added";
    for(int x:b){
    cout<<x<<",";
    }

    cout<<endl;
    cout<<endl;

    // removing elements from the end of array

    b.pop_back();

    for(int x:b){
    cout<<x<<",";
    }

    cout<<"    element removed";
    cout<<endl;
    cout<<endl;

    // inserting new elements in betweenn of the vector

    b.insert(b.begin()+3,100);

    for(int x:b){
    cout<<x<<",";
    }

    cout<<"    element added in between";
    cout<<endl;
    cout<<endl;

    // modification oif insert

    b.insert(b.begin()+3,5,100);

    for(int x:b){
    cout<<x<<",";
    }

    cout<<"    elements added in between";
    cout<<endl;
    cout<<endl;

    // erasing elements from the middle

    b.erase(b.begin()+2);
    for(int x:b){
    cout<<x<<",";
    }
    cout<<"    element erased"<<endl<<endl;

    b.erase(b.begin()+2,b.begin()+6);
    for(int x:b){
    cout<<x<<",";
    }
    cout<<"   elements erased"<<endl<<endl;
    
    // getting the frontmost and last element from the vector
    
    cout<<b.front()<<"  -   "<<b.back()<<"     front and last element"<<endl<<endl;

    // removing all the elements from vector ,it doesn't releases the memmory allocated to the vector

    b.clear();
    
    for(int x:b){
    cout<<x<<",";
    }
    cout<<"    empty vector";
    cout<<endl<<endl;


}