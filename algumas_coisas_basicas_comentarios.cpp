//comentário em uma linha
/*em mais de uma linha */

//include  = bibliotecas

//sqrt(x) = raíz quadrada de x
//pow(x,y) = x elevado a y
// fabs(x) = mudulo de x
//swap (x,y) = troca variaveis. exemplo de uso:  if (A < B) swap(A, B); (se A for menor que B trocar A e B)
// ! = nn for 


//cout = aparecer uma mensagem
// endl = pular linha

// usa . em float/double
//char = só um caracter, aspas simples 
// string = sequencia de caracter, entre aspas
// bool valor lógico

//cin = recebe os dados
// cin >>
// cout <<
// != diferente

// char x[11] = palavra/frase com 11 caracteres (espaço nn dá certo, pega somente a primeira parte) (array = variavel indexada, tem haver com posição
//cin.getline(variavel, n° de caracteres) = nome composto
// dupla presição = double
// divisão com inteiros = o valor do resultado é inteiro então tem que colocar "." pra ir pra decimal, exemplo 1./3
// cuidado com getline, se tiver um cin antes do getline usar cin.ignore()
// != diferença

/*switch = switch (VARIAVEL) {
 case VALOR1 : comandos 
 break;
 case VALOR2 : comandos;
 break;
 default : comandos // se nenhuma opção for selecionada 
 }*/
    
// maior, menor = if/else
// strlen(string) =tamanho da string
// strcmp(string1 , string2) = compara string
//strcpy = copia string

//funções de repetição:
// for = repetição de trechos em um determinado número de vezes
// for (inicialização; condição; comando + incremento
/* Variável de inicialização: comando de atribuição que inicia uma variável que faz o controle do laço.

Condição: expressão usada que determinará o final do laço.

Incremento: define a variável de controle e muda a cada passada no laço.*/
/*for (i = 1 ; i <=3 ; i ++) i recebe o valor 1, o for parará de executar quando i for maior
 ou igual a 3 e cada vez que o laço for executado será somado 1 no i */
 
//N cin >> N foi entrado o N vezes

//ABREVIAÇÔES:
/* contador ++ = contador +1 
total += numero = total + numero (vale qualquer operação só trocar o sinal */

//while = tipo if/else só que nesse caso ele repete alguma coisa caso a condição seja verdadeira os comandos internos eram executados.
// do while= primeiro se executa os comandos e depois verifica-se se a condição é verdadeira, caso seja os comandos são novamente executados.

//matrizes = variáveis indexadas homogêneas bidimensionais (matrizes). Exemplo : int matriz[10][5] (uma matriz de tipo int com 10 linhas e 5 colunas)
// trabalha com i e j (em vez de só i como no vetor)

//struct = campo, posição e vetor. Salva no campo de uma variavel (variavel.campo)


// exemplo de como fazer struct segundo o chatgpt:
/*Passo 1: Definir a estrutura (struct)

Comece escrevendo a palavra-chave struct, seguida pelo nome que você deseja dar à sua estrutura.
Dentro das chaves { }, defina os membros da estrutura, indicando seus tipos e nomes.

Exemplo:


struct Pessoa {
    std::string nome;
    int idade;
    float altura;
};

Passo 2: Criar um objeto da estrutura

Após definir a estrutura, você pode criar objetos dessa estrutura.
Declare uma variável do tipo da estrutura e forneça um nome para o objeto.

Exemplo:

Pessoa pessoa1;

Passo 3: Acessar e atribuir valores aos membros da estrutura

Use o operador de ponto (.) para acessar os membros da estrutura e atribuir valores a eles.

Exemplo:

pessoa1.nome = "João";
pessoa1.idade = 25;
pessoa1.altura = 1.75;

Passo 4: Acessar os membros da estrutura e utilizá-los

Use o operador de ponto (.) novamente para acessar os membros da estrutura e utilizar seus valores.

Exemplo:

std::cout << "Nome: " << pessoa1.nome << std::endl;
std::cout << "Idade: " << pessoa1.idade << std::endl;
std::cout << "Altura: " << pessoa1.altura << std::endl;

Seguindo esses passos, você pode criar e utilizar uma estrutura em C++. Lembre-se de que os membros da estrutura
 podem ser acessados e modificados usando o operador de ponto (.), seguido pelo nome do membro.

 Funções: int NOME_FUNÇÃO (variavel)
 fecha a função igual o int main, funçao antes da int main(aí nn precisa de protipo) 
 
 Como fazer função (segundo o chatgpt):
 
 Certamente! Vou explicar o passo a passo para criar uma função em C++ e discutir o que pode ser incluído dentro dela.

Passo a passo para criar uma função em C++:

1. Protótipo da função: No início do seu código, você precisa fornecer um protótipo da função, que inclui o tipo de retorno da função, o nome da função e os parâmetros que ela recebe. Por exemplo:

```cpp
int soma(int a, int b); // Protótipo da função soma
```

2. Definição da função: Em uma parte posterior do seu código, você precisa definir a implementação da função. Isso envolve escrever o corpo da função, que contém as instruções a serem executadas quando a função for chamada. Por exemplo:

```cpp
int soma(int a, int b) {
    int resultado = a + b;
    return resultado;
}
```

3. Chamando a função: Depois de definir a função, você pode chamá-la em qualquer lugar do seu código. Para chamar uma função, você usa o nome da função seguido pelos parâmetros entre parênteses. Por exemplo:

```cpp
int resultado = soma(3, 4); // Chama a função soma com os argumentos 3 e 4
```

4. Retorno da função: Quando a função é chamada, ela executa as instruções dentro do seu corpo e pode retornar um valor usando a palavra-chave `return`. O valor retornado pode ser armazenado em uma variável ou usado diretamente em uma expressão.

O que pode estar dentro de uma função em C++:

Dentro de uma função em C++, você pode incluir qualquer código válido da linguagem. Isso pode incluir declaração e inicialização de variáveis, cálculos, estruturas de controle como loops (por exemplo, `for`, `while`) e condicionais (por exemplo, `if`, `else`), chamadas de outras funções, manipulação de estruturas de dados, entrada e saída de dados, e muito mais.

As funções são usadas para organizar o código em unidades lógicas e modulares, permitindo reutilização e melhor legibilidade do código. Elas podem receber parâmetros como entrada, processar esses parâmetros e retornar um valor de saída.

Além disso, você também pode criar funções que não retornam nenhum valor (void) e são usadas apenas para executar determinadas tarefas sem produzir um resultado específico.

É importante observar que as funções podem ser definidas tanto dentro quanto fora de classes em C++.

Espero que isso tenha esclarecido como criar e utilizar funções em C++. Se você tiver mais dúvidas, sinta-se à vontade para perguntar!
 */