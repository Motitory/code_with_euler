#include <cstdio>

int main(void)
{
	int score;
	scanf("%d", &score);

	switch (score / 10)
	{
		case 10:
		case 9:
			printf("%c\n", 'A');
			break;
		case 8:
			printf("%c\n", 'B');
		case 7:
			printf("%c\n", 'C');
		case 6:
			printf("%c\n", 'D');
		default:
			printf("%c\n", 'F');
	}
	return 0;
}