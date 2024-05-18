#include<stdio.h>
void main(){
	int i=0,j=0; char a[20],b[1];
	printf("Enter the String: ");scanf("%s",a);
	printf("Enter the char to search: ");scanf("%s",b);
	while(j<5){
		if(a[j]==b[0])
			i++;
		j++;
	
	}
	if(i)
		printf("Char Found");
	else
		printf("Char not found");

}
