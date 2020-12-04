#include <stdio.h>

int main(void) {
  int a,i;
  scanf("%d",&a);
  for(i=2;i<a;i++){
    if(a%i==0){
      printf("Not Prime");
      break;
    } else{
      printf("fff");
    }
  }


}