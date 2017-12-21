#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	char a[100],c;
	scanf("%s",a);
	int n=strlen(a);
	for(int i=0;i<n;i++)
	{
		c=a[i];
		 if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
		{
			printf("%c",c);
		}
	}
	return 0;
}
