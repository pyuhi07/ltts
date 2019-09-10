#include <stdio.h>

void** rrr;

int main(void)
{
	//stores in rrr the address of newly allocated bbb block
	//rrr = strdup("bbb");
	//free(rrr);
	rrr = malloc(sizeof(void**));
	*rrr = strdup("bbb");
	return 0;
}
