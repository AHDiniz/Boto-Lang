CC := clang
LDFLAGS := 
CFLAGS := 

ifeq ($(config),)
	config = debug
endif

ifeq ($(config),debug)
endif

ifeq ($(config),release)
endif

SRC := $(wildcard src/*.c) $(wildcard src/**/*.c)
INCLUDE := -Iinclude 

main: $(wildcard src/*.c) $(wildcard src/**/*.c) $(wildcard include/*.h) $(wildcard include/**/*.h)
	$(CC) -o bin/boto $(LDFLAGS) $(CFLAGS) $(INCLUDE) $(SRC)

pch: include/pch.h
	$(CC) include/pch.h -o include/pch.h.pch
