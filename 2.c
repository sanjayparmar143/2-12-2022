#include<stdio.h>

main(){
	
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	
	int i;
	int j;

	j = sizeof(a[i]) / sizeof(int);

	i = (sizeof(a) / sizeof(int))/j;

	printf("aadi line:- %i\n",i);

	printf("ubhi line:- %i",j);


}
