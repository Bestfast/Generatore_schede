sudo apt update 
sudo apt install  -y gcc sqlite3 libsqlite3-dev build-essential
g++ main.cpp -std=c++11 -lsqlite3 -o generatore_schede
