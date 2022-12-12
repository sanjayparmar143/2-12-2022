#include <stdio.h>

main(){
	
    int m, n, i, j;
	int sum=0;
	
	printf("aadi line :-  ");
 	scanf("%i",&m);
	
	printf("ubhi line :-  ");
 	scanf("%i",&n);
    
	int a[m][n];
	
    printf("Enter array\n");
    
    for(i=0;i<m;i++){
    	
        for(j=0;j<n;j++){
        	
            scanf("%i",&a[i][j]);
        
		}
   
    }
           
    for(i=0;i<m;i++){
       
        for(j=0;j<n;j++){
        	
            sum += a[i][j];
        
		}
	
		printf("Sum %d = %d\n",i,sum);
    
	 }

}
