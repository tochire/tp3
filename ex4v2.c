#include <stdio.h>
int main() {
  int a[50]; 
  int i;
  int n;
  int s =0;
  do{
    printf("saisir la taille du tableau :");
    scanf("%d",&n);
  }while(n>50|| n<1);
printf("saisir les valeurs triées du tableau: \n");
scanf("%d",&a[0]);
for(i=1;i<n;i++){
    do{
    scanf("%d",&a[i]);
    }while(a[i]<a[i-1]);
}
int pos = -1; 
int val;
printf("saisir la valeur a rechercher dans le tableaux:");
scanf("%d",&val);
int max;
int min;
max = n-1;
min = 0;
while( min <= max){
i= (max+min) / 2;
if(a[i]==val)
{
    pos =i;
    break; 
}
else if(val>a[i]){
    min = i +1;
}
else{
 max = i -1;
}
}
if(pos ==-1){
 printf("la valeur ne se trouve pas dans le tableau");
}
else{
    printf("la valeur se trouve dans le tableau dan la position %d",pos +1);
}
return 0;
}