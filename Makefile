# LARGE integer calculations
# Written by XJ

CC	= gcc
CFLAGS	= -Wall -Werror -std=gnu11 -g

.PHONY:	all
all:	calc

calc:	calc.o BigNum.o

calc.o:		calc.c BigNum.h
BigNum.o:	BigNum.c BigNum.h

.PHONY: clean
clean:
	-rm -f calc calc.o BigNum.o

