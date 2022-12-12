#include<stdio.h>

main(){
	
	int n;
	
	printf("Enter Size OF Array :- ");
	scanf("%i",&n);
	
	int a[n];
	
	int i;
	
	for(i=0; i<n; i++){
		
		
		scanf("%i",&a[i]);
	}
	
	for(i=0; i<n; i++){
		
		
		printf("%i\n",a[i]);
	}
	
}
