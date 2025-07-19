# 源文件列表（当前目录下所有 .c）
SRCS := $(wildcard *.c)
# 可执行文件列表（去掉 .c，放到 bin/）
PROGS := $(patsubst %.c,bin/%,$(SRCS))

# 默认目标：编译所有
all: $(PROGS)

# bin/ 目录确保存在
bin:
	mkdir -p $@

# 生成 bin/foo：由 foo.c 编译而来
bin/%: %.c | bin
	gcc -Wall -O2 -o $@ $<

# 清理
clean:
	rm -rf bin/*

.PHONY: all clean