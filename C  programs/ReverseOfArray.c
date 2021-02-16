/* program to reverse of a array element8*/

#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int arr[5] = {1, 2, 3, 4, 5};       
	printf("Array in reverse order: \n");    
    //Loop through the array in reverse order    
    for (int i = 4; i >= 0; i--) 
    {     
        printf("%d ", arr[i]);     
    }     
    return 0;   
         
        

} 