#include <stdio.h>
void  print1DimArr(int* ptr , int n) {
    for(int z=0;z<n;z++){
        printf("%d ",*(ptr+z));
    }
}
int print2DimA(int (*ptr)[3] , int m, int n){
   int i, j;    
   for (i = 0; i < m; i++) {
               for (j = 0; j < n; j++) {
                           printf("%d ", *(*(ptr+i)+j));
               }
               printf("\n");
   }
}
int print2DimB(int (*ptr)[3] , int m, int n){
   int i, j;
   for (i = 0; i < m; i++) {
               print1DimArr( ptr+i, n);
               printf("\n");
   }
}
int main(){
    int ar1[]={ 1,2,3};
    int arr[][3]={1,2,7,3,7,9};
    print1DimArr(ar1,3);
    printf("\n\n");
    print2DimA(arr,2,3);
    printf("\n");
    print2DimB(arr,2,3);
    return 0;
}