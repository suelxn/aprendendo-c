# Tipos e Operadores

## Variáveis

Uma variável é um espaço de memória nomeado que guarda um valor. Em C, toda variável precisa ser declarada com um **tipo** antes de ser usada:

```c
int idade = 25;
```

## Tipos de Dados

| Tipo     | Armazena                           | Quando usar                                        |
|----------|------------------------------------|----------------------------------------------------|
| `int`    | Números inteiros                   | Contagens, índices, idades, quantidades            |
| `float`  | Números decimais (precisão simples)| Valores decimais onde não é preciso alta precisão  |
| `double` | Números decimais (precisão dupla)  | Cálculos que exigem mais precisão (ex: científicos)|
| `char`   | Um único caractere                 | Letras, símbolos, valores booleanos simples (0/1)  |

> **Dica:** use `float`/`double` para representar quantias com casas decimais; use `int` sempre que o valor for inteiro, pois é mais leve e evita erros de arredondamento.

## Operadores

### Aritméticos
`+`, `-`, `*`, `/`, `%`
Usados para cálculos matemáticos. O `%` (módulo) retorna o resto da divisão — útil para verificar paridade (`n % 2 == 0`) ou ciclos.

### Relacionais
`==`, `!=`, `>`, `<`, `>=`, `<=`
Comparam dois valores e retornam `1` (verdadeiro) ou `0` (falso). Usados em condições (`if`, `while`).

### Lógicos
`&&` (E), `||` (OU), `!` (NÃO)
Combinam ou invertem condições booleanas. Úteis quando é preciso testar múltiplas condições ao mesmo tempo.

## Resumo rápido

- Use **tipos** para definir que tipo de dado uma variável vai guardar.
- Use **operadores aritméticos** para fazer cálculos.
- Use **operadores relacionais** para comparar valores.
- Use **operadores lógicos** para combinar condições.
