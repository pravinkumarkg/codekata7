#include <iostream>
using namespace std;

int main() {
	int n1,n2;
	int diff;
	cin>>n1>>n2;
	diff=n1-n2;
	if(diff%2==0)
	{
		cout<<"even";
	}
	else
	{
		cout<<"odd";
	}
	return 0;
}
