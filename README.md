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
      
 O vetor de questões deverá guardar todas as questões do concurso. Supondo que houvessem 3 participantes e 3 questões (A, B e C), 
 o vetor teria a seguinte organização dos dados:
 
          partic 1         partici 2          partici 3
     _______________________________________________________
     |  A  |  B  |  C  |  A  |  B  |  C  |  A  |  B  |  C  |
     -------------------------------------------------------


Cada elemento do vetor de participantes deve conter o nome do participante e o endereço onde iniciam suas informações no vetor de questões.

Para resolver o problema, construa e use pelo menos as seguintes funções:

Uma função que receba um vetor de questões e uma quantidade de questões a exibir. A função deve mostrar uma letra para cada questão (iniciando em A), a                sua dificuldade, horário de início, horário de fim e o tempo calculado da solução em minutos. As questões exibidas devem estar em posições consecutivas do              vetor. Use a função para gerar o resumo por participante. Ela deve ser chamada uma vez para cada participante. O nome do participante não deve ser                      mostrado pela função.
            
Uma função que receba o vetor dinâmico de questões, o tamanho do vetor, o índice inicial do elemento que será contabilizado no resultado e o tamanho do               passo para obter o índice do próximo elemento. A função deve retornar uma média (um registro tipo média contendo a média de dificuldade e de tempo para os             elementos analisados). A função deve ser chamada uma vez para cada questão e uma última vez para obter as estatísticas totais do concurso.
            
Para gerar os traços separando as seções do programa, construa e use uma função que receba um caractere e um valor inteiro representando o tamanho da                 linha a ser exibida.
            
Faça com que horários (registro horário) possam ser lidos com cin, exibidos com cout e subtraídos com o operador de subtração, operator-(). O resultado               da subtração deve ser um valor representando a diferença em minutos. Para simplificar, considere que os horários estão sempre dentro de um mesmo dia.
            
          
Separe o programa em três arquivos:

            • estatisticas.cpp: programa principal com a função main()
            • concurso.h: arquivo de cabeçalho contendo as definições dos registros e os protótipos das funções do programa
            • concurso.cpp: contendo a implementação das funções definidas em concurso.h
            
            
Exigências do trabalho:
    
      1) Não use variáveis globais
      2) Armazene strings em vetores de caracteres
      3) Use comentários, indentação e deixe o código organizado
      4) Os vetores dinâmicos devem ser criados dentro da função main()
      5) O arquivo estatisticas.cpp deve conter apenas uma função, a função main()
      
      
