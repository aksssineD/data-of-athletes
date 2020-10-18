#include "variables.c"

main(){
	char c;
	FILE *tf;
	while (1){
		//clrscr();
		puts(" 1 - New file");
		puts(" 2 - View file");
		puts(" 3 - Add to file");
		puts(" 4 - Find and Change");
		puts(" 5 - Swap 1 and 2 athlete");
		puts(" 0 - Exit");
		c=getch();
		switch(c){
			case '1':; break;
			case '2':;break;
			case '3':;break;
			case '4':;break;
			case '5':;break;
			case '0':return(0);
			default: puts("\n Neverniy regim!");
		}
	}
}
