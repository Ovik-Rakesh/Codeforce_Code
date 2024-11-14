#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int sz;
    int f;
    int r;
    int *array;
};

int is_full(struct queue *q)
{
    if(q->r == q->sz-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int is_empty(struct queue *q)
{
    if(q->f == q->r)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void enqueue(struct queue *q,int val)
{
     if(is_full(q))
     {
        printf("Queue overflow\n");
     }
     else
     {
        q->r++;
        q->array[q->r] = val;
        printf("Enqueue element %d\n",val);
     }

}

int dequeue(struct queue *q)
{
     int a=-1;
     if(is_empty(q))
     {
        printf("Queue underflow\n");
     }
     else
     {
        q->f++;
        a=q->array[q->f];
     }
     return a;
}

void display(struct queue *q)
{
    if(is_empty(q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        for(int i = q->f+1; i<=q->r; i++)
        {
            printf("%d ",q->array[i]);
        }
        printf("\n");
    }
}

int main()
{
     struct queue q;
     q.sz=5;
     q.f=-1;
     q.r=-1;
     q.array=(int *)malloc(q.sz*sizeof(int));
     int choice,value,deQ;
    do
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &value);
                enqueue(&q,value);
                break;
            case 2:
                deQ = dequeue(&q);
                printf("Dequeue %d\n",deQ);
                break;
            case 3:
                display(&q);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }while(choice!=4);
}

