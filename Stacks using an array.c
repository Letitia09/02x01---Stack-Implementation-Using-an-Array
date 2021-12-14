#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int stackArr[100005]; //- Global array to store the stack 
int top = -1; //- Stores the index of the topmost element on the stack

void push(int x) // Insert an element onto the top of the stack
{
   stackArr[++top] =x;
}

int peek ()// Returns the topmost element on the stack
{
  return stackArr [top];
}

void pop ()// Removes an element from the top of the stack
{
  top--;
}

int empty() //- Returns 1 if the stack is empty and 0 otherwise
{
  return top==-1;
}

int main(){

int n; 
top = -1;
scanf("%d", &n);
for (int i = 0; i<n; i++) {
   int t,x;
   scanf("%d",&t);
   if(t==1){
	   scanf("%d",&x);
	   push(x);
   }
   else if (t==2){
	   if(empty()){
		   printf("Invalid\n");
	   }
	   else{
		   pop();
	   }
   }
   else if (t==3){
	   if(empty()){
		   printf("Invalid\n");
		   continue;
	   }
	   for(int j=top;j>=0;j--){
		   printf("%d",stackArr[j]);
	   }printf("\n");
   }
   else{
	   if(empty()){
		   printf("Invalid\n");
		   continue;
	   }
	   printf("%d\n",peek());
   }
}
return 0;
}
   
   