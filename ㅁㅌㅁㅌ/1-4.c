#include <stdio.h>

int main(void)
{
	int Hg, bit, channel, sec;
	float CD;
	scanf("%d %d %d %d", &Hg, &bit, &channel, &sec);

	CD = ((float)Hg * bit * channel * sec) / 8;
	printf("%.1fMB", CD / 1024 / 1024);

	return 0;
}