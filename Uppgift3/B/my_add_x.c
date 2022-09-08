#include <stdio.h>

int main () {

	int n, sum = 0, i;
	
	printf("Hur många heltal vill du summera? ");
	scanf("%d",&n);
	
	int antal[n];
	
	for (i = 0; i < n; i++)
	{
		printf("Tal %d: ", i+1);
		scanf("%d", &antal[i]);
		sum = sum + antal[i];
	}
	
	printf("Summa = %d\n", sum);
	
	return 0;
}
