#include <stdio.h>

typedef struct {
    int matricula;
    char nome[20];
    float N1;
    float N2;
    float Media;
    int Faltas;
    char Reprovado_SN;
} Aluno;

// Função para verificar a aprovação de um aluno
void verifica_aprovacao(Aluno *aluno) {
    // Verificar se o aluno está reprovado por falta
    if (aluno->Faltas >= 20) {
        aluno->Reprovado_SN = 'S';
    }

    // Calcular a média
    aluno->Media = (aluno->N1 + aluno->N2) / 2;
}

// Função para mostrar a aprovação de um aluno
void mostra_aprovacao(Aluno aluno) {
    printf("Aluno:\n");
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Nome: %s\n", aluno.nome);
    printf("N1: %.2f\n", aluno.N1);
    printf("N2: %.2f\n", aluno.N2);
    printf("Faltas: %d\n", aluno.Faltas);

    // Verificar a situação do aluno
    if (aluno.Reprovado_SN == 'S') {
        printf("REPROVADO POR FALTA\n");
    } else if (aluno.Media < 6.0) {
        printf("REPROVADO POR MEDIA\n");
    } else {
        printf("APROVADO\n");
    }
    printf("\n");
}

int main() {
    Aluno alunos[5] = {
        {1, "João", 8.5, 9.0, 0.0, 25,' '},
        {2, "Maria", 9.0, 8.0, 0.0, 1,' '},
        {3, "Pedro", 7.5, 8.5, 0.0, 3,' '},
        {4, "Ana", 9.5, 9.5, 0.0, 20,' '},
        {5, "Luiz", 8.0, 7.0, 0.0, 4,' '}
    };

    // Verificar a aprovação de cada aluno
    for (int i = 0; i < 5; i++) {
        verifica_aprovacao(&alunos[i]);
    }

    // Mostrar a aprovação de cada aluno
    for (int i = 0; i < 5; i++) {
        mostra_aprovacao(alunos[i]);
    }

    return 0;
}