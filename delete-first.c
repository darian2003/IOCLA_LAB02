#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern) { 
	unsigned int i = 0;
	int lens = strlen(s);
	int len = strlen(pattern);
	for( i = 0 ; i < strlen(s) ; i++) {
		int j = 1;
			if( *(s+i) == *pattern) {
			int k = i+1;
			while(j < len) {
				if(*(pattern + j) != *(s + k)) {
					break;
				}
				k++;
				j++;
			}
			if(j == len) {
				for( int q = i ; q <= lens - len ; q++) {
					*(s + q) = *(s + q + len);
				}	
				return s;
			}
		}
	}
	return s;
}	

int main(){
	char s[100] = "Ana are mere";
	char pattern[100] = "re";
	(void) s;
	(void) pattern;

	// Decomentati linia dupa ce ati implementat functia delete_first.
	 printf("%s\n", delete_first(s, pattern));

	return 0;
}
