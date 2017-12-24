#include <stdio.h>



int main(void) {
	// your code goes here
	int a,b,x=1;
	scanf("%d%d",&a,&b);
	for(int i=0;i<b;i++)
	{
		x=x*a;
	}
	printf("%d power %d :",a,b);
	printf("%d",x);
	
	return 0;
}
