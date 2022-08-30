// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main()
{
int *a = NULL, dong, cot;
int i;
printf("Nhap ᴠao ѕo dong = ");
scanf("%d", &dong);
printf("Nhap ᴠao ѕo cot = ");
scanf("%d", &cot);
// Cấp phát
a = (int *)malloc(dong * cot * sizeof(int));
// Nhập ma trận
for(int i = 0; i <dong; i++)
{
for(int j = 0; j <cot; j++){
printf("a<%d><%d> = ", i, j);
scanf("%d", (a + i + j));
}
}

for(int i = 0; i <dong; i++)
{
for(int j = 0; j <cot; j++){
printf("%d\t", *(a + i )+ j);
}
printf("\n");
}
// giải phóng



    return 0;
}