/**
 * The above code defines a struct type named "vehicle" and includes functions to input and print
 * details of a fleet of vehicles.
 * 
 * @return The main function returns an integer value of 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


/**
 * The above code defines a struct type named "vehicle" with various attributes related to a fleet of
 * vehicles.
 * @property {char} placa - The "placa" property is a character array that represents the license plate
 * of a vehicle.
 * @property {float} kmeters - The "kmeters" property represents the number of kilometers traveled by
 * the vehicle.
 * @property {float} consumo - The "consumo" property represents the fuel consumption of the vehicle.
 * @property {float} redimento - The "redimento" property in the "vehicle" struct represents the fuel
 * efficiency or mileage of the vehicle. It is a float value that indicates how many kilometers the
 * vehicle can travel per unit of fuel consumed.
 * @property {int} gas_type - The gas_type property is an integer that represents the type of gas used
 * by the vehicle.
 */
typedef struct frota
{
    char placa[100];
    float kmeters;
    float consumo;
    float redimento;
    int gas_type;
} vehicle;


/**
 * The function "input_frota" takes user input to populate the attributes of a vehicle struct.
 * 
 * @param v The parameter `v` is a pointer to an array of `vehicle` structures.
 * @param i The parameter "i" is an integer that represents the index of the vehicle in the array. It
 * is used to identify which vehicle is being inputted.
 */
void input_frota(vehicle *v, int qntd);
/**
 * The function "printa_frota" prints the details of a fleet of vehicles, including their license
 * plate, kilometers traveled, fuel consumption, fuel efficiency, and fuel type.
 * 
 * @param v The parameter `v` is a pointer to an array of `vehicle` structures. Each `vehicle`
 * structure represents a vehicle and contains information such as the license plate, kilometers
 * traveled, fuel consumption, fuel type, and fuel efficiency.
 * @param qntd The parameter "qntd" represents the number of vehicles in the fleet.
 */
void printa_frota(vehicle *v, int i);

// main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    //* vari�veis
    int option = 0;
    int i = 0;
    vehicle *v = (vehicle*)(10 * (sizeof(vehicle)));
    printf("//Registre a frota abaixo: \n");
    //* input/output
    do
    {
        input_frota(v, i);
        if (i < 9)
            printf("\\\\A relação atual é: \n");
        else
            printf("\\\\A relação final é: \n");
        printa_frota(v, i + 1);
        if (i < 9)
        {
            printf("Deseja registrar outro veículo ?\n>1-sim\n>0-Não\n(1/0): ");
            scanf("%d", &option);
            if (option)
            {
                i++;
                continue;
            }
            else
            {
                printf("\\\\A relação final é: \n");
                printa_frota(v, i + 1);
                break;
            }
        }
    } while (i < 10);
    free(v);
    return 0;
}


void input_frota(vehicle *v, int i)
{
    printf("\n_____________%d° Veículo______________\n", i + 1);
    printf("//Digite a placa do carro: ");
    fgetc(stdin);
    fgets((v[i].placa), 100, stdin);
    v[i].placa[(strlen(v[i].placa)) - 1] = '\0';
    printf("//Digite a quilometragem do carro em Km: ");
    scanf("%f", &(v[i].kmeters));
    printf("//Digite o consumo em l: ");
    scanf("%f", &(v[i].consumo));
    v[i].redimento = ((float)(v[i].kmeters) / (float)(v[i].consumo));
    printf("Digite o tipo de combustível:\n>1-Gasolina\n>2-Diesel\n");
    do
    {
        scanf("%d", &(v[i].gas_type));
        if (!(((v[i].gas_type) == 1) || ((v[i].gas_type == 2))))
            printf("**ERROR-Digite uma opção válida.\n");
        else
            break;
    } while (!(((v[i].gas_type) == 1) || ((v[i].gas_type == 2))));
}


void printa_frota(vehicle *v, int qntd)
{
    char combustivel[100];
    printf("Placa\t Km\t l\t Km/l\t Tipo\t\n");
    for (int i = 0; i < qntd; i++)
    {
        if (v[i].gas_type == 1)
            strcpy(combustivel, "Gasolina\0");
        else
            strcpy(combustivel, "Diesel\0");
        printf("%s\t%.2f\t%.2f\t%.2f\t%s\t\n", v[i].placa, v[i].kmeters, v[i].consumo, v[i].redimento, combustivel);
    }
}