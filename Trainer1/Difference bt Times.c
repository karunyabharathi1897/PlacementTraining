#include <stdio.h>

int main(void) {
	// your code goes here
	int a,b,c,d,x,y;
	scanf("%d %d\n",&a,&c);
	printf("%d:%d",a,c);
	scanf("%d %d",&b,&d);
	printf("\n%d:%d\n",b,d);
	x=a-b;
	y=c-d;
	if(y>=60)
	{
		x=x+1;
		y=y-60;
	}
	printf("%d:%d",x,y);
	return 0;
}
