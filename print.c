//File view function
#include "variables.c"

void print(FILE *tf){
	system("CLS");
	tf=fopen("athletes.dat", "rb");
	i=1;
	fread(&t1, sizeof(t1), 1, tf);
	while (!feof(tf)){
		printf("\n %6.2d athlete %10s \t number %3d \t score %3f", i, t1.surname, t1.number, t1.score);
		fread(&t1, sizeof(t1), 1, tf);
		i++;
	}
	getch();
	system("CLS");
}
