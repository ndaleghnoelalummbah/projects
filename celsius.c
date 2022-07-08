#include <stdio.h>
#include <stdlib.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
int main(int argc, char *argv[]) {
	int fahr,cels;
	printf("fahrenheit      celsius\n");
	for(fahr=UPPER;fahr>=LOWER;fahr-=20){
	cels=(5*(fahr-32))/9;
	printf("%-10d%10d\n",fahr,cels);
}	
return 0;
}
