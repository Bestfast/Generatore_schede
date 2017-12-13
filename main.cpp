#include <iostream>
#include <string>
using namespace std;
int main()
{
	int level,pv,vel,Errore,fine,exp_agg,exp;
	unsigned int Pokemonum;
	string Pokemon,Shiny,scheda,fisico=":fisico",mosse_apprese,azione,lista_mosse_if,nome_pokemon,ant_move,typing,mossa[4];
	printf("Benvenuto nel generatore schede di Bestfast!\nIniziamo!\nInserisci il numero Pokedex del Pokemon, guarda 'LISTA_POKEMON.txt' per la lista dei Pokémon.\n");
	do
	{		
	printf("Numero Pokemon: ");
	cin >> Pokemonum;
	}while(Pokemonum<=0 or Pokemonum>802);
	switch (Pokemonum)
		{
		case 1:
			nome_pokemon = "Bulbasaur";
			printf("Hai scelto Bulbasaur!\nIl Pokémon e' shiny?\nRispondi con 'Si' o 'No'\n");
			pv = 23;
			vel = 45;
			typing=":erba: :veleno:";
			cin >> Shiny;
			if (Shiny == "Sì" or Shiny == "sì" or Shiny == "Si" or Shiny == "si")
			{
				printf("Ok, hai selezionato Bulbasaur shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/"+nome_pokemon+".gif]\n<b>"+nome_pokemon+"</b>"+typing+"\n";
			}
			if (Shiny == "No" or Shiny == "no")
			{
				printf("Ok, hai selezionato Bulbasaur NON shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani/"+nome_pokemon+".gif]\n<b>"+nome_pokemon+"</b>"+typing+"\n";
			}
		exp_agg = 2;
		mosse_apprese = "Affannoseme\nAmnesia\nAttrazione\nAzione\nBullo\nCampo Erboso\nCapocciata\nConfidenza\nCoro\nCrescita\nCuordileone\nDanzaspada\nDoppioteam\nEccheggiavoce\nEnergipalla\nErbapatto\nFacciata\nFango\nFangobomba\nFascino\nFogliamagica\nFoglielama\nFrustata\nFrustazione\nGigassorbimento\nGiornodisole\nIntroforza\nLaccioerboso\nLegatutto\nMaledizione\nMeloderba\nNaturforza\nPetalodanza\nPrivazione\nProfumino\nProtezione\nRadicamento\nResistenza\nRiduttore\nRiposo\nRitorno\nRuggito\nRussare\nSalvaguardia\nSchermoluce\nSdoppiatore\nSemebomba\nSintesi\nSolarraggio\nSonnifero\nSonnolalia\nSostituto\nTossina\nVelenoshock\nVelenpolvere\nVerdebufera\nVigorcolpo";
		break;
	
		case 2:
			nome_pokemon = "Ivysaur";
			printf("Hai scelto Ivysaur!\nIl Pokémon e' shiny?\nRispondi con 'Si' o 'No'\n");
			pv = 23;
			vel = 45;
			typing=":erba: :veleno:";
			cin >> Shiny;
			if (Shiny == "Sì" or Shiny == "sì" or Shiny == "Si" or Shiny == "si")
			{
				printf("Ok, hai selezionato Ivysaur shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/"+nome_pokemon+".gif]\n<b>"+nome_pokemon+"</b>"+typing+"\n";
			}
			if (Shiny == "No" or Shiny == "no")
			{
				printf("Ok, hai selezionato Ivysaur NON shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani/"+nome_pokemon+".gif]\n<b>"+nome_pokemon+"</b>"+typing+"\n";
			}
		exp_agg = 2;
		mosse_apprese = "Affannoseme\nAmnesia\nAttrazione\nAzione\nBullo\nCampo Erboso\nCapocciata\nConfidenza\nCoro\nCrescita\nCuordileone\nDanzaspada\nDoppioteam\nEccheggiavoce\nEnergipalla\nErbapatto\nFacciata\nFango\nFangobomba\nFascino\nFogliamagica\nFoglielama\nFrustata\nFrustazione\nGigassorbimento\nGiornodisole\nIntroforza\nLaccioerboso\nLegatutto\nMaledizione\nMeloderba\nNaturforza\nPetalodanza\nPrivazione\nProfumino\nProtezione\nRadicamento\nResistenza\nRiduttore\nRiposo\nRitorno\nRuggito\nRussare\nSalvaguardia\nSchermoluce\nSdoppiatore\nSemebomba\nSintesi\nSolarraggio\nSonnifero\nSonnolalia\nSostituto\nTossina\nVelenoshock\nVelenpolvere\nVerdebufera\nVigorcolpo";
		break;
		
		case 3:
			nome_pokemon = "Venusaur";
			printf("Hai scelto Venusaur!\nIl Pokémon e' shiny?\nRispondi con 'Si' o 'No'\n");
			pv = 23;
			vel = 45;
			typing=":erba: :veleno:";
			cin >> Shiny;
			if (Shiny == "Sì" or Shiny == "sì" or Shiny == "Si" or Shiny == "si")
			{
				printf("Ok, hai selezionato Venusaur shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/"+nome_pokemon+".gif]\n<b>"+nome_pokemon+"</b>"+typing+"\n";
			}
			if (Shiny == "No" or Shiny == "no")
			{
				printf("Ok, hai selezionato Venusaur NON shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani/"+nome_pokemon+".gif]\n<b>"+nome_pokemon+"</b>"+typing+"\n";
			}
		exp_agg = 2;
		mosse_apprese = "Affannoseme\nAmnesia\nAttrazione\nAzione\nBullo\nCampo Erboso\nCapocciata\nConfidenza\nCoro\nCrescita\nCuordileone\nDanzaspada\nDoppioteam\nEccheggiavoce\nEnergipalla\nErbapatto\nFacciata\nFango\nFangobomba\nFascino\nFogliamagica\nFoglielama\nFrustata\nFrustazione\nGigassorbimento\nGiornodisole\nIntroforza\nLaccioerboso\nLegatutto\nMaledizione\nMeloderba\nNaturforza\nPetalodanza\nPrivazione\nProfumino\nProtezione\nRadicamento\nResistenza\nRiduttore\nRiposo\nRitorno\nRuggito\nRussare\nSalvaguardia\nSchermoluce\nSdoppiatore\nSemebomba\nSintesi\nSolarraggio\nSonnifero\nSonnolalia\nSostituto\nTossina\nVelenoshock\nVelenpolvere\nVerdebufera\nVigorcolpo";
		break;
	
		case 4:
			printf("Hai scelto Charmander!\nIl Pokemon e' shiny?\nRispondi con 'Si' o 'No'\n");
			pv = 15;
			vel = 65;
			nome_pokemon = "Charmander";
			typing=":fuoco:";
			cin >> Shiny;
			if (Shiny == "Sì" or Shiny == "sì" or Shiny == "Si" or Shiny == "si")
			{
				printf("Ok, hai selezionato Charmander shiny!\n");
			Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/"+nome_pokemon+".gif]\n<b>"+nome_pokemon+"</b>"+typing+"\n";
			}
			if (Shiny == "No" or Shiny == "no")
			{
				printf("Ok, hai selezionato Charmander NON shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani/"+nome_pokemon+".gif]\n<b>"+nome_pokemon+"</b>"+typing+"\n";
			}
		exp_agg=2;
		mosse_apprese= "Graffio\nRuggito\nBraciere\nMuro di Fumo\nIra di Drago\nVisotruce\nRogodenti\nPirolancio\nLacerazione\nLanciafiamme\nTurbofuoco\nMarchiatura";
		break;
	
		case 7:
			printf("Hai scelto Squirtle!\nIl Pokemon e' shiny?\nRispondi con 'Si' o 'No'\n");
			pv = 15;
			vel = 65;
			nome_pokemon = "Squirtle";
			typing=":acqua:";
			cin >> Shiny;
			if (Shiny == "Sì" or Shiny == "sì" or Shiny == "Si" or Shiny == "si")
			{
				printf("Ok, hai selezionato Squirtle shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/"+nome_pokemon+".gif]\n<b>"+nome_pokemon+"</b>"+typing+"\n";
			}
			else
			if (Shiny == "No" or Shiny == "no")
			{
				printf("Ok, hai selezionato Squirtle NON shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani/"+nome_pokemon+".gif]\n<b>"+nome_pokemon+"</b>"+typing+"\n";
			}
		exp_agg=2;
		mosse_apprese= "Azione\nColpocoda\nPistolacqua\nRitirata\nBolla\nMorso\nRapigiro\nProtezione\nIdropulsar\nIdrondata\nCapocciata\nFerroscudo\nPioggiadanza\nIdropompa";
		break;
		
	/*	case N:
			printf("Hai scelto NOME!\nIl Pokemon e' shiny?\nRispondi con 'Si' o 'No'\n");
			pv = PUNTI VITA;
			vel = VELOCITA';
			nome_pokemon = "NOME";
			cin >> Shiny;
			if (Shiny == "Sì" or Shiny == "sì" or Shiny == "Si" or Shiny == "si")
			{
				printf("Ok, hai selezionato NOME shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/NOME.gif]\n<b>NOME</b> :TIPO:\n";
			}
			else
			if (Shiny == "No" or Shiny == "no")
			{
				printf("Ok, hai selezionato NOME NON shiny!\n");
				Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani/NOME.gif]\n<b>Squirtle</b> :TIPO:\n";
			}
		exp_agg=2?;
		mosse_apprese= "MOSSE APPRESE";
		break;
		*/
			
		default:
			printf("Non ancora implementato\n");
			cin.get();
		break;
		}
	do
	{
	    printf("Digita il livello del Pokemon!\n");
 	    cin >> level;
	} while(level<=0 or level>100);
	vel = vel + level - 1;
	int pot_da_aggiungere;
	if (level >= 51)
	{
		pv = (49 * 3) + ((level - 50) * 5) + pv;
		pot_da_aggiungere = 49 + (level - 50) * 2;
	}
	else
	if (level <= 50)
	{
		pv = (level - 1) * 3 + pv;
		pot_da_aggiungere = level - 1;
	}
	int pot_azione = 4 + pot_da_aggiungere;
	printf("Vuoi vedere la lista delle mosse che puo' imparare questo Pokemon?\n");
	cin >>	 lista_mosse_if;
	if (lista_mosse_if == "Sì" or lista_mosse_if == "sì" or lista_mosse_if == "Si" or lista_mosse_if == "si")
	{
		cout << nome_pokemon << " puo' imparare queste mosse:\n" << mosse_apprese << "\n";
	}
	printf("Inserisci la mossa numero 1\n");
 	cin>>mossa[0];
 	printf("Inserisci la mossa numero 2\n");
 	cin>>mossa[1];
 	printf("Inserisci la mossa numero 3\n");
 	cin>>mossa[2];
 	printf("Inserisci la mossa numero 4\n");
 	cin>>mossa[3];
 	exp = exp_agg * level;
 	scheda = Pokemon + "<b>Lv</b> " + to_string(level) + "<b>Pv</b> " + to_string(pv) + "<b>Vel</b> " + to_string(vel) + "\n" + mossa[0] + "\n" + mossa[1] + "\n" + mossa[2] + "\n" + mossa[3] + "<b>EXP</b>: 0/" + "\n" + to_string(exp);
 	Pokemon = Pokemon, "<b>Lv</b> ", level, "<b>Pv</b> ", pv, "<b>Vel</b> ", vel;
 	printf("Ben fatto! Trovi la scheda nel file 'Scheda.txt'!\n");
 	FILE * pFile;
 	pFile = fopen("Scheda.txt", "w");
 	if (pFile != NULL)
 	{
 		fputs(scheda.c_str(), pFile);
 		fclose(pFile);
 	}
	cin.get();
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
