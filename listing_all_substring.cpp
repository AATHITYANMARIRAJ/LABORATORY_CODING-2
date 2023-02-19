#include <iostream>
using namespace std;

int main(){
	string a;
	cout<<"enter the string:\n";
	
	cout<<"the substrings are as follows\n";
	getline(cin,a);
	int n1=a.length();
	for(int i=0;i<n1;i++){
		cout<<a[i]<<" ";
		for(int j=i+1;j<n1;j++){
			cout<<a[i]<<a[j]<<" ";
		}
	}
	return 0;
}
