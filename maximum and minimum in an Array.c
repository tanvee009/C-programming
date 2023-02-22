#include <stdio.h>

#define MAX_SIZE 100   // Maximum array size

int main()
{
    int arr[MAX_SIZE];
    int i, max, min, size;

    /* Input size of the array */
    printf("Enter size of the array: ");
    scanf("%d", &size);

    /* Input array elements */
    printf("Enter elements in the array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }


    /* Assume first element as maximum and minimum */
    max = arr[0];
    min = arr[0];    ///you have to declare this after inputing the array elements

    /*
     * Find maximum and minimum in all array elements.
     */
    for(i=1; i<size; i++) //no need to start from arr[0] because it's already stored
    {
        /* If current element is greater than max */
        if(arr[i] > max)
        {
            max = arr[i];
        }

        /* If current element is smaller than min */
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    int snd = arr[0];

    for(int j=1; j<size; j++) {
        if((arr[j]<max) && (arr[j]>snd)) {
            snd = arr[j];
        }
    }


    /* Print maximum and minimum element */
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);
    printf("Second maximum element = %d", snd);

    return 0;
}
