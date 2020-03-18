#include<iostream>
#include<stdlib.h>
using namespace std;
char currdir='r';
int llr=0,llc=0,ulr,ulc,totcount;
void printnums(int **arr)
{
	//cout<<"Inside fun"<<endl;
	if(totcount!=0)
	{
		//cout<<"Inside if"<<endl;
		int i;
		if(currdir=='r')
		{
			i=llc;
			while(i<=ulc)
			{
				cout<<arr[llr][i]<<',';
				totcount--;
				i++;
			}
			llr++;
			currdir='d';
		}
		else if(currdir=='l')
			 {
				i=ulc;
				while(i>=llc)
				{
					cout<<arr[ulr][i]<<',';
					totcount--;
					i--;
				}
				ulr--;
				currdir='u';
			 }
			 else if(currdir=='u')
				  {
					i=ulr;
					while(i>=llr)
					{
						cout<<arr[i][llc]<<',';
						totcount--;
						i--;
					}
					llc++;
					currdir='r';
				  }
				  else if(currdir=='d')
						{
							i=llr;
							while(i<=ulr)
							{
								cout<<arr[i][ulc]<<',';
								totcount--;
								i++;
							}
							ulc--;
							currdir='l';
						}
		printnums(arr);
	}
	return;
}
int main()
{
	cout<<"Enter the number of rows:";
	cin>>ulr;
	cout<<"Enter the number of cols:";
	cin>>ulc;
	totcount=ulr*ulc;
	int **arr;
	arr=new int*[ulr];
	for(int i=0;i<ulr;i++)
		arr[i]=new int[ulc];
	cout<<"Enter the elements of the matrix:"<<endl<<endl;
	for(int i=0;i<ulr;i++)
		for(int j=0;j<ulc;j++)
			cin>>arr[i][j];
	int m=ulr,n=ulc;
	cout<<endl<<"Elements of the mmatrix:"<<endl<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
			cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	ulr--;
	ulc--;
	cout<<endl<<"Spiral traversal:"<<endl<<endl;
	if(totcount!=0)
		printnums(arr);
}
