#include<stdio.h>  
   
main(){  


    int r, c;  
    int i, j;      
 
    int a[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};  
  
    int b[3][3] = {9, 8, 7, 6, 5, 4, 3, 2, 1};  
  
    r = (sizeof(a)/sizeof(a[0]));  
    c = (sizeof(a)/sizeof(a[0][0]))/r;  
      
    int total[r][c];  
      
     for(i = 0; i < r; i++){  
       
	    for(j = 0; j < c; j++){  
       
	        total[i][j] = a[i][j] + b[i][j];  
       
	    }  
    }  
      
    printf("Addition :- \n");  
    
	for(i = 0; i < r; i++){  
    
	    for(j = 0; j < c; j++){  
    
	       printf("%d ", total[i][j]);  
    
	    }  
    
	    printf("\n");  
    }  
 
}
