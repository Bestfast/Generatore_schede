sudo apt-get install -y gcc-mingw-w64
sudo curl http://www.sqlite.org/2018/sqlite-amalgamation-3220000.zip --output /usr/lib/gcc/i686-w64-mingw32/4.8/include/sqlite.zip
sudo curl https://www.sqlite.org/2018/sqlite-dll-win32-x86-3220000.zip --output /usr/i686-w64-mingw32/lib/sqlite_dll.zip
sudo unzip /usr/i686-w64-mingw32/lib/sqlite_dll.zip -d /usr/i686-w64-mingw32/lib/
sudo unzip /usr/lib/gcc/i686-w64-mingw32/4.8/include/sqlite.zip -d /usr/lib/gcc/i686-w64-mingw32/4.8/include/
sudo mv /usr/lib/gcc/i686-w64-mingw32/4.8/include/sqlite-amalgamation-3220000/* /usr/lib/gcc/i686-w64-mingw32/4.8/include/
g++ main.cpp -std=c++11 -lsqlite3 -o Generatore_Schede_linuxX64
sudo i686-w64-mingw32-g++ -std=gnu++11 main.cpp -static-libgcc  -static -lpthread -static-libstdc++ -L/usr/i686-w64-mingw32/lib -static -l:/usr/i686-w64-mingw32/lib/sqlite3.dll -o Generatore_Schede_winX32.exe 
mkdir -p build/win32
mkdir -p build/linux64
sudo cp Generatore_Schede_linuxX64 db.sqlite build/linux64/
sudo cp /usr/i686-w64-mingw32/lib/sqlite3.dll $PWD/build/win32/sqlite3.dll
sudo cp Generatore_Schede_winX32.exe db.sqlite build/win32/
sudo zip -r build.zip build
