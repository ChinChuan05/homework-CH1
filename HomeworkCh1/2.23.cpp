# include <stdio.h>
# include <stdlib.h>

int num1, num2, num3, largest;

int main() {
	printf("Please input three number:");
	scanf("%d%d%d", &num1, &num2, &num3);
	
	largest = num1;
	if (num2 > largest) {
		largest = num2;
	}
	if (num3 > largest) {
		largest = num3;
	}
	printf("The largest num is %d", largest);
	system("pause");
}
