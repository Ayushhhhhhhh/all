#include<stdio.h>

struct Node{
	int Data;
	struct Node *Next;
}*head=NULL,*tail,*tmp,*newnode;

void initialize(int arr[4])
{
	int i;
	for(i=0;i<4;i++){
		newnode = (struct Node*)malloc(sizeof(struct Node));
		newnode->Data = arr[i];
		newnode->Next = NULL;
		if(head==NULL){
			head=tail=newnode;
		}
		else{
			tail->Next = newnode;
			tail = newnode;
		}
	}
}
void display(){
	tmp = head;
	while(tmp!=NULL){
		printf("%d->",tmp->Data);
		tmp=tmp->Next;
	}
	printf("NULL");
}

int main(){
	int arr[4]={1,53,25,23};
	initialize(arr);
	display();
}
