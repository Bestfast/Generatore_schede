sudo apt-get install -y mingw-w64 libc6-dev-i386
sudo curl http://www.sqlite.org/2018/sqlite-amalgamation-3220000.zip --output /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/sqlite.zip
sudo unzip /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/sqlite.zip -d /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/
g++ main.cpp -std=c++11 -lsqlite3 -o Generatore_Schede
x86_64-w64-mingw32-g++ -std=gnu++11 -lsqlite3 main.cpp -o Generatore_Schede.exe
mkdir build
mv Generatore_Schede Generatore_Schede.exe db.sqlite build/
zip -r build.zip build
