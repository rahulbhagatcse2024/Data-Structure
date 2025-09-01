#include <iostream>
using namespace std;
int main ()
{
    int n,i,sum=0,j;
    cout<<"enter your n number for addition = ";
    cin>>n;
    for(i=1;i<=n;i++){
    	j=i*i;
    	sum=sum+j;
	}
	cout<<"sum of squares of "<<n<<" number is = "<<sum;
}
