#include <iostream>
#include <ctime>
using namespace std;
main()
{
	cout << "Benvenuto nel generatore schede di Bestfast!\nIniziamo!\nInserisci il nome il numero Pokédex del Pokémon, guarda 'LISTA_POKEMON.txt' per la lista dei Pokémon.\nNome Pokémon: ";
	string Shiny;
	string Pokemon;
	int level;
	int pv;
	int vel;
	cin >> Pokemon;
	if(Pokemon == "4" or Pokemon == "Charmander" or Pokemon == "charmander")
	{
		if(Pokemon == "1" or Pokemon == "Bulbasuar" or Pokemon == "bulbasaur")
		{
			cout << "Hai scelto Charmander!\nIl Pokémon è shiny?\nRispondi con 'Sì' o 'No'\n";
			pv = 23;
			vel = 45;
			cin >> Shiny;
			if(Shiny == "Sì" or Shiny == "sì" or Shiny == "Si" or Shiny == "si")
			{
				cout << "Ok, hai selezionato Charmander shiny!\n";
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/bulbasaur.gif]\n<b>Bulbasaur</b> :erba: :veleno:\n";
			}
			if(Shiny == "No" or Shiny == "no")
			{
				cout << "Ok, hai selezionato Charmander NON shiny!\n";
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/bulbasaur.gif]\n<b>Bulbasaur<b> :erba: :veleno:\n";
			}
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
		string scheda;
		scheda = Pokemon + "<b>Lv</b> " + to_string(level) + "<b>Pv</b> " + to_string(pv) + "<b>Vel</b> " + to_string(vel);
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
	else
	{
		cout << "\nQuesto ID non esiste! Sicuro di non aver sbagliato?\nDigita '1' per riavviare il programma, oppure digita '0' per chiudere il programma.\n";
		int Errore;
		cin >> Errore;
		if(Errore == 0)
		{
			return 0;
		}
		if(Errore == 1)
		{
			return main();
		}
	}
	cout << "Vuoi creare un altra scheda?\nSì = 1 	No = 0\n";
	int fine;
	cin >> fine;
	if(fine == 1)
	{
		return main();
 	}
	if(fine == 0)
	{
		return 0;
	}
}
