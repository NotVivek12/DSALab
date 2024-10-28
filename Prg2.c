#include<stdio.h>
#include<stdlib.h>
int *a, max,top = -1;
void push(int ele) {
    if(top == max-1) {
        max = max*2;
        printf("Stack overflow so size is resized..");
        a = realloc(a,max*sizeof(int));
    }
    a[++top] = ele;
}
int pop() {
    if(top == -1) {
        printf("Stack overflow");
        return -999;
    } else {
        return a[top--];
    }
}
void display() {
    int i;
    if(top == -1) 
        printf("Stack is empty");
    else {
        printf("Stack elements are: \n");
        for(i = top; i >= 0; i-- ) {
            printf("%d\t",a[i]);
        }
    }
}
void main() {
    int choice, ele;
    printf("Enter the value of max: ");
    scanf("%d",&max);
    a = (int*)malloc(max*sizeof(int));
    while(1) {
        printf("Enter your choice\n");
        printf("1 for push\n2 for pop\n3 for display\n4 for exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed: ");
            scanf("%d",&ele);
            push(ele);
            break;
        case 2:
            ele = pop();
            if(ele != -999) {
                printf("Deleted element is %d",ele);
            }
            break;
        case 3:
            display();
            break;
        case 4:
            free(a);
            exit(0);
        default:
            printf("Invalid");
            break;
        }
    }
}