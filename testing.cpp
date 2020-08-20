#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int Permutations(string input,string output[],int len){
if(len==0){
    output[0]="";
    return 1;
}
int a=0;
string temp[10000];
int s1=Permutations(input.substr(1),temp,len-1);
string s2=input.substr(0,1);
     for(int i=0;i<s1;i++){
      string str=temp[i];
      int length=str.length();
      for(int j=0;j<length+1;j++){
          str=temp[i];
          output[a]=str.insert(j,s2);
          a++;
      }
  }
return a;

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int input[n];
        for(int i=0;i<n;i++){
            input[i]=arr[i];
        }
        sort(input,input+n);
        string inputs="";
        for(int i=0;i<n;i++){
            inputs=inputs+to_string(input[i]);
        }
        //Input string 
    //    cout<<inputs<<endl;
        string match="";
        for(int i=0;i<n;i++){
            match=match+to_string(arr[i]);
        }
        //match string
       // cout<<match<<endl;
        string output[1000];
        int len=inputs.size();
        int k=Permutations(inputs,output,len);
      /*  for(int i=0;i<k;i++){
            cout<<output[i]<<" ";
        }*/
        int output1[n];
        for(int i=0;i<k;i++){
            string str1=output[i];
            int num=stoi(str1);
            output1[i]=num;
        }
        sort(output1,output1+n);
       /*  for(int i=0;i<k;i++){
            cout<<output1[i]<<" ";
        }*/
       // cout<<endl;
        int index;
        int match1=stoi(match);
        for(int i=0;i<k;i++){
            if(output1[i]==match1){
                index=i;
            }
        }
        if(index==k-1){
            cout<<output1[0]<<endl;
        }
        else{
            cout<<output1[index+1]<<endl;
        }
    }

    return 0;
}