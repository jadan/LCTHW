#include <stdio.h>

int main(int argc, char* argv[])
{
	int ages[] = {23, 43, 12, 89, 2};
	char* names[] = {"Alan", "Frank", "John", "Mary", "Lisa"};

	int count = sizeof(ages)/sizeof(int);
	int i = 0;

	for(i=0; i < count; i++){
		printf("%s is %d years old.\n", names[i], ages[i]);
	}

	printf("------\n");

	//Pointer version.
	int* cur_age = ages;
	char** cur_name = names;

	for(i=0; i < count; i++){
		printf("%s is %d years old again.\n", *(cur_name+i), *(cur_age+i));
	}

	printf("------\n");

	//Pointers are just arrays.
	for(i=0; i < count; i++){
		printf("%s is %d years old again, again.\n", cur_name[i], cur_age[i]);
	}

	printf("------\n");

	//Weird complicated pointer way.
	for(cur_name =  names, cur_age = ages; (cur_age-ages)<count; cur_name++, cur_age++){
		printf("%s has lived %d years so far.", *cur_name, *cur_age);
	}

	return 0;


}