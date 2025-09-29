#include<stdio.h>
int main()
{ int lines=0,charact=0,words=0,c,back=' ';
 while((c=getchar())!=EOF)
 {
 if(c=='\n'){
 lines++;
 }
 if(c==' '||c=='\t'||c=='\n')
 {
 if(back!=' '&&back!='\t'&&back!='\n')
 {
 words++;
 }
 }
charact++;
back=c;
}
printf("lines=%d",lines);
printf("characters=%d",charact);
printf("words=%d",words);
return 0;
}
