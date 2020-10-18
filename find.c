//Function to search and change information about an athlete
#include "variables.c"

void find(FILE *tf){
	long int i;
	tf=fopen("athletes.dat", "rb+");
	system("CLS");
	puts("Surname of the athlete");
	gets(ath);
	fread(&t1, sizeof(t1), 1, tf);
	while (!feof(tf)){
		if (strcmp(t1.surname, ath)==0){
			printf(" surname %10s number %6.2d score %f", t1.surname, t1.number, t1.score);
			printf("\n Change? y/n ");
			c=getch();
			if (c=='y'){
				printf("\n Score: "); scanf("%f", &t1.score);
				printf("\n Number: "); scanf("%d", &t1.number);
				i=sizeof(t1);
				fseek(tf, -i, 1);
				fwrite(&t1,  sizeof(t1), 1, tf);
				fflush(tf);
			}
		}
		fread(&t1, sizeof(t1), 1, tf);
	}
	fclose(tf);
	system("CLS");
}
