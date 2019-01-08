#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>

 
int main()
{  char a[10000];
   char z[10000];
   char t1[10000];
   char t2[10000];
   printf("Insira o codigo url encontrado\n");
   gets(a);
   printf("\nInsira o nome do arquivo\n");
   gets(z);
   printf("\nInsira o tempo de Inicio para o Corte\n");
   gets(t1);
   printf("\nInsira o tempo de Corte\n");
   gets(t2);
  
  char d[10000] = "ffmpeg -ss " , fi[10000] = " -i \"", e[10000] = "\" -t " , fn[10000] = " -c:v mpeg4 -vtag XVID -b:v 990k -g 300 -s 640x360 -acodec libmp3lame -ab 128k -ar 48000 -ac 2 -threads 0 -f avi \"C:\\Downloads\\",f[10000] = ".avi\"\n",g[10000];
  
	
   strcat(d,t1);
   strcat(d,fi);
   strcat(d,a);
   strcat(d,e);
   strcat(d,t2);  
   strcat(fn,z);
   strcat(d,fn);
   strcat(e,f);
   strcat(d,f);
   printf("\n\n%s\n\n",d);
   system(d);

   return 0;
}   

