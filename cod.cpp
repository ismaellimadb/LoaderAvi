#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main () {
    
    char a[1000], b[1000], c[1000] = "ffmpeg -i \"", d[1000] = "\" -c:v mpeg4 -vtag XVID -b:v 990k -g 300 -s 640x360 -acodec libmp3lame -ab 128k -ar 48000 -ac 2 -threads 0 -f avi \"C:\\Downloads\\", e[1000] = ".avi\"";
    
	printf("Insira o codigo anteriormente encontrado\n");
	gets(a);
	
	printf("\nInsira o nome do arquivo\n");
    gets(b);
    
    strcat(c,a);
    strcat(d,b);
    strcat(d,e);
    strcat(c,d);
	    
	printf("\n\n%s\n\n",c);
	
	system(c);
}
