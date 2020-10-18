//new file creation function
#include "variables.c"

void input(FILE *tf){
	char ch;
	tf=fopen("athletes.dat", "wb");//Открытие бинарного файла для записи
	system("CLS");
	printf("\n Input data \n");
	do {
		printf("\n Surname: "); scanf("%s", &t1.surname);
		printf("\n Number: "); scanf("%d", &t1.number);
		printf("\n Score: "); scanf("%f", &t1.score);
		fwrite(&t1, sizeof(t1), 1, tf);//запись в файл одной структуры t1
		printf("\n Zakonchit? y/n \n");
		ch=getch();
	}
	while (ch!='y');
	fclose(tf);
	system("CLS");
}
