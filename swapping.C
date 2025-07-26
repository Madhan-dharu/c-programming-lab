#include <stdio.h>

void swapValue(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swapValue - a:%d,b:%d\n" ,a,b);

}
 //Function for call by reference
 void swapRef(int*a,int*b){
     int temp;
     temp=*a;
     *a = *b;
     *b = temp;
     //swaps actual variables using pointers

}

int main(){
    int x,y;

    printf("Enter two numbers:");
    scanf("%d%d" ,&x,&y);

    printf("\n--Before Swap---\n");
    printf("x:%d,y:%d\n" ,x,y);

    //call-by-value: values won't actually swap in main//
    swapValue(x,y);
    printf("Afterswapvalue (call-by-value): x: %d, y: %d\n",x,y);

    //call-by-refrence: values will swap in main
    swapRef(&x,&y);
    printf("After swapRef (call-by-reference): x: %d,y: %d\n",x,y);

    return 0;


}

