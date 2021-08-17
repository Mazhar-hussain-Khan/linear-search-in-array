/*Mazhar Hussain    reg no=20MDELE098
Email:20MDELE098@uetmardan.edu.pk*/
//linear search//

#include<stdio.h>
int main(){
	int array[10];
	int keynum;
	int i;
	int count=0;
	for (i=0;i<10;i++){
		printf("enter array [%d] element:  \n",i);
		scanf("%d",&array[i]);
	}
	printf("enter number to search in array\n");
	scanf("%d",&keynum);
	
	for (i=0;i<10;i++){
		if(array[i]==keynum){
			printf("%d found at position %d\n",array[i],i);
		}
	}
	return 0;
}
