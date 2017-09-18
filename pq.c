#include<stdio.h>
#define size 10
struct pque
{
    int que[size];
    int f,r;
}pq;

int pqfull()
{
if(pq.r==size-1)
    return 1;
else
    return 0;
}

int pqempty()
{
if(pq.f>pq.r)
    return 1;
else
    return 0;
}

void display()
{
int i;
for(i=pq.f;i<=pq.r;i++)
{
    printf("%d\t",pq.que[i]);
}
}

void insert(int x)
{
int j;
j=pq.r;
if(pq.f==-1)
pq.f++;
while(j>=0 && x<pq.que[j])
{
   pq.que[j+1]=pq.que[j];
   j=j-1;
}
pq.que[j+1]=x;
pq.r++;
}

/*void check(int data)
{
    int i,j;
    for (i = 0; i <=pq.r; i++)
    {
        if (data >= pq.que[i])
        {
            for (j = pq.r + 1; j > i; j--)
            {
                pq.que[j] = pq.que[j - 1];
            }
             pq.que[i] = data;
            return;
        }
    }
    pq.que[i] = data;
}
*/
void del()
{
int x;
x=pq.que[pq.f];
pq.f++;
printf("deleted element %d",x);
}

void main()
{
    int no, ch, e;
    pq.r=-1;
    pq.f=-1;

    printf("\n 1 - Enter in que");
    printf("\n 2 - Delete from que");
    printf("\n 3 - Display");
    printf("\n 4 - Exit");
    while (1)
    {
        printf("\n Enter choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter data : ");
            scanf("%d", &no);
            insert(no);
            break;
        case 2:
            del();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice, Please enter correct choice  ");
            break;
        }
    }
}
