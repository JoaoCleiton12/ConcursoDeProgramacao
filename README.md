# ConcursoDeProgramacao

Depois de aprender a usar vetores dinâmicos e laços de repetição no curso de Programação de Computadores, Joãozinho começou a procurar novos desafios 
e decidiu testar suas habilidades criando uma competição de programação com seus amigos.

A competição consiste em classificar e resolver um determinado número de questões de programação. O tempo de solução é um ponto importante para a competição 
e cada participante deverá preencher uma ficha durante o concurso indicando para cada questão:
      • Dificuldade da questão: valor entre 1 (muito fácil) e 5 (muito difícil)
      • Horário de início da resolução (no formato horas e minutos)
      • Horário de fim da resolução (no formato horas e minutos)
      
Ao final do concurso, Joãozinho quer mostrar aos participantes algumas estatísticas. Ajude Joãozinho escrevendo um programa que colete as informações
das fichas e apresente um sumário do concurso, como mostrado abaixo.


*****************************************************
Concurso de Programação Qual o número de participantes? 2
Qual o número de questões? 2
*****************************************************
-------------
Participante: João
-------------
Questão A
        Dificuldade: 1 Início: 9:30
        Fim: 9:45
Questão B
        Dificuldade: 4 Início: 9:50
        Fim: 10:20 
-------------
-------------
Participante: Pedro
-------------
Questão A
        Dificuldade: 2 Início: 10:00
        Fim: 10:12
Questão B
        Dificuldade: 5 Início: 10:30
        Fim: 11:05
-------------
*****************************************************
-----------------------
Resumo por Participante
-----------------------
João:
        A (1) 09:30 às 09:45 (15 min)
        B (4) 09:50 às 10:20 (30 min)
Pedro:
        A (2) 10:00 às 10:12 (12 min)
        B (5) 10:30 às 11:05 (35 min)
------------------
------------------
Resumo por Questão
------------------
Questão A:
        João (1) 09:30 às 09:45 (15 min)
        Pedro (2) 10:00 às 10:12 (12 min)
Questão B:
        João (4) 09:50 às 10:20 (30 min)
        Pedro (5) 10:30 às 11:05 (35 min)
------------------
------------
Estatísticas
------------
Questão A: Dificuldade (1.50) – Tempo (13.50 minutos)
Questão B: Dificuldade (4.50) – Tempo (32.50 minutos)
Concurso:  Dificuldade (3.00) – Tempo (23.00 minutos)
*****************************************************



Instruções a serem seguidas:


O programa deve pedir o número de participantes e o número de questões e usar essas informações para criar um vetor dinâmico de questões, 
que conterá as informações coletadas a partir da ficha do concurso.

Armazene os dados do programa com as seguintes estruturas:

      ▪ Registro para representar um horário (hora e minuto)
      ▪ Registro para representar as questões (grau de dificuldade, início e fim)
      ▪ Registro para representar uma média (grau de dificuldade e tempo)
      ▪ Registro para representar participantes (nome e ponteiro para questões)
      ▪ Vetor dinâmico de questões
      ▪ Vetor dinâmico de participantes
      
 O vetor de questões deverá guardar todas as questões do concurso. Supondo que houvessem 4 participantes e 3 questões (A, B e C), 
 o vetor teria a seguinte organização dos dados:
 
 
 
