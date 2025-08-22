# Guia Completo de Estudos - Linguagem C
## Do Básico ao Avançado com Exercícios

---

## **NÍVEL 1: FUNDAMENTOS BÁSICOS**

### **1.1 Introdução e Configuração**
- **Teoria:**
- História da linguagem C

  ## 🎯 **ORIGENS E ANTECEDENTES (1960-1970)**

  ### **As Raízes Históricas**
  A história técnica da linguagem C começou com a linguagem ALGOL 60, definida em 1960. ALGOL era uma linguagem de alto nível, que permitia ao programador trabalhar "longe da máquina", sem se preocupar com os aspectos de como cada comando ou dado era armazenado ou processado.

  ### **Predecessores Diretos**
  **ALGOL 60 (1960)**
  - Primeira linguagem de alto nível influente
  - Introduziu conceitos de estruturas de controle
  - Base para muitas linguagens posteriores

  **CPL - Combined Programming Language (1963)**
  - Desenvolvida na Universidade de Cambridge
  - Muito complexa para uso prático
  - Introduziu muitos conceitos que viriam para C

  **BCPL - Basic Combined Programming Language (1967)**
  - Simplificação do CPL por Martin Richards
  - Linguagem sem tipos (typeless)
  - Influência direta no desenvolvimento do B

  **Linguagem B (1970)**
  - Criada por Ken Thompson nos Bell Labs
  - Derivada do BCPL
  - Usada no desenvolvimento inicial do UNIX
  - Precursora imedi

  - Características da linguagem
  
  - Instalação do compilador (GCC, Code::Blocks, Dev-C++)
  - Primeiro programa "Hello World"
  - Estrutura básica de um programa

- **Exercícios:**
  1. Instalar um compilador C no teu sistema
  2. Escrever e executar "Hello World"
  3. Criar um programa que exibe teu nome e idade
  4. Programa que exibe uma mensagem em múltiplas linhas
  5. Criar comentários explicativos em código

### **1.2 Variáveis e Tipos de Dados**
- **Teoria:**
  - Tipos básicos: int, float, double, char
  - Declaração e inicialização de variáveis
  - Constantes (#define e const)
  - Modificadores: signed, unsigned, short, long
  - Tamanho dos tipos (sizeof)

- **Exercícios:**
  1. Declarar variáveis de diferentes tipos
  2. Programa que mostra o tamanho de cada tipo
  3. Calcular área de um retângulo com float
  4. Programa que trabalha com caracteres
  5. Usar constantes para definir valores fixos

### **1.3 Operadores**
- **Teoria:**
  - Operadores aritméticos (+, -, *, /, %)
  - Operadores de atribuição (=, +=, -=, etc.)
  - Operadores de comparação (==, !=, <, >, <=, >=)
  - Operadores lógicos (&&, ||, !)
  - Operadores de incremento/decremento (++, --)
  - Precedência de operadores

- **Exercícios:**
  1. Calculadora básica (soma, subtração, multiplicação, divisão)
  2. Programa que verifica se um número é par ou ímpar
  3. Calcular média de três notas
  4. Programa que converte Celsius para Fahrenheit
  5. Operações com resto da divisão (%)

### **1.4 Entrada e Saída**
- **Teoria:**
  - printf() e suas especificações de formato
  - scanf() para entrada de dados
  - Limpeza de buffer
  - getchar() e putchar()

- **Exercícios:**
  1. Programa interativo que pede nome e idade
  2. Calculadora que recebe dois números do utilizador
  3. Programa que formata saída com precisão decimal
  4. Ler e exibir caracteres individualmente
  5. Programa que lê múltiplos valores numa linha

---

## **NÍVEL 2: ESTRUTURAS DE CONTROLE**

### **2.1 Estruturas Condicionais**
- **Teoria:**
  - Comando if e if-else
  - if aninhados (nested if)
  - Comando switch-case
  - Operador ternário (? :)

- **Exercícios:**
  1. Programa que verifica se um número é positivo, negativo ou zero
  2. Calculadora usando switch-case
  3. Sistema de notas (A, B, C, D, F)
  4. Programa que verifica se um ano é bissexto
  5. Menu interativo com opções
  6. Verificar o maior entre três números
  7. Programa que classifica triângulos
  8. Sistema simples de login
  9. Conversor de unidades múltiplas
  10. Programa que verifica se um número é primo

### **2.2 Estruturas de Repetição**
- **Teoria:**
  - Loop for
  - Loop while
  - Loop do-while
  - Comandos break e continue
  - Loops aninhados

- **Exercícios:**
  1. Imprimir números de 1 a 100
  2. Calcular factorial de um número
  3. Tabuada de multiplicação
  4. Soma de números pares de 1 a 100
  5. Programa que conta dígitos de um número
  6. Sequência de Fibonacci
  7. Jogo de adivinhação de números
  8. Programa que inverte um número
  9. Calcular potência usando loops
  10. Imprimir padrões de estrelas (triângulos, losangos)

---

## **NÍVEL 3: ARRAYS E STRINGS**

### **3.1 Arrays Unidimensionais**
- **Teoria:**
  - Declaração e inicialização de arrays
  - Acesso aos elementos
  - Percorrer arrays com loops
  - Tamanho de arrays

- **Exercícios:**
  1. Programa que lê e exibe 10 números
  2. Encontrar o maior elemento num array
  3. Calcular média de valores num array
  4. Ordenação simples (bubble sort)
  5. Busca linear num array
  6. Contar elementos pares e ímpares
  7. Inverter ordem dos elementos
  8. Remover duplicatas de um array
  9. Encontrar segundo maior elemento
  10. Rotacionar elementos do array

### **3.2 Arrays Multidimensionais**
- **Teoria:**
  - Arrays bidimensionais (matrizes)
  - Inicialização de matrizes
  - Percorrer matrizes com loops aninhados
  - Arrays de mais dimensões

- **Exercícios:**
  1. Ler e exibir uma matriz 3x3
  2. Soma de duas matrizes
  3. Multiplicação de matrizes
  4. Transposta de uma matriz
  5. Encontrar elemento numa matriz
  6. Diagonal principal de uma matriz
  7. Matriz identidade
  8. Jogo da Velha (Tic Tac Toe)
  9. Determinar se matriz é simétrica
  10. Busca em matriz ordenada

### **3.3 Strings**
- **Teoria:**
  - Conceito de string em C
  - Declaração e inicialização
  - Funções da biblioteca string.h
  - Leitura de strings

- **Exercícios:**
  1. Programa que conta caracteres numa string
  2. Verificar se string é palíndromo
  3. Contar vogais e consoantes
  4. Inverter uma string
  5. Comparar duas strings
  6. Substituir caracteres numa string
  7. Contar palavras numa frase
  8. Converter maiúsculas/minúsculas
  9. Encontrar substring numa string
  10. Programa que remove espaços extras

---

## **NÍVEL 4: FUNÇÕES**

### **4.1 Fundamentos de Funções**
- **Teoria:**
  - Definição e declaração de funções
  - Parâmetros e argumentos
  - Valor de retorno
  - Escopo de variáveis
  - Função main()

- **Exercícios:**
  1. Função que calcula quadrado de um número
  2. Função que verifica se número é par
  3. Função que calcula factorial
  4. Função que encontra maior entre dois números
  5. Função que calcula potência
  6. Função que verifica número primo
  7. Função que calcula área de formas geométricas
  8. Função que converte temperatura
  9. Função que gera números aleatórios
  10. Sistema de menu com funções

### **4.2 Conceitos Avançados de Funções**
- **Teoria:**
  - Passagem por valor vs passagem por referência
  - Variáveis locais vs globais
  - Funções recursivas
  - Protótipos de funções
  - Função inline

- **Exercícios:**
  1. Função recursiva para factorial
  2. Fibonacci recursivo vs iterativo
  3. Torre de Hanói
  4. Busca binária recursiva
  5. Função que modifica array (passagem por referência)
  6. Calcular GCD usando recursão
  7. Função que conta dígitos recursivamente
  8. Ordenação quicksort recursiva
  9. Função que verifica palíndromo recursivamente
  10. Sistema de calculadora com múltiplas funções

---

## **NÍVEL 5: PONTEIROS**

### **5.1 Introdução aos Ponteiros**
- **Teoria:**
  - Conceito de ponteiro
  - Declaração de ponteiros
  - Operadores & e *
  - Inicialização de ponteiros
  - Ponteiros nulos

- **Exercícios:**
  1. Programa básico com declaração de ponteiros
  2. Trocar valores de duas variáveis usando ponteiros
  3. Função que retorna múltiplos valores via ponteiros
  4. Programa que mostra endereços de memória
  5. Ponteiros para diferentes tipos de dados
  6. Comparação entre variável e seu ponteiro
  7. Função que encontra maior elemento via ponteiro
  8. Programa com ponteiro para ponteiro
  9. Array de ponteiros simples
  10. Função que modifica string via ponteiro

### **5.2 Ponteiros Avançados**
- **Teoria:**
  - Ponteiros e arrays
  - Aritmética de ponteiros
  - Ponteiros para strings
  - Ponteiros para funções
  - Arrays de ponteiros

- **Exercícios:**
  1. Percorrer array usando aritmética de ponteiros
  2. Função que ordena array usando ponteiros
  3. Programa com ponteiros para strings
  4. Implementar strlen() usando ponteiros
  5. Função que copia string usando ponteiros
  6. Array de ponteiros para strings
  7. Ponteiro para função (calculadora)
  8. Programa que compara strings com ponteiros
  9. Função que remove caracteres de string
  10. Sistema de gestão de strings dinâmicas

---

## **NÍVEL 6: GESTÃO DE MEMÓRIA**

### **6.1 Alocação Dinâmica**
- **Teoria:**
  - malloc(), calloc(), realloc(), free()
  - Diferença entre alocação estática e dinâmica
  - Vazamentos de memória
  - Dangling pointers

- **Exercícios:**
  1. Programa que aloca array dinamicamente
  2. Redimensionar array durante execução
  3. Alocar memória para string de tamanho variável
  4. Programa que detecta vazamentos básicos
  5. Sistema que gere lista de números dinamicamente
  6. Alocar matriz bidimensional dinamicamente
  7. Programa que concatena strings dinamicamente
  8. Sistema de buffer circular dinâmico
  9. Implementar vetor dinâmico (como vector do C++)
  10. Programa de gestão de memória com estatísticas

### **6.2 Estruturas de Dados Básicas**
- **Teoria:**
  - Arrays dinâmicos
  - Listas ligadas
  - Pilhas (stacks)
  - Filas (queues)

- **Exercícios:**
  1. Implementar lista ligada simples
  2. Inserir e remover elementos da lista
  3. Implementar pilha usando array
  4. Implementar pilha usando lista ligada
  5. Implementar fila usando array circular
  6. Programa que inverte lista ligada
  7. Sistema de undo/redo usando pilhas
  8. Simulador de fila de banco
  9. Lista ligada com ordenação
  10. Sistema de navegação de histórico

---

## **NÍVEL 7: ESTRUTURAS E UNIÕES**

### **7.1 Estruturas (struct)**
- **Teoria:**
  - Definição e declaração de estruturas
  - Acesso aos membros
  - Inicialização de estruturas
  - Arrays de estruturas
  - Ponteiros para estruturas

- **Exercícios:**
  1. Estrutura para representar estudante (nome, idade, notas)
  2. Sistema de registo de funcionários
  3. Estrutura para ponto 2D/3D com operações
  4. Base de dados simples de contactos
  5. Sistema de gestão de produtos
  6. Estrutura para data com validação
  7. Sistema de gestão de biblioteca
  8. Programa de folha de pagamentos
  9. Sistema de registo académico
  10. Estrutura para números complexos com operações

### **7.2 Conceitos Avançados**
- **Teoria:**
  - Uniões (union)
  - Estruturas aninhadas
  - Bit fields
  - typedef
  - Alinhamento de memória

- **Exercícios:**
  1. Programa que demonstra diferença struct vs union
  2. Sistema com estruturas aninhadas (endereço dentro de pessoa)
  3. Programa usando bit fields para flags
  4. Sistema de tipos personalizados com typedef
  5. Programa que verifica alinhamento de memória
  6. União para converter entre tipos
  7. Sistema de configuração usando bit fields
  8. Estrutura para representar cor RGB
  9. Sistema de eventos usando uniões
  10. Programa de serialização de estruturas

---

## **NÍVEL 8: MANIPULAÇÃO DE FICHEIROS**

### **8.1 Operações Básicas com Ficheiros**
- **Teoria:**
  - fopen(), fclose(), feof()
  - Modos de abertura de ficheiros
  - Leitura: fgetc(), fgets(), fscanf()
  - Escrita: fputc(), fputs(), fprintf()

- **Exercícios:**
  1. Programa que cria e escreve num ficheiro de texto
  2. Ler conteúdo completo de um ficheiro
  3. Copiar conteúdo de um ficheiro para outro
  4. Contar linhas, palavras e caracteres num ficheiro
  5. Programa que anexa dados a ficheiro existente
  6. Sistema de log simples
  7. Programa que procura palavra num ficheiro
  8. Sistema de notas que salva em ficheiro
  9. Programa que compara dois ficheiros
  10. Sistema de backup de ficheiros de texto

### **8.2 Manipulação Avançada de Ficheiros**
- **Teoria:**
  - Ficheiros binários
  - fread(), fwrite()
  - fseek(), ftell(), rewind()
  - Tratamento de erros

- **Exercícios:**
  1. Programa que trabalha com ficheiros binários
  2. Sistema de base de dados simples em ficheiro
  3. Programa que ordena registos num ficheiro
  4. Sistema de índices para ficheiros grandes
  5. Programa de compressão básica
  6. Sistema de gestão de estudantes em ficheiro
  7. Programa que fragmenta e reconstitui ficheiros
  8. Sistema de cache para ficheiros
  9. Programa de análise estatística de ficheiros
  10. Sistema de versionamento de ficheiros simples

---

## **NÍVEL 9: TÓPICOS AVANÇADOS**

### **9.1 Preprocessador**
- **Teoria:**
  - Diretivas #define, #include, #ifdef
  - Macros com parâmetros
  - Compilação condicional
  - #pragma
  - Macros predefinidas

- **Exercícios:**
  1. Programa usando macros para constantes
  2. Macro que calcula máximo/mínimo
  3. Sistema de debug usando macros condicionais
  4. Programa com diferentes configurações usando #ifdef
  5. Macro que gera código automaticamente
  6. Sistema de logging com macros
  7. Programa com macros para operações matemáticas
  8. Sistema de assert personalizado
  9. Macro para medição de tempo de execução
  10. Sistema de configuração multi-plataforma

### **9.2 Conceitos de Sistema**
- **Teoria:**
  - Argumentos da linha de comando
  - Variáveis de ambiente
  - Códigos de retorno
  - Comunicação entre processos básica
  - Bibliotecas estáticas vs dinâmicas

- **Exercícios:**
  1. Programa que processa argumentos da linha de comando
  2. Sistema que lê variáveis de ambiente
  3. Programa que retorna códigos de erro apropriados
  4. Sistema de configuração via argumentos e ambiente
  5. Programa que executa outros programas
  6. Sistema de utilitários de linha de comando
  7. Programa de processamento de lotes
  8. Sistema de monitorização básica
  9. Programa que cria e usa biblioteca estática
  10. Sistema de deploy automático simples

---

## **NÍVEL 10: PROJETOS PRÁTICOS AVANÇADOS**

### **10.1 Projetos de Consolidação**

#### **Projeto 1: Sistema de Gestão de Biblioteca**
- Base de dados de livros, utilizadores e empréstimos
- Interface de linha de comando
- Persistência em ficheiros
- Relatórios e estatísticas

#### **Projeto 2: Jogo de Texto Avançado**
- Sistema de combate
- Inventário e equipamentos
- Save/Load de progresso
- Sistema de níveis e experiência

#### **Projeto 3: Compilador Simples**
- Lexer para tokens básicos
- Parser para expressões aritméticas
- Gerador de código simples
- Calculadora com variáveis

#### **Projeto 4: Sistema de Base de Dados Simples**
- Criar, inserir, atualizar, deletar registos
- Índices para pesquisa rápida
- Backup e restore
- Interface de consulta básica

#### **Projeto 5: Servidor HTTP Básico**
- Socket programming básico
- Servir ficheiros estáticos
- Processamento de requests GET/POST
- Log de acessos

### **10.2 Otimização e Profiling**
- **Teoria:**
  - Técnicas de otimização
  - Profiling de código
  - Análise de complexidade
  - Memory profiling

- **Exercícios:**
  1. Otimizar algoritmos de ordenação
  2. Análise de performance de diferentes implementações
  3. Programa de benchmark personalizado
  4. Otimização de uso de memória
  5. Cache-friendly programming

---

## **RECURSOS DE ESTUDO RECOMENDADOS**

### **Livros Essenciais**
1. "The C Programming Language" - Kernighan & Ritchie
2. "C Programming: A Modern Approach" - K.N. King
3. "Expert C Programming" - Peter van der Linden
4. "21st Century C" - Ben Klemens

### **Ferramentas de Desenvolvimento**
1. **Compiladores:** GCC, Clang, MSVC
2. **IDEs:** Code::Blocks, Dev-C++, CLion
3. **Editores:** VSCode, Vim, Emacs
4. **Debugging:** GDB, Valgrind
5. **Profiling:** Gprof, Callgrind

### **Plataformas de Prática**
1. LeetCode (problemas algoritmo)
2. HackerRank (C challenges)
3. Codeforces (competitive programming)
4. Project Euler (problemas matemáticos)

### **Cronograma Sugerido**
- **Semanas 1-2:** Níveis 1-2 (Fundamentos e Controle)
- **Semanas 3-4:** Níveis 3-4 (Arrays, Strings, Funções)
- **Semanas 5-6:** Níveis 5-6 (Ponteiros e Memória)
- **Semanas 7-8:** Níveis 7-8 (Estruturas e Ficheiros)
- **Semanas 9-10:** Níveis 9-10 (Avançado e Projetos)

### **Dicas de Estudo**
1. **Prática Diária:** Pelo menos 1-2 horas de código por dia
2. **Projetos Pessoais:** Aplica conceitos em projetos próprios
3. **Code Review:** Analisa código de outros programadores
4. **Debugging Skills:** Aprende a usar debuggers efetivamente
5. **Leitura de Código:** Lê código fonte de projetos open source

---

## **AVALIAÇÃO DE PROGRESSO**

### **Marcos de Aprendizagem**
- [ ] **Básico:** Consegues escrever programas simples com loops e condições
- [ ] **Intermédio:** Dominas arrays, strings e funções
- [ ] **Avançado:** Trabalhas confortavelmente com ponteiros e alocação dinâmica
- [ ] **Expert:** Implementas estruturas de dados e trabalhas com ficheiros
- [ ] **Master:** Desenvolves projetos complexos e otimizas código

### **Sinais de que estás pronto para o próximo nível:**
1. Resolves exercícios sem consultar soluções
2. Consegues explicar conceitos a outros
3. Debuggas código eficientemente
4. Escreves código limpo e bem estruturado
5. Pensar em termos de eficiência e otimização

Boa sorte nos teus estudos! Lembra-te: a programação aprende-se praticando. Resolve os exercícios, faz experimentos e não tenhas medo de cometer erros - eles fazem parte do processo de aprendizagem!