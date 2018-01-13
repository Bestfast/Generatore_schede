#include <iostream>
#include <string>
#include <fstream> 
using namespace std;

int level,pv,vel,Errore,fine,exp_agg,exp,num,snum;
unsigned int Pokemonum;
string Pokemon,Shiny,scheda,fisico=":fisico",mosse_apprese,azione,lista_mosse_if,nome_pokemon,nome_pokemonm,ant_move,typing,mossa[4],istring;
int mosse();
int dati();
int shiny();
int main()
{
	printf("Benvenuto nel generatore schede di Bestfast!\nIniziamo!\n");
	printf("Quanti Pokemon vuoi creare?");
	cin>>snum;
	for(int i=1;i<=snum;i++)
	{
		do
		{		
		printf("\nInserisci il numero Pokedex del Pokemon no. %d, guarda 'LISTA_POKEMON.txt' per la lista dei Pokémon: ", i);
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
	 // 	FILE * fp;
	 // 	FILE * pNum;
		// FILE * Sn;
		// Sn = fopen("num.txt", "w");
	 // 	fp = fopen("num.txt" , "r");
	 //  	if(fp == NULL) 
	 //  	{
	 //  		snum = "1";
		// 	fputs(snum.c_str(), Sn);
		// }
		// fclose(Sn);
		// ifstream ifs("num.txt");
		// if( fp !=NULL ) 
		// {
		// getline(ifs,snum);
	 //   }
		// ifs.close();
		istring=to_string(i);
	 	scheda = "Pokemon " + istring + " codice:\n" +  Pokemon + "<b>Lv:</b> " + to_string(level) + "\n"+ "<b>Pv:</b> " + to_string(pv) + "\n" + "<b>Vel</b> " + to_string(vel) + "\n" + mossa[0] + "\n" + mossa[1] + "\n" + mossa[2] + "\n" + mossa[3] + "\n" + "<b>EXP</b>: 0/" + to_string(exp) + "\n\n\n";
	 	FILE * pFile;
	 	pFile = fopen("Scheda.txt", "a+");
		fputs(scheda.c_str(), pFile);
		fclose(pFile);
		// string::size_type sz;
		// num = std::stoi (snum,&sz);
		// num++;
		// snum = to_string(num);
		// fputs(snum.c_str(), Sn);
		// fclose(Sn);
	}
	printf("Ben fatto! Trovi la scheda nel file 'Scheda.txt'!\n");
	cin.get();
}

int dati()
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
		printf("Non implementato\n");
		cin.get();
	}
}

int mosse()
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

int shiny()
{
	cout<<"Hai scelto "<<nome_pokemonm<<"!\nIl Pokémon e' shiny? Rispondi con 'Si' o 'No'\n";
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
