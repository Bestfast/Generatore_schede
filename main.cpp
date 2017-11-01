#include <iostream>
using namespace std;
int main()
{
	int level;
	int pv;
	int vel;
	int Errore;
	int fine;
	int exp_agg;
	int exp;
	string Shiny;
	string Pokemon;
	string scheda;
	string fisico = ":fisico:";
	string mosse_apprese;
	string mossa1;
	string mossa2;
	string mossa3;
	string mossa4;
	string azione;
	string lista_mosse_if;
	string nome_pokemon;
	printf("Benvenuto nel generatore schede di Bestfast!\nIniziamo!\nInserisci il nome il numero Pokédex del Pokémon, guarda 'LISTA_POKEMON.txt' per la lista dei Pokémon.\nNome Pokémon: ");

	cin >> Pokemon;
	if(Pokemon == "1" or Pokemon == "Bulbasaur" or Pokemon == "bulbasaur")
		{
			nome_pokemon = "Bulbasaur";
			printf("Hai scelto Bulbasaur!\nIl Pokémon è shiny?\nRispondi con 'Sì' o 'No'\n");
			pv = 23;
			vel = 45;
			cin >> Shiny;
			if(Shiny == "Sì" or Shiny == "sì" or Shiny == "Si" or Shiny == "si")
			{
				printf("Ok, hai selezionato bulbasaur shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/bulbasaur.gif]\n<b>Bulbasaur</b> :erba: :veleno:\n";
			}
			if(Shiny == "No" or Shiny == "no")
			{
				printf("Ok, hai selezionato bulbasaur NON shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani/bulbasaur.gif]\n<b>Bulbasaur<b> :erba: :veleno:\n";
			}
			exp_agg = 2;
			mosse_apprese = "Affannoseme\nAmnesia\nAttrazione\nAzione\nBullo\nCampo Erboso\nCapocciata\nConfidenza\nCoro\nCrescita\nCuordileone\nDanzaspada\nDoppioteam\nEccheggiavoce\nEnergipalla\nErbapatto\nFacciata\nFango\nFangobomba\nFascino\nFogliamagica\nFoglielama\nFrustata\nFrustazione\nGigassorbimento\nGiornodisole\nIntroforza\nLaccioerboso\nLegatutto\nMaledizione\nMeloderba\nNaturforza\nPetalodanza\nPrivazione\nProfumino\nProtezione\nRadicamento\nResistenza\nRiduttore\nRiposo\nRitorno\nRuggito\nRussare\nSalvaguardia\nSchermoluce\nSdoppiatore\nSemebomba\nSintesi\nSolarraggio\nSonnifero\nSonnolalia\nSostituto\nTossina\nVelenoshock\nVelenpolvere\nVerdebufera\nVigorcolpo";		}
		if(Pokemon == "4" or Pokemon == "Charmander" or Pokemon == "charmander")
		{
			printf("Hai scelto Charmander!\nIl Pokémon è shiny?\nRispondi con 'Sì' o 'No'\n");
			pv = 15;
			vel = 65;
			nome_pokemon = "Charmander";
			cin >> Shiny;
			if(Shiny == "Sì" or Shiny == "sì" or Shiny == "Si" or Shiny == "si")
			{
				printf("Ok, hai selezionato Charmander shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/charmander.gif]\n<b>Charmander</b> :fuoco:\n";
			}
			if(Shiny == "No" or Shiny == "no")
			{
				printf("Ok, hai selezionato Charmander NON shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/charmander.gif]\n<b>Charmander</b> :fuoco:\n";
			}
		}
		printf("Digita il livello del Pokémon!\n");
		cin >> level;
		vel = vel + level - 1;
		int pot_da_aggiungere;
		if(level >= 51)
		{
			pv = (49 * 3) + ((level - 50) * 5) + pv;
			pot_da_aggiungere = 49 + (level - 50) * 2;
		}
		if(level <= 50)
		{
			pv = (level - 1) * 3 + pv;
			pot_da_aggiungere = level - 1; 
		}
		int pot_azione = 4 + pot_da_aggiungere;
		printf("Vuoi vedere la lista delle mosse che può imparare questo Pokémon?\n");
		cin >> lista_mosse_if;
		if(lista_mosse_if == "Sì" or lista_mosse_if == "sì" or lista_mosse_if == "Si" or lista_mosse_if == "si")
			{
				cout << nome_pokemon << " può imparare queste mosse:\n" << mosse_apprese << "\n";
			}
		azione = "Azione (-" + to_string(pot_azione) + ") " + fisico + "\n";
		printf("Bene, adesso scrivi la prima mossa del Pokémon.\n");
		cin >> mossa1;
		if(mossa1 == "azione" or mossa1 == "Azione")
		{
			mossa1 = azione;
		}
		printf("Bene! Adesso scegli un altra mossa.\n");
		cin >> mossa2;
		if(mossa2 == "azione" or mossa2 == "Azione")
		{
			
			mossa2 = azione;
		}
		printf("Ok, hai scelto due mosse. adesso scegline una terza!\n");
		cin >> mossa3;
		if(mossa3 == "azione" or mossa3 == "Azione")
		{
			
			mossa3 = azione;
		}
		printf("Perfetto! Scegli l'ultima mossa!\n");
		cin >> mossa4;
		if(mossa4 == "azione" or mossa4 == "Azione")
		{
			
			mossa4 = azione;
		}
		exp = exp_agg * level;
		scheda = Pokemon + "<b>Lv</b> " + to_string(level) + "<b>Pv</b> " + to_string(pv) + "<b>Vel</b> " + to_string(vel) + "\n" + mossa1 + mossa2 + mossa3 + mossa4 + "<b>EXP</b>: 0/" + to_string(exp);
		Pokemon = Pokemon, "<b>Lv</b> ", level ,"<b>Pv</b> ", pv ,"<b>Vel</b> ", vel;
		printf("Ben fatto! Trovi la scheda nel file 'Scheda.txt'!\n");
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
	// 	
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

