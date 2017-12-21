#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char a[20],b[20];
//	gets(a);
	scanf("%s\n",a);
	int j=0;
	int n=strlen(a);
//	printf("%d\n",n);
	for(int i=n-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
		//char m=b[j];
		
	}
	//puts(b);
	printf("%s\n",b);
	for(int k=0;k<n;k++)
	{
		if(b[k]=='a'||b[k]=='e'||b[k]=='i'||b[k]=='o'||b[k]=='u')
		{
			printf("");
		}
		else
		{
			printf("%c",b[k]);
		}
	}
	return 0;
}
