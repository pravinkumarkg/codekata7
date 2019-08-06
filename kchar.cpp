#include <iostream>
#include<string>
using namespace std;
int main() {
	string str,temp="";
	int n;
	cin>>str>>n;
	for(int i=0;i<n;i++)
	{
		temp=temp+str[i];
	}
	cout<<temp;
	return 0;
}
