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
   printf("Insira a url\n");
   gets(a);
   printf("\nInsira o nome do arquivo\n");
   gets(z);
   printf("\nInsira o tempo de Inicio para o Corte\n");
   gets(t1);
   printf("\nInsira o tempo de Corte\n");
   gets(t2);
  int ctn;   
  for(ctn=1;ctn<2;ctn++){
  char append[10000];
  char path[10000] = "C:\\Downloads\\Others\\o";
  char path2[10000] = ".txt";
  char x[10000] = "\"";
  sprintf(append,"%d",ctn);
  strcat(path,append);
  strcat(path,path2);
  
   char b[10000] = "youtube-dl -f 360p -ci " ,ctv[10000] = " --get-url \"", bi[10000] = "\""" > \"",
   d[10000] = "ffmpeg -ss " , fi[10000] = " -i \"", e[10000] = "\" -t " , fn[10000] = " -c:v mpeg4 -vtag XVID -b:v 990k -g 300 -s 640x360 -acodec libmp3lame -ab 128k -ar 48000 -ac 2 -threads 0 -f avi \"C:\\Downloads\\",f[10000] = ".avi\"\n",g[10000];
  
  strcat(b,ctv);
  strcat(b,a);

  strcat(bi,path);
  strcat(b,bi);
  strcat(b,x);

  printf("\n%s\n",b);
  system(b);

  FILE *fp;
  int ch;
  char txt[10000];
  int len = 0;
  int fgetc ( FILE * stream );
  
  fp=fopen(path,"r");
   ch=fgetc(fp);
while(ch != EOF && ch!='\n')
  {
    txt[len]=ch;
    len++;
    ch=fgetc(fp);
  }txt[len]='\0';
   
   puts(txt);
   strcat(d,t1);
   strcat(d,fi);
   strcat(d,txt);
   strcat(d,e);
   strcat(d,t2);  
   strcat(fn,z);
   strcat(d,fn);
   strcat(e,f);
   strcat(d,f);
   printf("\n\n%s\n\n",d);
   system(d);
}
   return 0;
}   


