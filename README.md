# CPP Train

cpp 火車

## 編譯腳本: 故意不用 Makefile 而用 Bash Script

* 目的: 
  - 好玩
  - 練習 Bash Script，增加 Bash Scripting 實作經驗

* 腳本用法:

```
$ ./compile

./compile: Simple Compile Bash Script

help: show this message
all: compile all programs
clean: clean binary files
<program_name>: compile <program_name>.cpp

Note.
1. You can specific custom compiler with CXX variable
2. You can compile static linked program by set variable STATIC=1
```

* 腳本部份授權: [BSD-2-Clause](https://opensource.org/licenses/BSD-2-Clause)
