#include <stdio.h>
#include <stdbool.h>

#define SIZE 4

int rear = -1;
int front = -1;
int dequeue[SIZE];

bool isempty() {
    return (front == -1);
}

bool isfull() {
    return (rear == SIZE - 1);
}

void insertRear(int data) {
    if (isfull()) {
        printf("Queue is full! Cannot insert %d\n", data);
        return;
    }
    if (isempty()) {
        front = 0;
        rear = 0;
    } else {
        rear++;
    }
    dequeue[rear] = data;
}
void deleteRear()
{
    if(isempty())
    {
        printf(" can not found any Queue ");
        return;
    }
    if(rear==front)
    {
        rear =-1;
        front=-1;
    }
    else{
        rear --;
    }
    

}
void deletefront()
{
    if (isempty())
    {
        printf("Can not found any value in this queue\n");
        return ;
    }
    if(rear==front)
    {
        rear=-1;
        front=-1;
    }
    else{
        front ++;
    }
}
void display() {
    if (isempty()) {
        printf("Queue is empty.\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        printf("%d ", dequeue[i]);
    }
    printf("\n");
}

int main() {
    insertRear(10);
    insertRear(20);
    insertRear(30);
    insertRear(40);
    display();
    printf(" deltion after rear  \n");
    deleteRear(); 
    display();
     printf(" deltion after front\n");
     deletefront();
     display();
    
    

    return 0;
}
