#include "variables.c"

void swap(FILE *tf){
	struct ath tmp_struct1; 
	struct ath tmp_struct2;
	int i=sizeof(t1);
	tf=fopen("athletes.dat","rb");
	
	if(!feof(tf)){
	fread(&tmp_struct1,sizeof(tmp_struct1),1,tf);
	fread(&tmp_struct2,sizeof(tmp_struct2),1,tf);
	}
	fclose(tf);
	
	tf=fopen("athletes.dat","r+b");
	
	if (!feof(tf)) {
	fwrite(&tmp_struct2,sizeof(tmp_struct2),1,tf);
	fwrite(&tmp_struct1,sizeof(tmp_struct1),1,tf);
    }
	fclose(tf);
	
	tf=fopen("data.dat","rb");
	
	fread(&t1,sizeof(t1),1,tf);
	printf("\n Swap is done! \n");
	getch();
	system("CLS");
	fclose(tf);
}