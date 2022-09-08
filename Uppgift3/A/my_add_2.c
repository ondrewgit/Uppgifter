#include <stdio.h>

void main(int argc, const char* argv[]) {

	int sum = 0;
	
	if (argc != 3) {
		printf("Skriv in endast in två siffror, prova igen\n");
		exit(1);
	} else {
	
	sum = (strtol(argv[1], NULL, 10) + strtol(argv[2], NULL, 10));
	
	}
	
	printf("Summan är: %d\n", sum);
	
}
