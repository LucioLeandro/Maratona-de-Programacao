#include<stdlib.h>
#include<stdio.h>


main() {
	int n;
	scanf("%d", &n);

	for(int i = 1; i <= 10000; i++) {
		if(i % n == 2) {
			printf("%d\n", i);
		}
	}

}
