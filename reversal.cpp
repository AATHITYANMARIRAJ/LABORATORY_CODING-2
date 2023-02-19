/*
1.	Reverse String
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	cout<<"enter the string\n";
	getline(cin,a);
	cout<<"the original string "<<a<<"\n";
	string b=a;
	int n;
	n=a.length();
	int n1=n-1;
	for(int i=0;i<n;i++){
		swap(a[i],b[n1]);
		n1--;
	}
     cout<<"the reversed string is "<<a<<"\n";
	return 0;
}
