# $< : La primera dependencia
# $@ : target

all: fig.pdf

subs_cancellation.x: subs_cancellation.cpp


%.x: %.cpp
	g++ $< -o $@
	
datos.txt: subs_cancellation.x 
	./$< > $@

clean:
	rm -f a.out *.x *.txt *.pdf


fig.pdf: plot.gp datos.txt
	gnuplot $<