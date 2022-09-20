#include <cstdio>

int main(void)
{
	int N;
	scanf("%d", &N);

	int sum = 0;
	switch (N)
	{
		case 1: sum += 1;
		case 2: sum += 2;
		case 3: sum += 3;
		case 4: sum += 4;
		case 5: sum += 5;
		case 6: sum += 6;
		case 7: sum += 7;
		case 8: sum += 8;
		case 9: sum += 9;
		case 10: sum += 10;
	}
	
	printf("%d\n", sum);
	return 0;
}