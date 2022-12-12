#include<stdio.h>
 
 
main(){
 	int i, j, a, b;
  
 	printf("aadi line :-  ");
 	scanf("%i",&i);
	
	printf("ubhi line :-  ");
 	scanf("%i",&j);
 	
	int c[i][j];

 	printf("Please Enter Elements\n");
 	
	 for(a = 0; a < i; a++){
   		
		   for(b = 0; b < j; b++){
		   	
      		scanf("%d", &c[a][b]);
    
		}
  
  	}
	
	printf("Array\n");
 
 	for(a = 0; a < i; a++){
 		
  		for(b = 0; b < j; b++){
  			
  			printf("%d  ", c[a][b]);
	
		}
   	
	   	printf("\n");
  	
	  }  	

} 

