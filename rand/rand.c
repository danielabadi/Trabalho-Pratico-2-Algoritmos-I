#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]){
	int x = atoi(argv[1]);
	srand(time(NULL));
	printf("%d \n", x);
	int i;
	for(i = 0; i < x; i++){
		int rand_number = (rand()%128)+1; //para não gerar com peso 0 
		printf("%d ", rand_number);
	}
	return 0;
}