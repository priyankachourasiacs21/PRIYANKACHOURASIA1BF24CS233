#include <stdio.h>
#define size 5
int stack[size];
int top=-1;
void push(int n){
    if(top==(size-1)){
        printf("stack overflow\n");
    }else{
        top++;
        stack[top]=n;
        printf("%d pushed into stack\n",n);
    }
}
void pop(){
    if(top==-1){
        printf("stack underflow\n");
    }else{
        printf("deleted element is %d\n",stack[top]);
        top--;
    }
}
void peek(){
    if(top==-1){
        printf("stack underflow\n");

    }else{
        printf("top element is %d\n",stack[top]);
    }
}
void display(){
    if(top==-1){
        printf("stack underflow\n");
    }else{
        printf("stack elements are:\n");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
int main(){
    int ch;
    int x;
    while(1){
        printf("\n---STACK MENU---\n");
        printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
        printf("enter your choice:");
        scanf("%d",&ch);
        switch(ch){
        case 1:
            printf("enter the value to push:");
            scanf("%d",&x);
            push(x);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            printf("exit program\n");
            return 0;
        default:
            printf("Invalid choice!\n");
        }
    }
}
