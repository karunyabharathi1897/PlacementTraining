#include <stdio.h>



int main(void) {
	// your code goes here
	int a[100],n,m,x,f=0,i,j;
	scanf("%d",&n);
	for( i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;)
	{
		x=n-i;
		if(x>a[i])
		{
			m=a[i];
			i=i+m;
		}
		else
		{
			f=1;
			printf("False");
			break;
		}
		
	}
	if(f==0)
	{
	printf("True");
	}
	return 0;
}
