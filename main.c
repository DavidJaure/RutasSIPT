/* TALLER 1 CORTE 2
DAVID ALEJANDRO JÁUREGUI MERCHÁN
tECNOLOGIA EN DESARROLLO DE SOFTWARE
  SEMESTRE 2024-1
  LENGUAJE DE PROGRAMACION, DOCENTE GEOVANNY POVEDA
  UNIVERSIDAD DE SAN BUENAVENTURA*/

#include <stdio.h>

// Inicio del código
int main() {
  int dia;

  printf(
      ">>Viaja seguro y aventúrate con nosotros<<\n\n"
      "Bienvenido al sistema para la planificación de rutas SIPT S.A.S.\n\n");

  printf("Opciones de rutas:\n"
         "1. Días laborales\n"
         "2. Días festivos\n"
         "3. Salir\n\n"
         "Recuerde:Estas rutas son determinadas de acuerdo al portal de su "
         "ubicación\n"
         "Usted se encuentra en el ☺Portal La moneda☺\n\n"
         "Ingrese la opción que desee realizar: ");

  scanf("%d", &dia);

  //////////////////////////////////////////////
  // Inicio dias laborales
  if (dia == 1) {

    printf("\n->RUTAS DÍAS LABORALES\n"
           "(Lunes - martes - miercoles - jueves - viernes - sábados)\n\n");

    printf("Ingrese la ruta que desea consultar:\n"
           "1. Ruta M19: Portal Los Mayas\n"
           "2. Ruta M20: CIT\n"
           "3. Salir\n");

    int opcion;
    scanf("%d", &opcion);

    if (opcion == 1) {
      // Ruta M19 seleccionada
      printf("->Ruta M19 seleccionada\n"
             "Estaciones de la ruta:\n"
             "1. Estación de trenes\n"
             "2. Estación Las Pascuas\n"
             "3. Estación Las Palmas\n"
             "4. Estación Valvanera\n"
             "5. Portal Los Mayas (Última estación sin retorno a portal La "
             "moneda)\n");

      return main();
    }

    else if (opcion == 2) {
      // Ruta M20CIT seleccionada
      printf("->Ruta M20CIT seleccionada\n"
             "Estaciones de la ruta:\n"
             "1. Estación Las Piedras\n"
             "2. Estación Pasoancho\n"
             "3. Estación Aguaclara\n"
             "4. Estación Flores\n"
             "5. Estación CIT (Centro Internacional Tecnológico)\n");
      return main();
    }

    else if (opcion == 3) {
      // Salir del programa
      printf("Saliendo del programa\n"
             "Gracias por utilizar el sistema de planificación de rutas SIPT "
             "S.A.S\n"
             ">>>>>¡Buen viaje!<<<<<\n");
    }

    else {
      // Opción inválida
      printf("x-x-x-x-x-x-x-x-x-x-x-x\n\n"
        "Opción no válida\n\n"
        "x-x-x-x-x-x-x-x-x-x-x-x\n\n");
      return main();
    }
    //////////////////////////////////////////////////
    // Inicio dias festivos
  } 
  
  else if (dia == 2) {

    printf("\n->RUTAS DÍAS DOMINGO Y FESTIVOS\n"
           "Ingrese la ruta que desea consultar:\n"
           "1. Ruta M33\n"
           "2. Ruta M66\n"
           "3. Salir\n");

    int opcion;
    scanf("%d", &opcion);

    if (opcion == 1) {
      // Ruta M33 seleccionada
      printf("->Ruta M33 seleccionada\n"
             "Estaciones de la ruta:\n"
             "1. Estación de trenes\n"
             "2. Estación Las Pascuas\n"
             "RECUERDE: La ruta M33 en días festivos no para en Las Palmas y "
             "Valvanera\n");
      return main();
    }

    else if (opcion == 2) {
      // Ruta M66 seleccionada
      printf("->Ruta M66 seleccionada\n"
             "Estaciones de la ruta:\n"
             "1. Estación Aguaclara\n"
             "2. Estación CIT (Centro Internacional Tecnológico)\n"
             "RECUERDE: La ruta M66 en días festivos no para en Las Piedras, "
             "Pasoancho y Flores\n");
      return main();
    }

    else if (opcion == 3) {
      // Salir del programa
      printf("Saliendo del programa\n"
             "Gracias por utilizar el sistema de planificación de rutas SIPT "
             "S.A.S\n"
             ">>>>>¡Buen viaje!<<<<<\n");
    }

    else {
      // Opción inválida
      printf("x-x-x-x-x-x-x-x-x-x-x-x\n\n"
        "Opción no válida\n\n"
        "x-x-x-x-x-x-x-x-x-x-x-x\n\n");
      return main();
    }
  }

  else if (dia == 3) {
    // Salir del programa
    printf("Saliendo del programa\n");
  }

  else {
    // Opción inválida
    printf("x-x-x-x-x-x-x-x-x-x-x-x\n\n"
      "Opción no válida\n\n"
      "x-x-x-x-x-x-x-x-x-x-x-x\n\n");
    return main();
  }

  return 0;
}
