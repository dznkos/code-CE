#include <stdio.h>

int main (){
  double r;
  float monto;
  double sd=0,ds=0,es=0,se=0,ls=0,sl=0;    
  int origen=0;
  int destino=0;
  //agregando * antes del arreglo se le establece el tamaño // del arreglo por la asignacion de la cadena
  char *a;
  char *b;

  a = "Soles";
  b = "Dolares";
  printf("Conversor General a $ \n");
  printf("Ingrese monto:");
  scanf("%f",&monto);
  printf("Origen cambio\n");
  printf("1.Soles\n ");
  printf("> Selecciona origen:");
  scanf("%i",&origen);
  printf("\nDestino cambio\n");
  printf("1.Soles \n2.Dolares \n3.Euros \n4.Libras\n");
  printf("> Selecciona destino:");
  scanf("%i",&destino);

  if ((origen == 1) && (destino == 2)) {
      sd = 3.39;
      r = monto * sd;
  }
  if ((origen == 2) && (destino == 1)) {
      ds = 0.29;
      r = monto * ds;
  }  
  if ((origen == 3) && (destino == 1)) {
      es = 3.77;
      r = monto * es;
  }
  if ((origen == 1) && (destino == 3)) {
      se = 0.27;
      r = monto * se;
  }
  if ((origen == 4) && (destino == 1)) {
      ls = 4.10;
      r = monto * ls;
  }
  if ((origen == 1) && (destino == 4)) {
      sl = 0.24;
      r = monto * sl;
  }

  printf("\nTipo cambio: ");
  if(sd != 0){
    printf("Cambio Soles a Dolares");}
  if(ds != 0){
    printf("Cambio Dolares a Soles");}
  if(es != 0){
    printf("Cambio Soles a Euros");}
  if(se != 0){
    printf("Cambio Euros a Soles");}
  if(ls != 0){
    printf("Cambio Libras a Soles");}
  if(sl != 0){
    printf("Cambio Soles a Libras");}
  
  printf("\n Resultado cambio:");
  printf("%.2f", r );

  return 0;
}