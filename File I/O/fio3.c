#include <stdio.h>
int main()
{
   char ch;
   FILE *fpw;
   fpw = fopen("C:\\newfile.txt","w");

   if(fpw == NULL)
   {
      printf("Error");   
      exit(1);             
   }

   printf("Enter any character: ");
   scanf("%c",&ch);

   /* You can also use fputc(ch, fpw);*/
   fprintf(fpw,"%c",ch);
   fclose(fpw);

   return 0;
}