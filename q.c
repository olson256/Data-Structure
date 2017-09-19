#include<stdio.h>
#define size 5
struct queue
{
    int queue[size];
    int front,rear;
}q;
int isempty()
{
    if(q.front>q.rear || q.front==-1)return 1;
    else return 0;
}
int isfull()
{
    if(q.rear==size-1)return 1;
    else return 0;
}
void insert(int x)
{
    if(isfull())printf("Queue is full\n");
    else
    {if(q.front==-1){q.front++;q.rear++;q.queue[q.rear]=x;}
    else q.rear++;
    q.queue[q.rear]=x;}
}
void delete()
{
    if(isempty() || q.front>q.rear)printf("Queue is empty\n");
    else q.front++;
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
    printf("1.Insert\n2.Delete\n3.Display\n");
    while(ch!=0)
    {
        printf("Enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("Enter value to be inserted:");
                   scanf("%d",&n);
                   insert(n);
                   break;
            case 2:delete();
                   break;
            case 3:display();break;
            default:ch=0;break;
        }
    }
return 0;
}
