#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Name[20];
    int PowerRange;

    printf ("What is the Name Of super Hero?\n");
    scanf ("%s", Name);

    printf ("What is the Power Range of Super Hero?\n");
    scanf ("%d", &PowerRange);

    printf ("About Hero", Name,PowerRange);
}