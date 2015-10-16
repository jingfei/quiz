/* Implement! */
#include <stdio.h>
#include <string.h>

char smallest_character(char str[], int len, char c)
{
    int mid=len>>1;
    while(mid && mid+1<len)
        mid = str[mid]<c ? (mid+len)>>1 : mid>>1 ;
    if(!mid && str[mid]==c) return str[mid+1];
    return str[mid]>c ? str[mid] : str[0];
}

int main()
{
    char input[100010];
    char str[100010];
    while(fgets(input,sizeof(input),stdin)!=0) {
        int len=strlen(input),i,j=0;
        for(i=2; i<len; i+=5) {
            if(input[i]=='\'') {
                str[j] = '\0';
                printf("'%c'\n", smallest_character(str,j,input[i+1]));
            } else
                str[j++]=input[i];
        }
    }
    return 0;
}

