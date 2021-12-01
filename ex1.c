#include <stdio.h>
int main() {
  int t[50];  
  int i;
  int n;
  int s =0;
  do{
    printf("saisir la taille du tableau :");
    scanf("%d",&n);
  }while(n>50 || n<1);

for(i=0;i<n;i++){
    scanf("%d",&t[i]);
    s=s+t[i];
}
for(i=0;i<n;i++){
    printf("t[%d]:%d \n",i,t[i]);
}
printf("la taille du tableau est %d",s);
return 0;
}