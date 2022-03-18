#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

void octet1 ( int *n) {
	int i = 0;
	unsigned char *ptr = (unsigned char*)n;
	for( i = 0; i < 4 ; i++) {
		printf("%p -> 0x%x \n",ptr, *ptr);
		ptr++;
	}
}

void f2(int *n) {
	int i = 0;
	unsigned char *ptr = (unsigned char*)n;
	for( i = 0; i < 4 ;i=i+2) {
		printf("%p -> 0x%x%x \n",ptr, *ptr,*(ptr+1));
		ptr = ptr+2;
	}
}

void f3(int *n) {
	int i = 0;
	unsigned int *ptr = (unsigned int*)n;
	for(i = 0; i < 1 ; i++) {
		printf("%p -> 0x%x\n", ptr, *ptr);
		ptr++;
	}
}

int main() {
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
	int i = 0;	
	int ne = sizeof(v) / sizeof(v[0]);
	for(i = 0 ; i < ne; i++) {
		printf("%p   %x\n", v+i, *(v+i));
	}
	for(i = 0; i < ne ; i++ ) {
		octet1(v+i);
	}
printf("\n\ndin 2 in 2 \n\n");
		for(i = 0; i < ne ; i++ ) {
		f2(v+i);
	}
	printf("\n\n din 4 in 4\n\n");
	for(i = 0; i < ne ; i++ ) {
		f3(v+i);
	}
	
    (void) v;

    return 0;
}
