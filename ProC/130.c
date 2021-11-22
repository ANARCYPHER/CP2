// C Program for Hexadecimal to Octal Conversion

#include<stdio.h>

#include<string.h>

#include<math.h>

int convert(char hexa[])

{

    int i,size, deci=0, octa=0;

    for(size=0; hexa[size]!='\0'; size++);  //this loop calculates size of hexadecimal number

    for(i=0; hexa[i]!='\0'; i++,size--)

    {

        if(hexa[i]>='0' && hexa[i]<='9')

        { 

            deci= deci + (hexa[i]-'0')*pow(16,size-1);

        }

        if(hexa[i]>='A' && hexa[i]<='F')

        {

            deci = deci + (hexa[i]-55)*pow(16,size-1);

        }

        if(hexa[i]>='a' && hexa[i]<='f')

        {

            deci = deci + (hexa[i]-87)*pow(16,size-1);

        }

    } // deci contains the decimal value of given hexadecimal number. 

    i=1;

    while(deci!=0)

    {

        octa = octa + (deci%8)*i;

        deci = deci/8;

        i = i*10;

    }

    return octa;

}

int main()

{

    char hexa[20];

    printf("Enter Hexadecimal Number : ");

    scanf("%s",hexa);

    printf("Equivalent Octal Value = %d",convert(hexa));

    return 0;

}