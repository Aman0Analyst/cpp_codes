#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

string extractstringatkey(string str,int key)
{
    char *s = strtok((char*)str.c_str()," ");
    while(key>1)
    {
        s = strtok(NULL," ");
    }
    return (string)s
}

int main()
{   int n;
    cin>>n;
    cin.get();
    string arr[100];
 
    for(int i=0; i<n; i++)
    {
        getline(cin,arr[i]);
    }

    int key;

}