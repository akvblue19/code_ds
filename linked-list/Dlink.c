#include<stdio.h>
#include<stdlib.h>
struct node{
    int d;
    struct node *forw;
    struct node *back;
};
struct node *insert(struct node *head,int x){
    struct node *new;
    new=(struct node *)malloc(sizeof(struct node));
    new->d=x;
    new->forw=head;
    new->back=NULL;
    if(head!=NULL)
        head->back=new;
    head=new;
    return head;
}

void print(struct node *head){
    while(head!=NULL){
        printf("%d\t",head->d);
        head=head->forw;
    }
    printf("\n");
}
void main(){
    int x,i,n;
    struct node *head=NULL;
    printf("how many numbers\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the number: ");
        scanf("%d",&x);
        head=insert(head,x);
        print(head);
    }
}