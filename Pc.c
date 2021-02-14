#include<stdio.h>
int main(int argc, char *argv[])
{
	int s=0,a,b;
	printf("Add");
	if(argc>=2)
	{
		a=atoi(argv[1]);
		b=atoi(argv[2]);
		s=a+b;
		printf("\n Sum=%d",s);
	}	
	printf("\n");
	return 0;
}
