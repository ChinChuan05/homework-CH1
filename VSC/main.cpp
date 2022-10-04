# include <stdio.h>
# include <stdlib.h>

int num, num1, num2, num3, largest;
float weight, high, BMI;
int dis, gas_fee, gas_dis, park, toll, total_cost;


int main() {
    //2.21
	printf("*********        ***            *         *\n");
	printf("*       *     *       *        ***       * *\n");
	printf("*       *    *         *      *****     *   *\n");
	printf("*       *    *         *        *      *     *\n");
	printf("*       *    *         *        *     *       *\n");
	printf("*       *    *         *        *      *     *\n");
	printf("*       *    *         *        *       *   *\n");
	printf("*       *     *       *         *        * *\n");
	printf("*********        ***            *         * \n\n");
	
    //2.23
    printf("Please input three number:");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	largest = num1;
	if (num2 > largest) {
		largest = num2;
	}
	if (num3 > largest) {
		largest = num3;
	}
	printf("The largest num is %d\n\n", largest);
	

    //2.24
     printf("Please input a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0){
        printf("%d is even\n\n", num);
    }
    else{
        printf("%d is odd\n\n", num);
    }

    //2.25
    printf("PPPPPPPPP\n");
    printf("    P   P\n");
    printf("    P   P\n");
    printf("    P   P\n");
    printf("      PP \n");
    printf("  JJ\n");
    printf(" J\n");
    printf("J\n");
    printf(" J\n");
    printf("  JJJJJJJ\n");
    printf("DDDDDDDDD\n");
    printf("D       D\n");
    printf("D       D\n");
    printf(" D     D\n");
    printf("  DDDDD\n\n");

    //2.26
    printf("Please input two nmbers: ");
    scanf("%d%d", &num1, &num2);
    
    if(num1 % num2 == 0){
        printf("%d is multiple of the n %d\n\n", num1, num2);
    }
    else{
        printf("%d is not multiple of the %d\n\n", num1, num2);
    }

    //2.27
    printf("    *\n");
    printf("   ***\n");
    printf("  *****\n");
    printf(" *******\n");
    printf("*********\n");
    printf("\n");
    printf("    *\n   ***\n  *****\n *******\n*********\n\n");

    //2.31
    printf("numbers  square  cube\n");
    for(int i=0; i<=10; i++){
        printf("%d\t %d\t  %d\n\n", i, i*i, i*i*i);
    }

    //2.32
    printf("Please input weight in kg and input high in m: ");
    scanf("%f%f", &weight, &high);

    BMI = weight / (high * high);
    printf("BMI: %f\n\n", BMI);

    printf("BMI VALUES\nUnderweight:\tless than 18.5\nOverweight:\tbetween 18.5 and 24.9\nOverweight:\tbetween 25 and 29.9\nObese:\t\t30 or greater\n\n");

    //2.33
    printf("Please input the data (1)Total distant (2)gaslin per liter (3)distance per liter (4)parking fee (5)Tolls: ");
    scanf("%d%d%d%d%d", &dis, &gas_fee, &gas_dis, &park, &toll);

    total_cost = (dis/gas_dis) * gas_fee + park + toll;

    printf("Drive car total cost %d dollar\n", total_cost);
}
