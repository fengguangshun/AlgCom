objects = main.o

outdir = output
outfile = out

all: $(objects)
	@mkdir $(outdir)
	@gcc $(objects) -o ./$(outdir)/$(outfile) 


%.o: %.c
	@gcc -c -g  $^ -o $@



.PHONY: clean
clean:
	-rm -fr $(outdir)
	-rm $(objects)
