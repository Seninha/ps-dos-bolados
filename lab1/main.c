#include <stdio.h>
#include <stdlib.h>
#include "listas.h"
#include "constroi.h"
#include "linear.h"
#include "percorre.h"

int main (){
  struct lista_disc *pinicio;

  ConstroiMalha (&pinicio);
  PercorreMalha (pinicio);
  PercursoLinear (pinicio);

  return 0;
}
