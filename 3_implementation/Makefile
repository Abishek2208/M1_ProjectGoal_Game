Voting=Game
SRC=src/Voting.c 
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

Build : $(SRC)
	gcc $(SRC) -Iinc -o $(call FixPath,$(Game).$(EXEC)) -lm

Run : Build
	./$(call FixPath,$(Game).$(EXEC))

Clean:
	$(RM) $(call FixPath,*.out)
