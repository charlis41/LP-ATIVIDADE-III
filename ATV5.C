int main()
{

    

    int opcao;
    int i;
    int contador = 0;
    char nomeProduto[999][200];
    int quantidade[200];
    float valorProduto[200];

    do
    {
        printf("--- LOJA --- \n");
        printf("1  -  Adicionar venda\n");
        printf("2  -  Exibir total de vendas\n");
        printf("Escolha a opção desejada: ");
        scanf("%d", &opcao);

        

        

        switch (opcao)
        {
        case 1:

            printf("Digite  o nome do produto: ");
            gets(nomeProduto[contador]);

        

            printf("Digite o valor do produto: ");
            scanf("%f", &valorProduto[contador]);

            printf("Digite a quantidade do produto: ");
            scanf("%d", &quantidade[contador]);

            contador++;

            system("cls || clear");

            break;
        case 2:

            for (i = 0; i < contador; i++)
            {

                printf("%dº vendas\n", i + 1);
                printf("Produtos: %s\n", nomeProduto[i]);
                printf("Valor dos produtos: %.2f\n", valorProduto[i]);
                printf("Quantidade: %d\n", quantidade[i]);
                printf("\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
            break;
        }
    } while (opcao != 2);

    return 0;
}
