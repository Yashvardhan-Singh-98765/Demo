#include<stdio.h>
int main (){
    int a,b;
    printf("Enter value of a and b: \n");
    scanf("%d%d",&a,&b);

    if (a<b){
        printf("b is greater");
    } else {
      printf("a is greater");
    }

    return 0;
}