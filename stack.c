#include<stdio.h>
#include<stdlib.h>

// adding structure of linked list to create stack
struct node {
    int n;
    struct node*ptr;  
};

void traversal(struct node *a){
while(a!=NULL){
    printf("%d",a->n);
    a=a->ptr;
    printf("\n");
}
}

int main (){
    struct node *head,*body;
    head=(struct node*)malloc(sizeof(struct node));
    body=(struct node*)malloc(sizeof(struct node));
    head->n=10;
    head->ptr=body;
    body->n=20;
    body->ptr=NULL;
    traversal(head);
    return 0;
}