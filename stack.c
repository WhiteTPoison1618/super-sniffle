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
        return 1;
    }
    return 0;
}

struct node *push(struct node *a,int val){

}

int main (){
    struct node *head,*body;
    head=(struct node*)malloc(sizeof(struct node));
    body=dma();
    head->n=10;
    head->ptr=body;
    body->n=20;
    body->ptr=NULL;
    traversal(head);
    return 0;
}