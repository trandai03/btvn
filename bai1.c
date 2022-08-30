#include <stdio.h>
void  print1DimArr(int ar[], int n) {
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
}
int print2DimArrA(int ar[][3], int m){

   int i, j;
   for (i = 0; i < m; i++) {
               for (j = 0; j < 3; j++) {
                           printf("%d\t",ar[i][j] );
               }
               printf("\n");
   }
}
int print2DimArrB(int ar[][3], int m){
   int i, j;
   for (i = 0; i < m; i++) {
               print1DimArr( ar[i] , 3);
               printf("\n");
   }
}
int main(){
    int ar1[]={1,2,1};
    int arr[][3]={{1,2,3},
                {3,2,4}};
    print1DimArr(ar1,sizeof(ar1)/sizeof(ar1[0]));
    printf("\n");
    print2DimArrA(arr,2);
    print2DimArrB(arr,2);
    return 0;

}