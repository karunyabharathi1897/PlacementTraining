#include <stdio.h>

int main(void) {
	// your code goes here
	int a[100],n,m,x,f=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a);
	}
	for(int j=0;j<n;)
	{
		x=n-j;
		if(x>a[j])
		{
			m=a[j];
			j+=m;
		}
		else
		{
			f=1;
		}
	}
	if(f==0)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}
