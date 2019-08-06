#include <iostream>
using namespace std;

int main() {
	int rem,n,bin=0,count=0;
	cin>>n;
	while(n>0)
	{
		rem=n%10;
		if(rem==0||rem==1)
		{
		count++;
		}
		else
		{
		bin++;
		}
		n=n/10;
	}
		if(bin>0)
		{
		cout<<"no";
		}
		else
		{
		cout<<"yes";
		}
	
	return 0;
}
