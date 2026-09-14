# Estudos em Linguagem C

Repositório dedicado ao armazenamento, organização e prática de conceitos, exercícios e pequenos projetos desenvolvidos durante os estudos da linguagem **C**.

---

## Ambiente de Desenvolvimento

* **Sistema Operacional:** Linux Mint (Cinnamon)
* **IDE / Editor:** Visual Studio Code (VS Code)
* **Compilador:** `gcc` (GNU Compiler Collection)
* **Debugger:** `gdb` (GNU Debugger)

---

## Configuração do Ambiente no Linux Mint

### 1. Dependências do Sistema

Para compilar e depurar código C no Linux Mint, abra o terminal (`Ctrl + Alt + T`) e garanta que as ferramentas essenciais e o VS Code estão instalados:

```bash
# Atualiza os pacotes e instala o compilador gcc, gdb e utilitários
sudo apt update
sudo apt install build-essential gdb code -y

```

### 2. Extensões Obrigatórias no VS Code

Abra o VS Code (`Ctrl + Shift + X`) e instale:

* **C/C++** (Microsoft)
* **Code Runner**

---

## Como Abrir e Rodar no VS Code

### 1. Abrindo o Repositório

No terminal do Linux Mint, navegue até a pasta do projeto e abra diretamente no VS Code:

```bash
cd caminho/para/estudos-c
code .

```

---

### 2. Compilando e Executando os Arquivos `.c`

#### Opção A: Pelo Terminal Integrado do VS Code (Recomendado)

Abra o terminal integrado no VS Code com `Ctrl + '` (ou `Ctrl + Shift + '`):

```bash
# Compilar um arquivo específico (ex: exercicio1.c)
gcc -Wall exercicio1.c -o exercicio1

# Executar o programa gerado
./exercicio1

```

> A flag `-Wall` ativa todos os alertas do compilador, ajudando a identificar boas práticas e vazamentos de memória logo no desenvolvimento.

#### Opção B: Usando a Configuração Automática do VS Code (`F5`)

1. Abra qualquer arquivo `.c` (exemplo: `main.c`).
2. Pressione **`F5`** ou vá no menu superior em **Run > Start Debugging**.
3. Selecione a opção **C++ (GDB/LLDB)** e escolha **gcc - Build and debug active file**.

---

## Organização do Repositório

```text

├── 01-tipos-operadores/ # Variáveis, tipos de dados e operadores
├── 02-entrada-saida/    # Entrada e saída de dados (printf/scanf)
├── 03-decisao/          # if, else, switch
├── 04-repeticao/        # for, while, do-while
├── 05-vetores-matrizes/ # Arrays unidimensionais e bidimensionais
├── main.c               # Arquivo principal para anotações rápidas, rascunhos e testes pontuais
├── .gitignore           # Arquivo de regras para evitar o envio de executáveis e arquivos temporários
└── README.md            # Documentação do repositório

```

> **Nota:** ao compilar qualquer arquivo `.c` (ex: `gcc -Wall main.c -o main` ou `gcc -Wall exercicios.c -o exercicios`), é gerado um executável binário correspondente. Esses executáveis não são versionados no Git (ver `.gitignore`) e podem ser apagados e regerados a qualquer momento.

---

## Comandos Úteis no Terminal

```bash
# Limpar executáveis gerados na pasta atual
rm -f *.out *.exe exercicio

# Verificar vazamento de memória com Valgrind (opcional)
sudo apt install valgrind -y
valgrind --leak-check=full ./exercicio

```