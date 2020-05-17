#include <stdio.h>
#include <string.h>

char num(char c){
	return (c=='A' || c=='B' || c=='C') ? '2' : (c=='D' || c=='E' || c=='F') ? '3':
			(c=='G' || c=='H' || c=='I') ?'4' : (c=='J' || c=='K' || c=='L') ? '5':
			(c=='M' || c=='N' || c=='O') ? '6' :(c=='P' || c=='R' || c=='S') ? '7':
			(c=='T' || c=='U' || c=='V') ?'8' : (c=='W' || c=='X' || c=='Y' || c=='Z') ? '9' : c;
			
}


char *convert(char word[],int size){
	int i;
	for(i=0;i<size;i++)
		word[i] = num(word[i]);
		
	return word;
}

int main(){
	char word[100];
	
	printf("Enter Phone number: ");
	gets(word);
	
	printf("Output: %s",convert(strupr(word),strlen(word)));
	return 0;
}
