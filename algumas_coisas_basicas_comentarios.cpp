//coment�rio em uma linha
/*em mais de uma linha */

//include  = bibliotecas

//sqrt(x) = ra�z quadrada de x
//pow(x,y) = x elevado a y
// fabs(x) = mudulo de x
//swap (x,y) = troca variaveis. exemplo de uso:  if (A < B) swap(A, B); (se A for menor que B trocar A e B)
// ! = nn for 


//cout = aparecer uma mensagem
// endl = pular linha

// usa . em float/double
//char = s� um caracter, aspas simples 
// string = sequencia de caracter, entre aspas
// bool valor l�gico

//cin = recebe os dados
// cin >>
// cout <<
// != diferente

// char x[11] = palavra/frase com 11 caracteres (espa�o nn d� certo, pega somente a primeira parte) (array = variavel indexada, tem haver com posi��o
//cin.getline(variavel, n� de caracteres) = nome composto
// dupla presi��o = double
// divis�o com inteiros = o valor do resultado � inteiro ent�o tem que colocar "." pra ir pra decimal, exemplo 1./3
// cuidado com getline, se tiver um cin antes do getline usar cin.ignore()
// != diferen�a

/*switch = switch (VARIAVEL) {
 case VALOR1 : comandos 
 break;
 case VALOR2 : comandos;
 break;
 default : comandos // se nenhuma op��o for selecionada 
 }*/
    
// maior, menor = if/else
// strlen(string) =tamanho da string
// strcmp(string1 , string2) = compara string
//strcpy = copia string

//fun��es de repeti��o:
// for = repeti��o de trechos em um determinado n�mero de vezes
// for (inicializa��o; condi��o; comando + incremento
/* Vari�vel de inicializa��o: comando de atribui��o que inicia uma vari�vel que faz o controle do la�o.

Condi��o: express�o usada que determinar� o final do la�o.

Incremento: define a vari�vel de controle e muda a cada passada no la�o.*/
/*for (i = 1 ; i <=3 ; i ++) i recebe o valor 1, o for parar� de executar quando i for maior
 ou igual a 3 e cada vez que o la�o for executado ser� somado 1 no i */
 
//N cin >> N foi entrado o N vezes

//ABREVIA��ES:
/* contador ++ = contador +1 
total += numero = total + numero (vale qualquer opera��o s� trocar o sinal */

//while = tipo if/else s� que nesse caso ele repete alguma coisa caso a condi��o seja verdadeira os comandos internos eram executados.
// do while= primeiro se executa os comandos e depois verifica-se se a condi��o � verdadeira, caso seja os comandos s�o novamente executados.

//matrizes = vari�veis indexadas homog�neas bidimensionais (matrizes). Exemplo : int matriz[10][5] (uma matriz de tipo int com 10 linhas e 5 colunas)
// trabalha com i e j (em vez de s� i como no vetor)

//struct = campo, posi��o e vetor. Salva no campo de uma variavel (variavel.campo)


// exemplo de como fazer struct segundo o chatgpt:
/*Passo 1: Definir a estrutura (struct)

Comece escrevendo a palavra-chave struct, seguida pelo nome que voc� deseja dar � sua estrutura.
Dentro das chaves { }, defina os membros da estrutura, indicando seus tipos e nomes.

Exemplo:


struct Pessoa {
    std::string nome;
    int idade;
    float altura;
};

Passo 2: Criar um objeto da estrutura

Ap�s definir a estrutura, voc� pode criar objetos dessa estrutura.
Declare uma vari�vel do tipo da estrutura e forne�a um nome para o objeto.

Exemplo:

Pessoa pessoa1;

Passo 3: Acessar e atribuir valores aos membros da estrutura

Use o operador de ponto (.) para acessar os membros da estrutura e atribuir valores a eles.

Exemplo:

pessoa1.nome = "Jo�o";
pessoa1.idade = 25;
pessoa1.altura = 1.75;

Passo 4: Acessar os membros da estrutura e utiliz�-los

Use o operador de ponto (.) novamente para acessar os membros da estrutura e utilizar seus valores.

Exemplo:

std::cout << "Nome: " << pessoa1.nome << std::endl;
std::cout << "Idade: " << pessoa1.idade << std::endl;
std::cout << "Altura: " << pessoa1.altura << std::endl;

Seguindo esses passos, voc� pode criar e utilizar uma estrutura em C++. Lembre-se de que os membros da estrutura
 podem ser acessados e modificados usando o operador de ponto (.), seguido pelo nome do membro.

 Fun��es: int NOME_FUN��O (variavel)
 fecha a fun��o igual o int main, fun�ao antes da int main(a� nn precisa de protipo) 
 
 Como fazer fun��o (segundo o chatgpt):
 
 Certamente! Vou explicar o passo a passo para criar uma fun��o em C++ e discutir o que pode ser inclu�do dentro dela.

Passo a passo para criar uma fun��o em C++:

1. Prot�tipo da fun��o: No in�cio do seu c�digo, voc� precisa fornecer um prot�tipo da fun��o, que inclui o tipo de retorno da fun��o, o nome da fun��o e os par�metros que ela recebe. Por exemplo:

```cpp
int soma(int a, int b); // Prot�tipo da fun��o soma
```

2. Defini��o da fun��o: Em uma parte posterior do seu c�digo, voc� precisa definir a implementa��o da fun��o. Isso envolve escrever o corpo da fun��o, que cont�m as instru��es a serem executadas quando a fun��o for chamada. Por exemplo:

```cpp
int soma(int a, int b) {
    int resultado = a + b;
    return resultado;
}
```

3. Chamando a fun��o: Depois de definir a fun��o, voc� pode cham�-la em qualquer lugar do seu c�digo. Para chamar uma fun��o, voc� usa o nome da fun��o seguido pelos par�metros entre par�nteses. Por exemplo:

```cpp
int resultado = soma(3, 4); // Chama a fun��o soma com os argumentos 3 e 4
```

4. Retorno da fun��o: Quando a fun��o � chamada, ela executa as instru��es dentro do seu corpo e pode retornar um valor usando a palavra-chave `return`. O valor retornado pode ser armazenado em uma vari�vel ou usado diretamente em uma express�o.

O que pode estar dentro de uma fun��o em C++:

Dentro de uma fun��o em C++, voc� pode incluir qualquer c�digo v�lido da linguagem. Isso pode incluir declara��o e inicializa��o de vari�veis, c�lculos, estruturas de controle como loops (por exemplo, `for`, `while`) e condicionais (por exemplo, `if`, `else`), chamadas de outras fun��es, manipula��o de estruturas de dados, entrada e sa�da de dados, e muito mais.

As fun��es s�o usadas para organizar o c�digo em unidades l�gicas e modulares, permitindo reutiliza��o e melhor legibilidade do c�digo. Elas podem receber par�metros como entrada, processar esses par�metros e retornar um valor de sa�da.

Al�m disso, voc� tamb�m pode criar fun��es que n�o retornam nenhum valor (void) e s�o usadas apenas para executar determinadas tarefas sem produzir um resultado espec�fico.

� importante observar que as fun��es podem ser definidas tanto dentro quanto fora de classes em C++.

Espero que isso tenha esclarecido como criar e utilizar fun��es em C++. Se voc� tiver mais d�vidas, sinta-se � vontade para perguntar!
 */