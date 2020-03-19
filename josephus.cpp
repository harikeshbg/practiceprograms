#include<iostream>
#include<stdlib.h>
using namespace std;
int josephusfun(int n,int k)
{
	if(n==1)
		return 1;
	else
		return(josephusfun(n-1,k)+k-1)%n+1;
}
int main()
{
	int  n,k;
	cout<<"Enter the number of persons:";
	cin>>n;
	cout<<"Enter the skip offset:";
	cin>>k;
	int pos=josephusfun(n,k);
	cout<<"safe position:"<<pos<<endl;
}
