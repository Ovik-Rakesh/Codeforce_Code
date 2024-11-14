#include<stdio.h>
int cqueue[5];
int front = -1, rear = -1, n=5;
void insertCQ(int val) {
   if ((front == 0 && rear == n-1) || (front == rear+1)) {
      printf("Queue Overflow \n");
      return;
   }
   if (front == -1) {
      front = 0;
      rear = 0;
   }
   else {
      if (rear == n - 1)
         rear = 0;
      else
         rear = rear + 1;
   }
   cqueue[rear] = val ;
}
void deleteCQ() {
   if (front == -1) {
      printf("Queue Underflow\n");
      return ;
   }
   // cout<<"Element deleted from queue is : "<<cqueue[front]<<endl;
   printf("Element deleted from queue is : %d\n",cqueue[front]);
   if (front == rear) {
      front = -1;
      rear = -1;
   }
   else {
      if (front == n - 1)
         front = 0;
      else
         front = front + 1;
   }
}
void displayCQ() {
   int f = front, r = rear;
   if (front == -1) {
      printf("Queue is empty\n");
      return;
   }
   printf("Queue elements are :\n");
   if (f <= r) {
      while (f <= r){
         printf("%d ",cqueue[f]);
         f++;
      }
   }
   else {
      while (f <= n - 1) {
         printf("%d ",cqueue[f]);
         f++;
      }
      f = 0;
      while (f <= r) {
         printf("%d ",cqueue[f]);
         f++;
      }
   }
   printf("\n");
}
int main() {
   int ch, val;
   printf("1)Insert\n");
   printf("2)Delete\n");
   printf("3)Display\n");
   printf("4)Exit\n");

   do {
      printf("Enter choice : ");
      scanf("%d",&ch);
      switch(ch) {
         case 1:
            printf("Input for insertion: ");
            scanf("%d",&val);
            insertCQ(val);
         break;
         case 2:
            deleteCQ();
         break;
         case 3:
            displayCQ();
         break;
         case 4:
            printf("Exit\n");
         break;
            default: printf("Incorrect!\n");
      }
   } while(ch != 4);
      return 0;
}
