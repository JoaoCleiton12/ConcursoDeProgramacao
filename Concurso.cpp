#include <iostream>
#include <string>
#include "concurso.h"
using namespace std;

// esta fun?a? exibe os tracejado.
void tracejado(char caracter, int quant) {
	for (int i = 0; i < quant; i++) {
		cout << caracter;
	}
	cout << endl;
}
/* tirar as
media ResumoQuestoes(questoes * quest[], int tamanhoVetor, int indice, int tamanhoPasso) {
	media resultado;
	//FALTA A IMPLEMENTA??O

}
*/
void ResumoParticipantes(questoes quest[], int quantiQuestoes) {
	//FALTA A IMPLEMENTA??O
	char letra = 'A';
	int temp = 0;
	for (int i = 0; i < quantiQuestoes; i++) {
		//calculo do tempo gasto em cada quest?o.
		temp = ((quest[i].fim.minuto + (quest[i].fim.hora * 60)) - (quest[i].inicio.minuto + (quest[i].inicio.hora * 60)));

		//essa repeti??o vai acessar as informa??es das questoes de cada participante.  
		cout << "\t" << letra << ": (" << quest[i].dificuldade << ") "
			<< quest[i].inicio.hora << ":" << quest[i].inicio.minuto
			<< " ?s " << quest[i].fim.hora << ":" << quest[i].fim.minuto
			<< " (" << temp << " min)" << endl;
			letra++;
	}
}