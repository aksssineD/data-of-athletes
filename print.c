//File view function
#include "variables.c"

void print(FILE *tf){
	int i;
	system("CLS");//clrscr();
	tf=fopen("athletes.dat", "rb");//Открытие бинарного файла для чтения
	i=1;
	fread(&t1, sizeof(t1), 1, tf);//Чтение из файла одной структуры t1
	while (!feof(tf)){
		printf("\n %6.2d athlete %10s \t number %3d \t score %3f", i, t1.surname, t1.number, t1.score);
		fread(&t1, sizeof(t1), 1, tf);
		i++;
	}
	getch();
	system("CLS");
}
