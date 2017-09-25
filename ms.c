#include<stdio.h>
void partition(int a[],int,int);
void merge_sort(int a[],int,int,int);
int a[20];
void main()
{
	int i,n=5;
	for(i=0;i<n;i++)
	{
		printf("\nEnter no:");
		scanf("%d",&a[i]);
	}
partition(a,0,n-1);
for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}

void partition(int a[20],int low,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		partition(a,low,mid);
		partition(a,mid+1,high);
        merge_sort(a,low,mid,high);
	}
}
void merge_sort(int a[20],int low,int mid,int high)
{
int i,m,k,l,temp[30];
l=low;
i=low;
m=mid+1;
while((l<=mid) && (m<=high))
{
if(a[l]<=a[m])
{
temp[i]=a[l];
l++;
}
else
{
temp[i]=a[m];
m++;
}
i++;
}
if(l>mid)
 {
for(k=m;k<=high;k++)
{
temp[i]=a[k];
i++;
}
}
else
{
for(k=l;k<=mid;k++)
{
temp[i]=a[k];
i++;
}
}
for(k=low;k<=high;k++)
{
    a[k]=temp[k];
}
}

