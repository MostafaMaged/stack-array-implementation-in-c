#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;

void Push(int);
void Pop();
int Top();
bool IsEmpty();
void Print();

int main()
{
    int choice = -1;
    int data = 0;

    while(1){
        printf("choose what u want to do : \n");
        printf("1.push\n");
        printf("2.pop\n");
        printf("3.top\n");
        printf("4.isEmpty\n");
        printf("5.print\n");
        printf("6.exit\n");
        printf("your choice : ");

        scanf("%d", &choice);

        if(choice != 6){

             switch(choice){
                case 1:
                    printf("Enter data: ");
                    scanf("%d", &data);
                    Push(data);
                    break;
                case 2:
                    if(IsEmpty()){
                        printf("stack is empty\n");
                    }else{
                        Pop();
                    }
                    break;
                case 3:
                    if(IsEmpty()){
                        printf("stack is empty\n");
                    }else{
                        printf("top is : %d\n", Top());
                    }

                    break;
                case 4:
                    if(IsEmpty()){
                        printf("stack is empty\n");
                    }else{
                        printf("stack is not empty\n");
                    }
                    break;
                case 5:
                    Print();
                    break;
                default:
                    printf("you entered invalid choice .\n");
            }
        }
        else{
            break;
        }
    }


    return 0;
}

void Push(int data){
    if(top == MAX_SIZE - 1){
        printf("Error: stack overflow\n");
        return;
    }
    top++;
    A[top] = data;
}

void Pop(){
    if(IsEmpty()){
        printf("stack is empty\n");
        return;
    }
    top--;
}

int Top(){
    if(IsEmpty()){
        printf("stack is empty\n");
        return;
    }
    return A[top];
}

bool IsEmpty(){
    return top == -1;
}

void Print(){
     if(IsEmpty()){
        printf("stack is empty\n");
        return;
    }
    printf("Stack : ");
    int i = 0;
    for(i = 0; i <= top; i++){
        printf("%d\t", A[i]);
    }
    printf("\n");
}


