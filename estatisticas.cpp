#include <iostream>
using namespace std;

struct horario
{
	int hora;
	int minuto;
};

struct questoes
{
	int dificuldade;
	horario inicio;
	horario fim;
};

struct media
{
	float mediadificulade;
	float mediatempo;
};

struct participantes
{
	char nome[20];
	questoes* ponteiquest;

};

istream& operator>>(istream&, horario&);
ostream& operator<<(ostream& os, horario& temp);
void exibirletra(questoes n[], int quantquestao);
int operator-(horario ini, horario fim);
void exibirtracejado(char n, int tamanho);

int main()
{
	exibirtracejado('*', 46);
	
	cout << "Concurso de programacao\n";
	cout << endl;

	/*guarda o numero de participantes e o numero de questao,
		que serao digitadas pelo usuario*/
	int numpartici, numquest;
	char pontos;

	cout << "Qual o numero de participantes? ";
	cin >> numpartici;
	cout << "Qual o numero de questoes? ";
	cin >> numquest;
	cout << endl;
	exibirtracejado('*',46);
	
	participantes* vetorParti = new participantes[numpartici];
	questoes* vetorQuest = new questoes[numquest*numpartici];
	/*
	for (int i = 0; i < numpartici; i++)
	{
			vetor2[i].ponteiquest = vetor1;
	}
	*/
	int j = 0;
	
	//Nao esta gravando as informaçoes das questoes do 2 participante
	int contador = 0;
	for (int i = 0; i <  numpartici; i++)
	{
		int q = 0;
		exibirtracejado('-', 16);
		cout << "Paticipante: ";
		cin >> vetorParti[i].nome;
		exibirtracejado('-', 16);
		char letra = 'A';
		

		for(j; j < numquest + contador; j++)
		{
			
			cout << "Questao " << letra;
			cout << endl;
			cout << "	Dificultade: ";
			cin >> vetorQuest[j].dificuldade;
			cout << "	Inicio: ";
			cin >> vetorQuest[j].inicio.hora;
			cin >> pontos;
			cin >> vetorQuest[j].inicio.minuto;
			cout << "	Fim: ";
			cin >> vetorQuest[j].fim.hora;
			cin >> pontos;
			cin >> vetorQuest[j].fim.minuto;
			letra++;
			
		}
		exibirtracejado('-', 16);
		contador += numpartici;
		vetorParti[i].ponteiquest = &vetorQuest[q];
		q += numquest;
	}

	
	cout << endl;
	exibirtracejado('*', 46);
	exibirtracejado('-', 26);
	cout << "Resumo por participante\n";
	exibirtracejado('-', 26);
	int k = 0;

	// Aparentemente o problema esta aqui, na exibição dos dados, a leitura esta sendo feita de maneira correta.
	for (int i = 0; i < numpartici; i++)
	{
		cout << vetorParti[i].nome << ":\n";
		exibirletra(vetorParti[i].ponteiquest, numquest);
		
	}
	exibirtracejado('-', 16);
	cout << endl;
	exibirtracejado('-', 16);
	
	
	delete[] vetorQuest;
	delete[] vetorParti;

	
}
void exibirletra(questoes n[], int quantquestao)
{
	char letra = 'A';
	for (int j = 0; j < quantquestao; j++)
	{
		cout << letra << "(" << n[j].dificuldade << ") "
			<< n[j].inicio.hora << ":" << n[j].inicio.minuto << " as "
			<< n[j].fim.hora << ":" << n[j].fim.minuto << " (";
		int temp = n[j].inicio - n[j].fim;
		cout << temp << " min)" << endl;
		letra++;
	}

}
void exibirtracejado(char n, int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		cout << n;
	}
	cout << endl;
}

//ler o horario direto com cin
istream& operator>>(istream& is, horario& temp)
{
	cin >> temp.hora;
	cin.ignore();
	cin >> temp.minuto;

	return is;
}

ostream& operator<<(ostream& os, horario& temp)
{
	os << temp.hora;
	os << ":";
	os << temp.minuto;

	return os;
}

int operator-(horario ini, horario fim)
{
	int resul;
	resul = (((fim.hora - ini.hora) * 60) + (fim.minuto - ini.minuto));
	return resul;
}


/*
	//Teste para verificar se esta lendo os valores corretos para as posições corretas dos respectivos vetores

	cout << "nome: " << vetorParti[0].nome << endl;
	cout << "A - dificuldade: " << vetorParti[0].ponteiquest[0].dificuldade << endl;
	cout << "tempo comeco : " << vetorParti[0].ponteiquest[0].inicio.hora << ":" << vetorParti[0].ponteiquest[0].inicio.minuto << endl;
	cout << "tempo fim : " << vetorParti[0].ponteiquest[0].fim.hora << ":" << vetorParti[0].ponteiquest[0].fim.minuto << endl;

	cout << "B - dificuldade: " << vetorParti[0].ponteiquest[1].dificuldade << endl;
	cout << "tempo comeco : " << vetorParti[0].ponteiquest[1].inicio.hora << ":" << vetorParti[0].ponteiquest[1].inicio.minuto << endl;
	cout << "tempo fim : " << vetorParti[0].ponteiquest[1].fim.hora << ":" << vetorParti[0].ponteiquest[1].fim.minuto << endl;

	exibirtracejado('*', 46);

	cout << "nome: " << vetorParti[1].nome << endl;
	cout << "A - dificuldade: " << vetorParti[1].ponteiquest[2].dificuldade << endl;
	cout << "tempo comeco : " << vetorParti[1].ponteiquest[2].inicio.hora << ":" << vetorParti[1].ponteiquest[2].inicio.minuto << endl;
	cout << "tempo fim : " << vetorParti[1].ponteiquest[2].fim.hora << ":" << vetorParti[1].ponteiquest[2].fim.minuto << endl;

	cout << "B - dificuldade: " << vetorParti[1].ponteiquest[3].dificuldade << endl;
	cout << "tempo comeco : " << vetorParti[1].ponteiquest[3].inicio.hora << ":" << vetorParti[1].ponteiquest[3].inicio.minuto << endl;
	cout << "tempo fim : " << vetorParti[1].ponteiquest[3].fim.hora << ":" << vetorParti[1].ponteiquest[3].fim.minuto << endl;

	//Resultado do teste: OK, realmente esta lendo os valores corretos para as posições corretas dos vetores
	*/