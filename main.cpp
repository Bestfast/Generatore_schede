#include <iostream>
#include <string>
#include <fstream> 
using namespace std;
int level,pv,vel,exp_agg,exp,num,inum,lunghezza,nums;
unsigned int Pokemonum;
char a[100];
string Pokemon,Shiny,scheda,fisico=":fisico:",mosse_apprese,azione,lista_mosse_if,nome_pokemon,nome_pokemonm,typing,mossa[4],snum,nomefile_pv, nomefile_vel;
int main()
{
	printf("Benvenuto nel generatore schede di Bestfast!\nIniziamo!\n");
	// printf("Quanti Pokemon vuoi creare?");
	// cin>>snum;
	// for(int i=1;i<=inum;i++)
	// {
		do
		{		
		printf("\nInserisci il numero Pokedex del Pokemon, guarda 'LISTA_POKEMON.txt' per la lista dei Pokemon: ");
		cin >> Pokemonum;
		}while(Pokemonum<=0 or Pokemonum>802);
		switch(Pokemonum)
			{
				case 1:
				nome_pokemon = "bulbasaur";
				nome_pokemonm = "Bulbasaur";
				typing=":erba: :veleno:";
				exp_agg = 2;
				break;
				
				case 2:
				nome_pokemon = "ivysaur";
				nome_pokemonm = "Ivysaur";
				typing=":erba: :veleno:";
				exp_agg = 2;
				break;
			
				case 3:
				nome_pokemon = "venusaur";
				nome_pokemonm = "Venusaur";
				typing=":erba: :veleno:";
				exp_agg=2;
				break;
			
				case 4:
				nome_pokemon = "charmander";
				nome_pokemonm = "Charmander";
				typing=":fuoco:";
				exp_agg=2;
				break;
			
				case 7:
				nome_pokemon = "squirtle";
				nome_pokemonm = "Squirtle";
				typing=":acqua:";
				exp_agg=2;
				break;
				
				default:
				printf("Non implementato\n");
				cin.get();
			}
			cout << "a";
			nomefile_pv = "Data//" + nome_pokemonm + "_pv.txt";
			nomefile_vel = "Data//" + nome_pokemonm + "_vel.txt";
			char *nome_file_pv = &nomefile_pv[0u];
			char *nome_file_vel = &nomefile_vel[0u];
			FILE *filepv, *filevel;
			filepv = fopen(nome_file_pv,"a+");
			rewind(filepv);
			fscanf(filepv,"%d",&pv);
			fclose(filepv);
			filevel = fopen(nome_file_vel,"a+");
			rewind(filevel);
			fscanf(filevel,"%d",&vel);
			fclose(filevel);
			cout<<"Hai scelto "<<nome_pokemonm<<"!\nIl Poke'mon e' shiny? Rispondi con 'Si' o 'No'\n";
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
		{
			pv = (level - 1) * 3 + pv;
			pot_da_aggiungere = level - 1;
		}
		int pot_azione = 4 + pot_da_aggiungere;
		printf("Vuoi vedere la lista delle mosse che puo' imparare questo Pokemon?\n");
		cin >>	 lista_mosse_if;
		if ((lista_mosse_if.compare("Sì") or lista_mosse_if.compare("sì") or lista_mosse_if.compare("Si") or lista_mosse_if.compare("si")) == 0)
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
	 	FILE * fp;
	 	fp = fopen("num.txt","a+");
		fclose(fp);
		ofstream ofs;
		ifstream ifs;
		ifs.open("num.txt", ios::binary);
		ifs.seekg(0, ios::end);
		lunghezza = ifs.tellg();
		ifs.close();
		if (lunghezza == 0)
		{
			fp = fopen("num.txt","a+");
			nums = 1;
			fprintf(fp,"%d", nums);
			fclose(fp);
		}
		else
		{
			fp = fopen("num.txt","a+");
			rewind(fp);
			fscanf(fp,"%s",a);
			fclose(fp);
			ofs.open("num.txt");
			nums = std::stoi(a);
			nums++;
			ofs.close();
			ofs.open("num.txt",ios::trunc);
			fprintf(fp, "%d", nums);
			ofs.close();
    	}




	 	scheda = "Scheda numero " + to_string(nums) + ":\n\n\n" +  Pokemon + "<b>Lv:</b> " + to_string(level) + "\n" + "<b>Pv:</b> " + to_string(pv) + "\n" + "<b>Vel</b> " + to_string(vel) + "\n" + mossa[0] + "\n" + mossa[1] + "\n" + mossa[2] + "\n" + mossa[3] + "\n" + "<b>EXP</b>: 0/" + to_string(exp) + "\n\n\n";
	 	FILE * schedaF;
	 	schedaF = fopen("Scheda.txt", "a+");
		fputs(scheda.c_str(), schedaF);
		fclose(schedaF);
	printf("Ben fatto! Trovi la scheda nel file 'Scheda.txt', il numero della scheda è %d.\n", nums);
	cin.get();
 }
