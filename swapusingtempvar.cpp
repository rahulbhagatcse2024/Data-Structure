#include <iostream>
using namespace std;
int main ()
{
	int a,b,temp;
	cout<<"enter your first value =";
	cin>>a;
	cout<<"enter your second value =";
	cin>>b;
	cout<<"before swap "<<a<<" and "<<b;
	temp=a;
	a=b;
	b=temp;
	cout<<"after swap"<<a<<" and "<<b;
}
