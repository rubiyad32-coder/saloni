#include<stdio.h>
#include<string.h>
int main()
{
  char str[50];
  int pos;
  char ch;
  printf("enter string:");
  scanf("%s",str);
  printf("enter position to modify (0-%d):",(int)strlen(str)-1);
  scanf("%d",&pos);
  printf("enter new character:");
  scanf("%c",&ch);
  str[pos] = ch;
  printf("modified string: %s\n",str);
  return 0;	
}
