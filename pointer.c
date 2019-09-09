#include <stdio.h>;

void main()
{

	int x=5;
	int *y=&x;
	printf("%d\n",x);
	printf("%d\n",y);
	printf("%u\n",y);
	printf("%u\n",&x);
	printf("%d\n",*y);
	printf("%u\n",&y);
}
