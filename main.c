//
// Projeto CENTRO AUTOMOTIVO DE AUTOS E AUTOMACAO
// Elaborado por FERNANDO OLIVEIRA PIRES RA: 2662243240
//

#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <string.h>
#include <math.h>

#define SIZE 500
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)

int op;

void modulo_Clientes();
void modulo_Ordem_Servico();
void lista ();

char var_tiposervico[SIZE] [150];
char var_sitpneus[SIZE] [250];
char var_sitamortecedores[SIZE] [250];
char var_sitbateria[SIZE] [250];
char var_sitoleo[SIZE] [250];
char var_servicorealizado[SIZE] [250];

int var_id_cliente[SIZE];
char var_nome[SIZE] [50];
int var_rg[SIZE] [12];
int var_cpf[SIZE] [14];
char var_end[SIZE] [150];
int var_dtnasc[SIZE] [10];
char var_marca[SIZE] [50];
char var_modelo[SIZE] [50];
char var_placa[SIZE] [7];

int var_IdOs[SIZE];
int var_horas;
int var_valortotal;
int valor_servicos;



int main(void) {
    do{
        system("clear"); //Para Linux
        //system("cls");
        system("color 5F");
        printf("\n\n\n============MENU============\n\n\n1 - Cadastro de Cliente\n2 - Abrir Ordem de Servico\n3 - Listar Cadastros\n4 - Sair\n\nDigite uma opcao: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                modulo_Clientes();
                break;

            case 2:
                modulo_Ordem_Servico();
                break;

            case 3:
                lista();
                break;

            case 4:
                system("exit");
                break;

            default:
                printf("Opcao Invalida");
                getchar();
                getchar();
                break;
        }
    }while(op!=4);

}

//FUNÇÃO CADASTRO DE CLIENTES
void modulo_Clientes() {


    static int linha;
    do {
        //system("clear"); //Para Linux
        system("cls");
        system("color 2F");
        printf("\n\n\n===============================");
        printf("\n|----CADASTRO DE CLIENTES-----|");
        printf("\n===============================\n\n");

        printf("\nID do Cliente: ");
        scanf("%d", &var_id_cliente[linha]);

        printf("\nNome do cliente: ");
        scanf("%s", &var_nome [linha]);

        printf("\nDigite o RG: ");
        scanf("%d", &var_rg[linha]);

        printf("\nDigite o CPF: ");
        scanf("%d", &var_cpf[linha]);

        printf("\nEndereco: ");
        scanf("%s", &var_end[linha]);

        printf("\nData de Nascimento: ");
        scanf("%d", &var_dtnasc[linha]);

        printf("\nMarca do Veiculo: ");
        scanf("%s", &var_marca [linha]);

        printf("\nModelo: ");
        scanf("%s", &var_modelo [linha]);

        printf("\nPlaca: ");
        scanf("%s", &var_placa[linha]);


        printf("\n===CADASTRO EFETUADO COM SUCESSO===\n\n");
        system("color 3F");
        printf("\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%d", &op);
        linha++;
    }while(op==1);
}

//FUNÇÃO ORDEM DE SERVIÇO
void modulo_Ordem_Servico() {

    static int linha;
    do {
        system("clear"); // Para Linux
        //system("cls");
        system("color 2F");
        printf("\n\n\n===============================");
        printf("\n|----ABRIR ORDEM DE SERVICO----|");
        printf("\n===============================\n\n");

        printf("\n\n|----TABELA DE TIPOS DE SERVICO");
        printf("\n|----1M - MOTOR ========= R$100,00");
        printf("\n|----2S - SUSPENCAO ===== R$200,00");
        printf("\n|----3M - FREIO ========= R$200,00");

        printf("\n\n\n|----TABELA DE DESCONTOS");
        printf("\n|----De R$200,00 a R$1.000,00 == Aplicar 5%");
        printf("\n|----Superior a R$1.000,00 ===== Aplicar 10%\n\n");

        printf("\nID da OS: ");
        scanf("%d", &var_IdOs [linha]);

        printf("\nTipo de OS: ");
        scanf("%s", &var_tiposervico [linha]);

        printf("\nQual a situacao dos pneus: ");
        scanf("%s", &var_sitpneus [linha]);

        printf("\nQual a situacao dos amortecedores: ");
        scanf("%s", &var_sitamortecedores [linha]);

        printf("\nQual a situacao da bateria: ");
        scanf("%s", &var_sitbateria [linha]);

        printf("\nQual o nivel do oleo: ");
        scanf("%s", &var_sitoleo [linha]);

        printf("\nServico foi realizado SIM ou NAO: ");
        scanf("%s", &var_servicorealizado [linha]);

        printf("\nDigite o valor da O.S de acordo com a tabela: ");
        scanf("%d", &valor_servicos);

        printf("\nQuantas horas foram gastas: ");
        scanf("%d", &var_horas);


        var_valortotal = (valor_servicos*var_horas);
        printf("\nVALOR FINAL DA ORDEM DE SERVICOS R$ %d",var_valortotal);

        if (var_valortotal<1000){
            var_valortotal = var_valortotal* 0.95;
            printf("\nVALOR COM DESCONTO R$ %d",var_valortotal);
        } else {
            var_valortotal = var_valortotal* 0.90;
            printf("\nVALOR COM DESCONTO%d",var_valortotal);
        }


        printf("\n\n===ORDEM DE SERVICO REALIZADA COM SUCESSO===\n\n");
        system("color 3F");
        printf("\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%d", &op);
        linha++;
    }while(op==1);
}

//FUNÇÃO CADASTRO DE CLASSIFICAÇÃO
void cadastroClassificacao() {
    int var_id_classificacao[SIZE];
    char var_categoria[SIZE] [50];
    char var_descricao[SIZE] [200];
    int var_valordiaria[SIZE];
    int var_valorsemanal[SIZE];
    int var_valormensal[SIZE];

    static int linha;
    do {
        //system("clear"); Para Linux
        system("cls");
        system("color 2F");
        printf("\n\n\n===============================");
        printf("\n|--CADASTRO DE CLASSIFICACAO--|");
        printf("\n===============================\n\n");

        printf("\nID da Classificação: ");
        scanf("%d", &var_id_classificacao[linha]);

        printf("\nCategoria: ");
        scanf("%s", &var_categoria [linha]);

        printf("\nDescricao: ");
        scanf("%s", &var_descricao [linha]);

        printf("\nValor da Diária: ");
        scanf("%d", &var_valordiaria[linha]);

        printf("\nValor Semanal: ");
        scanf("%d", &var_valorsemanal[linha]);

        printf("\nValor Mensal: ");
        scanf("%s", &var_valormensal[linha]);


        printf("\n===CADASTRO EFETUADO COM SUCESSO===\n\n");
        system("color 3F");
        printf("\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%d", &op);
        linha++;
    }while(op==1);
}

//FUNÇÃO CADASTRO DE MOVIMENTAÇÃO
void cadastroMovimentacao() {
    int var_id_movimentacao[SIZE];
    char var_cliente[SIZE] [50];
    char var_automovel[SIZE] [200];
    int var_qtdediarias;
    int var_valordiaria;
    int var_valortotal_diarias;
    int var_valortotal_semanal;
    int var_valortotal_mensal;


    static int linha;
    do {
        //system("clear"); Para Linux
        system("cls");
        system("color 2F");
        printf("\n\n\n===============================");
        printf("\n|--CADASTRO DE MOVIMENTACAO--|");
        printf("\n===============================\n\n");

        printf("\nID da Movimentacao ");
        scanf("%d", &var_id_movimentacao[linha]);

        printf("\nCliente: ");
        scanf("%s", &var_cliente [linha]);

        printf("\nAutomovel: ");
        scanf("%s", &var_automovel [linha]);

        printf("\nQuantidade de Diarias: ");
        scanf("%d", &var_qtdediarias);

        printf("\nValor da Locacao por Dia: ");
        scanf("%d", &var_valordiaria);


        var_valortotal_diarias = (var_valordiaria*var_qtdediarias);
        printf("\nValor total das Diarias R$%d",var_valortotal_diarias);

        var_valortotal_semanal = (var_valordiaria*7);
        printf("\nValor total por Semana R$%d",var_valortotal_semanal);

        var_valortotal_mensal = (var_valordiaria*30);
        printf("\nValor total por Mes R$%d",var_valortotal_mensal);


        printf("\n\n===CADASTRO EFETUADO COM SUCESSO===\n\n");
        system("color 3F");
        printf("\nDigite 1 para continuar ou outro valor para sair: ");
        scanf("%d", &op);
        linha++;
    }while(op==1);
}


//Função Listar Cadastro
void lista() {
    int i;
    for(i=0; i < SIZE; i++){
        if(var_IdOs[i]>0) {
            printf("\n===LISTA DE CLIENTES CADASTRADOS===");
            printf("\nOBS: Para ver uam lista e necessario cadastrar um cliente\n\n");

            printf("\nID do Cliente: %d", var_id_cliente[i]);
            printf("\nNome do cliente: %s", var_nome[i]);
            printf("\nDigite o RG: %d", var_rg[i]);
            printf("\nDigite o CPF: %d", var_cpf[i]);
            printf("\nEndereco: %s", var_end[i]);
            printf("\nData de Nascimento: %d", var_dtnasc[i]);
            printf("\nMarca do Veiculo: %s", var_marca[i]);
            printf("\nModelo: %s", var_modelo[i]);
            printf("\nPlaca: %s\n\n", var_placa[i]);
        } else{
            break;
        }
    }
    getchar();

}

