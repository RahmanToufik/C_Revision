

#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    
    int num = 5;
    float num2= 4.5;
    char num3[] = "tfkf";
    printf("%d\n", num);
    printf("%.2f\n", num2);
    printf("%s\n", num3);
    
    //data type conversion
    
    int myNum1= 7;
    int myNum2= 3;
    
    float devision= (float) myNum1/myNum2;
    printf("%.2f\n",devision);
    
    //multidimensional array
    
    int matrix[4][7] = { {1, 4, 2, 3, 5, 9}, {3, 6, 8, 2, 9, 7} };
    printf("%d\n", matrix[0][3]);
    
    //change value
    matrix[1][4]= 1;
    printf("%d\n", matrix[1][4]);
    
    int i, j;
    for (i = 0; i < 3; i++) {
      for (j = 0; j < 6; j++) {
        printf("%d\n", matrix[i][j]);
      }
    }
    
    //printf("%p\n", matrix);
    //printf("%d\n", matrix);
    //

  
    
}
