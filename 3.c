#include<stdio.h>

main(){
	
	int a, b, i, j;
    
	int x[i][j];
    
    float aver,sum = 0;
    
    printf("aadi line :-  ");
 	scanf("%i",&a);
	
	printf("ubhi line :-  ");
 	scanf("%i",&b);
    
	printf("Enter array\n");
    
	for(i=0;i<a;i++){
        
		for(j=0;j<b;j++){
        
		    scanf("%d",&x[i][j]);
        }
    
	}

    for(i=0;i<a;i++){
        
		for(j=0;j<b;j++){
          
		    sum += x[i][j];
        
		}
    
	}
    
	aver = sum / (a*b);
   
    printf("average = %.2f",aver);
}
