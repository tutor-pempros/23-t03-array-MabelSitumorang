// 12S23011 - Mabel Christoffel A.S

#include <stdio.h>
#include <stdlib.h>

int main(int _argc, char **_argv)
{
  int a, i, temp;
  int big = 0;
  float b = 0;
  scanf("%d", &a);
  int total[a];
  int angka[a];
  for (int i = 0; i < a; i++)
  {
    scanf("%d", &angka[i]);
    b = b + angka[i];
  }
  for (int i = 0; i < a; i++)
  {
    for (int j = i + 1; j < a; j++)
    {
      total[i] = angka[i] - angka[j];
      if (total[i] > big) {
        big = total[i];
      }
      if (angka[i] > angka[j])
      {
        ;
        temp = angka[i];
        angka[i] = angka[j];
        angka[j] = temp;
        
    }
  }
  }
  
  printf("%d\n", angka[0]);
  printf("%d\n", angka[a - 1]);
  printf("%.2f\n", b / a);
  printf("%d\n", big);

  return 0;
}

