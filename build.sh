sudo apt-get install -y gcc-mingw-w64 libc6-dev-i386
sudo apt-get install --reinstall -y libsqlite3-0:i386
sudo curl http://www.sqlite.org/2018/sqlite-amalgamation-3220000.zip --output /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/sqlite.zip
sudo unzip /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/sqlite.zip -d /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/
sudo mv /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/sqlite-amalgamation-3220000/* /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/
sudo mkdir $PWD/sqlite3
sudo mkdir /usr/lib/gcc/x86_64-w64-mingw32/4.8/lib
sudo cp /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/sqlite3* $PWD/sqlite3/
sudo cp /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/shell.c $PWD/sqlite3/
sudo cp /usr/lib/x86_64-linux-gnu/libsqlite3.so.0 /usr/x86_64-w64-mingw32/lib/libsqlite3.so.0
sudo cp /usr/lib/x86_64-linux-gnu/libsqlite3.so.0.8.6 /usr/x86_64-w64-mingw32/lib/libsqlite3.so.0.8.6
sudo cp /usr/lib/x86_64-linux-gnu/libsqlite3.so.0.8.6 /usr/x86_64-w64-mingw32/lib/libsqlite3.so
g++ main.cpp -std=c++11 -lsqlite3 -o Generatore_Schede
sed -i 's/<sqlite3.h>/"sqlite3.h"/g' main.cpp
sudo x86_64-w64-mingw32-g++ -std=gnu++11 main.cpp -L/usr/x86_64-w64-mingw32/lib -lsqlite3 -o Generatore_Schede.exe 
mkdir build
sudo mv Generatore_Schede Generatore_Schede.exe db.sqlite build/
sudo zip -r build.zip build
