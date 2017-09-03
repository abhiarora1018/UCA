#include<stdio.h>
int partition(int *a,int start,int end)
{	int pivot=a[end];
	int pindex=start,i=start;
	int temp;
	while(i<end)
	{	if(a[i]<=pivot)
		{	temp=a[i];
			a[i]=a[pindex];
			a[pindex]=temp;
			pindex++;
		}
		i++;
	}
	temp=a[end];
	a[end]=a[pindex];
	a[pindex]=temp;
	return pindex;
}
void quicksort(int *a,int start,int end)
{	if(start<end)
	{	int pindex=partition(a,start,end);
		quicksort(a,start,pindex-1);
		quicksort(a,pindex+1,end);
	}
}
void main()
{	int i,arr[]={2,4,1,6,11,90,9,3};
	quicksort(arr,0,7);
	for(i=0;i<8;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
