#include <stdio.h>
#include <string.h> 

void input_string(char *str, char *subs);
int find_index(char *str, char *subs);
void output(char *str, char *subs, int index);

int main(){
  char str[20], subs[20];
  input_string(str, subs);
  int index = find_index(str,subs);
  output(str, subs, index);
 
  return 0;
}
void input_string(char *str, char *subs){
  printf("Enter parent string: ");
  scanf("%s", str);
  printf("Enter the substring: ");
  scanf("%s", subs);
}
int find_index(char *str, char *subs){
 int i,j;
  for(i=0;str[i]!='\0';i++)
    {
      j=0;
      while(str[i]==subs[j])
      {
        j++;
        i++;
        if(subs[j]=='\0')
          return i-j;
        if(str[i]!=subs[j]){
          i--;
          break;
        }
      }
    }
  return -1;
}
void output(char *str, char *subs, int index){
  if(index>=0)
    printf("The index of %s in %s is %d.\n", subs, str, index);
  else
    printf("Substring not found\n");
}