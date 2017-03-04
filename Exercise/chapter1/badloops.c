#include <stdio.h>

int main() // int  added
{
char word[80];
int i,j;

printf("Enter any word: ");
scanf("%s",word);
i=0;
while (word[i] != '\0')
  {
  if (word[i] == word[i+1])
    {
    j=1;
    while (word[i] == word[i+j]){
      j++;
    }
    printf("%d consecutive %c\n",j,word[i]);
    }
  i++;
  }
}
