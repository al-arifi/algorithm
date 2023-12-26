// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

void heightChecker(int *arrBuffer, int *heights, int heightsSize)
{

    int changed = 0;
    for (int index = 0; index < heightsSize - 1; index++)
    {
        if (heights[index] > heights[index + 1])
        {
            int buffer = heights[index];
            heights[index] = heights[index + 1];
            heights[index + 1] = buffer;
            changed++;
        }

        if (index == heightsSize - 2)
        {
            if (changed > 0)
            {
                changed = 0;
                index = -1;
            }
        }
    }

    int count = 0;
    for (int i = 0; i < heightsSize; i++)
    {
        if (heights[i] != arrBuffer[i])
        {
            count++;
        }
    }

    printf("Changed Position = %i\n", count);
}

int main()
{

    int heights[] = {4, 2, 1, 5};
    int heightsSize = 4;
    int arrBuffer[heightsSize];
    memcpy(arrBuffer, heights, heightsSize * sizeof(heights[0]));

    heightChecker(&arrBuffer, &heights, heightsSize);

    printf("Before = ");
    for (int i = 0; i < heightsSize; i++)
    {
        printf("%i ", arrBuffer[i]);
    }

    printf("\nAfter = ");
    for (int i = 0; i < heightsSize; i++)
    {
        printf("%i ", heights[i]);
    }

    return 0;
}
