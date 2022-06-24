#include <stdio.h>

typedef struct{
    char nome[100];
    int idade;

} Pessoa;

typedef struct{
    Pessoa professor;
    Pessoa alunos[5];

} Turma;

void exibirPessoa(Pessoa p);
void exibirTurma(Turma t);

int main(){

    Pessoa professor = {"Igor Malheiros", 29};

    Pessoa aluno1 = {"Fulano Silva", 20};
    Pessoa aluno2 = {"Ciclano Santos", 25};
    Pessoa aluno3 = {"Beltrano Pereira", 19};
    Pessoa aluno4 = {"Aluno Quatro", 18};
    Pessoa aluno5 = {"Aluno Cinco", 23};

    Pessoa alunos[5] = {aluno1, aluno2, aluno3, aluno4, aluno5};

    Turma turma1 = {professor, {aluno1, aluno2, aluno3}};

    exibirPessoa(aluno1);
    printf("\n");
    exibirTurma(turma1);

    return 0;
}

void exibirPessoa(Pessoa p){
    printf("Nome: %s\nIdade: %d\n", p.nome, p.idade);
}

void exibirTurma(Turma t){
    printf("Professor %s\n", t.professor.nome);
    //exibirPessoa(t.professor);

    for(int i = 0;  i < 5; i++){
        exibirPessoa(t.alunos[i]);
    }
}