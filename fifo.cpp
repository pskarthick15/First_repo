#include<iostream>
using namespace std;
#define m 3

void fifo(int r[20],int n)
{
	int f[m],s=0,k=0;
	for(int i=0;i<n;i++)
	{
		if(i<m)
		{
			f[k]=r[i];
			cout<<"Miss ";
			s+=1;
			k++;
		}
		else if(i>=m && ((r[i]==f[k%m])||(r[i]==f[i%m])))
		{
			cout<<"Hit ";	
		}
		else if(i>=m && r[i]!=f[i%m])
		{
			cout<<"Miss ";
			f[k%m]=r[i];
			s+=1;
			k++;
		}
	}
	cout<<"\nPage contents:\n";
	for(int i=0;i<m;i++)
	{
		cout<<f[i];
	}
	cout<<"\nThe number of page faults= "<<s<<endl;
	
}

int main()
{
	int ch,n=12;
	cout<<"Enter your choice:\n1.FIFO\n2.LRU\n";
	cin>>ch;
	int r[]={0,1,2,3,0,1,4,0,1,2,3,4};
	if(ch==1)
	{
		fifo(r,n);
	}
}
		
	 
	
			
			
