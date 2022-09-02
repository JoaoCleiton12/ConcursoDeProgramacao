# ConcursoDeProgramacao

Depois de aprender a usar vetores dinâmicos e laços de repetição no curso de Programação de Computadores, Joãozinho começou a procurar novos desafios 
e decidiu testar suas habilidades criando uma competição de programação com seus amigos.

A competição consiste em classificar e resolver um determinado número de questões de programação. O tempo de solução é um ponto importante para a competição 
e cada participante deverá preencher uma ficha durante o concurso indicando para cada questão:
      • Dificuldade da questão: valor entre 1 (muito fácil) e 5 (muito difícil)
      • Horário de início da resolução (no formato horas e minutos)
      • Horário de fim da resolução (no formato horas e minutos)
      
Ao final do concurso, Joãozinho quer mostrar aos participantes algumas estatísticas, como resumo por participante, reumo por questão 
e as estatísticas gerais do concurso.


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
 
          partic 1         partici 2          partici 3
     _______________________________________________________
     |  A  |  B  |  C  |  A  |  B  |  C  |  A  |  B  |  C  |
     -------------------------------------------------------
