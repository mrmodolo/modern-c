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
