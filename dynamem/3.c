#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 32

int main()
{
 char *str = NULL; /* Local Pointer Variable */

 str = (char *)malloc(MAX * sizeof(char));
 
   if(str == NULL) /* Error handling for malloc. It is mandatory */
   {
      printf("Malloc failed\n");
      exit(0);
   }
 
   memset(str, '0', MAX);
  // printf("\n%s\n", str);
 //str = "PRISM";
 //printf("The string is %s\n", str);
 
  strncpy(str, "Nalanda",MAX-1);
  printf("%s\n", str);

 free(str);
 

 //str=NULL;
 return 0;
}
