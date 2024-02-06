// 12S23011 - Mabel Christoffel A.S

#include <stdio.h>

int main(int _argc, char **_argv)
{
  int a, i, temp;
  scanf("%d", &a);
  int angka[a];
  for (int i = 0; i < a; i++)
  {
    scanf("%d", &angka[i]);
  }
  for (int i = 0; i < a; i++)
  {
    for (int j = i + 1; j < a; j++)
    {
      if (angka[i] > angka[j])
      {
        temp = angka[i];
        angka[i] = angka[j];
        angka[j] = temp;
      }
    }
  }

  printf("%d\n", angka[0]);
  printf("%d\n", angka[a - 1]);
  
  return 0;
}
