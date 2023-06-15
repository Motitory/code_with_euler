#include <cstdio>

int main(void)
{
	int b = 0B1111;
	int o = 017;
	int h = 0Xf;

	printf("%d %d %d\n", b, o, h);
	printf("%o %o %o\n", b, o, h);
	printf("%x %x %x\n", b, o, h);

	return 0;
}