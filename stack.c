#include<stdio.h>
#include<stdlib.h>

// adding structure of linked list to create stack
struct node {
    int n;
    int size;
    struct node*ptr;  
};

void traversal(struct node *a){
while(a!=NULL){
    printf("%d",a->n);
    a=a->ptr;
    printf("\n");
}
}
// function to allocate the memory dynamically
struct node *dma(){
struct node *a;
a=(struct node*)malloc(sizeof(struct node));
}

int isempty(struct node *a){
    if (a->size==1){
        return 0;
    }
    return 1;
}

struct node *push(struct node *a,int val){
if (isempty(a)){
    struct node *head;
    head=dma();
    head->n=val;
    head->size=a->size-1;
    head->ptr=a;
    return head;
}
printf("stack overflow");
}

int main (){
    struct node *head;
    head=(struct node*)malloc(sizeof(struct node));
    head->n=10;
    head->size=5;
    head->ptr=NULL;
    head=push(head,20);
    head=push(head,30);
    head=push(head,40);
    head=push(head,50);
    traversal(head);
    head=push(head,60);
    return 0;
}