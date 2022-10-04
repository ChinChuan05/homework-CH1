# include <stdlib.h>
# include <stdio.h>

int num1, num2;

int main(){
    printf("Please input two nmbers: ");
    scanf("%d%d", &num1, &num2);
    
    if(num1 % num2 == 0){
        printf("%d is multiple of the n %d\n", num1, num2);
    }
    else{
        printf("%d is not multiple of the %d\n", num1, num2);
    }
}
