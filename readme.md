Passo a passo pra instalar C++ e compilar no vscode. (NEGOCIO CHATO DA PORRA)

OPÇÃO 1 - Instalar online e atualizado:
video de referencia : https://www.youtube.com/watch?v=0HD0pqVtsmw
1 - instala https://www.msys2.org/ (tem na pasta)
2  abrir o terminal msys2
3     > pacman -Syu
4     > pacman -Su
5     > pacman -S mingw-w64-x86_64-gcc
6     > pacman -S mingw-w64-x86_64-gdb
7 adicionar o caminho C:\msys64\mingw64\bin  no path do sistema


OPCAO 2 - Instalar offline
1 - descompacte e copie a pasta msys64 (localizada do compilador_e_exemplo) para o c: (raiz)
2 adicionar o caminho C:\msys64\mingw64\bin  no path do sistema 


para testar:
2.4     > gcc version : gcc --version
2.4     > g++ version : g++ --version
2.4     > gdb version : gdb --version


no vscode:
copiar a pasta .vscode correspondente ao msys para a raiz do projeto (já esta copiado nesse exemplo)