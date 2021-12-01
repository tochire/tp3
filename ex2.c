#include <stdio.h>
int main() {
  int a[50];
   int b[50];  
  int i;
  int n;
  int s =0;
  do{
    printf("saisir la taille des deux tableaux :");
    scanf("%d",&n);
  }while(n>50);
printf("saisir les valeurs du vecteur a: \n");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
printf("saisir les valeurs du vecteur b: \n");
for(i=0;i<n;i++){
    scanf("%d",&b[i]);
}
for(i=0;i<n;i++){
   s=s + (a[i]* b[i]);
}
printf("le produit scalaire des deux vecteurs est %d",s);
return 0;
}