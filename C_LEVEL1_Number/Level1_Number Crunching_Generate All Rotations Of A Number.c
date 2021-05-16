#include <stdio.h>
#include<math.h>

int numberOfDigits(int n)
{
	int cnt = 0;
	while (n > 0) {
		cnt++;
		n /= 10;
	}
	return cnt;
}

void cal(int num)
{
	int digits = numberOfDigits(num);
	int powTen = pow(10, digits - 1);

	for (int i = 0; i < digits - 1; i++) {

		int firstDigit = num / powTen;

		int left
			= ((num * 10) + firstDigit)
			- (firstDigit * powTen * 10);
		printf("%d\n",left);


		num = left;
	}
}


int main()
{
	int num;
    scanf("%d",&num);
	cal(num);
	return 0;
}
