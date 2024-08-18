#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i;
	static char* str[] = { "Illegal month","January","February","March","April","May","June","July"
		,"Augest","Setember","October","November","December" };
	printf("Input month number:");
	scanf("%d", &i);
	if ((i <= 12) && (i >= 1))
		printf("month %d is %s\n", i, str[i]);
	else
		printf("%s\n", str[0]);
	return 0;

}