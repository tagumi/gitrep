#include<stdio.h>

main(){
	int a;
	printf("How many times shall we print Cameron's name?: ");
	scanf("%d", &a);
	for (int i = 1; i <= a; i++){
		printf("Cameron\n");
		sleep(1);
	}
	
return 0;
		
}
