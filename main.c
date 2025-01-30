#include <stdio.h>
#include <stdlib.h>
#include "arraytools.h"


int main(void){
    // Create size variable and get the size of the array.
    int new_size = 0, old_size = 0;
    get_array_size(&new_size);

    // Create the array.
    int * array = malloc(new_size * sizeof(int));

    // Check to see if malloc failed.
    if (array == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // Initialize and print the first iteration of the array.
    initialize_array(array,new_size,old_size);
    print_array(array,new_size);

    while (true) {
        // Check if the user wants to change the size of the array.
        char answer;
        printf("Do you want to change the array size?(Y/n): ");
        scanf(" %c",&answer);

        if (answer == 'n' || answer == 'N') {
            break;
        }else {
            // Set new_size to old_size and get a new value for new_size.
            old_size = new_size;
            get_array_size(&new_size);

            // Resize the array to the value of new_size. Initialize the new elements and print them to the console.
            array = resize_array(array,new_size);
            initialize_array(array,new_size,old_size);
            print_array(array,new_size);
        }
    }

    // Return memory that was allocated to the array back to the system.
    free(array);
    return 0;
}

