#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <string>
#include <iostream>
using namespace std;
 
int main()
{  char a[10000];
   char z[10000];
   printf("Insira a url da Playlist\n");
   gets(a);
   printf("\nInsira o nome dos episodios em geral\n");
   gets(z);
   int vi;
   int vf;
   cout << "\nInsira o numero do episodio inicial\n";
   cin >> vi;
   cout << "\nInsira o numero do ultimo episodio a ser baixado\n";
   cin >> vf;
  int ctn;   
  for(ctn=vi;ctn<=vf;ctn++){
  char append[10000];
  char path[10000] = "C:\\Downloads\\Others\\o";
  char path2[10000] = ".txt";
  char x[10000] = "\"";
  sprintf(append,"%d",ctn);
  strcat(path,append);
  strcat(path,path2);
  
   char b[10000] = "youtube-dl -f 18 --playlist-items ",ccv[10000] = "-" ,ctv[10000] = " --get-url \"", bi[10000] = "\""" > \"",
   d[10000] = "ffmpeg -i \"", e[10000] = "\" -c:v mpeg4 -vtag XVID -b:v 990k -g 300 -s 640x360 -acodec libmp3lame -ab 128k -ar 48000 -ac 2 -threads 0 -f avi \"C:\\Downloads\\",f[10000] = ".avi\"\n",g[10000];
   	
  sprintf(append,"%d",ctn);
  strcat(b, append);
  strcat(b,ccv);
  strcat(b,append);
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
   strcat(d,txt);
   sprintf(append,"%d",ctn);
   strcat(e,z);
   strcat(e,append);
   strcat(d,e);
   strcat(e,f);
   strcat(d,f);
   printf("\n\n%s\n\n",d);
   system(d);
}	
   return 0;
}   




