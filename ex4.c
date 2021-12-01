#include <stdio.h>
int main() {
  int a[50]; 
  int i;
  int n;
  int s =0;
  do{
    printf("saisir la taille du tableau :");
    scanf("%d",&n);
  }while(n>50);
printf("saisir les valeurs du tableau: \n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int pos = -1; 
int val;
printf("saisir la valeur a rechercher dans le tableaux:");
scanf("%d",&val);
for(i=0;i<n;i++){
    if(a[i] == val){
        pos = i+1;
          break;
    }
  
}
if(pos ==-1){
 printf("la valeur ne se trouve pas dans le tableau");
}
else{
    printf("la valeur se trouve dans le tableau dan la position %d",pos);
}
return 0;
}