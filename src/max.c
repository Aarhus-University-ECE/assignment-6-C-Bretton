#include <stdio.h>
#include <assert.h>

int max(int* numbers, int size)
{
    // Excercise 2
    // Implement your code below...
    assert(size > 0);

    int max = numbers[0];

    for (int i = 0; i < size; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }

    return max;
}
