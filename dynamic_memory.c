#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct employee{
int id;
char name[10];
}*EMP;
 EMP get_info(EMP head){
 printf("enter employee id :");
 scanf("%d",&(head->id));
 printf("enter employee name :");
 scanf("%s",(head->name));
 return head;
 }
 int main()
 {
     int n,i;
     printf("enter the number of employee :");
     scanf("%d",&n);
     EMP head=(EMP)malloc(n*sizeof(struct employee));
     for(i=0; i<n; i++){
        (head+i)=get_info(head);
     }
     for(i=0;i<n;i++){
        printf("id : %d\n name : %s\n",(head+i)->id,(head+i)->name);
     }
     return 0;
 }
