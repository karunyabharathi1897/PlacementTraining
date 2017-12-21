#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char a[200],k;
	int b[100];
	int t,c,m=1,f=0;
	scanf("%s",a);
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		c=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				f=1;
				//int c;
				c++;
			}
		}
		if(c>=m && c!=1)
		{
			m=c;
			k=a[i];
			printf("%c:%d\n",k,m);
		}
		
		
	}
	if(f==0)
	{
		printf("-1");
	}
	else
	{
		printf("");
	}

	return 0;
}
