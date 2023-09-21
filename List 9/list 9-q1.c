/**
 * The above code defines a struct type called "paciente" that represents information about a patient,
 * including their name, address, phone number, height, date of birth, and weight. It also includes
 * functions to input and print patient information.
 * 
 * @return The main function returns an integer value of 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/**
 * The above code defines a struct type called "paciente" that represents information about a patient,
 * including their name, address, phone number, height, date of birth, and weight.
 * @property {char} name - A character array of size 52 to store the name of the patient.
 * @property {char} endereco - The "endereco" property is a character array that represents the address
 * of the patient. It can store up to 52 characters.
 * @property {char} telefone - telefone is a character array that can store up to 20 characters,
 * representing the phone number of a patient.
 * @property {float} altura - The "altura" property represents the height of the patient.
 * @property dia - The property "dia" represents the day of the month in the "bday" structure, which is
 * used to store the birthday of a patient.
 * @property {float} massa - massa is a float variable that represents the weight of the patient.
 */
typedef struct dados
{
    char name[52];
    char endereco[52];
    char telefone[20];
    float altura;
    struct bday
    {
        int dia;
        int mes;
        int ano;
    } bday;
    float massa;
} paciente;


/**
 * The function "pacient_input" takes input from the user for various attributes of a patient and
 * stores them in a struct.
 * 
 * @param p The parameter "p" is a pointer to a structure of type "paciente". This structure likely
 * contains fields such as "name", "endereco", "telefone", "altura", "bday", and "massa".
 * @param ordem The parameter "ordem" represents the order or number of the patient being inputted. It
 * is used to display the number of the patient in the output message.
 */
void pacient_input(paciente *p, int ordem);

/**
 * The function "print_pacient" prints the information of a patient, including their name, height,
 * weight, date of birth, telephone number, and address.
 * 
 * @param p The parameter "p" is a pointer to a structure of type "paciente". This structure contains
 * information about a patient, such as their name, height, weight, date of birth, telephone number,
 * and address.
 * @param ordem The parameter "ordem" represents the order or number of the patient being printed. It
 * is used to display the patient's information with a corresponding number or order.
 */
void print_pacient(paciente *p, int ordem);

//? main
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int qntd = 0;
    //* entrada
    printf("//Digite a quantidade de pacientes a ser registrada: ");
    scanf("%d", &qntd);
    if (qntd <= 0)
    {
        printf("**ERROR-Digite valores positivos e não nulos.\n");
        return 0;
    }
    paciente *pacientes = (paciente*) malloc(qntd * (sizeof(paciente)));
    fgetc(stdin);
    for (int i = 0; i < qntd; i++)
    {
        pacient_input(&(*(pacientes + i)), i + 1);
    }
    //* sa�da
    printf("\n\\\\Relatorio dos paceintes: \n");
    for (int i = 0; i < qntd; i++)
    {
        print_pacient(&(*(pacientes + i)), i + 1);
    }
    free(pacientes);
    return 0;
}


void pacient_input(paciente *p, int ordem)
{
    printf("\n_____________%d� Paciente______________\n", ordem);
    printf("//Digite o nome do paciente: ");
    fgets(p->name, 50, stdin);
    printf("//Digite o endere�o do paciente: ");
    fgets(p->endereco, 50, stdin);
    printf("//Digite o n�mero do paciente: ");
    fgets(p->telefone, 10, stdin);
    printf("//Digite a altura do paciente: ");
    scanf("%f", &p->altura);
    printf("//Digite a data de nascimento do paciente: ");
    scanf("%d/%d/%d", &p->bday.dia, &p->bday.mes, &p->bday.ano);
    printf("//Digite o peso do paciente em Kg: ");
    scanf("%f", &p->massa);
    fgetc(stdin);
}


void print_pacient(paciente *p, int ordem)
{
    printf("\n_____________%d� Paciente______________\n", ordem);
    printf(">>Nome: %s", p->name);
    printf(">>altura: %.2f m\n", p->altura);
    printf(">> peso: %.2f Kg\n", p->massa);
    printf(">>Data de nascimento: %2d/%2d/%2d\n", p->bday.dia, p->bday.mes, p->bday.ano);
    printf(">>telefone: %s\n", p->telefone);
    printf(">>endereço: %s\n", p->endereco);
}