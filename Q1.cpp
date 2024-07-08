
#include <stdio.h>

int main() {
    int size, i;

    printf("Enter the array's size: ");
    
    scanf("%d", &size);

    int array[size];


    printf("Enter array's elements:\n");
    
    for(i = 0; i < size; i++) {
    	
        printf("a[%d] = ", i);
        
        scanf("%d", &array[i]);
        
    }

    printf("Negative elements from an Array: ");
    
    int first = 1; 
    
    for(i = 0; i < size; i++) {
    	
        if(array[i] < 0) {
        	
            if (first) {
            	
                first = 0;
                
                printf("%d", array[i]);
                
            } else {
            	
                printf(", %d", array[i]);
                
            }
            
        }
        
    }
    
    printf("\n");

    return 0;
}
