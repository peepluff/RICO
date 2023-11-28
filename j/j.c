#include<stdio.h>

int main(){
    int TotalInput,UserInput,countNum, i =1;i <=TotalInput;i++;
   char ch;
   do{

   printf("\n MENU\n");
   printf("[I]input\n");
   printf("[E]Exit\n");
   printf("Choice:\n");
   scanf("%c",&ch);
   switch(ch){
       case 'I':
  printf("How many?");
  scanf("%d",&TotalInput);
  for(i=1;i <=TotalInput;i++){
  printf("Enter Number:",i);
  scanf("%d",&UserInput);
  break;
case'D':
  printf("%d",UserInput);

       }
}}while(ch!='E'&&ch!='e');
return 0;
}

