listas ligadas a listas
================================================================================

As disciplinas que um aluno deve cursar são identificadas por letras. Cada uma
delas pode ter pre-requisitos. O arquivo que guarda os dados tem a seguinte 
forma:

```
a 3 b c d
b 2 e d
c 3 d e b
d 0
e 1 d
```

significando que a disciplina a só pode ser cursada depois de cursadas as 
disciplinas b, c e d; a disciplina b só pode ser cursada depois de cursadas
as disciplinas e e d; e assim por diante.

O programa deve montar a estrutura de dados depois de ler o arquivo, e em 
seguida mostar uma sequencia linear possível de disciplinas, respeitando todos
os pre-requisitos.

