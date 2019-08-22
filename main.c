#include <stdio.h>
#include <math.h>

int total, num[10];
int main(){
    int x, newNumber;
    scanf("%d \n", &total); //take in input from user for total numbers

    for(x = 0; x < total; x++){
        scanf("%d \n", &num[x]); //take in input from user for total numbers
    }

    //getting the seat number facing the inputted number
    for(x = 0; x < total; x++){
        if(num[x] % 6 == 0){
            if((num[x]/6)%2 == 0){
                //seat number is N[x]+1
                newNumber = num[x] - 11;
                printf("%d ",newNumber);
                printf("WS \n");
            }
            else{
                newNumber = num[x] + 1;
                printf("%d ",newNumber);
                printf("WS \n");
            }
        }
        else if(num[x] % 6 == 1){
            if((num[x]/6)%2 == 0 ){
                //seat number is N[x]+1
                newNumber = num[x] + 11;
                printf("%d ",newNumber);
                printf("WS \n");
            }
            else{
                //seat number is N[x]+1
                newNumber = num[x] - 1;
                printf("%d ",newNumber);
                printf("WS \n");
            }
        }
        else if(num[x] % 6 == 2){
            if((num[x]/6)%2 == 0){
                //seat number is N[x]+1
                newNumber = num[x] + 9;
                printf("%d ",newNumber);
                printf("MS \n");
            }
            else{
                //seat number is N[x]+1
                newNumber = num[x] - 3;
                printf("%d ",newNumber);
                printf("MS \n");
            }
        }
        else if(num[x] % 6 == 3){
            if((num[x]/6)%2 == 0){
                newNumber = num[x] + 7;
                printf("%d ",newNumber);
                printf("AS \n");
            }
            else{
                newNumber = num[x] - 5;
                printf("%d ",newNumber);
                printf("AS \n");
            }
        }
        else if(num[x] % 6 == 4){
            if((num[x]/6)%2 == 0){
                newNumber = num[x] + 5;
                printf("%d ",newNumber);
                printf("AS \n");
            }
            else{
                newNumber = num[x] - 7;
                printf("%d ",newNumber);
                printf("AS \n");
            }
        }
        else if(num[x] % 6 == 5){
            if((num[x]/6)%2 == 0){
                newNumber = num[x] + 3;
                printf("%d ", newNumber);
                printf("MS \n");
            }
            else{
                newNumber = num[x] - 9;
                printf("%d ",newNumber);
                printf("MS \n");
            }
        }
    }
}