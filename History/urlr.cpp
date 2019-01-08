#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
 
int main()
{
   char a[1000], b[1000] = "youtube-dl -f 0 -ci --playlist-items 1-1 --get-url ";
 
   printf("Insira a url\n");
   gets(a);
 
   strcat(b,a);
 
   printf("\n\n%s\n\n",b);
   
   system(b);
   system("pause");
   
   return 0;
}
