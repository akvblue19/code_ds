#include<stdio.h>
#include<stdlib.h>
struct node{
    int d;
    struct node *link;
};
struct node *insert(struct node *head,int x){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->d=x;
    temp->link=head;
    head=temp;
}
struct node *reverse(struct node *head){
    struct node *prev=NULL,*current= head,*next=NULL;
    while( current!= NULL){
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;
    }
    head=prev;
}
struct node *reverseR(struct node *head){
    struct node *current=head;
    if(current->link==NULL){
        head=current;
        return head;
    }
    head=reverseR(current->link);
    struct node *next=current->link;
    next->link=current;
    current->link=NULL;
    return head;
}

void print(struct node *head){
    struct node *temp=head;
    while(temp != NULL){
        printf("%d\t",temp->d);
        temp=temp->link;
    }
    printf("\n");
    
}
void printR(struct node *temp){
    if(temp == NULL) return;
    printR(temp->link);
    printf("%d\t",temp->d);
}
void main(){
    int x,n,i;
    struct node *head;
    head=NULL;
    printf("how many number?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("enter the number: ");
        scanf("%d",&x);
        head=insert(head,x);
        print(head);
    }
    printf("iterative reversing\n");
    head = reverse(head);
    print(head);
    printf("recursive revrse print\n");
    printR(head);
    printf("\n");
    printf("recursive reversing\n");
    head=reverseR(head);
    print(head);

}