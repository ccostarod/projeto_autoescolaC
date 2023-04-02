#include <Stdio.h>
#include <unistd.h>
int main() {
    int escolha, i = 0, soma1 = 1, aula_desejada, ch_desejada, chave=1, aula1 = 0, aula2 = 0, aula3 = 0, aula4 = 0, aula5 = 0, total = 0;
    char *disciplinas[6] = {"LEGISLACAO DE TRANSITO", "DIRECAO DEFENSIVA", "PRIMEIROS SOCORROS", "MEIO AMBIENTE E CONVIVIO SOCIAL", "FUNCIONAMENTO DE VEICULOS", "TOTAL"};
    loop1:
    while (1) { //Esse while 1 é o loop infinito que representa as opções iniciais do sistema;
        if (chave == 1) {
            printf("***SISTEMA AUTO-ESCOLA ROD***\n");
            printf("1 - Realizar aula\n2 - Ver carga horaria\n0 - Sair do sistema\n");
        }
        chave = 0;

        


        while (1) { //Esse aqui trata da escolha que o usuario escolher.
            //Nas proximas linhas, o usuario coloca a escolha dele:
            printf("\nSua escolha: ");
            scanf("%d", &escolha);
            printf("Processando");
            while(i < 3) {
                sleep(1);
                printf(".");
                i++;
            }
            sleep(1);

            i = 0;
            printf("\n");
            if (escolha == 1) {
                printf("\nVoce escolheu Realizar uma aula\n");
                printf("Escolha a disciplina que deseja fazer: \n");
                printf("\n");
                soma1 = 1;
                while (i < 5) {
                    printf("%d - %s\n", soma1, disciplinas[i]);
                    soma1++;
                    i++;
                }
                i = 0;
                soma1 = 1;
                printf("\nEscolha a disciplina: ");
                scanf("%d", &aula_desejada);
                break;  
            }
            
            else if (escolha == 2) {
                printf("Voce escolheu ver sua carga horaria\n");
                printf("Escolha a disciplina que voce deseja ver a carga horaria realizada: \n");
                printf("\n");
                soma1 = 1;
                while (i < 6) {     
                    printf("%d - %s\n", soma1, disciplinas[i]);
                    soma1++;
                    i++;
                }
                i = 0;
                soma1 = 1;
                printf("\nEscolha a disciplina: ");
                scanf("%d", &ch_desejada);
                break;
            }

            else if (escolha == 0) {
                break;
            }

            else {
                printf("%d nao eh valido, escolha uma das alternativas validas, 1 ou 2 ou 3.\n", escolha);
                continue;
            }

        }
        //Quando o usuario deseja sair do sistema
        if (escolha == 0) {
            printf("Saiu do sistema");
            break;
        }
        //Quando o usuario escolhe fazer uma aula:
        else if (escolha == 1) {
            int k = 0;
            while(k < 1) {
                switch (aula_desejada)
                {
                    case 1: printf("\nVoce escolheu a disciplina %s\n", disciplinas[0]); k++; break;
                    case 2: printf("\nVoce escolheu a disciplina %s\n", disciplinas[1]); k++; break;
                    case 3: printf("\nVoce escolheu a disciplina %s\n", disciplinas[2]); k++; break;
                    case 4: printf("\nVoce escolheu a disciplina %s\n", disciplinas[3]); k++; break;
                    case 5: printf("\nVoce escolheu a disciplina %s\n", disciplinas[4]); k++; break;
                }
            }
            while(1) {
               

                 //Quando o usuario escolhe a DISCIPLINA 1:
                if (aula_desejada == 1) 
                {
                    int turno, o = 0;
                    printf("Escolha o turno:\n");
                    printf("\n1 - Matutino (Contabiliza 4 horas)\n2 - Noturno (contabiliza 3 horas)\nSua escolha: ");
                    scanf("%d", &turno);
                    if (turno == 1) {
                        aula1 += 4;
                        printf("Processando");
                        while (o<3) {
                            sleep(1);
                            printf(".");
                            o++;
                        }
                        printf("\n");
                        printf("Sua aula foi contabilizada, voltando ao inicio do sistema, aguarde.\n");
                        printf("\n");
                        sleep(2);
                        chave = 1;
                        goto loop1;
                    }
                    else if (turno == 2) {
                        aula1 += 3;
                        printf("Processando");
                        while (o<3) 
                        {
                            sleep(1);
                            printf(".");
                            o++;
                        }
                        printf("\n");
                        printf("Sua aula foi contabilizada, voltando ao inicio do sistema, aguarde.\n");
                        printf("\n");
                        sleep(2);
                        chave = 1;
                        goto loop1;
                    }
                    else {
                        printf("Escolha indisponivel, por favor, escolha 1 ou 2\n");
                        printf("\n");
                        continue;
                    }
                }

                //Quando o usuario escolhe a DISCIPLINA 2:
                else if (aula_desejada == 2)
                {
                    int turno, o = 0;
                    printf("Escolha o turno:\n");
                    printf("\n1 - Matutino (Contabiliza 4 horas)\n2 - Noturno (contabiliza 3 horas)\nSua escolha: ");
                    scanf("%d", &turno);
                    if (turno == 1) {
                        aula2 += 4;
                        printf("Processando");
                        while (o<3) {
                            sleep(1);
                            printf(".");
                            o++;
                        }
                        printf("\n");
                        printf("Sua aula foi contabilizada, voltando ao inicio do sistema, aguarde.\n");
                        printf("\n");
                        sleep(2);
                        chave = 1;
                        goto loop1;
                    }
                    else if (turno == 2) {
                        aula2 += 3;
                        printf("Processando");
                        while (o<3) 
                        {
                            sleep(1);
                            printf(".");
                            o++;
                        }
                        printf("\n");
                        printf("Sua aula foi contabilizada, voltando ao inicio do sistema, aguarde.\n");
                        printf("\n");
                        sleep(2);
                        chave = 1;
                        goto loop1;
                    }
                    else {
                        printf("Escolha indisponivel, por favor, escolha 1 ou 2\n");
                        printf("\n");
                        continue;
                    }
                }

                //Quando o usuario escolhe a DISCIPLINA 3:
                else if (aula_desejada == 3)
                {
                    int turno, o = 0;
                    printf("Escolha o turno:\n");
                    printf("\n1 - Matutino (Contabiliza 4 horas)\n2 - Noturno (contabiliza 3 horas)\nSua escolha: ");
                    scanf("%d", &turno);
                    if (turno == 1) {
                        aula3 += 4;
                        printf("Processando");
                        while (o<3) {
                            sleep(1);
                            printf(".");
                            o++;
                        }
                        printf("\n");
                        printf("Sua aula foi contabilizada, voltando ao inicio do sistema, aguarde.\n");
                        printf("\n");
                        sleep(2);
                        chave = 1;
                        goto loop1;
                    }
                    else if (turno == 2) {
                        aula3 += 3;
                        printf("Processando");
                        while (o<3) 
                        {
                            sleep(1);
                            printf(".");
                            o++;
                        }
                        printf("\n");
                        printf("Sua aula foi contabilizada, voltando ao inicio do sistema, aguarde.\n");
                        printf("\n");
                        sleep(2);
                        chave = 1;
                        goto loop1;
                    }
                    else {
                        printf("Escolha indisponivel, por favor, escolha 1 ou 2\n");
                        printf("\n");
                        continue;
                    }
                }

                //Quando o usuario escolhe a DISCIPLINA 4:
                else if (aula_desejada == 4)
                {
                    int turno, o = 0;
                    printf("Escolha o turno:\n");
                    printf("\n1 - Matutino (Contabiliza 4 horas)\n2 - Noturno (contabiliza 3 horas)\nSua escolha: ");
                    scanf("%d", &turno);
                    if (turno == 1) {
                        aula4 += 4;
                        printf("Processando");
                        while (o<3) {
                            sleep(1);
                            printf(".");
                            o++;
                        }
                        printf("\n");
                        printf("Sua aula foi contabilizada, voltando ao inicio do sistema, aguarde.\n");
                        printf("\n");
                        sleep(2);
                        chave = 1;
                        goto loop1;
                    }
                    else if (turno == 2) {
                        aula4 += 3;
                        printf("Processando");
                        while (o<3) 
                        {
                            sleep(1);
                            printf(".");
                            o++;
                        }
                        printf("\n");
                        printf("Sua aula foi contabilizada, voltando ao inicio do sistema, aguarde.\n");
                        printf("\n");
                        sleep(2);
                        chave = 1;
                        goto loop1;
                    }
                    else {
                        printf("Escolha indisponivel, por favor, escolha 1 ou 2\n");
                        printf("\n");
                        continue;
                    } 
                }

                //Quando o usuario escolhe a DISCIPLINA 5:
                else if (aula_desejada == 5)
                {
                    int turno, o = 0;
                    printf("Escolha o turno:\n");
                    printf("\n1 - Matutino (Contabiliza 4 horas)\n2 - Noturno (contabiliza 3 horas)\nSua escolha: ");
                    scanf("%d", &turno);
                    if (turno == 1) {
                        aula5 += 4;
                        printf("Processando");
                        while (o<3) {
                            sleep(1);
                            printf(".");
                            o++;
                        }
                        printf("\n");
                        printf("Sua aula foi contabilizada, voltando ao inicio do sistema, aguarde.\n");
                        printf("\n");
                        sleep(2);
                        chave = 1;
                        goto loop1;
                    }
                    else if (turno == 2) {
                        aula5 += 3;
                        printf("Processando");
                        while (o<3) 
                        {
                            sleep(1);
                            printf(".");
                            o++;
                        }
                        printf("\n");
                        printf("Sua aula foi contabilizada, voltando ao inicio do sistema, aguarde.\n");
                        printf("\n");
                        sleep(2);
                        chave = 1;
                        goto loop1;
                    }
                    else {
                        printf("Escolha indisponivel, por favor, escolha 1 ou 2\n");
                        printf("\n");
                        continue;
                    }
                }
            }
        }
        else if (escolha == 2) 
        {
            int k = 0;
            while(k < 1) {
                //Switch que trabalha na variavel ch_desejada e faz o print da escolha do usuario:
                switch (ch_desejada)
                {
                    case 1: printf("\nVoce escolheu a disciplina %s\n", disciplinas[0]); k++; break;
                    case 2: printf("\nVoce escolheu a disciplina %s\n", disciplinas[1]); k++; break;
                    case 3: printf("\nVoce escolheu a disciplina %s\n", disciplinas[2]); k++; break;
                    case 4: printf("\nVoce escolheu a disciplina %s\n", disciplinas[3]); k++; break;
                    case 5: printf("\nVoce escolheu a disciplina %s\n", disciplinas[4]); k++; break;
                    case 6: printf("\nVoce escolher olhar o %s", disciplinas[5]); k++; break;
                }
            }
            //While(1) secundario que no sistema tem o papel de trabalhar com a consulta de carga horaria definidida pelo usuario:
            while(1)
            {
                if (ch_desejada == 1) {
                    printf("A carga horaria realizada nessa disciplina foi:\n");
                    printf("%d de 18 horas\n", aula1);
                    printf("\nVoltando ao inicio do sistema, aguarde.\n");
                    printf("\n");
                    sleep(2);
                    chave = 1;
                    goto loop1;
                }
                if (ch_desejada == 2) {
                    printf("A carga horaria realizada nessa disciplina foi:\n");
                    printf("%d de 16 horas\n", aula2);
                    printf("\nVoltando ao inicio do sistema, aguarde.\n");
                    printf("\n");
                    sleep(2);
                    chave = 1;
                    goto loop1;
                }
                if (ch_desejada == 3) {
                    printf("A carga horaria realizada nessa disciplina foi:\n");
                    printf("%d de 4 horas\n", aula3);
                    printf("\nVoltando ao inicio do sistema, aguarde.\n");
                    printf("\n");
                    sleep(2);
                    chave = 1;
                    goto loop1;
                }
                if (ch_desejada == 4) {
                    printf("A carga horaria realizada nessa disciplina foi:\n");
                    printf("%d de 4 horas\n", aula4);
                    printf("\nVoltando ao inicio do sistema, aguarde.\n");
                    printf("\n");
                    sleep(2);
                    chave = 1;
                    goto loop1;
                }
                if (ch_desejada == 5) {
                    printf("A carga horaria realizada nessa disciplina foi:\n");
                    printf("%d de 3 horas\n", aula5);
                    printf("\nVoltando ao inicio do sistema, aguarde.\n");
                    printf("\n");
                    sleep(2);
                    chave = 1;
                    goto loop1;
                }
                if (ch_desejada == 6) {
                    total = aula1 + aula2 + aula3 + aula4 + aula5;
                    printf("A carga horaria total realizada por você é:\n");
                    printf("%d de 45 horas mínimas\n", total);
                    printf("\nVoltando ao inicio do sistema, aguarde.\n");
                    printf("\n");
                    sleep(2);
                    chave = 1;
                    goto loop1;
                }
        }
    return 0;
    }
    }
}