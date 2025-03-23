# Dicas

Para documentação (man pages) sobre `maybe_unused` no Ubuntu 20.04
instalar o pacote abaixo (estou com a versão 11 da stdlib).

```bash
sudo apt install libstdc++-11-doc
```

O Manjaro já instala a documentação.

```bash
pacman -Qs gcc-libs
local/gcc-libs 14.2.1+r753+g1cd744a6828f-1
    Runtime libraries shipped by GCC
local/lib32-gcc-libs 14.2.1+r753+g1cd744a6828f-1
    32-bit runtime libraries shipped by GCC

pacman -Ss gcc-libs
core/gcc-libs 14.2.1+r753+g1cd744a6828f-1 [instalado]
    Runtime libraries shipped by GCC
core/lib32-gcc-libs 14.2.1+r753+g1cd744a6828f-1 [instalado]
    32-bit runtime libraries shipped by GCC
```

## Compilation database

<https://github.com/Sarcasm/notes/blob/master/dev/compilation-database.rst#clang>

Clang
Clang's -MJ option generates a compilation database entry
per input (requires Clang >= 5.0).

Usage:

clang++ -MJ a.o.json -Wall -std=c++11 -o a.o -c a.cpp
clang++ -MJ b.o.json -Wall -std=c++11 -o b.o -c b.cpp
To merge the compilation database entries into a valid
compilation database, it is possible to use (GNU) sed:

sed -e '1s/^/[\n/' -e '$s/,$/\n]/' *.o.json > compile_commands.json
Or, using any sed under Bash, Zsh or ksh:

sed -e '1s/^/[\'$'\n''/' -e '$s/,$/\'$'\n'']/' *.o.json > compile_commands.json
This sed invocation does the following:

Insert the opening bracket: `[`
concatenate the entries
remove the trailing comma of the last entry (to be JSON compliant)
insert the closing bracket: `]`
