#include <stdio.h>

//Forward declaration of printing function.
void receiveData(int* ages, char** names, int count);



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
		printf("%s has lived %d years so far.\n", *cur_name, *cur_age);
	}

	printf("------\n");

	//Extra credit.
	//Add another for-loop at the end that prints out the addresses these pointers are using. You'll need the %p format for printf.
	for(i=0, cur_name = names, cur_age = ages; i < count; i++){
		printf("%s is at location %p and %d is at location %p.\n", *(cur_name+i), cur_name+i ,*(cur_age+i), cur_age+i);
	}

	printf("------\n");

	//Exra credit: function passing parameters by reference. 
	cur_name = names; cur_age = ages; 
	receiveData(cur_age, cur_name, count);

	return 0;

}


void receiveData(int* ages, char** names, int count){
	int i = 0;
	
	for(i=0; i < count; i++){
		printf("%s is at location %p and %d is at location %p.\n", *(names+i), names+i ,*(ages+i), ages+i);
	}

}