CC_FLAGS = -Wall -Wextra -g -std=c11

all:  zvm
test: zvm
	./zvm
