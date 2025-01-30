//
// Created by David on 1/13/2025.
//

#ifndef ARRAYTOOLS_H
#define ARRAYTOOLS_H

/**
 * @brief Set the values of each array value to its index. Only use for newly added indexes.
 * @param [I/O] array the array to be initialized.
 * @param [in] new_size current length of the array.
 * @param [in] old_size length of the array before it was resized.
 */
void initialize_array(int *array, const int new_size, const int old_size);

/**
 * @brief Print the contents of the input array to the console.
 * @param [in] array the array that is to be printed.
 * @param [in] size the size of the input array.
 */
void print_array(const int * array, const int size);

/**
 * @brief Extend or shrink the length of an array dynamicly.
 * @param [I/O] array the array to be altered.
 * @param [in] new_size the length of array after being resized.
 * @return A pointer to the resized array.
 */
int* resize_array(void* array, const int new_size);

/**
 * @brief Get the desired array size from the user.
 * @param [out] size pointer to an integer variable that will hold the array's size.
 */
void get_array_size(int *size);
#endif //ARRAYTOOLS_H
