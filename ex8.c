#include <stdio.h>

int main (int argc, char *argv[])
{
//	int areas[] = {10, 12, 14, 20};
//	char name[] = "Zed";
	char full_name[] = {'Z','e','d',' ','S','h','a','w'};	
	char name[] = "Zed";
	int areas[] = {10, 12, 14, 20};

	printf("The size of an int: %ld\n", sizeof(int));
	printf("The size of areas (int[]):%ld\n",sizeof(areas));
	printf("The number of ints in areas is: %ld\n", sizeof(areas)/sizeof(int));
	printf("The first area is %d the second area is %d.\n", areas[0], areas[1]);

	printf("The size of a char is %ld.\n", sizeof(char));
	printf("The size of name(char[]) is %ld.\n", sizeof(name));
	printf("The number of chars in name is %ld.\n", sizeof(name)/sizeof(char));
	printf("The size of full_name(char[]) is %ld.\n", sizeof(full_name));
	printf("The number of chars is %ld.\n", sizeof(full_name)/sizeof(char));
	printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

	return 0;
}

