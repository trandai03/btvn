#include <stdio.h>
void  print1DimArr(int *ptr , int n) {
    for(int z=0;z<n;z++){
        printf("%d ",*(ptr+z));
    }
}
void print2DimA(int* ptr , int m, int n){
   int i, j;
   for (i = 0; i < m; i++) {
               for (j = 0; j < n; j++) {
                           printf("%d ", *(ptr+i)+j);
               }
               printf("\n");
   }
}
void print2DimB(int* ptr , int m, int n){
   int i, j;
   for (i = 0; i < m; i++) {
               print1DimArr(ptr+i , n);
               printf("\n");
   }
}
int main(){
    int ar1[][3]={1,2,3,4,5,6};
    print1DimArr(ar1,3);
    printf("\n\n");
    print2DimA(ar1,2,3);
    printf("\n");
    print2DimB(ar1,2,3);
    return 0;
}
