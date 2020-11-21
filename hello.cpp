#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char a[20];
    char b[20];
    char e[20];
    int c;
    do {
        printf("Input Password: ");
        fflush(stdin);
        gets(a);
        }while (!(toupper(a)>='A'||toupper(a)<='Z'||a>='0'||a<'9'));

   // printf("%s",a);
   for(int i=0;i<strlen(a);i++)
   {
      c=((a[i])+7)%91;
      //printf("%d\n",c);
       b[i]=c;
       printf("%d\n",b[i]);
   }
   printf("New Password: ");
   for(int i= 0;i<strlen(b);i++)
   {
       printf("%c",b[i]);
   }
   for (int i=0;i<strlen(b);i++)
   {
       if(b[i]<39)
       {
           e[i]=(b[i]+91)-7;
       }else e[i]=b[i]-7;
   }
   printf("\nPassword: ");
    for (int i = 0; i <strlen(e) ; i++) {
        printf("%c",e[i]);
    }
    return 0;
}
