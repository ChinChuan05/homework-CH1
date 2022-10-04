# include <iomanip>
# include <stdio.h>
# include <stdlib.h>

int num;

int main(){
    printf("Please input a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0){
        printf("%d is even\n", num);
    }
    else{
        printf("%d is odd\n", num);
    }
}
