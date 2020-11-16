

#include <stdio.h>
#include <math.h>

int main()
{

  int a, b, t;

  scanf("%d%d", &a, &b);
  t = a;
  a = b;
  b = t;
  
  printf("%d %d\n", a, b);
}
