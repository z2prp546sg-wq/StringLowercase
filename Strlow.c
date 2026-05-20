#include<stdio.h>
#include<ctype.h>

int main(){

    char string[100];

    printf("\n enter string = ");

   fgets(string, sizeof(string), stdin);

   char lowercase[sizeof(string)];

   for (int i = 0; string[i] != '\0'; i++)
   {
        lowercase[i] = towlower(string[i]);
   }

   printf("\n enter string is = %s", string);

   printf("\n the lowercase string is = %s",lowercase);
   
    return 0;

}