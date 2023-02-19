#include<iostream>
using namespace std;

int main()
{
	string a;
	cout<<"enter the string\n";
	getline(cin,a);
	string b;
	int n=a.length();
	for(int i=0;i<n;i++){
		if(isalpha(a[i])){
			char ch=a[i];
			ch++;
			b+=ch;
		}
		else{
			b+=a[i];
		}
	}
	cout<<"The output string is "<<b<<"\n";
	return 0;
}

