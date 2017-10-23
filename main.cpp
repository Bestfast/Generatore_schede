#include <iostream>
using namespace std;
int main()
{
	int level;
	int pv;
	int vel;
	int pot_da_aggiungere;
	int Errore;
	int fine;
	string Shiny;
	string Pokemon;
	string scheda;
	string fisico = ":fisico:";
	string mosse_apprese;
	string mossa1;
	string mossa2;
	string mossa3;
	string mossa4;
	int pot_azione = 4 + pot_da_aggiungere;
	cout << "Benvenuto nel generatore schede di Bestfast!\nIniziamo!\nInserisci il nome il numero Pokédex del Pokémon, guarda 'LISTA_POKEMON.txt' per la lista dei Pokémon.\nNome Pokémon: ";

	cin >> Pokemon;
	if(Pokemon == "1" or Pokemon == "Bulbasuar" or Pokemon == "bulbasaur")
		{
			cout << "Hai scelto Bulbasuar!\nIl Pokémon è shiny?\nRispondi con 'Sì' o 'No'\n";
			pv = 23;
			vel = 45;
			cin >> Shiny;
			if(Shiny == "Sì" or Shiny == "sì" or Shiny == "Si" or Shiny == "si")
			{
				cout << "Ok, hai selezionato bulbasaur shiny!\n";
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/bulbasaur.gif]\n<b>Bulbasaur</b> :erba: :veleno:\n";
			}
			if(Shiny == "No" or Shiny == "no")
			{
				cout << "Ok, hai selezionato bulbasaur NON shiny!\n";
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/bulbasaur.gif]\n<b>Bulbasaur<b> :erba: :veleno:\n";
			}
//			mosse_apprese = azione + "\n";
		}
		if(Pokemon == "4" or Pokemon == "Charmander" or Pokemon == "charmander")
		{
			cout << "Hai scelto Charmander!\nIl Pokémon è shiny?\nRispondi con 'Sì' o 'No'\n";
			pv = 15;
			vel = 65;
			cin >> Shiny;
			if(Shiny == "Sì" or Shiny == "sì" or Shiny == "Si" or Shiny == "si")
			{
				cout << "Ok, hai selezionato Charmander shiny!\n";
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/charmander.gif]\n<b>Charmander</b> :fuoco:\n";
			}
			if(Shiny == "No" or Shiny == "no")
			{
				cout << "Ok, hai selezionato Charmander NON shiny!\n";
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/charmander.gif]\n<b>Charmander</b> :fuoco:\n";
			}
		}
		cout << "Digita il livello del Pokémon!\n";
		cin >> level;
		vel = vel + level - 1;
		if(level >= 51)
		{
			pv = (49 * 3) + (level - 50 * 5);
		}
		if(level <= 50)
		{
			pv = (level - 1) * 3;
		}
		if(level <= 50)
		{
			pot_da_aggiungere = level - 1; 
		}
		if(level >= 51)
		{
			pot_da_aggiungere = 49 + (level - 50) * 2;
		}
/*		string azione = "Azione (-" + to_string(pot_azione) + ") " + fisico;
		cout << "Bene, adesso scrivi la prima mossa del Pokémon.\n";
		cin >> mossa1;
		if(mossa1 == "azione" or mossa1 == "Azione")
		{
			mossa1 = azione;
		}
		cout << "Bene! Adesso scegli un altra mossa.";
		cin >> mossa2;
		if(mossa2 == "azione" or mossa1 == "Azione")
		{
			mossa2 = azione;
		}
		cout << "Ok, hai scelto due mosse. adesso scegline una terza!";
		cin >> mossa3;
		if(mossa3 == "azione" or mossa1 == "Azione")
		{
			mossa3 = azione;
		}
		cout << "Perfetto! Scegli l'ultima mossa!";
		cin >> mossa4;
		if(mossa4 == "azione" or mossa1 == "Azione")
		{
			mossa4 = azione;
		}*/
		scheda = Pokemon + "<b>Lv</b> " + to_string(level) + "<b>Pv</b> " + to_string(pv) + "<b>Vel</b> " + to_string(vel) + "\n" + mossa1 + mossa2 + mossa3 + mossa4;
		Pokemon = Pokemon, "<b>Lv</b> ", level ,"<b>Pv</b> ", pv ,"<b>Vel</b> ", vel;
		cout << "Ben fatto! Trovi la scheda nel file 'Scheda.txt'!\n";
		FILE * pFile;
		    pFile = fopen ("Scheda.txt","w");
		    if (pFile!=NULL)
		    {
				fputs (scheda.c_str(),pFile);
				fclose (pFile);
			}
	}
	// else
	// {
	// 	cout<< "\nQuesto ID non esiste! Sicuro di non aver sbagliato?\nDigita '1' per riavviare il programma, oppure digita '0' per chiudere il programma.\n";
	// 	cin >> Errore;
	// 	if(Errore == 0)
	// 	{
	// 		return 0;
	// 	}
	// 	if(Errore == 1)
	// 	{
	// 		return main();
	// 	}
	// }
	// cout << "Vuoi creare un altra scheda?\nSì = 1 	No = 0\n";
	// cin >> fine;
	// if(fine == 1)
	// {
	// 	return main();
 // 	}
	// if(fine == 0)
	// {
	// 	return 0;
	// }

