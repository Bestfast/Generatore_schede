#include <iostream>
#include <string>
#include <fstream> 
#include <sqlite3.h>
#include "Database/Database.h"
#include "Database/main.cpp"

using namespace std;
int level,pv,vel,exp_agg,exp,num,inum,lunghezza,nums;
unsigned int Pokemonum;
char a[100], mosse_apprese[1028];
string Pokemon,Shiny,scheda,fisico=":fisico:",azione,lista_mosse_if,nome_pokemonm,typing,mossa[4],snum,nomefile_pv, nomefile_vel, nomefile_mosse_apprese;
Database *db;
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
		db = new Database("db.sqlite");
		vector<vector<string> > result = db->query("SELECT * FROM nome_pokemon;");
		for(vector<vector<string> >::iterator it = result.begin(); it < result.end(); ++it)
		{
			vector<string> row = *it;
			nome_pokemonm =  row.at(Pokemonum);
		}
		result = db->query("SELECT * FROM typing;");
		for(vector<vector<string> >::iterator it = result.begin(); it < result.end(); ++it)
		{
			vector<string> row = *it;
			typing =  row.at(Pokemonum);
		}
		result = db->query("SELECT * FROM exp_agg;");
		for(vector<vector<string> >::iterator it = result.begin(); it < result.end(); ++it)
		{
			vector<string> row = *it;
			exp_agg =  stoi(row.at(Pokemonum));
		}
		result = db->query("SELECT * FROM pv;");
		for(vector<vector<string> >::iterator it = result.begin(); it < result.end(); ++it)
		{
			vector<string> row = *it;
			pv =  stoi(row.at(Pokemonum));
		}
		result = db->query("SELECT * FROM vel;");
		for(vector<vector<string> >::iterator it = result.begin(); it < result.end(); ++it)
		{
			vector<string> row = *it;
			vel =  stoi(row.at(Pokemonum));
		}
			cout<<"Hai scelto "<<nome_pokemonm<<"!\nIl Pokemon e' shiny? Rispondi con 'Si' o 'No'\n";
			cin >> Shiny;
			if (Shiny == "Sì" or Shiny == "sì" or Shiny == "Si" or Shiny == "si")
			{
				cout<<"Ok, hai selezionato "<<nome_pokemonm<<" shiny!\n";
				Pokemon = "[IMG=https://raw.githubusercontent.com/Bestfast/sprites_pkmn/master/sprites_shiny/"+nome_pokemonm+".gif]\n<b>"+nome_pokemonm+"</b>"+typing+"\n";
			}
			if (Shiny == "No" or Shiny == "no")
			{
				cout<<"Ok, hai selezionato "<<nome_pokemonm<<" NON shiny!\n";
				Pokemon = "[IMG=https://raw.githubusercontent.com/Bestfast/sprites_pkmn/master/sprites/"+nome_pokemonm+".gif]\n<b>"+nome_pokemonm+"</b>"+typing+"\n";
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
		printf("Vuoi vedere la lista delle mosse che puo' imparare questo Pokemon?\n");
		cin >>	 lista_mosse_if;
		if ((lista_mosse_if.compare("Sì") or lista_mosse_if.compare("sì") or lista_mosse_if.compare("Si") or lista_mosse_if.compare("si")) == 1)
		{
			result = db->query("SELECT * FROM mosse_apprese;");
			for(vector<vector<string> >::iterator it = result.begin(); it < result.end(); ++it)
			{
				vector<string> row = *it;
				cout << nome_pokemonm << " puo' imparare queste mosse:\n" << row.at(Pokemonum) << endl;
			}
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
			nums = stoi(a);
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
