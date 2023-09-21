/**
 * The above code is a C program that allows the user to input information about animals, including
 * their code, milk production, food intake, and date of birth, and then prints information about the
 * most productive animal.
 * 
 * @return The function `animal_prod` returns a pointer to the most productive animal in the given
 * array.
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


/**
 * The above code defines a struct type called "animal" with various fields including a nested struct
 * for birthday information.
 * @property {char} cod - A character array of size 52, representing the code of the animal.
 * @property {int} prod - The "prod" property is an integer that represents the product code of the
 * animal.
 * @property {int} alimentacao - The "alimentacao" property is an integer that represents the type of
 * food the animal consumes.
 * @property dia - The property "dia" represents the day of the birthdate of an animal.
 */
typedef struct registro {
    char cod[52];
    int prod;
    int alimentacao;
    struct bday {
        int dia;
        int mes;
        int ano;
    } bday;
} animal;


/**
 * The function "animal_input" takes input from the user for various attributes of an animal structure.
 * 
 * @param p p is a pointer to a struct of type "animal".
 * @param ordem The parameter "ordem" represents the order or sequence of the animal being inputted. It
 * is used to display the animal's number or position in the input process.
 */
void animal_input(animal* p, int ordem);
/**
 * The function "print_animal" prints information about a given animal's productivity, including its
 * code, milk production, food intake, and date of birth.
 * 
 * @param p p is a pointer to a struct of type "animal".
 */
void print_animal(animal* p);
/**
 * The function "animal_prod" returns a pointer to the most productive animal in an array of animals.
 * 
 * @param p A pointer to an array of animal structures.
 * @param qntd The parameter "qntd" represents the number of animals in the array "p".
 * 
 * @return a pointer to the most productive animal in the given array.
 */
animal* animal_prod(animal* p, int qntd);


int main() {
    setlocale(LC_ALL, "Portuguese");
    int qntd = 0;
    //* entrada
    printf("//Digite a quantidade de animais a ser registrada: ");
    scanf("%d", &qntd);
    if (qntd <= 0) {
        printf("**ERROR-Digite valores positivos e não nulos.\n");
        return 0;
    }
    animal* animais = (animal*)malloc(qntd * (sizeof(animal)));
    fgetc(stdin);
    for (int i = 0; i < qntd; i++) {
        animal_input(&(*(animais + i)), i + 1);
    }
    //* saída
    print_animal(animal_prod(animais, qntd));
    free(animais);
    return 0;
}


void animal_input(animal* p, int ordem) {
    printf("\n_____________%d� animal______________\n", ordem);
    printf("//Digite o código do animal: ");
    fgets(p->cod, 50, stdin);
    printf("//Digite a produção de leite por semana do animal: ");
    scanf("%d", &p->prod);
    printf("//Digite a quantidade de alimentação por semana do animal Kg: ");
    scanf("%d", &p->alimentacao);
    printf("//Digite a data de nascimento do animal: ");
    scanf("%d/%d/%d", &p->bday.dia, &p->bday.mes, &p->bday.ano);

    fgetc(stdin);
}



void print_animal(animal* p) {
    printf("\n_____________animal mais produtivo______________\n");
    printf(">>Cod. animal: %s", p->cod);
    printf(">>Produção de leite: %2d l/sem\n", p->prod);
    printf(">>Alimentação ingerida: %2d Kg/sem\n", p->alimentacao);
    printf(">>Data de nascimento: %02d/%02d/%02d\n", p->bday.dia, p->bday.mes, p->bday.ano);
}



animal* animal_prod(animal* p, int qntd) {
    animal* mostprouctive;
    for (int i = 0; i < qntd; i++) {
        if (i == 0)
            mostprouctive = &(*p);
        else if (p->prod > mostprouctive->prod)
            mostprouctive = &(*p);
        p++;
    }
    return mostprouctive;
}
