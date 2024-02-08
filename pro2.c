#include<stdio.h>
main()
{
	int a,i,sum=0,average;
	

	
	printf("Enter size of array list: ");
	scanf("%d",&a);
	
	int array[a];
	for(i=0;i<a;i++){
		printf("array[%d] : ",i);
		scanf("%d",&array[i]);
		
	}
	for(i=0;i<a;i++){
		printf("array element : %d\n",array[i]);
		sum=sum+array[i];
		average= sum/a;
	}
	
	printf("Average of all array elements:%d",average);
}
