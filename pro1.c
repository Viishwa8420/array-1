#include<stdio.h>
main()
{
	int a,i,sum=0,sub;
	

	
	printf("Enter size of array list: ");
	scanf("%d",&a);
	
	int array[a];
		printf("\nEnter array elements: \n");
	for(i=0;i<a;i++){
		printf("array[%d] : ",i);
		scanf("%d",&array[i]);
			sum=sum+array[i];
	}
	sub=array[0];
	for(i=1;i<a;i++){
		sub=sub-array[i];
	}
		printf("\nlength of an array : %d\n",a);
		printf("\nsum of all array elements:%d\n",sum);
		printf("\nsub of all array elements:%d",sub);
}
