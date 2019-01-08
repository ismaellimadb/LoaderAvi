#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
 
int main()
{
   char a[1000], b[1000] = "youtube-dl -f 360p --get-url -ci ", c[1000],
   d[1000] = "ffmpeg -i \"", e[1000] = "\" -c:v mpeg4 -vtag XVID -b:v 990k -g 300 -s 640x360 -acodec libmp3lame -ab 128k -ar 48000 -ac 2 -threads 0 -f avi C:\\Downloads\\",f[1000] = ".avi",g[1000];
 
   printf("Insira a url\n");
   gets(a);
   
   printf("\nInsira o nome do arquivo\n");
   gets(g);
   strcat(b,a);
   system(b);
   printf("\n%s\n\n",b);
   printf("\n\nCopie e cole o codigo gerado\n\n");
   scanf("%s",c);
   strcat(d,c);
   printf("\n\n%s",d);
   strcat(e,g);
   printf("\n\n%s",e);
   strcat(e,f);
   printf("\n\n%s",e);
   strcat(d,e);
   printf("\n\n%s\n\n",d);
   system(d);
   system("pause");
   
   return 0;
}
