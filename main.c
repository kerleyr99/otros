#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
int main(void) {
  int n, pos;
  printf("\nIngrese la cangtidad de datos: ");
  scanf("%d",&n);
  int vector[n];
  for(int i=1;i<=n;i++){
    printf("\nINgrese el valor de la posicion %d: ",i);
    scanf("%d",&vector[i]);
  }
  printf("\nIngrese la posicion a eliminar: ");
  scanf("%d",&pos);
  //if(pos<=n){
  int eliminar=vector[pos];
  for(int i=1;i<=n;i++){
    if(i==pos){
      while(i<n-1){
        vector[i]=vector[i+1];
        i++;
      }
      break;
    }
  }
  n=n-1;
  for(int i=1;i<=n;i++){
    printf("\nLos elemntos del arreglo son: %d",vector[i]);
  }
  printf("\nEl elemento eliminado es: %d",eliminar);
  return 0;
}