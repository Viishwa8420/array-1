#include<stdio.h>
main()
{
	int n,i;
	

	
	printf("Enter size of array list: ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	for(i=0;i<n;i++){
		printf("\na[%d] : ",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++){
		printf("\nb[%d] : ",i);
		scanf("%d",&b[i]);
	
	}
	for(i=0;i<n;i++){
			c[i]=a[i]+b[i];
	}
	for(i=0;i<n;i++){
			printf("\n\narray c elements:%d\n",c[i]);
	}


}
