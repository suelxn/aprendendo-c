# Estudos em Linguagem C

Repositório dedicado ao armazenamento, organização e prática de conceitos, exercícios e pequenos projetos desenvolvidos durante os estudos da linguagem **C**.

---

## Ambiente de Desenvolvimento

* **Sistemas Operacionais:** Linux Mint (Cinnamon) & Windows 11
* **IDE / Editor:** Visual Studio Code (VS Code)
* **Compilador:** `gcc` (GNU Compiler Collection) — via `build-essential` no Linux Mint e via MSYS2 (UCRT64) no Windows 11
* **Debugger:** `gdb` (GNU Debugger)
* **Terminal:** Bash no Linux Mint; PowerShell (ou o terminal integrado do VS Code) no Windows 11

---

## Configuração do Ambiente no Linux Mint

### Dependências do Sistema

Para compilar e depurar código C no Linux Mint, abra o terminal (`Ctrl + Alt + T`) e garanta que as ferramentas essenciais e o VS Code estão instalados:

```bash
# Atualiza os pacotes e instala o compilador gcc, gdb e utilitários
sudo apt update
sudo apt install build-essential gdb code -y

# Confere se o compilador está disponível
gcc --version
gdb --version
```

---

## Configuração do Ambiente no Windows 11

### Dependências do Sistema

Abra o **PowerShell** (menu Iniciar → digite `PowerShell`) para os comandos `winget` abaixo.

#### 1. Instalar o MSYS2

```powershell
winget install MSYS2.MSYS2
```

Por padrão, o MSYS2 é instalado em `C:\msys64`.

#### 2. Instalar o GCC e o GDB pelo MSYS2

1. Abra o **MSYS2** pelo menu Iniciar.
2. No terminal do MSYS2, execute o comando abaixo para instalar o GCC (compilador de C) e o GDB (depurador):

    ```bash
    pacman -S --noconfirm mingw-w64-ucrt-x86_64-gcc mingw-w64-ucrt-x86_64-gdb
    ```

#### 3. Adicionar o compilador ao PATH

1. Pesquise por **"Editar as variáveis de ambiente do sistema"** no menu Iniciar e clique em **Variáveis de Ambiente**.
2. Em **Variáveis de usuário**, selecione `Path` e clique em **Editar**.
3. Clique em **Novo** e adicione o caminho:

    ```text
    C:\msys64\ucrt64\bin
    ```

4. Confirme em **OK** nas janelas abertas.

#### 4. Verificar a instalação

> As variáveis de ambiente só são carregadas em terminais novos. Feche e abra o PowerShell (e o VS Code, se estiver aberto) antes de testar.

```powershell
gcc --version
gdb --version
```

Se algum dos comandos não for reconhecido, confira se o caminho `C:\msys64\ucrt64\bin` foi adicionado corretamente ao `Path`.

---

## Extensões Obrigatórias no VS Code

Abra o VS Code (`Ctrl + Shift + X`) e instale, em ambos os sistemas:

* **C/C++** (Microsoft)
* **Code Runner**

---

## Como Abrir e Rodar no VS Code

### 1. Abrindo o Repositório

No Linux Mint, navegue até a pasta do projeto e abra diretamente no VS Code:

```bash
cd caminho/para/aprendendo-c
code .
```

No Windows 11, abra o PowerShell na pasta do projeto e rode:

```powershell
cd caminho\para\aprendendo-c
code .
```

> Se o comando `code` não for reconhecido, abra o VS Code e use **File → Open Folder** para selecionar a pasta do projeto.

---

### 2. Compilando e Executando os Arquivos `.c`

#### Opção A: Pelo Terminal Integrado do VS Code (Recomendado)

Abra o terminal integrado no VS Code com `Ctrl + '` (ou `Ctrl + Shift + '`).

**Linux Mint:**

```bash
# Compilar um arquivo específico (ex: exercicio1.c)
gcc -Wall exercicio1.c -o exercicio1

# Executar o programa gerado
./exercicio1
```

**Windows 11 (PowerShell):**

```powershell
# Compilar um arquivo específico (ex: exercicio1.c); o executável gerado terá a extensão .exe
gcc -Wall exercicio1.c -o exercicio1

# Executar o programa gerado
.\exercicio1.exe
```

> A flag `-Wall` ativa todos os alertas do compilador, ajudando a identificar boas práticas e vazamentos de memória logo no desenvolvimento.

#### Opção B: Usando a Configuração Automática do VS Code (`F5`)

1. Abra qualquer arquivo `.c` (exemplo: `main.c`).
2. Pressione **`F5`** ou vá no menu superior em **Run > Start Debugging**.
3. Selecione a opção **C++ (GDB/LLDB)** e escolha **gcc - Build and debug active file**.

Esse fluxo é o mesmo nos dois sistemas, desde que o `gcc` e o `gdb` estejam no PATH (ver as seções de instalação acima).

---

## Organização do Repositório

```text

├── 01-tipos-operadores/  # Variáveis, tipos de dados e operadores
├── 02-entrada-saida/     # Entrada e saída de dados (printf/scanf)
├── 03-decisao/           # if, else, switch
├── 04-repeticao/         # for, while, do-while
├── 05-vetores-matrizes/  # Arrays unidimensionais e bidimensionais
├── desafios-01/          # 30 Exercícios de fundamentos básicos
│   ├── 01-antecessor-sucessor/
│   ├── 02-dobro-triplo-metade/
│   ├── ...
│   └── 13-contagem-regressiva/
├── desafios-02/          # 20 Exercícios aplicados a cenários do mundo real
├── sistema_pagamento/    # Mini-projeto de exemplo sobre modularização (ver seção abaixo)
├── aula.c                # Anotações e códigos de apoio usados durante as aulas
├── estrutura-base.c      # Modelo/esqueleto inicial para começar um novo exercício
├── main.c                # Arquivo principal para anotações rápidas, rascunhos e testes pontuais
├── .gitattributes        # Padroniza o comportamento do Git entre diferentes sistemas operacionais (Windows 11 e Linux).
├── .gitignore            # Arquivo de regras para evitar o envio de executáveis e arquivos temporários
└── README.md             # Documentação do repositório

```

> **Nota:** ao compilar qualquer arquivo `.c` (ex: `gcc -Wall main.c -o main` ou `gcc -Wall exercicios.c -o exercicios`), é gerado um executável binário correspondente. No Windows, esse executável recebe a extensão `.exe`. Esses executáveis não são versionados no Git (ver `.gitignore`) e podem ser apagados e regerados a qualquer momento.

---

## Modularização: `sistema_pagamento/`

A pasta `sistema_pagamento/` é um exemplo de como separar um programa em **módulos**, em vez de colocar tudo em um único arquivo `.c`. A ideia é dividir responsabilidades:

```text

sistema_pagamento/
├── main.c           # Ponto de entrada: só cuida da interação com o usuário
│                    # (ler dados, chamar as funções e exibir o resultado)
├── pagamento.h      # Interface do módulo: declara os protótipos das funções,
│                    # servindo de "contrato" entre main.c e pagamento.c
└── pagamento.c      # Implementação do módulo: contém a lógica de negócio
                     # (cálculo de desconto, cálculo do total, etc.)

```

Essa separação entre **interface (`.h`)** e **implementação (`.c`)** é a base da modularização em C: `main.c` conhece apenas as funções declaradas em `pagamento.h`, sem precisar saber como elas foram implementadas. Isso facilita manutenção, reuso e testes de cada módulo isoladamente.

Para compilar um projeto com múltiplos arquivos como este, é preciso incluir todos os `.c` envolvidos no comando do `gcc`:

**Linux Mint:**

```bash
gcc -Wall sistema_pagamento/main.c sistema_pagamento/pagamento.c -o sistema_pagamento/sistema_pagamento
./sistema_pagamento/sistema_pagamento
```

**Windows 11 (PowerShell):**

```powershell
gcc -Wall sistema_pagamento/main.c sistema_pagamento/pagamento.c -o sistema_pagamento/sistema_pagamento
.\sistema_pagamento\sistema_pagamento.exe
```

---

## Comandos Úteis no Terminal

**Linux Mint (Bash):**

```bash
# Limpar executáveis gerados na pasta atual
rm -f *.out *.exe exercicio

# Verificar vazamento de memória com Valgrind (opcional, somente Linux)
sudo apt install valgrind -y
valgrind --leak-check=full ./exercicio
```

**Windows 11 (PowerShell):**

```powershell
# Limpar executáveis gerados na pasta atual
Remove-Item *.exe -ErrorAction SilentlyContinue
```

> O Valgrind não está disponível para Windows, então a verificação de vazamento de memória com ele só se aplica ao Linux Mint.
