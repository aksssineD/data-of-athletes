//Function of adding information to a file
#include "variables.c"
#include <assert.h>

void add(FILE *tf, int n){
	tf=fopen("athletes.dat", "ab");
	system("CLS");
	if(n==0){
		printf("\n Input data \n");
		do {
			printf("\n Surname: "); scanf("%s", &t1.surname);
			printf("\n Number: "); scanf("%d", &t1.number);
			printf("\n Score: "); scanf("%f", &t1.score);
			fwrite(&t1, sizeof(t1), 1, tf);
			printf("\n Finish? y/n ");
			ch=getch();
		}
		while (ch!='y');
		fclose(tf);
		system("CLS");
	} else {
		assert((tf)!=NULL);
	}
}
