#include <stdio.h>
#include<string.h>
int main(void) {
	// your code goes here
	char a[100];
	int n;
		
	gets(a);
	n=strlen(a);
	for(int i=0;i<n;i++)
	{
		int c=1;
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j] && a[i]!='\0')
			{
				//printf("dgw");
				a[j]='\0';
				c+=1;
				
			
			}
			
		}
		if(a[i]=='\0')
		{
			printf("");
		//	break;
		}
		else
		{
				printf("%c:%d\n",a[i],c);
		}
	
	
	
	}
	return 0;
}
