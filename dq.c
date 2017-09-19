#include<stdio.h>
#define size 5
struct queue
{
    int queue[size];
    int front,rear;
}q;
int isempty()
{
    if(q.front>q.rear || q.front==-1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if(q.rear==size-1)
        return 1;
    else
        return 0;
}
void insert_rear(int x)
{
    if(isfull())printf("Queue is full\n");
    else
    {
        if(q.front==-1)
    {
        q.front++;
        q.rear++;
        q.queue[q.rear]=x;
    }
    else
    q.rear++;
    q.queue[q.rear]=x;
    }
}

void insert_front(int x)
{
    if(isfull())printf("Queue is full\n");
    else
    {
    int j=q.rear;
    while(j>=q.front)
    {
        q.queue[j+1]=q.queue[j];
        j--;
    }
    q.queue[q.front]=x;
    q.rear++;
    }
}


void delete_front()
{
    int x;
    if(isempty() || q.front>q.rear)
        printf("Queue is empty\n");
    else
        q.front++;
    printf("deleted element %d",x);

}

void delete_rear()
{
    int x;
    if(isempty() || q.front>q.rear)
        printf("Queue is empty\n");
    else
    {
    x=q.queue[q.rear];
    q.rear--;
    printf("deleted element %d",x);
    }
}
void display()
{
    int i;
        for(i=q.front;i<=q.rear;i++)
    {
        printf("Elements of queue is/are:%d\n",q.queue[i]);
    }
}
int main()
{
    q.front=-1;
    q.rear=-1;
    int ch=1,n;
    printf("1.Insert rear\n2.Insert front \n3.Delete rear \n4.Delete front\n5.Display\n");
    while(ch!=0)
    {
        printf("Enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter value to be inserted:");
                   scanf("%d",&n);
                   insert_rear(n);
                   break;
            case 2:printf("Enter value to be inserted:");
                   scanf("%d",&n);
                   insert_front(n);
                   break;
            case 3:delete_rear();
                   break;
            case 4:delete_front();
                   break;
            case 5:display();break;
            default:ch=0;break;
        }
    }
return 0;
}
