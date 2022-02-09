snake_game=Game
SRC=src/Snakegame.c src/
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
	gcc $(SRC) -Iinc -o $(call FixPath,$(SNAKE_GAME).$(EXEC)) -lm

Run : Build
	./$(call FixPath,$(SNAKE_GAME).$(EXEC))

Clean:
	$(RM) $(call FixPath,*.out)
