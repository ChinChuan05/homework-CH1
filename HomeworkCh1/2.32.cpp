# include <stdlib.h>
# include <stdio.h>

float weight, high, BMI;

int main(){
    printf("Please input weight in kg and input high in m: ");
    scanf("%f%f", &weight, &high);

    BMI = weight / (high * high);
    printf("BMI: %f\n\n", BMI);

    printf("BMI VALUES\nUnderweight:\tless than 18.5\n
    Overweight:\tbetween 18.5 and 24.9\nOverweight:\t
    between 25 and 29.9\nObese:\t\t30 or greater\n");
}
