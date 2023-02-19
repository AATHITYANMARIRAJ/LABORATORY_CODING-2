/*
7.	Change Every Letter in a given String with the letter following 
it in the alphabet Input String: d1department Output String: e1efqbsunfou.
*/

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

