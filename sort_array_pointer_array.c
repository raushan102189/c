#include <stdio.h>
int arrange(int *array);
int main()
{
    int list[10] = {4, 2, 3, 1, 23, 4, 5, 6, 3, 5};
    // int *p = list;
    arrange(list);
    for (size_t i = 0; i < 10; i++)
    {
        /* code */
        printf("%d \t ", list[i]);
    }
}

// arranging in ascending order
int arrange(int *array)
{
    int n;
    int time = 1;
    int *t = &time;
    while (time != 0)
    {
        /* code */
        *t = 0;

        for (size_t i = 0; i < 9; i++)
        {
            if (array[i] > array[i + 1])
            {
                n = array[i];
                array[i] = array[i + 1];
                array[i + 1] = n;
                time += 1;
            }
        }
        printf("%d change in a time\n", time);
    }
}