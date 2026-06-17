#include <stdio.h>

int main(){
    int age;
    printf("enter age");
    scanf("%d", &age);
    
    if(age >= 18){
        printf("you are an adult\n");
    } else {
        printf("you are a teenager\n");
    }

    printf("Thank You");
    return 0;
}