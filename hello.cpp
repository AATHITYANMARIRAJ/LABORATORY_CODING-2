#include <bits/stdc++.h>
using namespace std;
int main(){
	string a="Welcome to all, Hello Take your seat";
	int n=a.length();
	string b="Hello";
	string s;
	for(int i=0;i<n;i++){
		if(a[i]==','){
			continue;
		}
		else{
			s+=a[i];
		}
		
	}
	cout<<s<<"\n";
	
	int flag=0;
	int n1=s.length();
	
	stringstream ss(s);  
    string word;
    while (ss >> word) { // Extract word from the stream.
        if(word=="Hello"){
        	flag=1;
		}
    }
    if(flag==1){
    	cout<<"HELLO is present";
	}
	else{
		cout<<"not present";
	}
    return 0;
}
