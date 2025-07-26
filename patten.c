#include<stdio.h>

int main(){

int choice;
    float balance = 1000.00 , amount;
    while(1){

            printf("1.balance\n");
            printf("2.deposite money\n");
            printf("3.withdraw money\n");
            printf("4.exit\n");

            printf("enter a choice :");
            scanf("%d" ,&choice);

            switch(choice){
            case 1:
                printf("your balance is : rs%2.f\n" ,balance);
                break;
            case 2:
                printf("enter the deposite amount :");
                scanf("%f" , &amount);
                balance+= amount;
                break;
            case 3:
                printf("enter the withdraw amount :");
                scanf("%f" , &amount);
                balance-= amount;
                break;
            case 4:
                printf("thank you! see you again");
                return 0;

            default :
                printf("Invalid statement\n");
                
    }
    
    while (getchar() != '\n');
    }
    
    return 0;
}
    
