.PHONY: clean 
MYLIBC = ../obj/mylibc.a
PRODUCTS = $(MYLIBC)
default: $(PRODUCTS)

INCDIR = ../inc
INCLUDES = $(INCDIR)/assert.h

OBJDIR = ../obj

include core/assert/makefile

include unittest/makefile
include unittest/core/assert/makefile

# OBJS can deal with either .c 
OBJS = $(OBJDIR)/mlc_assert.o

JUNK = *~ $(OBJDIR)/*.o $(OBJDIR)/*.a  

# Define the tools we are going to use
CC = gcc
AR = ar
LD = gcc

#enplaination of nostdlib: https://gcc.gnu.org/onlinedocs/gcc/Link-Options.html
CFLAGS = -g -O2 -nostdlib -nostdinc -fno-builtin -fstack-protector
CFLAGS += -Wall -Wformat -Wunused -Werror -I. 
CFLAGS += -ansi

$(PRODUCTS): $(OBJS)     
	$(AR) -o $@  $^ 

#unittest,using googletest:https://github.com/google/googletest/blob/master/googletest/docs/Primer.md
#this make no sense, and just test googletest

ut-core-assert: $(OBJDIR)/mlc_core_assert_ut
	./$(OBJDIR)/mlc_core_assert_ut

clean:
	@rm -f $(JUNK) $(PRODUCTS)


