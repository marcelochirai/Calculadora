// CalculatorTutorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Calculo.h"
/*
As instruções #include permitem que você consulte a código localizado em outros arquivos.
Às vezes, você poderá ver um nome de arquivo delimitado por colchetes angulares (<>); 
outras vezes, entre aspas (" "). Em geral, os colchetes angulares são usados ao fazer referência 
à biblioteca padrão C++, 
enquanto as aspas são usadas para outros arquivos.
*/

using namespace std;
/*A linha using namespace std; informa ao compilador para esperar que coisas da Biblioteca Padrão C++ 
sejam usadas nesse arquivo. 
Sem essa linha, cada palavra-chave da biblioteca precisaria ser precedida por um std:: para indicar seu escopo. 
Por exemplo, sem essa linha, cada referência a cout precisaria ser escrito como std::cout. 
A instrução using é adicionada para fazer com que o código tenha uma aparência mais limpa.*/

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';

    /*Algumas variáveis iniciais x, y, oper e result são declaradas para armazenar o primeiro número, 
    o segundo número, o operador e o resultado final, respectivamente. 
    É sempre uma boa prática fornecer alguns valores iniciais para evitar um comportamento indefinido, 
    o que é feito aqui.*/
    
    cout << "Calculator Console Application" << endl << endl;
    /*A palavra-chave cout é usada para imprimir a saída padrão em C++. 
    O operador << informa ao compilador para enviar o que estiver à direita para a saída padrão.
    A palavra-chave endl é como a tecla Enter; encerra a linha e move o cursor para a próxima linha. 
    É uma melhor prática para colocar um \n dentro da cadeia de caracteres (contido por "") para fazer a mesma coisa, 
    uma vez que endl sempre libera o buffer e pode prejudicar o desempenho do programa, 
    mas já que esse é um aplicativo muito pequeno, endl é usado em vez disso para melhor legibilidade.*/
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

    Calculo c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Division by 0 exception" << endl;
            continue;
        }
        else
        {
            result = c.Calculate(x, oper, y);
        }
        cout << "Result is: " << result << endl;
    }
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
