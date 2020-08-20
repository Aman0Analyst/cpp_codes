// solution to STL library algorithm question

/*
Given an array Arr[], Treat each element of the array as the digit and whole array as the number. Implement the next permutation, which rearranges numbers into the numerically next greater permutation of numbers.

If such arrangement is not possible, it must be rearranged as the lowest possible order ie, sorted in an ascending order.

Note: The replacement must be in-place, do not allocate extra memory.

Input Format
The First Line contains the Number of test cases T.
Next Line contains an Integer N, number of digits of the number.
Next Line contains N-space separated integers which are elements of the array 'Arr'.
*/

/*
Sample Input
2
3
1 2 3 
3
3 2 1
Sample Output
1 3 2
1 2 3
*/

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin >> t;
	for(int j = 0;j<t;j++)
	{ 	int n;
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}	
		sort(arr,arr+n);
		next_permutation(arr,arr+n);
        for(int j=0;j<n;j++)
        {
            cout<<arr[j]<<" ";
        }
        cout<<endl;
	}
	return 0;
}