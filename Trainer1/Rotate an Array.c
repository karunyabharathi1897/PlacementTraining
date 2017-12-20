#include <stdio.h>

int main(void) {
	// your code goes here
	int n,k;
	int a[10];
	scanf("%d",&n);
	scanf("\n%d",&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<k;i++)
	{
		int t=a[0];
		for(int j=0;j<n;j++)
		{
			a[j]=a[j+1];
		}
		a[n-1]=t;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
