#include <stdio.h>

int main ()
{
    float ahorromensual, tasamensual, montoañadido, ahorrototal, ahorromensualnormal;
    float interestotal, interesmensual, interesrenta, tasainteres, impuestosrenta, valortasamensual;
    int mes, mesestot;

  float monto_credito, tasa_interes, interes_anual, cuota_mensual_anual, interes_pagado, capital_pagado;
  int num_años, num_meses;

    printf("Ingrese el monto mensual que ahorra: ");
    scanf("%f", &ahorromensual);

    printf("Ingrese el total de meses que ahorrará: ");
    scanf("%d", &mesestot);

    printf("La tasa de interes en porcentaje:  ");
    scanf("%f", &tasainteres);

    valortasamensual = (tasainteres/100)/12; 
    ahorrototal = 0;

    for ( mes = 1; mes <= mesestot; mes++) {
        ahorromensualnormal = ahorromensualnormal+ahorromensual;
        interesmensual = interesmensual + ahorromensualnormal*valortasamensual;
        ahorrototal = ahorrototal + ahorromensual + interesmensual;
        printf("Mes %d: Ahorro mensual = $%.2f\t Interes mensual = $%.2f\t Ahorro total = $%.2f\n", mes, ahorromensualnormal, interesmensual, ahorrototal);
    }
  //credito//
  printf("\n\nIngrese el monto del crédito: ");
  scanf("%f", &monto_credito);
  printf("Ingrese la tasa de interés (en porcentaje): ");
  scanf("%f", &tasa_interes);
  printf("Ingrese el número de años: ");
  scanf("%d", &num_años);
  tasa_interes = tasa_interes /100;
  interes_anual = monto_credito * tasa_interes;
  cuota_mensual_anual = monto_credito*tasa_interes/12;
  printf("\nIntereses por año:\n");
  for (int i = 1; i <= num_años; i++) {
    interes_pagado = tasa_interes * monto_credito;
    printf("Año %d: %.2f\t", i, interes_pagado);
    capital_pagado = cuota_mensual_anual * 12;
    monto_credito = monto_credito - capital_pagado;
    cuota_mensual_anual = monto_credito*tasa_interes/12;
    printf("Cuota mensual anual: %.2f\n", cuota_mensual_anual);
  }
    return 0;
  
}