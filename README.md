# WoodFlow

## Build

```bash
CC=clang CXX=clang++ meson setup builddir --native-file clang-native.ini

meson compile -C builddir

./builddir/woodflow_bin
```
