sudo apt update 
sudo apt upgrade -y 
sudo apt install  -y sqlite3 libsqlite3-dev
g++ main.cpp -lsqlite3 -o generatore_schede
