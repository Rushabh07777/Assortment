
#include <stdio.h>

int main() {
	
    int rows, columns;


    printf("Enter the array's row size: ");
    
    scanf("%d", &rows);
    
    printf("Enter the array's column size: ");
    
    scanf("%d", &columns);
    

    int array[rows][columns];


    printf("Enter array's elements:\n");
    
    for (int i = 0; i < rows; i++) {
    	
        for (int j = 0; j < columns; j++) {
        	
            printf("a[%d][%d] = ", i, j);
            
            scanf("%d", &array[i][j]);
            
        }
        
    }

    int largest = array[0][0];

    for (int i = 0; i < rows; i++) {
    	
        for (int j = 0; j < columns; j++) {
        	
            if (array[i][j] > largest) {
            	
                largest = array[i][j];
                
                
            }
            
        }
        
    }


    printf("The largest element is: %d\n", largest);

    return 0;
    
}
