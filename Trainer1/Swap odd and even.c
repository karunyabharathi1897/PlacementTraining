#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char a[10];
	int t,n;
	gets(a);
	n=strlen(a);
	if(n%2==0)
	{
		for(int i=0;i<n;i+=2)
		{
			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;
		}
	}
	else
	{
		for(int i=0;i<n-1;i+=2)
		{
			t=a[i+1];
			a[i+1]=a[i];
			a[i]=t;
		}	
	}
	puts(a);
	
	return 0;
}
