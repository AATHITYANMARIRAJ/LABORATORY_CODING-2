#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cout<<"enter the name";
    getline(cin,s);
    
    // Takes only space separated C++ strings.
    stringstream ss(s);  
    string word;
    string s1;
    int count=1;    
    while (ss >> word) { // Extract word from the stream.
        if((count==1)||(count==2)){
        	s1+=word[0];
        	s1+='.';
        	count++;
		}
		else{
			s1+=word;
			count++;
		}
    }
    cout<<s1;
    return 0;
}
