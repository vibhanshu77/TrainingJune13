#include <stdio.h>
#include <string.h>
 
int main(){
        char str[101];
        int len;
        int consonants = 0;
        int vowels[] = {'a','e','i','o','u'};
        printf("Enter the string:");
        scanf("%s",str);
 
        len =strlen(str);
        for(int i=0;i<len;i++)
        {
                if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||str[i] == 'u')
                {
                        continue;
                }
                else
                {
                        consonants++;
                }
        }
        int c = 0, num = 0;
        //dynamicmemory
        for(int i = 0 ; i<len ; i++)
        {
                if(c > consonants - c)
                {
                        num++;
                }
 
                if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||str[i] == 'u')
                {
                        continue;
                }
                else
                {
                       c++;
                }
        }
        printf("\nTotal numbers : %d\n", num);
return 0;
}
