#include <stdio.h>
#include <math.h>

int main() {
    char op;
    float x, y, z, resultado, metros, kg, celsius, litros;

    printf("Selecciona una opción:\n");
    printf("'e' para convertir Cartesianas a Esféricas\n");
    printf("'E' para convertir Esféricas a Cartesianas\n");
    printf("'c' para convertir Cartesianas a Cilíndricas\n");
    printf("'C' para convertir Cilíndricas a Cartesianas\n");
    printf("'m' para convertir Metros a Pies\n");
    printf("'p' para convertir Kilogramos a Libras\n");
    printf("'t' para convertir Celsius a Fahrenheit\n");
    printf("'l' para convertir Litros a Galones\n");
    printf("'s' para salir\n");

    scanf(" %s", &op);

    switch(op) {
        case 'e': { // Cartesianas a Esféricas
            float r, theta, phi;
            char unidad;
            printf("Introduce x, y, z: ");
            scanf("%f %f %f", &x, &y, &z);
            printf("Selecciona unidad para los ángulos ('g' para grados, 'r' para radianes): ");
            scanf(" %s", &unidad);

            r = sqrt(x*x + y*y + z*z);
            theta = atan2(y, x);
            phi = acos(z / r);

            if (unidad == 'g') {
                theta *= 180.0 / M_PI;
                phi *= 180.0 / M_PI;
            }


            printf("Coordenadas Esféricas: r=%.2f, θ=%.2f, φ=%.2f\n", r, theta, phi);
            break;
        }

        case 'E': { // Esféricas a Cartesianas
            float r, theta, phi;
            char unidad;
            printf("Introduce r, θ, φ: ");
            scanf("%f %f %f", &r, &theta, &phi);
            printf("Selecciona unidad de los ángulos ('g' para grados, 'r' para radianes): ");
            scanf(" %s", &unidad);


            x = r * sin(phi) * cos(theta);
            y = r * sin(phi) * sin(theta);
            z = r * cos(phi);

            if (unidad == 'g') {
                theta *= M_PI / 180.0;
                phi *= M_PI / 180.0;
            }

            printf("Coordenadas Cartesianas: x=%.2f, y=%.2f, z=%.2f\n", x, y, z);
            break;
        }

        case 'c': { // Cartesianas a Cilíndricas
            float r, theta;
            char unidad;
            printf("Introduce x, y, z: ");
            scanf("%f %f %f", &x, &y, &z);
            printf("Selecciona unidad para los ángulos ('g' para grados, 'r' para radianes): ");
            scanf(" %s", &unidad);

            r = sqrt(x*x + y*y);
            theta = atan2(y, x);

            if (unidad == 'g') {
                theta *= 180.0 / M_PI;
            }

            printf("Coordenadas Cilíndricas: r=%.2f, θ=%.2f, z=%.2f\n", r, theta, z);
            break;
        }

        case 'C': { // Cilíndricas a Cartesianas
            float r, theta;
            char unidad;
            printf("Introduce r, θ, z: ");
            scanf("%f %f %f", &r, &theta, &z);
            printf("Selecciona unidad de los ángulos ('g' para grados, 'r' para radianes): ");
            scanf(" %s", &unidad);


            x = r * cos(theta);
            y = r * sin(theta);

            if (unidad == 'g') {
                theta *= M_PI / 180.0;
            }

            printf("Coordenadas Cartesianas: x=%.2f, y=%.2f, z=%.2f\n", x, y, z);
            break;
        }

        case 'm': // Metros a Pies
            printf("Introduce la longitud en metros: ");
            scanf("%f", &metros);
            resultado = metros * 3.28084;
            printf("%.2f metros es igual a %.2f pies\n", metros, resultado);
            break;

        case 'p': // Kilogramos a Libras
            printf("Introduce la masa en kilogramos: ");
            scanf("%f", &kg);
            resultado = kg * 2.20462;
            printf("%.2f kg es igual a %.2f libras\n", kg, resultado);
            break;

        case 't': // Celsius a Fahrenheit
            printf("Introduce la temperatura en Celsius: ");
            scanf("%f", &celsius);
            resultado = (celsius * 9/5) + 32;
            printf("%.2f°C es igual a %.2f°F\n", celsius, resultado);
            break;

        case 'l': // Litros a Galones
            printf("Introduce el volumen en litros: ");
            scanf("%f", &litros);
            resultado = litros * 0.264172;
            printf("%.2f litros es igual a %.2f galones\n", litros, resultado);
            break;


        case 's': // Salir
            printf("Saliendo del programa...\n");
            return 0;

        default:
            printf("Opción no válida\n");
            break;
    }

    printf("Fin\n");
    return 0;
}

