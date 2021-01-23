#include<bits/stdc++.h>
using namespace std;

void reArrange(int a[],int n)
{
	int i=-1,j=n;
	while(i<j)
	{
		while(i<=n-1 and arr[i]>0)
		{
			i++;
		}
		while(j>=0 and arr[j]<0)
		{
			j--;
		}
		if(i<j)
		{
			swap(arr[i],arr[j]);
		}
	}
	if(i==0 || i==n)
	{
		return;
	}
	int k=0;
	while(k<n && i<n)
	{
		swap(arr[k],arr[i]);
		i=i+1;
		k=k+2;
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;jun
}

int main()
{
	int n;
	cin>>n;
	int a[10005];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	reArrange(int a[],int n)
}
