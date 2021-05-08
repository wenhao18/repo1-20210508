//// fathm_ft.c -- converts 2 fathoms to feet
//#include <stdio.h>
//int main(void)
//{
//    int feet, fathoms;
//
//    fathoms = 2;
//    feet = 6 * fathoms;
//    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
//    printf("Yes, I said %d feet!\n", 6 * fathoms);
//
//    return 0;
//}
//


/* qsort example */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */
//
int values[] = { 40, 10, 100, 90, 20, 25 };

int compare (const void * a, const void * b)
{
 return ( *(int*)a - *(int*)b );
}

int main ()
{
  int n;
 qsort (values, 6, sizeof(int), compare);
  for (n=0; n<6; n++)
    printf ("%d ",values[n]);
return 0;

}
