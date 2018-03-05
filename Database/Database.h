#ifndef __DATABASE_H__
#define __DATABASE_H__

#include <string>
#include <vector>
#include <sqlite3.h>

using namespace std;

class Database
{
public:
	Database(char const *filename);
	~Database();
	
	bool open(char const *filename);
	vector<vector<string> > query(char const *query);
	void close();
	
private:
	sqlite3 *database;
};

#endif

