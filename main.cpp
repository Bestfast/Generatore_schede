#include <iostream>
#include <string>
using namespace std;

int level,pv,vel,Errore,fine,exp_agg,exp;
unsigned int Pokemonum;
string Pokemon,Shiny,scheda,fisico=":fisico",mosse_apprese,azione,lista_mosse_if,nome_pokemon,nome_pokemonm,ant_move,typing,mossa[4];

int mosse();
int dati();
int shiny();
int main()
{
	printf("Benvenuto nel generatore schede di Bestfast!\nIniziamo!\nInserisci il numero Pokedex del Pokemon, guarda 'LISTA_POKEMON.txt' per la lista dei Pokémon.\n");
	do
	{		
	printf("Numero Pokemon: ");
	cin >> Pokemonum;
	}while(Pokemonum<=0 or Pokemonum>802);
	dati();
	shiny();
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
		mosse();
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
 	scheda = Pokemon + "<b>Lv</b> " + to_string(level) + "<b>Pv</b> " + to_string(pv) + "<b>Vel</b> " + to_string(vel) + "\n" + mossa[0] + "\n" + mossa[1] + "\n" + mossa[2] + "\n" + mossa[3] + "<b>EXP</b>: 0/" + "\nExp: " + to_string(exp);
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

dati()
{
	switch(Pokemonum)
	{
		case 1:
		nome_pokemon = "bulbasaur";
		nome_pokemonm = "Bulbasaur";
		pv = 23;
		vel = 45;
		typing=":erba: :veleno:";
		exp_agg = 2;
		break;
		
		case 2:
		nome_pokemon = "ivysaur";
		nome_pokemonm = "Ivysaur";
		pv = 23;
		vel = 45;
		typing=":erba: :veleno:";
		exp_agg = 2;
		break;
	
		case 3:
		nome_pokemon = "venusaur";
		nome_pokemonm = "Venusaur";
		pv = 23;
		vel = 45;
		typing=":erba: :veleno:";
		exp_agg=2;
		break;
	
		case 4:
		nome_pokemon = "charmander";
		nome_pokemonm = "Charmander";
		pv = 15;
		vel = 65;
		typing=":fuoco:";
		exp_agg=2;
		break;
	
		case 7:
		nome_pokemon = "squirtle";
		nome_pokemonm = "Squirtle";
		pv = 15;
		vel = 65;
		typing=":acqua:";
		exp_agg=2;
		break;
		
		default:
		printf("Non valido");
		cin.get();
	}
}

mosse()
{
	switch(Pokemonum)
	{
		case 1:
		mosse_apprese = "Affannoseme\nAmnesia\nAttrazione\nAzione\nBullo\nCampo Erboso\nCapocciata\nConfidenza\nCoro\nCrescita\nCuordileone\nDanzaspada\nDoppioteam\nEccheggiavoce\nEnergipalla\nErbapatto\nFacciata\nFango\nFangobomba\nFascino\nFogliamagica\nFoglielama\nFrustata\nFrustazione\nGigassorbimento\nGiornodisole\nIntroforza\nLaccioerboso\nLegatutto\nMaledizione\nMeloderba\nNaturforza\nPetalodanza\nPrivazione\nProfumino\nProtezione\nRadicamento\nResistenza\nRiduttore\nRiposo\nRitorno\nRuggito\nRussare\nSalvaguardia\nSchermoluce\nSdoppiatore\nSemebomba\nSintesi\nSolarraggio\nSonnifero\nSonnolalia\nSostituto\nTossina\nVelenoshock\nVelenpolvere\nVerdebufera\nVigorcolpo";
		break;
		
		case 2:
		mosse_apprese = "Affannoseme\nAmnesia\nAttrazione\nAzione\nBullo\nCampo Erboso\nCapocciata\nConfidenza\nCoro\nCrescita\nCuordileone\nDanzaspada\nDoppioteam\nEccheggiavoce\nEnergipalla\nErbapatto\nFacciata\nFango\nFangobomba\nFascino\nFogliamagica\nFoglielama\nFrustata\nFrustazione\nGigassorbimento\nGiornodisole\nIntroforza\nLaccioerboso\nLegatutto\nMaledizione\nMeloderba\nNaturforza\nPetalodanza\nPrivazione\nProfumino\nProtezione\nRadicamento\nResistenza\nRiduttore\nRiposo\nRitorno\nRuggito\nRussare\nSalvaguardia\nSchermoluce\nSdoppiatore\nSemebomba\nSintesi\nSolarraggio\nSonnifero\nSonnolalia\nSostituto\nTossina\nVelenoshock\nVelenpolvere\nVerdebufera\nVigorcolpo";
		break;
		
		case 3:
		mosse_apprese = "Affannoseme\nAmnesia\nAttrazione\nAzione\nBullo\nCampo Erboso\nCapocciata\nConfidenza\nCoro\nCrescita\nCuordileone\nDanzaspada\nDoppioteam\nEccheggiavoce\nEnergipalla\nErbapatto\nFacciata\nFango\nFangobomba\nFascino\nFogliamagica\nFoglielama\nFrustata\nFrustazione\nGigassorbimento\nGiornodisole\nIntroforza\nLaccioerboso\nLegatutto\nMaledizione\nMeloderba\nNaturforza\nPetalodanza\nPrivazione\nProfumino\nProtezione\nRadicamento\nResistenza\nRiduttore\nRiposo\nRitorno\nRuggito\nRussare\nSalvaguardia\nSchermoluce\nSdoppiatore\nSemebomba\nSintesi\nSolarraggio\nSonnifero\nSonnolalia\nSostituto\nTossina\nVelenoshock\nVelenpolvere\nVerdebufera\nVigorcolpo";
		break;
		
		case 4:
		mosse_apprese= "Graffio\nRuggito\nBraciere\nMuro di Fumo\nIra di Drago\nVisotruce\nRogodenti\nPirolancio\nLacerazione\nLanciafiamme\nTurbofuoco\nMarchiatura";
		break;
		
		case 7:
		mosse_apprese= "Azione\nColpocoda\nPistolacqua\nRitirata\nBolla\nMorso\nRapigiro\nProtezione\nIdropulsar\nIdrondata\nCapocciata\nFerroscudo\nPioggiadanza\nIdropompa";	
		break;
	}
}

shiny()
{
	cout<<"Hai scelto "<<nome_pokemonm<<"!\nIl Pokémon e' shiny? Rispondi con 'Si' o 'No'";
	cin >> Shiny;
	if (Shiny == "Sì" or Shiny == "sì" or Shiny == "Si" or Shiny == "si")
	{
		cout<<"Ok, hai selezionato "<<nome_pokemonm<<" shiny!\n";
		Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani-shiny/"+nome_pokemon+".gif]\n<b>"+nome_pokemonm+"</b>"+typing+"\n";
	}
	if (Shiny == "No" or Shiny == "no")
	{
		cout<<"Ok, hai selezionato "<<nome_pokemonm<<" NON shiny!\n";
		Pokemon = "[IMG=https://play.pokemonshowdown.com/sprites/xyani/"+nome_pokemon+".gif]\n<b>"+nome_pokemonm+"</b>"+typing+"\n";
	}
}
