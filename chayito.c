#include<R.h>

void chayito(int *n){
	int i;
	for (i=0;i<*n;i++){
		Rprintf("%d Hello, world!\n", i);
	}
}
