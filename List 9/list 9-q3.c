
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
// structures

/**
 * The yellowbook type is a struct that contains information about a person's name, email, phone
 * number, and birthday.
 * @property {char} nome - This property represents the name of a person in the agenda. It is a
 * character array with a maximum length of 100 characters.
 * @property {char} email - The email property is a character array of size 100, which can store up to
 * 100 characters. It is used to store the email address of a contact in the agenda.
 * @property {char} telefone - telefone is a character array of size 100, which represents the phone
 * number of a contact in the agenda.
 * @property dia - The property "dia" represents the day of the month for a birthday in the
 * "yellowbook" struct.
 */
typedef struct agenda {
    char nome[100];
    char email[100];
    char telefone[100];
    struct aniversario {
        int dia;
        int mes;
    } bday;
} yellowbook;

/**
 * The function "input_yellowbook" allows the user to input contact information into a yellowbook
 * structure.
 *
 * @param y The parameter `y` is a pointer to a structure of type `yellowbook`.
 * @param qntd The parameter "qntd" represents the number of contacts that will be inputted into the
 * yellowbook.
 */
void input_yellowbook(yellowbook* y, int qntd);
/**
 * The function "printa_yellowbook" prints the contents of a yellowbook structure array.
 *
 * @param y The parameter "y" is a pointer to an array of yellowbook structures. Each yellowbook
 * structure represents a contact in a yellowbook.
 * @param qntd The parameter "qntd" represents the number of contacts in the yellowbook.
 */
void printa_yellowbook(yellowbook* y, int qntd);
/**
 * The function "menu" allows the user to choose between different options to search for contacts in a
 * yellowbook based on name, month, or birthday.
 *
 * @param y A pointer to a yellowbook struct.
 * @param qntd The parameter "qntd" represents the quantity or number of entries in the yellowbook.
 * @param nome The parameter "nome" is a pointer to a character array, which is used to store the name
 * that the user wants to search for in the yellowbook.
 * @param dia The parameter "dia" represents the day of the birthday that the user wants to search for
 * in the yellowbook.
 * @param mes The parameter "mes" represents the month.
 * @param option The parameter "option" is an integer variable that represents the user's choice in the
 * menu. It is used to determine which operation to perform based on the user's input.
 */
void menu(yellowbook* y, int qntd, char* nome, int dia, int mes, int option);

/**
 * The function qntd_name_pages counts the number of yellowbook entries that contain a given name.
 *
 * @param y A pointer to an array of yellowbook structures.
 * @param qntd The parameter "qntd" represents the total number of yellowbook entries in the array "y".
 * @param nome The parameter "nome" is a pointer to a character array, which represents the name that
 * we are searching for in the yellowbook.
 *
 * @return the number of yellowbook entries that contain the given name.
 */
yellowbook* name_pages(yellowbook* y, int qntd, char* nome);
/**
 * The function qntd_name_pages counts the number of yellowbook entries that contain a given name.
 *
 * @param y A pointer to an array of yellowbook structures.
 * @param qntd The parameter "qntd" represents the total number of yellowbook entries in the array "y".
 * @param nome The parameter "nome" is a pointer to a character array, which represents the name that
 * we are searching for in the yellowbook.
 *
 * @return the number of yellowbook pages that contain a given name.
 */

int qntd_name_pages(yellowbook* y, int qntd, char* nome);
/**
 * The function "ask_name_pages" takes a yellowbook, a quantity, and a name as input, prompts the user
 * to search for a name among the contacts, and prints the contacts with that name if they exist.
 *
 * @param y The parameter "y" is a pointer to a yellowbook structure.
 * @param qntd The parameter "qntd" represents the total number of contacts in the yellowbook.
 * @param nome The parameter "nome" is a character array that is used to store the name that the user
 * wants to search for in the yellowbook.
 */
void ask_name_pages(yellowbook* y, int qntd, char* nome);


/**
 * The function "qntd_month_pages" counts the number of yellowbook entries with a specific month of
 * birth.
 *
 * @param y The parameter "y" is a pointer to an array of yellowbook structures. Each yellowbook
 * structure represents a contact entry and contains information such as the person's birthday (stored
 * in the "bday" field).
 * @param qntd The parameter "qntd" represents the total number of yellowbook entries in the array "y".
 * @param mes The parameter "mes" represents the month for which we want to count the number of
 * yellowbook entries.
 *
 * @return the number of yellowbook entries that have a birthday in the specified month.
 */
int qntd_month_pages(yellowbook* y, int qntd, int mes);
/**
 * The function "month_pages" takes a yellowbook array, the quantity of elements in the array, and a
 * month as input, and returns a new yellowbook array containing only the elements with the specified
 * month.
 *
 * @param y The parameter "y" is a pointer to a yellowbook structure.
 * @param qntd The parameter "qntd" represents the total number of entries in the yellowbook.
 * @param mes The parameter "mes" represents the month for which you want to retrieve the yellowbook
 * entries.
 *
 * @return a pointer to a yellowbook structure.
 */
yellowbook* month_pages(yellowbook* y, int qntd, int mes);
/**
 * The function "ask_month_pages" allows the user to search for contacts in a yellowbook based on their
 * birth month and prints the contacts that have birthdays in that month.
 *
 * @param y A pointer to a yellowbook structure, which presumably contains a list of contacts.
 * @param qntd The parameter "qntd" represents the total number of contacts in the yellowbook.
 * @param mes The parameter "mes" represents the month of the birthday that the user wants to search
 * for in the yellowbook.
 */
void ask_month_pages(yellowbook* y, int qntd, int mes);

/**
 * The function "qntd_bday_pages" counts the number of yellowbook entries with a specific birthday
 * date.
 *
 * @param y The parameter "y" is a pointer to an array of yellowbook structures. Each yellowbook
 * structure represents a person's contact information, including their birthday.
 * @param qntd The parameter "qntd" represents the total number of entries in the yellowbook array.
 * @param dia The parameter "dia" represents the day of the month.
 * @param mes The parameter "mes" represents the month of the birthday.
 *
 * @return the number of yellowbook entries that have a birthday on a specific day and month.
 */
int qntd_bday_pages(yellowbook* y, int qntd, int dia, int mes);
/**
 * The function "bday_pages" returns an array of yellowbook entries that have a specific birthday date.
 *
 * @param y A pointer to a yellowbook struct, which represents a yellow book containing contact
 * information.
 * @param qntd The parameter "qntd" represents the total number of entries in the yellowbook.
 * @param dia The parameter "dia" represents the day of the month.
 * @param mes The parameter "mes" represents the month of the birthday.
 *
 * @return a pointer to a dynamically allocated array of yellowbook structures.
 */
yellowbook* bday_pages(yellowbook* y, int qntd, int dia, int mes);
/**
 * The function "bday_pages" returns an array of yellowbook entries that have a specific birthday date.
 *
 * @param y A pointer to a yellowbook struct, which represents a yellow book containing contact
 * information.
 * @param qntd The parameter "qntd" represents the total number of entries in the yellowbook.
 * @param dia The parameter "dia" represents the day of the month.
 * @param mes The parameter "mes" represents the month of the birthday.
 *
 * @return a pointer to a dynamically allocated array of yellowbook structures.
 */
void ask_bday_pages(yellowbook* y, int qntd, int dia, int mes);

// main
int main() {
    setlocale(LC_ALL, "Portuguese");
    int qntd = 0;
    char nome[100];
    int mes = 0;
    int dia = 0;
    int option = 0;
    //* entrada
    printf("//Digite a quantidade de contatos a ser registrada: ");
    scanf("%d", &qntd);
    if (qntd <= 0) {
        printf("**ERROR-Digite valores positivos e não nulos.\n");
        return 0;
    }
    yellowbook* yellowpages = (yellowbook*)(qntd * (sizeof(yellowbook)));
    fgetc(stdin);
    input_yellowbook(yellowpages, qntd);
    menu(yellowpages, qntd, nome, dia, mes, option);
    free(yellowpages);
    return 0;
}



void input_yellowbook(yellowbook* y, int qntd) {
    for (int i = 0; i < qntd; i++) {
        printf("\n_____________%d° contato______________\n", i + 1);
        printf("//Digite o nome do contato: ");
        fgets(y[i].nome, 100, stdin);
        y[i].nome[(strlen(y[i].nome)) - 1] = '\0';
        printf("//Digite o endereço de email: ");
        fgets(y[i].email, 100, stdin);
        y[i].email[(strlen(y[i].email)) - 1] = '\0';
        printf("//Digite o numero de telefone do contato: ");
        fgets(y[i].telefone, 100, stdin);
        y[i].telefone[(strlen(y[i].telefone)) - 1] = '\0';
        printf("//Digite a data de aniversário: ");
        scanf("%d/%d", &y[i].bday.dia, &y[i].bday.mes);
        fgetc(stdin);
    }
}



void printa_yellowbook(yellowbook* y, int qntd) {
    for (int i = 0; i < qntd; i++) {
        printf("\n_____________contato______________\n");
        printf(">>nome: %s\n", y[i].nome);
        printf(">>email: %s\n", y[i].email);
        printf(">>telefone: %s\n", y[i].telefone);
        printf(">>Aniversário: %02d/%02d\n", y[i].bday.dia, y[i].bday.mes);
    }
}



int qntd_name_pages(yellowbook* y, int qntd, char* nome) {
    int cont = 0;
    for (int i = 0; i < qntd; i++) {
        if (strstr((y[i].nome), nome))
            cont++;
    }
    return cont;
}


yellowbook* name_pages(yellowbook* y, int qntd, char* nome) {
    int cont = qntd_name_pages(y, qntd, nome);
    if (cont == 0)
        return NULL;
    yellowbook* namepages = malloc(cont * (sizeof(yellowbook)));
    for (int i = 0, j = 0; i < qntd; i++) {
        if (strstr((y[i].nome), nome)) {
            *(namepages + j) = *(y + i);
            j++;
        }
    }
    return namepages;
}


void ask_name_pages(yellowbook* y, int qntd, char* nome) {
    fgetc(stdin);
    printf("\n/--Pesquise um nome entre os contatos: ");
    fgets(nome, 100, stdin);
    nome[strlen(nome) - 1] = '\0';
    if (qntd_name_pages(y, qntd, nome) == 0) {
        printf("\\\\Não há contatos com esse nome.");
    }
    else {
        yellowbook* namepages = name_pages(y, qntd, nome);
        printa_yellowbook(namepages, qntd_name_pages(y, qntd, nome));
        free(namepages);
    }
}


int qntd_month_pages(yellowbook* y, int qntd, int mes) {
    int cont = 0;
    for (int i = 0; i < qntd; i++) {
        if (y[i].bday.mes == mes)
            cont++;
    }
    return cont;
}


yellowbook* month_pages(yellowbook* y, int qntd, int mes) {
    int cont = qntd_month_pages(y, qntd, mes);
    if (cont == 0)
        return NULL;
    yellowbook* monthpages = (yellowbook*)(cont * (sizeof(yellowbook)));
    for (int i = 0, j = 0; i < cont; i++) {
        if ((y[i].bday.mes) == mes) {
            *(monthpages + j) = *(y + i);
            j++;
        }
    }
    return monthpages;
}



void ask_month_pages(yellowbook* y, int qntd, int mes) {
    printf("\n/--Pesquise o mẽs de aniverário dos contatos desejado: ");
    scanf("%d", &mes);
    if (qntd_month_pages(y, qntd, mes) == 0) {
        printf("\t\\\\Não há contatos que aniversariem nesse mês.\n");
    }
    else {
        yellowbook* monthpages = month_pages(y, qntd, mes);
        printa_yellowbook(monthpages, qntd_month_pages(y, qntd, mes));
        free(monthpages);
    }
}


int qntd_bday_pages(yellowbook* y, int qntd, int dia, int mes) {
    int cont = 0;
    for (int i = 0; i < qntd; i++) {
        if (y[i].bday.mes == mes) {
            if (y[i].bday.dia == dia)
                cont++;
            else
                continue;
        }
        else
            continue;
    }
    return cont;
}


yellowbook* bday_pages(yellowbook* y, int qntd, int dia, int mes) {
    int cont = qntd_bday_pages(y, qntd, dia, mes);
    if (cont == 0)
        return NULL;
    yellowbook* bdaypages = malloc(cont * (sizeof(yellowbook)));
    for (int i = 0, j = 0; i < cont; i++) {
        if ((y[i].bday.mes) == mes) {
            if (y[i].bday.dia == dia) {
                *(bdaypages + j) = *(y + i);
                j++;
            }
        }
    }
    return bdaypages;
}


void ask_bday_pages(yellowbook* y, int qntd, int dia, int mes) {
    printf("\n/--Pesquise a data de aniver�rio dos contatos desejada: ");
    scanf("%d/%d", &dia, &mes);
    if (qntd_bday_pages(y, qntd, dia, mes) == 0) {
        printf("\n\t\\\\Não há contatos que aniversariem nessa data.\n");
    }
    else {
        yellowbook* bdaypages = bday_pages(y, qntd, dia, mes);
        printa_yellowbook(bdaypages, qntd_bday_pages(y, qntd, dia, mes));
        free(bdaypages);
    }
}

void menu(yellowbook* y, int qntd, char* nome, int dia, int mes, int option) {
    printf("\n*//Escolha uma das opções abaixo.\n>1-Pequisar por nome\n>2-Pesquisar por mês\n>3-pesquisar por anversário.\n");
    scanf("%d", &option);
    while (option != 0) {
        if (option == 1) //*pesquisar por nome
            ask_name_pages(y, qntd, nome);
        else if (option == 2) //* pesquisar por mes
            ask_month_pages(y, qntd, mes);
        else if (option == 3) //*pesquisar por anivers?rio
            ask_bday_pages(y, qntd, dia, mes);
        else
            printf("\t**ERROR-Digtite uma opção válida.\n");
        printf("\n\t/--Deseja continuar?\n");
        printf("-Se sim escolha e digite uma das opções abaixo.\n>1-Pequisar por nome\n>2-Pesquisar por mês\n>3-pesquisar por anversario.\n");
        printf("-Se nao digite 0.\n");
        scanf("%d", &option);
    }
}
