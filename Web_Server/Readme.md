Req:
for Linux:
sudo apt install libboost-all-dev
sudo apt install libasio-dev

for Windows:
git clone https://github.com/microsoft/vcpkg.git
cd vcpkg
.\bootstrap-vcpkg.bat
.\vcpkg install boost asio
cmake -S . -B build ^
-DCMAKE_TOOLCHAIN_FILE=vcpkg.cmake
.\build\Debug\server.exe