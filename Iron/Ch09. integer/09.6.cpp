#include <cstdio>

int main(void)
{
	char c = 127;																					// 2^7 - 1
	unsigned char uc = 255;																// 2^8 - 1

	short s = 32'767;																			// 2^15 - 1
	unsigned short us = 65'535;														// 2^16 - 1

	int i = 2'147'483'647;																// 2^31 - 1
	unsigned int ui = 4'294'967'295;											// 2^32 - 1

	long l = 2'147'483'647;																// 2^31 - 1
	unsigned long ul = 4'294'967'295;											// 2^32 - 1

	long long ll = 9'223'372'036'854'775'807;							// 2^63 - 1
	unsigned long long ull = 18'446'744'073'709'551'615;	// 2^64 - 1

	printf("%hhd %hhu\n", c, uc);
	printf("%hd %hu\n", s, us);
	printf("%d %u\n", i, ui);
	printf("%ld %lu\n", l, ul);
	printf("%lld %llu\n", ll, ull);

	return 0;
}