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
int max ;
int min ;
int posMin;
int posMax;
max = a[0];
min = a[0];
posMax = 1;
posMin = 1; 
for(i=1;i<n;i++){
    if(a[i]>max){
        max = a[i];
        posMax = i+1;
    }
    if(a[i]<min){
        min = a[i];
        posMin = i+1;
    }
}
printf(" le maximum du tableau est %d qui a l'indexe %d \n",max,posMax);
printf(" le minimum du tableau est %d qui a l'indexe %d",min,posMin);
return 0;
}