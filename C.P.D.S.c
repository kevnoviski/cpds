
//LIBRIRIES
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
//DEFINES
#define SIZET 1000000
#define FALSE 0
#define TRUE !FALSE
#define TMENOR 219
#define TMAIOR 220

main(int argv, char *argc[])
{
    system("color b");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
    //=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
    int vet[10],t,w=0,b,m,s,status=7,*pv;
    char seta;
    pv = &vet[0];
    //-------------------------------
    char *my_pointer;
    char c2,escolha,s_exit=0;
    int i,j,p,f,x,len,diff,posic,NPM=0,contador=0,soma=0,SINAL=0,k,g,u,x9,xl,w2=0;
    float d,d1,d2,d3,x1,x2,x3;
    float compensa[2];
    float fl[3][3];
    char passW[3][3];//passw+ma+cmp = senha de 15 caracteres
    char mA[3];
    char cmP[3];
    long int fim[3][3][3];
    char vet_chave[108];//<==passou pra char
    char *chave;
    chave=&vet_chave[0];
    int done=FALSE;
    char filename[50];
    char filecopy[50];
    char key_v[SIZET];
    char encrypted_v[SIZET];
    char *key,*encrypted;
    char abc[219];
    my_pointer=&abc[0];
	encrypted=&encrypted_v[0];
	key=&key_v[0];
    for(p=0;p<=SIZET;p++)
    {			//ZERA TODAS AS POSIÇÕES DOS VETOR KEY E ENCRYPTED
        *(key+p)=0;
        *(encrypted+p)='\0';
    }

     //=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*


        j=0;
        for(i=33;i<=253;i++)             /*======================================================*/
		{								 /*VETOR COM TODOS OS CARACTERES VÁLIDOS DA TABELA ASCII */
			*(my_pointer+j)=i;		     /*======================================================*/
			j+=1;
		}

	//=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
	// ESCONDE CURSOR
    HANDLE myconsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CURSOR;
    BOOL result;
    CURSOR.dwSize = 1;
    CURSOR.bVisible = FALSE;
    result=SetConsoleCursorInfo(myconsole, &CURSOR);
    //=---=-=--==--=-==-=--=-=-=-=-=-=-==-=--==-=--==-
	//=0=0=0=0=0=0=0=0=0=0===TELA COM NOME DO PROGRAMA==0=0=0=0=0=0=0=0=0=00=0=0=0=0=0=0=0=0=
    printf("\n ");
    for(i=0;i<=38;i++)
    {
            SetConsoleTextAttribute(hConsole, 10);
            printf("%c ",177);
    }
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("\n\n");
    SetConsoleTextAttribute(hConsole, 10);
    printf(" %c",177);
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("    ______           .______              _______                 _______. ");
    SetConsoleTextAttribute(hConsole, 10);
    printf("%c\n",177);
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("     /      |          |   _  \\            |       \\               /       |\n");
    SetConsoleTextAttribute(hConsole, 10);
    printf(" %c",177);
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("  |  ,----'          |  |_)  |           |  .--.  |             |   (----` ");
    SetConsoleTextAttribute(hConsole, 10);
    printf("%c\n",177);
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("    |  |               |   ___/            |  |  |  |              \\   \\    \n");
    SetConsoleTextAttribute(hConsole, 10);
    printf(" %c",177);
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("  |  `----.    __    |  |          __    |  '--'  |    __    .----)   |    ");
    SetConsoleTextAttribute(hConsole, 10);
    printf("%c\n",177);
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("     \\______|   (__)   | _|         (__)   |_______/    (__)   |_______/  \n");
    SetConsoleTextAttribute(hConsole, 10);
    printf(" %c",177);
    printf("                                                                           ");
    printf("%c\n",177);
    printf("\n ");
    SetConsoleTextAttribute(hConsole, saved_attributes);
    for(i=0;i<=38;i++)
    {
            SetConsoleTextAttribute(hConsole, 10);
            printf("%c ",177);
    }
    SetConsoleTextAttribute(hConsole, 15);
    puts("\n\n\n\n\n\n                     ( CRIPTOGRAFIA POR DESLOCAMENTO SIMPLES )\n\n\n\n\n\n");
    system("pause");
    system("cls");
	//=0=0=0=0=0=0=0=0=0=0===TELA COM NOME DO PROGRAMA==0=0=0=0=0=0=0=0=0=00=0=0=0=0=0=0=0=0=
    SetConsoleTextAttribute(hConsole, saved_attributes);
    system("color b");
    i=0;

	//======================================================================================
for(;;)//'for' RESPONSÁVEL PELO MENU PRINCIPAL DO PROGRAMA.
{
	//==============================PARTE GRAFICA DO MENU PRINCIPAL=============================
	CURSOR.dwSize = 1;
    CURSOR.bVisible = FALSE;
    result=SetConsoleCursorInfo(myconsole, &CURSOR);
	system("cls");
    printf("\n          ___     ___     ___     ___     ___     ___     ___     ___ \n");
    printf("      ___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___ \n");
    printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
    printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
    printf("     /   \\___/                                                   \\___/   \\ \n");
    if(SINAL==0)//VERIFICA SE CHAVE JÁ FOI INSERIDA
    {// SE JÁ FOI INSERIDA, EXIBE INSERIR ''NOVA CHAVE''
        printf("     \\___/                           [ ");
        SetConsoleTextAttribute(hConsole, 14);
        printf("I");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf(" ] ");
        SetConsoleTextAttribute(hConsole, 15);
        printf("INSERIR  CHAVE ");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf("           \\___/ \n");
    }
    else//SE AINDA NAO FOI INSERIDA, EXIBE ''INSERIR CHAVE''
    {
        printf("     \\___/                           [ ");
        SetConsoleTextAttribute(hConsole, 14);
        printf("I ");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf("]");
        SetConsoleTextAttribute(hConsole, 15);
        printf(" INSERIR  NOVA CHAVE");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf("       \\___/ \n");
    }
    printf("     /   \\     MENU PRINCIPAL                                        /   \\ \n");
    printf("     \\___/                           [ ");
    SetConsoleTextAttribute(hConsole, 14);
    printf("C");
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf(" ]");
    SetConsoleTextAttribute(hConsole, 15);
    printf(" CODIFICAR/DECODIFICAR");
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("     \\___/ \n");
    printf("     /   \\                                                           /   \\ \n");
    printf("     \\___/                           [ ");
    SetConsoleTextAttribute(hConsole, 14);
    printf("A");
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf(" ] ");
    SetConsoleTextAttribute(hConsole, 15);
    printf("INSTRU%c%cES ",128,229);
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("               \\___/ \n");
    printf("     /   \\       ");
    SetConsoleTextAttribute(hConsole, 14);
    printf("C.P.D.S");
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("                                             /   \\ \n");
    printf("     \\___/                           [ ");
    SetConsoleTextAttribute(hConsole, 14);
    printf("R");
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf(" ] ");
    SetConsoleTextAttribute(hConsole, 15);
    printf("RESTRI%c%cES",128,229);
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("                \\___/ \n");
    printf("     /   \\                                                           /   \\ \n");
    printf("     \\___/                           [ ");
    SetConsoleTextAttribute(hConsole, 14);
    printf("S");
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf(" ]");
    SetConsoleTextAttribute(hConsole, 15);
    printf(" SOBRE");
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("                     \\___/ \n");
    printf("     /   \\                                                           /   \\ \n");
    printf("     \\___/     [ ");
    SetConsoleTextAttribute(hConsole, 12);
    printf("ESC");
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf(" ]");
    SetConsoleTextAttribute(hConsole, 15);
    printf(" SAIR");
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf("                                          \\___/ \n");
    printf("     /   \\___                        [ ");
    SetConsoleTextAttribute(hConsole, 15);
    printf("Digite a op%c%co desejada",135,198);
    SetConsoleTextAttribute(hConsole, saved_attributes);
    printf(" ]  ___/   \\ \n");
    printf("     \\___/   \\___     ___     ___     ___     ___     ___     ___/   \\___/ \n");
    printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
    printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
    printf("         \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/     \n");
	//===================================================================================================
    escolha=getch();//LE OPÇÃO ESCOLHIDA.
    fflush(stdin);
    // EXIBE CURSOR
    CURSOR.dwSize = 15;
    CURSOR.bVisible = TRUE;
    result=SetConsoleCursorInfo(myconsole, &CURSOR);
    //=---=-=--==--=-==-=--=-=-=-=-=-=-==-=--==-=--==-
    switch(escolha)
	{
		case 'I'://PREENCHE MATRIZES E VETORES QUE GERAM A CHAVE PARA CODIFICAR ARQUIVOS
        case 'i':
		    system("cls");
		    for(j=0;j<=2;j++)
            {
                for(i=0;i<=2;i++)
                {
                    passW[j][i]=0;
                }
            }
		    for(i=0;i<=2;i++)
            {
                mA[i]=0;
                cmP[i]=0;
            }
            for(p=0;p<=2;p++)
            {
                for(j=0;j<=2;j++)
                {
                    for(i=0;i<=2;i++)
                    {
                        fim[j][i][p]=0;
                    }
                }
            }

            contador=0;
            for(p=0;p<=SIZET;p++)
    		{
        		*(key+p)=0;
        		*(encrypted+p)=0;
    		}

			printf("\n          ___     ___     ___     ___     ___     ___     ___     ___ \n");
            printf("      ___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___ \n");
            printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
            printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
            printf("     /   \\___/                                                   \\___/   \\ \n");
            printf("     \\___/                                                           \\___/ \n");
            printf("     /   \\                                                           /   \\ \n");
            printf("     \\___/                        ");
            SetConsoleTextAttribute(hConsole, 14);
            printf("DIGITE A CHAVE");
            SetConsoleTextAttribute(hConsole, saved_attributes);
            printf("                     \\___/ \n");
            printf("     /   \\                                                           /   \\ \n");
            printf("     \\___/                                                           \\___/ \n");
            printf("     /   \\___                                                     ___/   \\ \n");
            printf("     \\___/   \\___     ___     ___     ___     ___     ___     ___/   \\___/ \n");
            printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
            printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
            printf("         \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
            printf("                                %c===============%c \n",201,187);
            printf("                                 ");
            SetConsoleTextAttribute(hConsole, 14);
            soma=0;
            SINAL=0;
            for(j=0;j<=2;j++)
            {
                for(i=0;i<=2;i++)
                {
                    passW[j][i]=getch();
                    fflush(stdin);
                    *(chave+contador)=passW[j][i];
                    contador++;
                    soma = soma + passW[j][i];
                    printf("%c",passW[j][i]);                 //primeiros 9 caracteres

                }

            }

            for(i=0;i<=2;i++)
            {
                mA[i]=getch(); // 3 caracteres do ma
                fflush(stdin);
                *(chave+contador) = mA[i];
                contador++;
                soma = soma + mA[i];
                printf("%c",mA[i]);
            }

            for(i=0;i<=2;i++)
            {
                cmP[i]=getch();
                fflush(stdin);   // mais tres do Cmp
                *(chave+contador) = cmP[i];
                contador++;
                soma = soma + cmP[i];
                printf("%c",cmP[i]);
            }
            SetConsoleTextAttribute(hConsole, saved_attributes);
            printf("\n                                %c===============%c",200,188);
            NPM = soma / 15;
            for(i=0;i<=14;i++)
            {
                *(chave+i)= *(chave+i) % NPM+1;
            }
            i=0;

            soma=0;
           // printf("\n contador %d",contador);
            /*__________________________________________________________________________________________________________________*/
            /*PARA QUE O VETOR CHAVE SEJA PREENCHIDO,A CADA OPERAÇÃO REALIZADA, SEU RESULTADO É ARMAZENADO DENTRO DO VETOR CHAVE*/
            /*------------------------------------------------------------------------------------------------------------------*/
            *(chave+contador)=(passW[0][0] * passW[1][1] * passW[2][2])% NPM+1;
            contador++;
            *(chave+contador)=(passW[0][1] * passW[1][2] * passW[2][0])% NPM+1;
            contador++;
            *(chave+contador)=(passW[0][2] * passW[1][0] * passW[2][1])% NPM+1;
            contador++;
            *(chave+contador)=( (passW[0][0] * passW[1][1] * passW[2][2]) + (passW[0][1] * passW[1][2] * passW[2][0]) + (passW[0][2] * passW[1][0] * passW[2][1]) ) % NPM+1;
            contador++;
            *(chave+contador)=(passW[0][2] * passW[1][1] * passW[2][0]) % NPM+1;
            contador++;
            *(chave+contador)=( passW[0][1] * passW[1][0] * passW[2][2]) % NPM+1;
            contador++;
            *(chave+contador)=( passW[0][0] * passW[1][2] * passW[2][1]) % NPM+1;
            contador++;
            *(chave+contador)=( (passW[0][2] * passW[1][1] * passW[2][0]) +( passW[0][1] * passW[1][0] * passW[2][2]) + ( passW[0][0] * passW[1][2] * passW[2][1]) ) % NPM+1;
            contador++;
            *(chave+contador)=( ( (passW[0][0] * passW[1][1] * passW[2][2]) + (passW[0][1] * passW[1][2] * passW[2][0]) + (passW[0][2] * passW[1][0] * passW[2][1]) ) - ( (passW[0][2] * passW[1][1] * passW[2][0]) +( passW[0][1] * passW[1][0] * passW[2][2]) + ( passW[0][0] * passW[1][2] * passW[2][1]) ) ) % NPM+1;
            d=*(chave+contador)+1;
            contador++;
            //printf("\n contador %d",contador);
            //ACIMA O VALOR DE DE É ENCONTRADO.
            *(chave+contador)=(mA[0] * passW[1][1] * passW[2][2]) % NPM+1;
            contador++;
            *(chave+contador)=(passW[0][1] * passW[1][2] * mA[2]) % NPM+1;
            contador++;
            *(chave+contador)=(passW[0][2] * mA[1] * passW[2][1]) % NPM+1;
            contador++;
            *(chave+contador)=( (mA[0] * passW[1][1] * passW[2][2]) + (passW[0][1] * passW[1][2] * mA[2]) + (passW[0][2] * mA[1] * passW[2][1]) ) % NPM+1;
            contador++;
            *(chave+contador)=(passW[0][2] * passW[1][1] * mA[2]) % NPM+1;
            contador++;
            *(chave+contador)=( passW[0][1] * mA[1] * passW[2][2]) % NPM+1;
            contador++;
            *(chave+contador)=( mA[0] * passW[1][2] * passW[2][1]) % NPM+1;
            contador++;
            *(chave+contador)=( (passW[0][2] * passW[1][1] * mA[2]) +( passW[0][1] * mA[1] * passW[2][2]) + ( mA[0] * passW[1][2] * passW[2][1]) ) % NPM+1;
            contador++;
            *(chave+contador)=( ( (mA[0] * passW[1][1] * passW[2][2]) + (passW[0][1] * passW[1][2] * mA[2]) + (passW[0][2] * mA[1] * passW[2][1]) ) - ( (passW[0][2] * passW[1][1] * mA[2]) +( passW[0][1] * mA[1] * passW[2][2]) + ( mA[0] * passW[1][2] * passW[2][1]) ) ) % NPM+1;
            d1=*(chave+contador)+1;
            contador++;
            //printf("\n contador %d",contador);
            //ACIMA VALOR DE D1
            *(chave+contador)=(passW[0][0] * mA[1] * passW[2][2]) % NPM+1;
            contador++;
            *(chave+contador)=(mA[0] * passW[1][2] * passW[2][0]) % NPM+1;
            contador++;
            *(chave+contador)=(passW[0][2] * passW[1][0] * mA[2]) % NPM+1;
            contador++;
            *(chave+contador)=( (passW[0][0] * mA[1] * passW[2][2]) + (mA[0] * passW[1][2] * passW[2][0]) + (passW[0][2] * passW[1][0] * mA[2]) ) % NPM+1;
            contador++;
            *(chave+contador)=(passW[0][2] * mA[1] * passW[2][0]) % NPM+1;
            contador++;
            *(chave+contador)=( mA[0] * passW[1][0] * passW[2][2]) % NPM+1;
            contador++;
            *(chave+contador)=( passW[0][0] * passW[1][2] * mA[2]) % NPM+1;
            contador++;
            *(chave+contador)=( (passW[0][2] * mA[1] * passW[2][0]) +( mA[0] * passW[1][0] * passW[2][2]) + ( passW[0][0] * passW[1][2] * mA[2]) ) % NPM+1;
            contador++;
            *(chave+contador)=( ( (passW[0][0] * mA[1] * passW[2][2]) + (mA[0] * passW[1][2] * passW[2][0]) + (passW[0][2] * passW[1][0] * mA[2]) ) - ( (passW[0][2] * mA[1] * passW[2][0]) +( mA[0] * passW[1][0] * passW[2][2]) + ( passW[0][0] * passW[1][2] * mA[2]) ) ) % NPM+1;
            d2=*(chave+contador)+1;
            contador++;
            //printf("\n contador %d",contador);
            //ACIMA VALOR DE D2
            *(chave+contador)=(passW[0][0] * passW[1][1] * mA[2]) % NPM+1;
            contador++;
            *(chave+contador)=(passW[0][1] * mA[1] * passW[2][0]) % NPM+1;
            contador++;
            *(chave+contador)=(mA[0] * passW[1][0] * passW[2][1]) % NPM+1;
            contador++;
            *(chave+contador)=( (passW[0][0] * passW[1][1] * mA[2]) + (passW[0][1] * mA[1] * passW[2][0]) + (mA[0] * passW[1][0] * passW[2][1]) ) % NPM+1;
            contador++;
            *(chave+contador)=( mA[0] * passW[1][1] * passW[2][0]) % NPM+1;
            contador++;
            *(chave+contador)=( passW[0][1] * passW[1][0] * mA[2]) % NPM+1;
            contador++;
            *(chave+contador)=( passW[0][0] * mA[1] * passW[2][1]) % NPM+1;
            contador++;
            *(chave+contador)=( ( (passW[0][0] * passW[1][1] * mA[2]) + (passW[0][1] * mA[1] * passW[2][0]) + (mA[0] * passW[1][0] * passW[2][1]) ) - ( (mA[0] * passW[1][1] * passW[2][0]) +( passW[0][1] * passW[1][0] * mA[2]) + ( passW[0][0] * mA[1] * passW[2][1]) ) ) % NPM+1;
            d3=*(chave+contador)+1;
            contador++;
            //printf("\nds contador %d",contador);
            //ACIMA VALOR DE D3


            //d =( ( (passW[0][0] * passW[1][1] * passW[2][2]) + (passW[0][1] * passW[1][2] * passW[2][0]) + (passW[0][2] * passW[1][0] * passW[2][1]) ) - ( (passW[0][2] * passW[1][1] * passW[2][0]) +( passW[0][1] * passW[1][0] * passW[2][2]) + ( passW[0][0] * passW[1][2] * passW[2][1]) ) );
            //printf("\n\nd=%.0f",d);//  <-  apenas para controle, este comando sera excluido.
            //d1=( ( (mA[0] * passW[1][1] * passW[2][2]) + (passW[0][1] * passW[1][2] * mA[2]) + (passW[0][2] * mA[1] * passW[2][1]) ) - ( (passW[0][2] * passW[1][1] * mA[2]) +( passW[0][1] * mA[1] * passW[2][2]) + ( mA[0] * passW[1][2] * passW[2][1]) ) );
           // printf("\n\nd1=%.0f",d1);//  <-  apenas para controle, este comando sera excluido.

            //d2=( ( (passW[0][0] * mA[1] * passW[2][2]) + (mA[0] * passW[1][2] * passW[2][0]) + (passW[0][2] * passW[1][0] * mA[2]) ) - ( (passW[0][2] * mA[1] * passW[2][0]) +( mA[0] * passW[1][0] * passW[2][2]) + ( passW[0][0] * passW[1][2] * mA[2]) ) );

            //printf("\n\nd2=%f",d2);//  <-  apenas para controle, este comando sera excluido.
            //d3=( ( (passW[0][0] * passW[1][1] * mA[2]) + (passW[0][1] * mA[1] * passW[2][0]) + (mA[0] * passW[1][0] * passW[2][1]) ) - ( (mA[0] * passW[1][1] * passW[2][0]) +( passW[0][1] * passW[1][0] * mA[2]) + ( passW[0][0] * mA[1] * passW[2][1]) ) );
            //printf("\n\nd3=%.0f",d3);//  <-  apenas para controle, este comando sera excluido.
            x1=d1/d;

            *(chave+contador)= (int)( x1);    /*+*+*+*+*+*+*++*+**+*+*+*+*+*+*/
            contador++;                     /*x1 a x3 é convertido para int*/
            //printf("\n\nx1=%.0f",x1);       /*para que esses valorem possam*/
            x2=d2/d;                        /*ser inseridos no vetot chave */
                                            /*+_+_+_+_+_+_+_+_+_+_+_+_+_+_+*/
            *(chave+contador)= (int)(x2);
            contador++;
            //printf("\n\nx2=%.0f",x2);//  <-  apenas para controle, este comando sera excluido.
            x3=d3/d;

            *(chave+contador)= (int)(x3);
            contador++;
            //printf("\n\nx2=%.0f",x2);//  <-  apenas para controle, este comando sera excluido.
            //printf("\nxs contador %d\n",contador);

            fim[0][0][0]=d1;     /*====================================================*/
            fim[0][1][0]=d2;     /*A matriz Tridimencional em sua primeira profundidade*/
            fim[0][2][0]=d2;     /*recebe os primeiros resultados, sendo eles d, d1, d2*/
            fim[1][0][0]=x1;     /*d3, x1,x2 e x3, para completar o vetor cmP adquirido*/
            fim[1][1][0]=x2;     /*no inicio do programa é usadoo, completando assim   */
            fim[1][2][0]=x3;     /*um matriz 3x3.A partir disso novas operações matri- */
            fim[2][0][0]=cmP[0]; /*ciais.                                              */
            fim[2][1][0]=cmP[1]; /*====================================================*/
            fim[2][2][0]=cmP[2];

            for(p=0;p<=2;p++)    /*¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*/
            {                    /*A PROFUNDIDADE 2 RECEBE A SOMA DA PROFUNDIDADE 1 + MATRIZ passw */
                for(j=0;j<=2;j++)/*¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨¨*/
                {
                    soma=0;
                    for(i=0;i<=2;i++)      // ADICAO DE MATRIZES
                    {
                        soma=soma+ fim[i][p][0]+ passW[p][j];
                        *(chave+contador)= soma % NPM+1;
                        contador++;
                    }
                    fim[i][j][1]=soma;
                    //printf("%d ",fim[i][j][1]);
                }
                //puts("\n");
            }
            //printf("\n adicao contador %d\n",contador);
            //puts("\nSUBTRAÇÃO POR ESCALAR\n");//  <-  apenas para controle, este comando sera excluido.
            for(i=0;i<=2;i++)      /*=================================================================*/
            {                      /*Profundidade 3 recebe o resultado de profundidade 2- matriz passW*/
                for(j=0;j<=2;j++)  /*=================================================================*/
                {
                    fim[i][j][2]=fim[i][j][1]-passW[i][j]; // subratacao de matriz
                    *(chave+contador)= fim[i][j][2]% NPM+1;
                    contador++;
                    //printf("%d ",fim[i][j][2]);
                }
               //puts("\n");
            }
            //printf("\n contador %d\n",contador);
            //puts("\n=========\nTransposta\n");//  <-  apenas para controle, este comando sera excluido.

            for(i=0;i<=2;i++)       /*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*/
            {                       /*Profundidade 1 recebe a profundidade 3*/
                for(j=0;j<=2;j++)   /*Transposta.                           */
                {                   /*$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$*/
                    fim[i][j][0]=fim[j][i][2];  // MATRIZ TRANSPOSTA
                    *(chave+contador)= fim[i][j][0]% NPM+1;
                    contador++;
                   // printf("%d ",fim[i][j][0]);
                }
               //puts("\n");
            }

            //printf("\n contador %d\n",contador);
            //puts("\n MULTIPLICAÇÃO POR ESCALAR\n");//  <-  apenas para controle, este comando sera excluido.
            for(i=0;i<=2;i++)
            {
                for(j=0;j<=2;j++)
                {
                    fim[i][j][0]=fim[2][2][2]*fim[i][j][2];// MULTIPLICAÇÃO POR ESCALAR
                    fl[i][j]=fim[i][j][0];
                    *(chave+contador)= fim[i][j][0] % NPM+1;/*:::::::::::::::::::::::::::::::::*/
                    contador++;                          /*Profundidade 1 recebe o resultado*/
                   // printf(" %d",fim[i][j][0]);          /*da multiplicacao por escalar. o  */
                }                                        /*valor escolhido foi o numero do  */
                puts("\n");                              /*meio da matriz 3x3x3             */
            }                                            /*^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^*/
            //puts("\n");
            //=============================================================================ADICIONEI ESTE CODIGO ABAIXO
            if(fl[0][0]!= 1)//
            {
                compensa[0]=fl[0][0];
                fl[0][1]= fl[0][1] / fl[0][0];
                fl[0][2]= fl[0][2] / fl[0][0];
                fl[0][0]= fl[0][0] / fl[0][0];
                // acima divide linha pela primeira posicao
                fl[1][1] = fl[1][1] -( fl[1][0]  * fl[0][1]  );
                fl[1][2] = fl[1][2] -( fl[1][0]  * fl[0][2]  );
                fl[2][1] = fl[2][1] -( fl[2][0]  * fl[0][1]  );
                fl[2][2] = fl[2][2] -( fl[2][0]  * fl[0][2]  );
                //calculo de chio 3x3
            }
            else
            {
                fl[1][1] = fl[1][1] -( fl[1][0]  * fl[0][1]  );
                fl[1][2] = fl[1][2] -( fl[1][0]  * fl[0][2]  );
                fl[2][1] = fl[2][1] -( fl[2][0]  * fl[0][1]  );
                fl[2][2] = fl[2][2] -( fl[2][0]  * fl[0][2]  );
            }

            if(fl[1][1]==1)
            {
                fl[2][2]= fl[2][2] - ( fl[2][1] * fl[1][2]);
            }
            else
            {
                compensa[1]= fl[1][1];
                fl[1][2] = fl[1][2] / fl[1][1];
                //*(pm+5)= *(pm+5)/ *(pm+4);
                fl[1][1] = fl[1][1]/fl[1][1];
                //*(pm+4)= *(pm+4)/ *(pm+4);
                fl[2][2]= fl[2][2] - ( fl[2][1] * fl[1][2] );
                //*(pm+8)= *(pm+8) - (*(pm+7) * *(pm+5));
            }

            if(compensa[0]!=0)
            {
                fl[2][2]= fl[2][2] * compensa[0];
                //*(pm+8)=  *(pm+8) * compensa[0];
            }
            if(compensa[1]!=0)
            {
                fl[2][2]=fl[2][2]* compensa[1];
                //*(pm+8)=  *(pm+8) * compensa[1];
            }
            *(chave+contador)= (int)fl[2][2]% NPM+1;

            //printf("\n contador %d\n",contador);
            //contador--;//contador decrementado pq aponta para uma possição fazia do vetor chave.
            //printf("\n contador %d",contador);
            for(i=0;i<=contador;i++)
            {
                if(*(chave+i) <0)
                {
                    *(chave+i)= *(chave+i) *-1;// transforma todos os numero negativo em positivos
                }
                if(*(chave+i)==0)
                {
                    *(chave+i)=i+3; // certifica que zeros não iram enter no vetor
                }
                if(*(chave+i)>160)  // NAO PODE SER MAIOR QUE 221
                {
                    *(chave+i)=( *(chave+i) / 2 )+1;
                }

                if(*(chave+i)==*(chave+(i+1)))// NAO PODE SER SEQUENCIAL REPETIDO
                {
                    *(chave+i)= *(chave+i)+i+2;
                }

                if(*(chave+i)==*(chave+(i-1)))// NAO PODE SER SEQUENCIAL REPETIDO
                {
                    *(chave+i)= *(chave+i)+i+6;
                }

                if(*(chave+i)==1)
                {
                    *(chave+i)= 3+ *(chave+i);
                }
                if(*(chave+(i-1))==*(chave+(i+1)))// NAO PODE SER SEQUENCIAL REPETIDO
                {
                    *(chave+i-1)= *(chave+(i-1))+i+2;
                    *(chave+i+1)= *(chave+(i+1))+5;
                }
                if(*(chave+i) <0)
                {
                    *(chave+i)= *(chave+i) *-1;// transforma todos os numero negativo em positivos
                }
                //printf(" %d",chave[i]);//  <-  apenas para controle, este comando sera excluido.
            }
            //puts("\n");
            for(i=0;i<=contador;i++)
            {
                if(*(chave+i) <0)
                {
                    *(chave+i)= *(chave+i) *-1;// transforma todos os numero negativo em positivos
                }
                //printf(" %d",chave[i]);//  <-  apenas para controle, este comando sera excluido.
            }
            //printf("\ncontador %d\n",contador); //  <-  apenas para controle, este comando sera excluido.

            SINAL=1;// sinal recebe 1 para constar que a chave foi criada com sucesso.
            contador=0;
            //system("pause");
            for(p=0,contador=0;p<=SIZET;p++,contador++)
            {                       /*----------------------------------------*/
                if(contador==106)   /*O VETOR key É PREENCIDO COM OS VLRES    */
                {                   /*DO VETOR CHAVE, SENDO QUE AO CHEGAR     */
                    contador=0;     /*AO ULTIMO NUMERO DO VETOR, ELE VOLTA    */
                    //system("pause");/*AO PRIMEIRO NUMERO.E CONTINUA A GRAVAÇÃO*/
                }
                if(*(chave+contador) <0)
                {
                   // printf("Valor do i negativo:%d",contador);
                    *(chave+contador)= *(chave+contador) *-1;// transforma todos os numero negativo em positivos
                }                   /*----------------------------------------*/
                *(key+p)=*(chave+contador);
               //printf("\n%d valor \ncont %d ",*(key+p),*(chave+contador));//  <-  apenas para controle, este comando sera excluido.
            }
            system("pause");
            system("cls");
		continue;
		case 'a':// MENU DE INSTRUÇÕES
        case 'A':
		    system("cls");
		    do{
				printf("\n          ___     ___     ___     ___     ___     ___     ___     ___ \n");
                printf("      ___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___ \n");
                printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
                printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
                printf("     /   \\                                                           /   \\ \n");
                printf("     \\___/                                                           \\___/ \n");
                printf("     /   \\                          INSTRU%c%cES                       /   \\ \n",128,229);
                printf("     \\___/                                                           \\___/ \n");
                printf("     /   \\                                                           /   \\ \n");
                printf("     \\___/                   [ ");
                SetConsoleTextAttribute(hConsole, 14);
                printf("C");
                SetConsoleTextAttribute(hConsole, saved_attributes);
                printf(" ] ");
                SetConsoleTextAttribute(hConsole, 15);
                printf("CODIFICAR ARQUIVO");
                SetConsoleTextAttribute(hConsole, saved_attributes);
                printf("                 \\___/ \n");
                printf("     /   \\                                                           /   \\ \n");
                printf("     \\___/                   [ ");
                SetConsoleTextAttribute(hConsole, 14);
                printf("D");
                SetConsoleTextAttribute(hConsole, saved_attributes);
                printf(" ]");
                SetConsoleTextAttribute(hConsole, 15);
                printf(" DECODIFICAR ARQUIVO");
                SetConsoleTextAttribute(hConsole, saved_attributes);
                printf("               \\___/ \n");
                printf("     /   \\                                                           /   \\ \n");
                printf("     \\___/                                                           \\___/ \n");
                printf("     /   \\                                                           /   \\ \n");
                printf("     \\___/                          [ ");
                SetConsoleTextAttribute(hConsole, 14);
                printf("X");
                SetConsoleTextAttribute(hConsole, saved_attributes);
                printf(" ]");
                SetConsoleTextAttribute(hConsole, 15);
                printf(" MENU");
                SetConsoleTextAttribute(hConsole, saved_attributes);
                printf("                       \\___/ \n");
                printf("     /   \\___                                                     ___/   \\ \n");
                printf("     \\___/   \\___     ___     ___     ___     ___     ___     ___/   \\___/ \n");
                printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
                printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
                printf("         \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/     \n");
				CURSOR.dwSize = 1;
                CURSOR.bVisible = FALSE;
                result=SetConsoleCursorInfo(myconsole, &CURSOR);
				seta=getch();
				fflush(stdin);
				switch(seta)
				{
					case 'c':
                    case 'C':
						system("cls");
						printf("\n          ___     ___     ___     ___     ___     ___     ___     ___ \n");
						printf("      ___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___ \n");
						printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
						printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
						printf("     /   \\                                                           /   \\ \n");
						printf("     \\___/                                                           \\___/ \n");
						printf("     /   \\       ");
						SetConsoleTextAttribute(hConsole, 15);
						printf("1%c INSIRA UMA CHAVE DE 15 CARACTERES;",248);
						SetConsoleTextAttribute(hConsole, saved_attributes);
						printf("               /   \\ \n");
						printf("     \\___/                                                           \\___/ \n");
						printf("     /   \\       ");
						SetConsoleTextAttribute(hConsole, 15);
						printf("2%c DIGITE O NOME DO ARQUIVO JUNTAMENTE COM SUA",248);
						SetConsoleTextAttribute(hConsole, saved_attributes);
						printf("      /   \\ \n");
						printf("     \\___/          ");
						SetConsoleTextAttribute(hConsole, 15);
						printf("EXTENS%cO;",199);
						SetConsoleTextAttribute(hConsole, saved_attributes);
						printf("                                        \\___/ \n");
						printf("     /   \\                                                           /   \\ \n");
						printf("     \\___/  ");
						SetConsoleTextAttribute(hConsole, 15);
						printf(" EX: nomearquivo(.txt), ONDE  ' ");
						SetConsoleTextAttribute(hConsole, 12);
						printf(".txt ");
						SetConsoleTextAttribute(hConsole, 15);
						printf("'  %c A EXTENS%cO.",144,199);
						SetConsoleTextAttribute(hConsole, saved_attributes);
						printf("    \\___/ \n");
						printf("     /   \\                                                           /   \\ \n");
						printf("     \\___/                                                           \\___/ \n");
						printf("     /   \\       ");
						SetConsoleTextAttribute(hConsole, 15);
						printf("EM SEGUIDA SEU ARQUIVO SER%c CODIFICADO DE ACORDO",181);
						SetConsoleTextAttribute(hConsole, saved_attributes);
						printf("    /   \\ \n");
						printf("     \\___/       ");
						SetConsoleTextAttribute(hConsole, 15);
						printf("COM A CHAVE INSERIDA.");
						SetConsoleTextAttribute(hConsole, saved_attributes);
						printf("                               \\___/ \n");
						printf("     /   \\___                                                     ___/   \\ \n");
						printf("     \\___/   \\___     ___     ___     ___     ___     ___     ___/   \\___/ \n");
						printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
						printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
						printf("         \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/     \n\n       ");
						CURSOR.dwSize = 1;
                        CURSOR.bVisible = FALSE;
                        result=SetConsoleCursorInfo(myconsole, &CURSOR);
						system("pause");
                    break;
                    case 'd':
                    case 'D':
						system("cls");
						printf("\n          ___     ___     ___     ___     ___     ___     ___     ___ \n");
						printf("      ___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___ \n");
						printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
						printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
						printf("     /   \\                                                           /   \\ \n");
						printf("     \\___/                                                           \\___/ \n");
						printf("     /   \\     ");
						SetConsoleTextAttribute(hConsole, 15);
						printf("1%c INSIRA A ",248);
						SetConsoleTextAttribute(hConsole, 12);
						printf("MESMA");
						SetConsoleTextAttribute(hConsole, 15);
						printf(" CHAVE UTILIZADA PARA ");
						SetConsoleTextAttribute(hConsole, 12);
						printf("CODIFICAR");
						SetConsoleTextAttribute(hConsole, saved_attributes);
						printf("      /   \\ \n");
						printf("     \\___/   ");
						SetConsoleTextAttribute(hConsole, 15);
						printf("O ARQUIVO;");
						SetConsoleTextAttribute(hConsole, saved_attributes);
						printf("                                              \\___/ \n");
						printf("     /   \\                                                           /   \\ \n");
						printf("     \\___/     ");
						SetConsoleTextAttribute(hConsole, 15);
						printf("2%c DIGITE O NOME DO ARQUIVO JUNTAMENTE COM SUA",248);
						SetConsoleTextAttribute(hConsole, saved_attributes);
						printf("        \\___/ \n");
						printf("     /   \\   ");
						SetConsoleTextAttribute(hConsole, 15);
						printf("EXTENS%cO;",199);
						SetConsoleTextAttribute(hConsole, saved_attributes);
						printf("                                               /   \\ \n");
						printf("     \\___/                                                           \\___/ \n");
						printf("     /   \\   ");
						SetConsoleTextAttribute(hConsole, 15);
						printf("EX: nomearquivo(.txt), ONDE  '");
						SetConsoleTextAttribute(hConsole, 12);
						printf(".txt");
						SetConsoleTextAttribute(hConsole, 15);
						printf("'  %c A EXTENS%cO.",144,199);
						SetConsoleTextAttribute(hConsole, saved_attributes);
						printf("      /   \\ \n");
						printf("     \\___/                                                           \\___/ \n");
						printf("     /   \\   ");
						SetConsoleTextAttribute(hConsole, 15);
						printf("EM SEGUIDA SEU ARQUIVO SER%c DECODIFICADO DE ACORDO",181);
						SetConsoleTextAttribute(hConsole, saved_attributes);
						printf("      /   \\ \n");
						printf("     \\___/   ");
						SetConsoleTextAttribute(hConsole, 15);
						printf("COM A CHAVE INSERIDA.");
						SetConsoleTextAttribute(hConsole, saved_attributes);
						printf("                                   \\___/ \n");
						printf("     /   \\___                                                     ___/   \\ \n");
						printf("     \\___/   \\___     ___     ___     ___     ___     ___     ___/   \\___/ \n");
						printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
						printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
						printf("         \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/     \n\n        ");
						CURSOR.dwSize = 1;
                        CURSOR.bVisible = FALSE;
                        result=SetConsoleCursorInfo(myconsole, &CURSOR);
						system("pause");
                    break;
                    case 'x':
                    case 'X':
                        seta=9;
                        system("cls");
                    break;
					default:
						system("cls");
					break;
                }
				system("cls");
			}while(seta!=9);
			seta=0;
			// EXIBE CURSOR
			CURSOR.dwSize = 1;
			CURSOR.bVisible = TRUE;
			result=SetConsoleCursorInfo(myconsole, &CURSOR);
            continue;

		case 'C':
        case 'c':
		    if(SINAL==0)// se a chave não tiver sido inserida o programa não da continuidade, retorna ao menu
            {
            system("cls");
           	SetConsoleTextAttribute(hConsole, 12);
            printf("\7\n\n\n          ___     ___     ___     ___     ___     ___     ___     ___ \n");
            printf("      ___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___ \n");
            printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
            printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
            printf("     /   \\___/                                                   \\___/   \\ \n");
            printf("     \\___/                                                           \\___/ \n");
            printf("     /   \\                                                           /   \\ \n");
            printf("     \\___/          ");
            SetConsoleTextAttribute(hConsole, 15);
            printf("PARA CONTINUAR INSIRA UMA CHAVE V%cLIDA! !",181);
            SetConsoleTextAttribute(hConsole, 12);
            printf("        \\___/ \n");
            printf("     /   \\                                                           /   \\ \n");
            printf("     \\___/                                                           \\___/ \n");
            printf("     /   \\___                                                     ___/   \\ \n");
            printf("     \\___/   \\___     ___     ___     ___     ___     ___     ___/   \\___/ \n");
            printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
            printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
            printf("         \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n\n\n\n\n\n\n");
            system("PAUSE");
            SetConsoleTextAttribute(hConsole, saved_attributes);
            system("cls");
            continue;
            }
            else
            {
		    system("cls");
            break;
            }
        case 'F':
        case 'f':
//================================FILA CIRCULAR====================================================

            //===============================================
			// OCULTA CURSOR
            CURSOR.dwSize = 1;
            CURSOR.bVisible = FALSE;
            result=SetConsoleCursorInfo(myconsole, &CURSOR);
			//===============================================
            system("cls");
            for(w=0;w<=9;w++)
            {
                *(pv+w)=0;
            }
            w=0;
            b=0;
            do
            {
				//============'for' PRODUZ PARTE GRAFICA DA FILA CIRCULAR==============
                for(t=0;t<=4;t++)
                {
                    switch(t)// IMPRIME EM QUATRO PARTES, PARA QUE SEJA UMA IMAGEM SÓ.
                    {
                        case 0://====CABEÇALHO DO MENU===========
                            SetConsoleTextAttribute(hConsole, 9);
                            for(s=0;s<=79;s++)printf("%c",197);
                            for(s=0;s<=32;s++)printf("%c",197);
                            SetConsoleTextAttribute(hConsole, 10);
                            printf(" FILA CIRCULAR ");
                            SetConsoleTextAttribute(hConsole, 9);
                            for(s=0;s<=31;s++)printf("%c",197);
                            for(s=0;s<=79;s++)printf("%c",197);
                            puts("\n");
                            SetConsoleTextAttribute(hConsole, saved_attributes);
							//====================================
                            if(w==9)//VERIFICA POSIÇÃO DO PONTEIRO (w), DE ACORDO COM POSIÇÃO
                            {		//EXIBE 'Inserir' CORRESPONDENTE A POSIÇÃO ATUAL DO PONTEIRO.
                                SetConsoleTextAttribute(hConsole, 10);
                                printf("                            Inserir%c ",26);
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                                printf("%d]   [%d]\n\n",*(pv+9),*pv);
                            }
                            else if(w==0)
                            {
                                printf("                                    [%d]   [%d ",*(pv+9),*pv,27);
                                SetConsoleTextAttribute(hConsole, 10);
                                printf("%cInserir\n\n",27);
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                            }
                            else printf("                                    [%d]   [%d]\n\n",*(pv+9),*pv);
                        break;
                        case 1:
                            if(w==8)
                            {
                                SetConsoleTextAttribute(hConsole, 12);
                                printf(" [x] REMOVE ITEM");
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                                SetConsoleTextAttribute(hConsole, 10);
                                printf("         Inserir%c",26);
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                                printf(" %d]          [%d]\n\n\n",*(pv+8),*(pv+1));
                            }
                            else if(w==1)
                            {
                                SetConsoleTextAttribute(hConsole, 12);
                                printf(" [x] REMOVE ITEM");
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                                printf("                [%d]          [%d ",*(pv+8),*(pv+1));
                                SetConsoleTextAttribute(hConsole, 10);
                                printf("%cInserir\n\n\n",27);
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                            }
                            else
                            {
                                SetConsoleTextAttribute(hConsole, 12);
                                printf(" [x] REMOVE ITEM");
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                                printf("                [%d]          [%d]\n\n\n",*(pv+8),*(pv+1));
                            }
                        break;
                        case 2:
                            if(w==7)
                            {
                                SetConsoleTextAttribute(hConsole, 10);
                                printf(" [i] INSERE ITEM");
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                                SetConsoleTextAttribute(hConsole, 10);
                                printf("      Inserir%c",26);
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                                printf(" %d]              [%d]\n\n\n",*(pv+7),*(pv+2));
                            }
                            else if(w==2)
                            {
                                SetConsoleTextAttribute(hConsole, 10);
                                printf(" [i] INSERE ITEM");
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                                printf("              [%d]              [%d ",*(pv+7),*(pv+2));
                                SetConsoleTextAttribute(hConsole, 10);
                                printf("%cInserir\n\n\n",27);
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                            }
                            else
                            {
                                SetConsoleTextAttribute(hConsole, 10);
                                printf(" [i] INSERE ITEM");
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                                printf("              [%d]              [%d]\n\n\n",*(pv+7),*(pv+2));
                            }
                        break;
                        case 3:
                            if(w==6)
                            {
                                SetConsoleTextAttribute(hConsole, 14);
                                printf(" [ESC] MENU");
                                SetConsoleTextAttribute(hConsole, 10);
                                printf("             Inserir%c",26);
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                                printf(" %d]          [%d]\n\n",*(pv+6),*(pv+3));
                            }
                            else if(w==3)
                            {
                                SetConsoleTextAttribute(hConsole, 14);
                                printf(" [ESC] MENU");
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                                printf("                     [%d]          [%d ",*(pv+6),*(pv+3));
                                SetConsoleTextAttribute(hConsole, 10);
                                printf("%cInserir\n\n",27);
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                            }
                            else
                            {
                                SetConsoleTextAttribute(hConsole, 14);
                                printf(" [ESC] MENU");
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                                printf("                     [%d]          [%d]\n\n",*(pv+6),*(pv+3));
                            }
                        break;
                        case 4:
                            if(w==5)
                            {
                                SetConsoleTextAttribute(hConsole, 10);
                                printf("                            Inserir%c",26);
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                                printf(" %d]   [%d]\n\n",*(pv+5),*(pv+4));
                            }
                            else if(w==4)
                            {
                                printf("                                    [%d]   [%d ",*(pv+5),*(pv+4));
                                SetConsoleTextAttribute(hConsole, 10);
                                printf("%cInserir\n\n",27);
                                SetConsoleTextAttribute(hConsole, saved_attributes);
                            }
                            else
                            {
                                printf("                                    [%d]   [%d]\n\n",*(pv+5),*(pv+4));
                            }
                        break;
                    }
                }
                s=0;
                m=0;
                for(t=0;t<=9;t++)
                {
                    if(*(pv+t)==0)s++;//VERIFICA SE FILA ESTA VAZIA
                    else m++;//CONTA QUANTOS NÚMEROS EXITEM NA FILA
                }
                //if(s==10)status=7;
                t=0;

                SetConsoleTextAttribute(hConsole, 10);
                printf(" %c ",223);
                SetConsoleTextAttribute(hConsole, saved_attributes);
                printf("STATUS: ");
                switch(status)
                {
                    case 1:
                        SetConsoleTextAttribute(hConsole, 12);
                        printf("OVERFLOW ! ! !\n\n");
                    break;
                    case 9:
                        SetConsoleTextAttribute(hConsole, 12);
                        printf("UNDERFLOW ! ! !\n\n");
                    break;
                    case 7:
                        SetConsoleTextAttribute(hConsole, 10);
                        printf("FILA VAZIA.\n\n");
                    break;
                    default:
                        SetConsoleTextAttribute(hConsole, 10);
                        printf("NORMAL.\n\n");
                        break;
                }
                SetConsoleTextAttribute(hConsole, saved_attributes);
                SetConsoleTextAttribute(hConsole, 10);
                printf(" %c ",223);
                SetConsoleTextAttribute(hConsole, saved_attributes);
                printf("PRIMEIRO ELEMENTO: ");
                SetConsoleTextAttribute(hConsole, 10);
                printf(" %d\n\n",*(pv+b));
                SetConsoleTextAttribute(hConsole, saved_attributes);
                if(status!=7)//7 vazio
                {
                    SetConsoleTextAttribute(hConsole, 10);
                    printf(" %c ",223);
                    SetConsoleTextAttribute(hConsole, saved_attributes);
                    printf("ULTIMO ELEMENTO: ");
                    SetConsoleTextAttribute(hConsole, 10);
                    printf("%d\n\n",*(pv+(w-1)));
                    SetConsoleTextAttribute(hConsole, saved_attributes);
                }
                else if(status==7)
                {
                    SetConsoleTextAttribute(hConsole, 10);
                    printf(" %c ",223);
                    SetConsoleTextAttribute(hConsole, saved_attributes);
                    printf("ULTIMO ELEMENTO: ");
                    SetConsoleTextAttribute(hConsole, 10);
                    printf(" 0\n\n");
                    SetConsoleTextAttribute(hConsole, saved_attributes);
                }
                SetConsoleTextAttribute(hConsole, 10);
                printf(" %c ",223);
                SetConsoleTextAttribute(hConsole, saved_attributes);
                printf("NUMEROS NA FILA: ");
                SetConsoleTextAttribute(hConsole, 10);
                printf("%d",m);//EXIBE QUANTOS NÚMEROS EXITEM NA FILA
                SetConsoleTextAttribute(hConsole, saved_attributes);
                m=0;
                seta=getch();//LE OPÇÃO ESCOLHIDA
                fflush(stdin);
                switch(seta)
                {
                    case 'x'://x deleta primeira posição do vetor
                    case 'X':
                        //if((b==9)&&(*pv==0))/*controla posição do ponteiro na fila*/
                        if(*(pv+b)!=0)
                        {					/*se estiver na ultima posição pula   *///<================REVEJA ESTA PARTE!!!!!
                            *(pv+b)=0;		/*para primeira posição, se a proxima */
                           // status=9;		/*ja estiver vazia, status recebe     */
                            status=2;
                            b++;
                            if(b==10)b=0;//SE PONTEIRO ESTIVER NA ULTIMA POSIÇÃO RESETA PARA 0
                            //else b++; //INCREMENTA PONTEIRO.
                            if((b==w)&&(*(pv+(w-1))==0))//VERIFICA SE FILA ESTA VAZIA.
                            {
                                w=0;// REINICIA INICIO E FIM DA FILA PARA 0
                                //*(pv+b)=0;
                                b=0;
                                status=7;//STATUS RECEBE 'FILA VAZIA'.
                            }
                        }					/*UNDERFLOW.                           */
                       /* if(status!=9)//SE NAO ESTIVER EM UNDERFLOW
                        {
                            status=2; // STATUS NORMAL
                            *(pv+b)=0;//DELETA POSIÇÃO
                            if(b==9)b=0;//SE PONTEIRO ESTIVER NA ULTIMA POSIÇÃO RESETA PARA 0
                            else b++; //INCREMENTA PONTEIRO.
                            if((b==w)&&(*(pv+w+1)==0))//VERIFICA SE FILA ESTA VAZIA.
                            {
                                w=0;// REINICIA INICIO E FIM DA FILA PARA 0
                                //*(pv+b)=0;
                                b=0;
                                status=7;//STATUS RECEBE 'FILA VAZIA'.
                            }
                        }*/
                        else if(*pv==0)//SE PROXIMA POSIÇÃO ESTIVER FAZIA
                        {
                            status= 9;//STATUS RECEBE 'UNDERFLOW'
                            b=0;//FIM RECEBE ZERO
                        }

                        system("cls");
                    break;
                    case 'i'://INSERE NUMERO NA FILA
                    case 'I':
                        SetConsoleTextAttribute(hConsole, 9);
                        printf("          %c ",223);
                        SetConsoleTextAttribute(hConsole, saved_attributes);
                        printf("INSIRA NUMERO: ");
						//==============================================
                        // EXIBE CURSOR
                        CURSOR.dwSize = 15;
                        CURSOR.bVisible = TRUE;
                        result=SetConsoleCursorInfo(myconsole, &CURSOR);
                        SetConsoleTextAttribute(hConsole, 10);
                        //==============================================
                        scanf("%d",&m);
                        SetConsoleTextAttribute(hConsole, saved_attributes);
                        if(*(pv+w)==0)//SE POSIÇÃO A SER INSERIDA ESTIVER VAZIA
                        {
                            status=2;//STATUS RECEBE 'NORMAL'
                            *(pv+w)=m;// POSIÇÃO RECEBE NUMERO
                            if(w==9)w=0;/*SE ESTIVER NA ULTIMA POSIÇÃO DO VETOR,*/
                            else w++;	/*PONTEIRO PASSA PARA PRIMEIRA POSIÇÃO  */
                        }				/*DO VETOR, E INCREMENTA PONTEIRO INICIO*/
                        else
                        {
                            status=1;	//SE NAO ESTIVER VAZIA STATUS RECEBE 'OVER FLOW'
                        }
                        system("cls");
                    break;
                    default:
                        system("cls");
                    break;
                }

            }while(seta!=27);//REPETE ATE QUE USUÁRIO PRESSIONE ESC
            continue;
//============================================================================================
        case 'r':
        case 'R':
            {

            system("cls");
			printf("\n");
			SetConsoleTextAttribute(hConsole, 9);
			for(t=0;t<=79;t++)printf("%c",197);
			for(t=0;t<=32;t++)printf("%c",197);
			SetConsoleTextAttribute(hConsole, 15);
			printf("   RESTRI%c%cES  ",128,229);
			SetConsoleTextAttribute(hConsole, 9);
			for(t=0;t<=31;t++)printf("%c",197);
			for(t=0;t<=79;t++)printf("%c",197);
			puts("\n");
			SetConsoleTextAttribute(hConsole, 12);
			printf("\n\n CHAVES:");
			SetConsoleTextAttribute(hConsole, 15);
			printf(" Algumas chaves n%co s%co compat%cveis com alguns arquivos. Ao codificar \n",198,198,161);
			printf("\n um arquivo o sistema ir%c testar a chave inserida, se esta for inv%clida o  \n",160,160);
			printf("\n processo de codifica%c%co ser%c abortado, para evitar que o conte%cdo original\n",135,198,160,163);
			printf("\n do arquivo seja danificado.\n");
			SetConsoleTextAttribute(hConsole, 12);
			printf("\n\n TIPOS DE ARQUIVO:");
			SetConsoleTextAttribute(hConsole, 15);
			printf(" Arquivos do ");
			SetConsoleTextAttribute(hConsole, 10);
			printf("Pacote Office");
			SetConsoleTextAttribute(hConsole, 15);
			printf(" n%co s%co compat%cveis com este        programa.\n",198,198,161);
			SetConsoleTextAttribute(hConsole, 12);
			printf("\n\n TAMANHO LIMITE:");
			SetConsoleTextAttribute(hConsole, 15);
			printf(" Aproximadamente ");
			SetConsoleTextAttribute(hConsole, 10);
			printf("1.000.000");
			SetConsoleTextAttribute(hConsole, 15);
			printf(" KBytes. (Vers%co Beta)\n\n  ",198);
			system("pause");
			system("cls");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			t=0;
	}
        continue;
//============================================================================================
        case 's':
        case 'S':
            system("cls");
			printf(" ");
			for(t=0;t<=38;t++)
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("%c ",177);
			}
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("\n\n");
			SetConsoleTextAttribute(hConsole, 10);
			printf(" %c",177);
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("    ______           .______              _______                 _______. ");
			SetConsoleTextAttribute(hConsole, 10);
			printf("%c\n",177);
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("     /      |          |   _  \\            |       \\               /       |\n");
			SetConsoleTextAttribute(hConsole, 10);
			printf(" %c",177);
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("  |  ,----'          |  |_)  |           |  .--.  |             |   (----` ");
			SetConsoleTextAttribute(hConsole, 10);
			printf("%c\n",177);
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("    |  |               |   ___/            |  |  |  |              \\   \\    \n");
			SetConsoleTextAttribute(hConsole, 10);
			printf(" %c",177);
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("  |  `----.    __    |  |          __    |  '--'  |    __    .----)   |    ");
			SetConsoleTextAttribute(hConsole, 10);
			printf("%c\n",177);
			SetConsoleTextAttribute(hConsole, saved_attributes);
			printf("     \\______|   (__)   | _|         (__)   |_______/    (__)   |_______/  \n");
			SetConsoleTextAttribute(hConsole, 10);
			printf(" %c",177);
			printf("                                                                           ");
			printf("%c\n",177);
			printf("\n ");
			SetConsoleTextAttribute(hConsole, saved_attributes);
			for(t=0;t<=38;t++)
			{
				SetConsoleTextAttribute(hConsole, 10);
				printf("%c ",177);
			}
			SetConsoleTextAttribute(hConsole, 15);
			printf("\n\n\n                      (");
			SetConsoleTextAttribute(hConsole, 11);
			printf(" C");
			SetConsoleTextAttribute(hConsole, 15);
			printf("riptografia.");
			SetConsoleTextAttribute(hConsole, 11);
			printf("P");
			SetConsoleTextAttribute(hConsole, 15);
			printf("or.");
			SetConsoleTextAttribute(hConsole, 11);
			printf("D");
			SetConsoleTextAttribute(hConsole, 15);
			printf("eslocamento.");
			SetConsoleTextAttribute(hConsole, 11);
			printf("S");
			SetConsoleTextAttribute(hConsole, 15);
			printf("imples )");
			printf("\n\n\n   Programa desenvolvido na linguagem C que codifica arquivos, com o uso de  \n");
			printf("\n deslocamento de caracteres, utilizando algoritmos b%csicos de criptografia.   \n",160);
			printf("\n   Para isso uma chave contendo quinze caracteres %c utilizada, a partir desta  \n",130);
			printf("\n chave %c que cada posi%c%co de deslocamento %c criada.\n\n  ",130,135,198,130);
			system("pause");
			system("cls");
            SetConsoleTextAttribute(hConsole, saved_attributes);
        continue;
//============================================================================================
        case 27:
			exit(0);
			break;
		default:
			system("cls");
           	system("color 0c");
            printf("\7\n\n\n          ___     ___     ___     ___     ___     ___     ___     ___ \n");
            printf("      ___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___ \n");
            printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
            printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
            printf("     /   \\___/                                                   \\___/   \\ \n");
            printf("     \\___/                                                           \\___/ \n");
            printf("     /   \\                                                           /   \\ \n");
            printf("     \\___/                     ");
            SetConsoleTextAttribute(hConsole, 15);
            printf("ERRO! OP%c%cO INV%cLIDA.",128,199,181);
            SetConsoleTextAttribute(hConsole, 12);
            printf("                 \\___/ \n");
            printf("     /   \\                                                           /   \\ \n");
            printf("     \\___/                                                           \\___/ \n");
            printf("     /   \\___                                                     ___/   \\ \n");
            printf("     \\___/   \\___     ___     ___     ___     ___     ___     ___/   \\___/ \n");
            printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
            printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
            printf("         \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n\n\n\n\n\n\n");
            getch();
            SetConsoleTextAttribute(hConsole, saved_attributes);
            system("cls");
        continue;//FAZ COM QUE RETORNE AO MENU, E ENTRE NO SWITCH NOVAMENTE
	}


	do //LAÇO 'do' responsável pelo menu de codifição e decodificação
	{
	    if(SINAL==0)break;//se chave digitada for inválida ou inexistente. retorna ao loop exterior
        printf("\n          ___     ___     ___     ___     ___     ___     ___     ___ \n");
        printf("      ___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___ \n");
        printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
        printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
        printf("     /   \\___/                                                   \\___/   \\ \n");
        printf("     \\___/                                                           \\___/ \n");
        printf("     /   \\            MENU                                           /   \\ \n");
        printf("     \\___/                              [");
        SetConsoleTextAttribute(hConsole, 14);
        printf(" C");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf(" ] ");
        SetConsoleTextAttribute(hConsole, 15);
        printf("CODIFICAR ARQUIVO");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf("      \\___/ \n");
        printf("     /   \\   MANIPULA%c%cO DE ARQUIVOS                                 /   \\ \n",128,199);
        printf("     \\___/                              [ ");
        SetConsoleTextAttribute(hConsole, 14);
        printf("D");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf(" ]");
        SetConsoleTextAttribute(hConsole, 15);
        printf(" DECODIFICAR ARQUIVO");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf("    \\___/ \n");
        printf("     /   \\                                                           /   \\ \n");
        printf("     \\___/          ");
        SetConsoleTextAttribute(hConsole, 14);
        printf("C.P.D.S");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf("             [");
        SetConsoleTextAttribute(hConsole, 14);
        printf(" X");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf(" ]");
        SetConsoleTextAttribute(hConsole, 15);
        printf(" MENU PRINCIPAL  ");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf("       \\___/ \n");
        printf("     /   \\                                                           /   \\ \n");
        printf("     \\___/                                                           \\___/ \n");
        printf("     /   \\                                                           /   \\ \n");
        printf("     \\___/       [ ");
        SetConsoleTextAttribute(hConsole, 12);
        printf("ESC");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf(" ]");
        SetConsoleTextAttribute(hConsole, 15);
        printf(" SAIR   ");
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf("       [ ");
        SetConsoleTextAttribute(hConsole, 15);
        printf("Digite a op%c%co desejada",135,198);
        SetConsoleTextAttribute(hConsole, saved_attributes);
        printf(" ]   \\___/ \n");//<===
        printf("     /   \\___                                                     ___/   \\ \n");
        printf("     \\___/   \\___     ___     ___     ___     ___     ___     ___/   \\___/ \n");
        printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
        printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
        printf("         \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
		//==============================================
        // OCULTA CURSOR
        CURSOR.dwSize = 1;
        CURSOR.bVisible = FALSE;
        result=SetConsoleCursorInfo(myconsole, &CURSOR);
        //==============================================
        escolha=getch();
        fflush(stdin);

		switch(escolha)
		{


			case 'C':
			case 'c':
				i=0;
				len=0;
				for(p=0;p<=SIZET;p++)
				{
					*(encrypted+p)=0;
				}
				//==============================================================
				// EXIBE CURSOR
				CURSOR.dwSize = 10;
				CURSOR.bVisible = TRUE;
				result=SetConsoleCursorInfo(myconsole, &CURSOR);
				//==============================================================
				system("cls");
				SetConsoleTextAttribute(hConsole, 9);
				for(t=0;t<=79;t++)printf("%c",197);
				for(t=0;t<=28;t++)printf("%c",197);
				SetConsoleTextAttribute(hConsole, 15);
				printf("ABRIR ARQUIVO PARA ");
				SetConsoleTextAttribute(hConsole, 10);
				printf("CODIFICAR");
				SetConsoleTextAttribute(hConsole, 9);
				for(t=0;t<=22;t++)printf("%c",197);
				for(t=0;t<=79;t++)printf("%c",197);
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("\n\n\n                           .-----.________________\n");
				printf("                           | FILE                 | \n");
				printf("                           |                      |  \n");
				printf("                           |      ________________|____ \n");
				printf("                           |     /                     /\n");
				printf("                           |    /                     /\n");
				printf("                           |   /                     /\n");
				printf("                           |  /                     /\n");
				printf("                           | /                     /\n");
				printf("                           |/_____________________/\n");
				printf("\n                         NOME DO ARQUIVO:");
				SetConsoleTextAttribute(hConsole, 15);
				FILE*readmode;
				gets(filename);
				fflush(stdin);
				SetConsoleTextAttribute(hConsole, saved_attributes);
				readmode=fopen(filename,"r");

				if(readmode==NULL)
				{
					system("cls");
					SetConsoleTextAttribute(hConsole, 12);
					printf("\7\n\n\n          ___     ___     ___     ___     ___     ___     ___     ___ \n");
					printf("      ___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___ \n");
					printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
					printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
					printf("     /   \\___/                                                   \\___/   \\ \n");
					printf("     \\___/                                                           \\___/ \n");
					printf("     /   \\                                                           /   \\ \n");
					printf("     \\___/                ");
					SetConsoleTextAttribute(hConsole, 15);
					printf("N%cO FOI POSS%cVEL ABRIR O ARQUIVO.",199,161);
					SetConsoleTextAttribute(hConsole, 12);
					printf("          \\___/ \n");
					printf("     /   \\                                                           /   \\ \n");
					printf("     \\___/                                                           \\___/ \n");
					printf("     /   \\___                                                     ___/   \\ \n");
					printf("     \\___/   \\___     ___     ___     ___     ___     ___     ___/   \\___/ \n");
					printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
					printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
					printf("         \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n\n\n\n\n\n\n");
					getch();
					system("cls");
					SetConsoleTextAttribute(hConsole, saved_attributes);
					break;
				}

				i=0;
				do
				{
					c2=fgetc(readmode);
					*(encrypted+i) = c2;
					i+=1;
				}
				while(c2 != EOF);

				fclose(readmode);
				len=strlen(encrypted);

				j=0;
				i=0;
				posic=0;
				//==============================================================
				xl=len/38;/*variaveis responsaveis pela barra de carregamento.*/
				k=xl;
				x9=0;
				u=0;
				//==============================================================
				// ESCONDE CURSOR
				CURSOR.dwSize = 1;
				CURSOR.bVisible = FALSE;
				result=SetConsoleCursorInfo(myconsole, &CURSOR);
				//==============================================================
				system("cls");
				for(j=0;j<=len;j++)
				{
					if((*(encrypted+j)!=' ')&&(*(encrypted+j)!='\n')&&(*(encrypted+j)!='\t'))
					{
						while(!done)
						{
							if(abc[i]==*(encrypted+j))
							{
								done=TRUE;
								posic=i;
								i=0;
							}
							else
							{
								i+=1;
							}
						}

						diff = TMENOR - posic;

						if( diff<*(key+j) )
						{
							posic = ( *(key+j) - diff)-1;
						}

						else if(diff> *(key+j) )
						{
							posic=posic+ *(key+j);
						}

						if( diff == *(key+j) )
						{
							posic=posic+ *(key+j);
						}

						*(encrypted+j) =  *(my_pointer+posic);
						done=FALSE;
						posic=0;
						diff=0;
					}
 //------------------------------SIMULAÇÃO DE BARRA DE CARREGAR----------------------------------------------------
					if(k!=len)
					{
						if(k==j)
						{
							SetConsoleTextAttribute(hConsole, 12);
							printf("\n\n                            %c=========================%c ",201,187);
							printf("\n                            %c  CODIFICANDO ARQUIVO... %c",186,186);
							printf("\n                            %c=========================%c\n\n\n\n\n\n\n",200,188);
							SetConsoleTextAttribute(hConsole, 10);
							for(g=0;g<=x9;g++)
							{
								printf(" %c",219);
							}
							u=(k*100)/len;
							printf("\n\n\n\n                                     [ %d%% ]",u);
							system("cls");
							k=xl+k;
							x9++;
							if(x9>38)x9=38;
						}
					}

				}
				system("color a");
				printf("\7\n\n                            %c=========================%c ",201,187);
				printf("\n                            %c   ARQUIVO CODIFICADO !! %c",186,186);
				printf("\n                            %c=========================%c\n\n\n\n\n\n\n",200,188);
				for(g=0;g<=x9;g++)
				{
					printf(" %c",219);
				}
				u=(k*100)/len;
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("\n\n\n\n                                     [ 100%% ]");
				puts("\n\n\n\n\n\n\n\n");
//=====================================================================================================
				rewind(readmode);
				strcpy(filecopy,"coded");
				strcat(filecopy,filename);
				if((readmode=fopen(filecopy,"w"))==NULL)  /* escreve o texto ja Codificado no arquivo*/
				{
					system("cls");
					SetConsoleTextAttribute(hConsole, 12);
					printf("\7\n\n\n          ___     ___     ___     ___     ___     ___     ___     ___ \n");
					printf("      ___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___ \n");
					printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
					printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
					printf("     /   \\___/                                                   \\___/   \\ \n");
					printf("     \\___/                                                           \\___/ \n");
					printf("     /   \\                                                           /   \\ \n");
					printf("     \\___/                ");
					SetConsoleTextAttribute(hConsole, 15);
					printf("N%cO FOI POSS%cVEL ABRIR O ARQUIVO.",199,161);
					SetConsoleTextAttribute(hConsole, 12);
					printf("          \\___/ \n");
					printf("     /   \\                                                           /   \\ \n");
					printf("     \\___/                                                           \\___/ \n");
					printf("     /   \\___                                                     ___/   \\ \n");
					printf("     \\___/   \\___     ___     ___     ___     ___     ___     ___/   \\___/ \n");
					printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
					printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
					printf("         \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n\n\n\n\n\n\n");
					system("pause");
					system("cls");
					SetConsoleTextAttribute(hConsole, saved_attributes);
					break;
				}

				for(i=0;i<=len;i++)
				{
					fprintf(readmode,"%c",*(encrypted+i));
				}

				fclose(readmode);

				for(p=0;p<=SIZET;p++)
				{
					*(encrypted+p)=0;
				}
//=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*TESTA SE CHAVE COMPATIVEL COM ARQUIVO=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*
				readmode=fopen(filecopy,"r");
				c2=0;
				i=0;
				do
				{
					c2=fgetc(readmode);
					*(encrypted+i)=c2;
					i+=1;
				}
				while(c2 != EOF);

				fclose(readmode);

				len=strlen(encrypted);

				if(len!=i)//SE CHAVE FOR INCOMPATIVEL COM ARQUIVO, EXIBE MENSAGEM DE ERRO E ABORTA CODIFICAÇÃO
				{
				    readmode=fopen("erro.txt","w");
				    fprintf(readmode,"Erro ao criar arquivo!\n\nQuantidade Caracteres: %d\nQuantidade lida: %d\nValor encontrado no EOF: %d\nValor antes EOF: %d\n",i,len,*(encrypted+len),*(encrypted+(len-1)));
				    fprintf(readmode,"Caractere original na posição EOF: %c\nValor da chave na posição:%d\n\n",*(encrypted+len),*(key+len));
				    for(i=0;i<=106;i++)
                    {
                        fprintf(readmode,"%d_",*(chave+i));
                    }
				    fclose(readmode);
					system("cls");
					SetConsoleTextAttribute(hConsole, 12);
					printf("\7\n\n\n          ___     ___     ___     ___     ___     ___     ___     ___ \n");
					printf("      ___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___ \n");
					printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
					printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
					printf("     /   \\___/                                                   \\___/   \\ \n");
					printf("     \\___/                                                           \\___/ \n");
					printf("     /   \\                                                           /   \\ \n");
					printf("     \\___/    ");
					SetConsoleTextAttribute(hConsole, 15);
					printf("CHAVE INSERIDA N%cO %c COMPATIVEL COM ESTE ARQUIVO!",198,130);
					SetConsoleTextAttribute(hConsole, 12);
					printf("      \\___/ \n");
					printf("     /   \\                                                           /   \\ \n");
					printf("     \\___/                                                           \\___/ \n");
					printf("     /   \\___                                                     ___/   \\ \n");
					printf("     \\___/   \\___     ___     ___     ___     ___     ___     ___/   \\___/ \n");
					printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
					printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
					printf("         \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n\n\n\n\n\n\n");
					system("erro.txt");
					system("cls");
					SetConsoleTextAttribute(hConsole, saved_attributes);
					unlink(filecopy);//DELETA ARQUIVO RECEM CRIADO
					SINAL=0;
					break;
				}
				fclose(readmode);

 //=*=*=*=*=*=*=*=*=*=*=*=*=SE CHAVE COMPATIVEL SALVA ARQUIVO=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*


				//system("PAUSE");
				system("cls");
				printf("                             ___________________________.\n");
				printf("                            |;;|                     |;;|| \n");
				printf("                            |[]|---------------------|[]|| \n");
				printf("                            |;;|                     |;;|| \n");
				printf("                            |;;|                     |;;|| \n");
				printf("                            |;;|                     |;;|| \n");
				printf("                            |;;|                     |;;|| \n");
				printf("                            |;;|                     |;;|| \n");
				printf("                            |;;|                     |;;|| \n");
				printf("                            |;;|_____________________|;;|| \n");
				printf("                            |;;;;;;;;;;;;;;;;;;;;;;;;;;;|| \n");
				printf("                            |;;;;;;_______________ ;;;;;|| \n");
				printf("                            |;;;;;|  ___          |;;;;;|| \n");
				printf("                            |;;;;;| |;;;|         |;;;;;|| \n");
				printf("                            |;;;;;| |;;;|         |;;;;;|| \n");
				printf("                            |;;;;;| |;;;|         |;;;;;|| \n");
				printf("                            |;;;;;| |;;;|         |;;;;;|| \n");
				printf("                            |;;;;;| |___|         |;;;;;|| \n");
				printf("                            \\_____|_______________|_____|| \n");
				printf("                              ~~~~~^^^^^^^^^^^^^^^^^~~~~~~ \n");
				SetConsoleTextAttribute(hConsole, 10);
				printf("\n                                   ARQUIVO SALVO!!! \n");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				//system("PAUSE");
				printf("\n                            PARA CONTINUAR FECHE O ARQUIVO\n                                   ");
				SetConsoleTextAttribute(hConsole, 12);
				printf("'%s'",filecopy);
                SetConsoleTextAttribute(hConsole, saved_attributes);
				system(filecopy);
				system("cls");
				for(p=0;p<=SIZET;p++)
				{
					*(encrypted+p)=0;
				}
				s_exit=0;

			break;
 //=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=DECODIFICA ARQUIVO*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*

			case 'D':
			case 'd':
				posic=0;
				system("cls");
				for(p=0;p<=SIZET;p++)
				{
					*(encrypted+p)='\0';
				}
				// EXIBE CURSOR
				CURSOR.dwSize = 10;
				CURSOR.bVisible = TRUE;
				result=SetConsoleCursorInfo(myconsole, &CURSOR);
				SetConsoleTextAttribute(hConsole, 9);
				for(t=0;t<=79;t++)printf("%c",197);
				for(t=0;t<=24;t++)printf("%c",197);
				SetConsoleTextAttribute(hConsole, 15);
				printf("ABRIR ARQUIVO PARA ");
				SetConsoleTextAttribute(hConsole, 12);
				printf("DE");
				SetConsoleTextAttribute(hConsole, 10);
				printf("CODIFICAR");
				SetConsoleTextAttribute(hConsole, 9);
				for(t=0;t<=25;t++)printf("%c",197);
				for(t=0;t<=78;t++)printf("%c",197);
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("\n\n\n                           .-----.________________\n");
				printf("                           | FILE                 | \n");
				printf("                           |                      |  \n");
				printf("                           |      ________________|____ \n");
				printf("                           |     /                     /\n");
				printf("                           |    /                     /\n");
				printf("                           |   /                     /\n");
				printf("                           |  /                     /\n");
				printf("                           | /                     /\n");
				printf("                           |/_____________________/\n");
				printf("\n                         NOME DO ARQUIVO:");
				SetConsoleTextAttribute(hConsole, 15);
				gets(filename);
				fflush(stdin);
				SetConsoleTextAttribute(hConsole, saved_attributes);

				if((readmode=fopen(filename,"r"))==NULL)  /*abre arquivo, armazena todo seu conteudo em crip.encrypted*/
				{
					system("cls");
					SetConsoleTextAttribute(hConsole, 12);
					printf("\7\n\n\n          ___     ___     ___     ___     ___     ___     ___     ___ \n");
					printf("      ___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___ \n");
					printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
					printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
					printf("     /   \\___/                                                   \\___/   \\ \n");
					printf("     \\___/                                                           \\___/ \n");
					printf("     /   \\                                                           /   \\ \n");
					printf("     \\___/                ");
					SetConsoleTextAttribute(hConsole, 15);
					printf("N%cO FOI POSS%cVEL ABRIR O ARQUIVO.",199,161);
					SetConsoleTextAttribute(hConsole, 12);
					printf("          \\___/ \n");
					printf("     /   \\                                                           /   \\ \n");
					printf("     \\___/                                                           \\___/ \n");
					printf("     /   \\___                                                     ___/   \\ \n");
					printf("     \\___/   \\___     ___     ___     ___     ___     ___     ___/   \\___/ \n");
					printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
					printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
					printf("         \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n\n\n\n\n\n\n");
					system("pause");
					system("cls");
					SetConsoleTextAttribute(hConsole, saved_attributes);
					break;
				}

				c2=0;
				i=0;
				do
				{
					c2=fgetc(readmode);
					*(encrypted+i)=c2;
					i+=1;
				}
				while(c2 != EOF);

				fclose(readmode);

				len=strlen(encrypted);

				j=0;
				i=0;
				//============================
				xl=len/38;
				k=xl;
				x9=0;
				u=0;
				// ESCONDE CURSOR
				CURSOR.dwSize = 1;
				CURSOR.bVisible = FALSE;
				result=SetConsoleCursorInfo(myconsole, &CURSOR);
				//=---=-=--==--=-==-=--=-=-=-=-=-=-==-=--==-=--==-
				//=======================
				for(j=0;j<=len+1;j++)
				{
					if((*(encrypted+j)!=' ')&&(*(encrypted+j)!='\n')&&(*(encrypted+j)!='\t'))
					{
						while(!done)
						{
							if(abc[i]==*(encrypted+j))
							{
								done=TRUE;
								posic=i;
								i=0;
							}
							else
							{
								i+=1;
							}
						}

						if( *(key+j) > posic)
						{
							diff = *(key+j) -  posic;
							posic = TMAIOR - diff;
						}
						else if( *(key+j) <=posic)
						{
							posic = posic - *(key+j);
						}

						*(encrypted+j) =  *(my_pointer+posic);
						done=FALSE;
						posic=0;
						diff=0;
					}
 //--------------------------------------------------------------------------------------
					if(k!=len)
					{
						if(k==j)
						{
							SetConsoleTextAttribute(hConsole, 12);
							printf("\n\n                            %c=========================%c ",201,187);
							printf("\n                            %c  DECOFICANDO ARQUIVO..  %c",186,186);
							printf("\n                            %c=========================%c\n\n\n\n\n\n\n",200,188);
							SetConsoleTextAttribute(hConsole, 10);
							for(g=0;g<=x9;g++)
							{
								printf(" %c",219);
							}
							u=(k*100)/len;
							printf("\n\n\n\n                                     [ %d%% ]",u);
							system("cls");
							k=xl+k;
							x9++;
							if(x9>38)x9=38;
						}
					}
//==============================================================================
				}
				system("color a");
				printf("\7\n\n                            %c=========================%c ",201,187);
				printf("\n                            %c  ARQUIVO DECODIFICADO ! %c",186,186);
				printf("\n                            %c=========================%c\n\n\n\n\n\n\n",200,188);
				for(g=0;g<=x9;g++)
				{
					printf(" %c",219);
				}
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("\n\n\n\n                                     [ 100%% ]");
				puts("\n\n\n\n\n\n\n\n");

				strcpy(filecopy,"de");
				strcat(filecopy,filename);
				if((readmode=fopen(filecopy,"w"))==NULL)
				{
					system("cls");
					SetConsoleTextAttribute(hConsole, 12);
					printf("\7\n\n\n          ___     ___     ___     ___     ___     ___     ___     ___ \n");
					printf("      ___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___ \n");
					printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
					printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
					printf("     /   \\___/                                                   \\___/   \\ \n");
					printf("     \\___/                                                           \\___/ \n");
					printf("     /   \\                                                           /   \\ \n");
					printf("     \\___/                ");
					SetConsoleTextAttribute(hConsole, 15);
					printf("N%cO FOI POSS%cVEL CRIAR O ARQUIVO.",199,161);
					SetConsoleTextAttribute(hConsole, 12);
					printf("          \\___/ \n");
					printf("     /   \\                                                           /   \\ \n");
					printf("     \\___/                                                           \\___/ \n");
					printf("     /   \\___                                                     ___/   \\ \n");
					printf("     \\___/   \\___     ___     ___     ___     ___     ___     ___/   \\___/ \n");
					printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
					printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
					printf("         \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n\n\n\n\n\n\n");
					system("pause");
					system("cls");
					SetConsoleTextAttribute(hConsole, saved_attributes);
					break;
				}

				len=len-4;
				for(i=0;i<=len;i++)
				{
					fprintf(readmode,"%c",*(encrypted+i) );
				}

				fclose(readmode);
				//system("PAUSE");
				system("cls");
				printf("                             ___________________________.\n");
				printf("                            |;;|                     |;;|| \n");
				printf("                            |[]|---------------------|[]|| \n");
				printf("                            |;;|                     |;;|| \n");
				printf("                            |;;|                     |;;|| \n");
				printf("                            |;;|                     |;;|| \n");
				printf("                            |;;|                     |;;|| \n");
				printf("                            |;;|                     |;;|| \n");
				printf("                            |;;|                     |;;|| \n");
				printf("                            |;;|_____________________|;;|| \n");
				printf("                            |;;;;;;;;;;;;;;;;;;;;;;;;;;;|| \n");
				printf("                            |;;;;;;_______________ ;;;;;|| \n");
				printf("                            |;;;;;|  ___          |;;;;;|| \n");
				printf("                            |;;;;;| |;;;|         |;;;;;|| \n");
				printf("                            |;;;;;| |;;;|         |;;;;;|| \n");
				printf("                            |;;;;;| |;;;|         |;;;;;|| \n");
				printf("                            |;;;;;| |;;;|         |;;;;;|| \n");
				printf("                            |;;;;;| |___|         |;;;;;|| \n");
				printf("                            \\_____|_______________|_____|| \n");
				printf("                              ~~~~~^^^^^^^^^^^^^^^^^~~~~~~ \n");
				SetConsoleTextAttribute(hConsole, 10);
				printf("\n                                   ARQUIVO SALVO!!! \n");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				printf("\n                            PARA CONTINUAR FECHE O ARQUIVO\n                                   ");
				SetConsoleTextAttribute(hConsole, 12);
				printf("'%s'",filecopy);
                SetConsoleTextAttribute(hConsole, saved_attributes);
				system(filecopy);
				system("cls");
				for(p=0;p<=SIZET;p++)
				{
					*(encrypted+p)=0;
				}
				s_exit=0;
			break;
//=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*

			case 'x':
			case 'X':
				s_exit=1;
			break;

			case  27:
				exit(0);
			break;

			default:
				system("cls");
				SetConsoleTextAttribute(hConsole, 12);
				printf("\7\n\n\n          ___     ___     ___     ___     ___     ___     ___     ___ \n");
				printf("      ___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___ \n");
				printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
				printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
				printf("     /   \\___/                                                   \\___/   \\ \n");
				printf("     \\___/                                                           \\___/ \n");
				printf("     /   \\                                                           /   \\ \n");
				printf("     \\___/                     ");
				SetConsoleTextAttribute(hConsole, 15);
				printf("ERRO! OP%c%cO INV%cLIDA.",128,199,181);
				SetConsoleTextAttribute(hConsole, 12);
				printf("                 \\___/ \n");
				printf("     /   \\                                                           /   \\ \n");
				printf("     \\___/                                                           \\___/ \n");
				printf("     /   \\___                                                     ___/   \\ \n");
				printf("     \\___/   \\___     ___     ___     ___     ___     ___     ___/   \\___/ \n");
				printf("     /   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\ \n");
				printf("     \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n");
				printf("         \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/   \\___/ \n\n\n\n\n\n\n");
				system("pause");
				system("cls");
				SetConsoleTextAttribute(hConsole, saved_attributes);
				s_exit=0;
			break;
		}

    }while(s_exit!=1);
}

return(0);

}
