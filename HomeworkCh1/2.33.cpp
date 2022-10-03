# include <stdlib.h>
# include <stdio.h>

int dis, gas_fee, gas_dis, park, toll, total_cost;

int main(){
    printf("Please input the data (1)Total distant (2)gaslin per liter (3)distance per liter (4)parking fee (5)Tolls: ");
    scanf("%d%d%d%d%d", &dis, &gas_fee, &gas_dis, &park, &toll);

    total_cost = (dis/gas_dis) * gas_fee + park + toll;

    printf("Drive car total cost %d dollar\n", total_cost);
}
