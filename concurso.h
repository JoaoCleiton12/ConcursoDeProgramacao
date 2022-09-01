#pragma once

struct horario {
	int hora;
	int minuto;
};

struct questoes {
	int dificuldade;
	horario inicio;
	horario fim;
};

struct media {
	double dificuldademedia;
	double tempo;
};

struct participantes {
	char nome[30];
	questoes* prt;
};


void tracejado(char, int);
media ResumoQuestoes(questoes* [], int, int, int);
void ResumoParticipantes(questoes [], int );