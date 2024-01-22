#include <iostream>

using namespace std;

int main ()
{

    float nota1, nota2, nota3, nota4, nota5, media1, media2, media3, media4, mediatotal;
    string nome;

    cout << "PROGRAMA PARA CALCULAR A MEDIA ANUAL." <<endl;
    cout << "" << endl;
    
    cout <<"PRIMEIRA AVALIACAO:" << endl;
    cout << "INSIRA AQUI O NOME DO ALUNO: ";
    scanf ("%s", &nome);
    cout << "" << endl;
    
    printf("Digite a nota de Portugues: ");
    scanf("%f", &nota1);
    printf("Digite a nota de Matematica: ");
    scanf("%f", &nota2);
    printf("Digite a nota de Ciencias: ");
    scanf("%f", &nota3);
    printf("Digite a nota de Historia: ");
    scanf("%f", &nota4);
    printf("Digite a nota de Geografia: ");
    scanf("%f", &nota5);
    cout << "" << endl;

    media1 = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    printf ("A MEDIA DA PRIMEIRA AVALIACAO E: %f \n", media1);

    cout <<"SEGUNDA AVALIACAO: \n";
    cout << "" << endl;

    printf("Digite a nota de Portugues: ");
    scanf("%f", &nota1);
    printf("Digite a nota de Matematica: ");
    scanf("%f", &nota2);
    printf("Digite a nota de Ciencias: ");
    scanf("%f", &nota3);
    printf("Digite a nota de Historia: ");
    scanf("%f", &nota4);
    printf("Digite a nota de Geografia: ");
    scanf("%f", &nota5);
    cout << "" << endl;

    media2 = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    printf ("A MEDIA DA SEGUNDA AVALIACAO E: %f \n", media2);

    cout <<"TERCEIRA AVALIACAO: \n";
    cout << "" << endl;

    printf("Digite a nota de Portugues: ");
    scanf("%f", &nota1);
    printf("Digite a nota de Matematica: ");
    scanf("%f", &nota2);
    printf("Digite a nota de Ciencias: ");
    scanf("%f", &nota3);
    printf("Digite a nota de Historia: ");
    scanf("%f", &nota4);
    printf("Digite a nota de Geografia: ");
    scanf("%f", &nota5);
    cout << "" << endl;

    media3 = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    printf ("A MEDIA DA TERCEIRA AVALIACAO E: %f \n", media3);

    cout <<"QUARTA AVALIACAO: \n";
    cout << "" << endl;

    printf("Digite a nota de Portugues: ");
    scanf("%f", &nota1);
    printf("Digite a nota de Matematica: ");
    scanf("%f", &nota2);
    printf("Digite a nota de Ciencias: ");
    scanf("%f", &nota3);
    printf("Digite a nota de Historia: ");
    scanf("%f", &nota4);
    printf("Digite a nota de Geografia: ");
    scanf("%f", &nota5);
    cout << "" << endl;
    
    media4 = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;

    printf ("A MEDIA DA QUARTA AVALIACAO E: %f \n", media4);
    cout << "" << endl;

    cout << "RESULTADO DAS MEDIAS ANUAIS: \n";
    cout << "" << endl;

    printf ("NOME DO ALUNO: %s \n", nome);
    cout << "" << endl;

    printf ("MEDIA PRIMEIRA AVALIACAO: %f \n", media1);
    printf ("MEDIA SEGUNDA AVALIACAO: %f \n", media2);
    printf ("MEDIA TERCEIRA AVALIACAO: %f \n", media3);
    printf ("MEDIA QUARTA AVALIACAO: %f \n", media4);
    cout << "" << endl;
    
    mediatotal = (media1 + media2 + media3 + media4) / 4;

    printf ("MEDIA TOTAL ANUAL E: %f \n", mediatotal);

    system("pause");
    return 0;
}