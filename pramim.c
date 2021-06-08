#include <stdio.h>


main(){
	int i, n, V=0, A=0, b, d;                          
	char c;
	
		scanf("%c %d",&c, &n);		
			
	for(i=0;i<n;i++){
		scanf("%d",&d);	
	 if(c =='V' || c=='v'){
	 	if(i%2==0){
	 		V+=d;
		 }else{
		 	A+=d;
		 }
	 }else{
	 	if(i%2==1){
	 		V+=d;
		 }else{
		 	A+=d;
		 }	
	 }
	   	
	 }

		printf("VOCE: %d AMIGO: %d \n",V,A);
	}

