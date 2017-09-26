#include<stdio.h>
#define for(i,a,b) for(i=a;i<b;i++)
void quicksort(int a[],int low,int high)
{
    int pi;
    if(low<high)
    {
        pi=partition(a,low,high);
        quicksort(a,low,pi-1);
        quicksort(a,pi+1,high);

    }


}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

}
int partition(int a[],int low,int high)
{

    int pivot=a[high];
    int i,j;
    i=low-1;
    for(j,low,high)
    {
        if(a[j]<=pivot)
        {
            i++;
            swap(&a[j],&a[i]);

        }


    }
    swap(&a[i+1],&a[high]);
    return i+1;

}
int main()
{
    int n,i;
    printf("enter size");
    scanf("%d",&n);
    int a[n];
    for(i,0,n)
    {
        printf("enter value");
        scanf("%d",&a[i]);
    }
    quicksort(a,0,n-1);
    printf("after quicksort :");
    for(i,0,n)printf("%d ",a[i]);
    return 0;
}
