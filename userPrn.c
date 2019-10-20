#include <stdio.h>
#include <stdlib.h>
void get_prn();
main(){
	printf("this program is to get 11 digit roll number from user and print it on screen:\n");
	get_prn();
	
}
void get_prn(){
	char a[20];
	printf("enter your 11 digit roll number:\n");
	scanf("%s",&a);
	printf("\nyour prn is:%s",a);
}
