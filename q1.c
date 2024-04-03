#include<stdio.h>
void display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
int partition(int arr[],int low,int high)
{
	int pivot=arr[low];
	int i=low,j=high,temp;
	while(low<=high)
	{
		while(arr[i]<pivot)
		{
			i++;
		}
		while(arr[j]>pivot)
		{
			j--;
		}
	
	if(i<j)
	{
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
	}
	}
	arr[low]=arr[j];
	arr[j]=pivot;
	return j;
}

void quick(int a[],int low,int high)
{
	if(low<high)
	{
		int j=partition(a,low,high);
		quick(a,low,j-1);
		quick(a,j+1,high);
	}
}

int main()
{
	int n,i;
	printf("Enter no of elements in the array :");
	scanf("%d",&n);
	int a[n];
	int l=0,high=n;
	printf("\nEnter array elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	quick(a,l,high-1);
	display(a,n);
}
