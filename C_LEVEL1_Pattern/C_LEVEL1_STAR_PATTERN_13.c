#include <stdio.h>
int main()
{
  int n, c, k;
  scanf("%d", &n);

  for (k = 0; k <= n - 1; k++)
  {
    for (c = 1; c <= k; c++)
      printf(" ");

    for (c = 1 ; c <= 2*(n-k)-1; c++)
      printf("*");

    printf("\n");
  }
for (k =2; k <= n; k++)
  {
    for (c = 1; c <= n-k; c++)
      printf(" ");

    for (c = 1; c <= 2*k-1; c++)
      printf("*");

    printf("\n");
  }

  return 0;
}