#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2){
    int d1 = p1.first*p1.first + p1.second*p1.second;
    int d2 = p2.first*p2.first + p2.second*p2.second;
    if(d1==d2)
    {return p1.first<p2.first;}
    return d1<d2;
}
int main()
{
    vector<pair<int,int>> b;
    int n;
    cout<<"enter the number of cars : ";
    cin>>n;
    cout<<"enter the cordinates of cars---->"<<endl<<endl;
    for(int i=0;i<n;i++){
        int a,c;
        cout<<"enter cordinates of car "<<i+1<<" : ";
        cin>>a>>c;
        b.push_back(make_pair(a,c));
    }

    sort(b.begin(),b.end(),compare);

    for(auto x:b){
        cout<<"Car : "<<"x : "<<x.first<<", y: "<<x.second;
        cout<<endl;
    }

}