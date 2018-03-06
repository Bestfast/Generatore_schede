sudo apt-get install -y gcc-mingw-w64 libc6-dev-i386
sudo curl http://www.sqlite.org/2018/sqlite-amalgamation-3220000.zip --output /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/sqlite.zip
sudo curl https://www.sqlite.org/2018/sqlite-dll-win64-x64-3220000.zip --output /usr/x86_64-w64-mingw32/lib/sqlite_dll.zip
sudo unzip /usr/x86_64-w64-mingw32/lib/sqlite_dll.zip -d /usr/x86_64-w64-mingw32/lib/
sudo unzip /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/sqlite.zip -d /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/
sudo mv /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/sqlite-amalgamation-3220000/* /usr/lib/gcc/x86_64-w64-mingw32/4.8/include/
g++ main.cpp -std=c++11 -lsqlite3 -o Generatore_Schede_linuxX64
sudo x86_64-w64-mingw32-g++ -std=gnu++11 main.cpp -L/usr/x86_64-w64-mingw32/lib -l:/usr/x86_64-w64-mingw32/lib/sqlite3.dll -o Generatore_Schede_winX64.exe 
mkdir build
sudo mv Generatore_Schede_linuxX64 Generatore_Schede_winX64.exe db.sqlite build/
sudo zip -r build.zip build
