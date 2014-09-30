#include <stdio.h>

int main (int argc, char *argv[])
{
	char *states[] = {
		"California", "Oregon",
		"Washington", "Texas"
	};

	int num_states = 4;

	int i = 0;

	argv[1] = states[0];
	states[0] = argv[2];

	for(i = 1; i < argc; i++)
	{
		printf("arg %d: %s\n", i, argv[i]);

	}
	for(i = 0; i < num_states; i++){
		printf("state %d: %s\n", i, states[i]);
	}


		return 0;
}

