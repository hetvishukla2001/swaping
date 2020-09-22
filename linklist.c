#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{
	char ename[20];
	int eage;
	int eno;
	int esal;
	struct node *next;
};
typedef struct node node;

void insert_node();
void display();
node *newnode ,*prt,*pre,*temp;
node *first=NULL, *last=NULL;

int main(){
	int ch=0;
	while(ch!=3){
		printf("\nSELECT YOUR CHOICE :");
		printf("\n1.Enter enployee data :");
		printf("\n2.display data :");
		printf("\n3.EXIT :\n");
		scanf("%d",&ch);
		switch(ch){
			case 1: insert_node(); break;
			case 2 : display();break;
			
		}
		
		
	}
	
	
	
	return 0;
}
node *create_node(char ename[20],int eno,int eage,int esal)
{
	newnode=(node *)malloc(sizeof(node));
	if(newnode==NULL){
		printf("problem");
	}
	else{
		strcpy(newnode->ename, ename);
		newnode->eno=eno;
		newnode->eage=eage;
		newnode->esal=esal;
		newnode->next=NULL;
		return newnode;
		
	}
}
void insert_node(){
	char ename[20];
	int eno;
	int eage;
	int esal;
	printf("\nenter employee  name :");
	scanf("%s",ename);
		printf("\nenter employee  pno :");
	scanf("%d",&eno);
		printf("\nenter employee  age :");
	scanf("%d",&eage);
		printf("\nenter employee  salary :");
	scanf("%d",&esal);
	
	newnode=create_node(ename,eno,eage,esal);
	if(first==last && first==NULL){
		first=last=newnode;
		first->next=NULL;
		last->next=NULL;
		
	}
	else{
		last->next=newnode;
		last=newnode;
		last->next=NULL;
		
	}
}

void display(){
	int i=0;
	temp=first;
	while(temp!=NULL){
		i++;
		printf(" \n%d employee:",i);
		printf("\n name %s",temp->ename);
		printf(" \nphone no %d",temp->eno);
		printf(" \nage %d",temp->eage);
		printf(" \nsalary %d",temp->esal);
		printf("\n\n\n");
		temp=temp->next;
	}
}
