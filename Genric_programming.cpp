#include<iostream>
using namespace std;

template<typename T>
int search(T a[],int n,T key)
{
    for(int p = 0; p<n ;p++){
        if(a[p]==key){
            return p;
        }
    }
    return n;
}

int main()
{
    int a[] = {2,3,4,5,6,7,8,9,0};
    char b[] = {'a','v','r','c','b'};
    int n = sizeof(a)/sizeof(int);
    int key;
    char bey;
    bey = 'c';
    //  cout<<"which element you want to search : ";
    cin>>key;
    int position = search(b,n,bey);
    cout<<"the element is found at : "<<position;
    return 0;
}