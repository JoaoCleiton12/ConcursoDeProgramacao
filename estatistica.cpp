#include <iostream>
#include "concurso.h"

using namespace std;


int main() {
	int Participantes, Questoes;
	char pontos;

	setlocale(LC_ALL, "");
	tracejado('*', 53);
	cout << "Concurso de Programação\n";
	cout << endl;

	cout << "Qual o número de participantes? ";
	cin >> Participantes;
	cout << "Qual o número de questões ? ";
	cin >> Questoes;
	cout << endl;
	
	//int* VetorDinamico = new int[Participantes * Questoes]; ve se o vetor dinamico de questoes é assim, ou assim participantes * pessoas = new participantes[Participantes];
	//int * VetorPartici = new int[Participantes];

	questoes * quest = new questoes[Participantes * Questoes];
	participantes * pessoas = new participantes[Participantes];
	int contarQuestoes = 0;

	tracejado('*', 53);
	for (int i = 0; i < Participantes; i++) {
		tracejado('-', 13);
		cout << "Participante: ";
		cin >> pessoas[i].nome;
		tracejado('-', 13);
		char letra = 'A';
		
		for (int j = 0; j < Questoes; j++) {
			cout << "Questão " << letra << endl;
			cout << "\tDificuldade: ";
			cin >> quest[contarQuestoes].dificuldade;
			cout << "\tInício: ";
			cin >> quest[contarQuestoes].inicio.hora;
			cin >> pontos;
			cin >> quest[contarQuestoes].inicio.minuto;
			cout << "\tFim: ";
			cin >> quest[contarQuestoes].fim.hora;
			cin >> pontos;
			cin >> quest[contarQuestoes].fim.minuto;
			 
			letra++;
			contarQuestoes++;
		}
		tracejado('-', 13);
		cout << endl;
	}

	cout << endl;
	tracejado('*', 53);
	tracejado('-', 13);
	cout << "Resumo por Participante\n";
	tracejado('-', 13);
	for (int i = 0; i < Participantes; i++) {
		cout << pessoas[i].nome << ":\n";
		ResumoParticipantes(quest, Questoes);

	}

	
	/*
	* 
	* TESTE PARA VER SE ESTA ARMAZENANDO OS VALOERS CORRETAMENTE
	* 
	cout << pessoas[0].nome;
	cout << "questao A: \n";
	cout << "Dificuldade: " << quest[0].dificuldade;
	cout << "\nHorario: " << quest[0].inicio.hora << pontos << quest[0].inicio.minuto << endl;
	cout << "\nHorario: " << quest[0].fim.hora << pontos << quest[0].fim.minuto << endl;
	cout << endl;
	cout << "questao B: \n";
	cout << "Dificuldade: " << quest[1].dificuldade;
	cout << "\nHorario: " << quest[1].inicio.hora << pontos << quest[1].inicio.minuto << endl;
	cout << "\nHorario: " << quest[1].fim.hora << pontos << quest[1].fim.minuto << endl;

	cout << endl;

	cout << pessoas[1].nome;
	cout << "questao A: \n";
	cout << "Dificuldade: " << quest[2].dificuldade;
	cout << "\nHorario: " << quest[2].inicio.hora << pontos << quest[2].inicio.minuto << endl;
	cout << "\nHorario: " << quest[2].fim.hora << pontos << quest[2].fim.minuto << endl;
	cout << endl;
	cout << "questao B: \n";
	cout << "Dificuldade: " << quest[3].dificuldade;
	cout << "\nHorario: " << quest[3].inicio.hora << pontos << quest[3].inicio.minuto << endl;
	cout << "\nHorario: " << quest[3].fim.hora << pontos << quest[3].fim.minuto << endl;

	*/



	





	delete[] quest;
	delete[] pessoas;
}
