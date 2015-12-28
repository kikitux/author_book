# author_book
C cli + lib for structs and functions

## How to compile

```bash
mkdir t
cd t
cmake ..
make
```

### sample output

```bash
Alvaros-Mini:kikitux kikitux$ git clone https://kikitux:$GITHUB_PASS@github.com/kikitux/author_book/
Cloning into 'author_book'...
remote: Counting objects: 26, done.
remote: Compressing objects: 100% (21/21), done.
remote: Total 26 (delta 7), reused 18 (delta 4), pack-reused 0
Unpacking objects: 100% (26/26), done.
Checking connectivity... done.
Alvaros-Mini:kikitux kikitux$ cd author_book/

Alvaros-Mini:author_book kikitux$ mkdir t

Alvaros-Mini:author_book kikitux$ cd t
Alvaros-Mini:t kikitux$ cmake ..
-- The C compiler identification is AppleClang 7.0.2.7000181
-- The CXX compiler identification is AppleClang 7.0.2.7000181
-- Check for working C compiler: /Library/Developer/CommandLineTools/usr/bin/cc
-- Check for working C compiler: /Library/Developer/CommandLineTools/usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /Library/Developer/CommandLineTools/usr/bin/c++
-- Check for working CXX compiler: /Library/Developer/CommandLineTools/usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /Volumes/hd3/Dropbox/am/Git/kikitux/author_book/t

Alvaros-Mini:t kikitux$ make
Scanning dependencies of target c_bi_cli_lib
[ 33%] Building C object CMakeFiles/c_bi_cli_lib.dir/cli.c.o
[ 66%] Building C object CMakeFiles/c_bi_cli_lib.dir/lib.c.o
[100%] Linking C executable c_bi_cli_lib
[100%] Built target c_bi_cli_lib

Alvaros-Mini:t kikitux$ ./c_bi_cli_lib 
Hello from cli Alvaro
Author of y u no devops, category: DevOps
Want to quote this book? use:
ISBN 123123123 - y u no devops - Miranda
Alvaros-Mini:t kikitux$ 

```
