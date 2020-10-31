#include "variables.c"
#include <assert.h>

main(){
	char c;
	FILE *tf;
	test();
	while (1){
		puts(" 1 - New file");
		puts(" 2 - View file");
		puts(" 3 - Add to file");
		puts(" 4 - Find and Change");
		puts(" 5 - Swap 1 and 2 athlete");
		puts(" 0 - Exit");
		c=getch();
		switch(c){
			case '1':input(tf); break;
			case '2':print(tf);break;
			case '3':add(tf);break;
			case '4':find(tf);break;
			case '5':swap(tf);break;
			case '0':return(0);
			default: puts("\n Invalid mode!");
		}
		
	}
}
