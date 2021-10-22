# $< : La primera dependencia
# $@ : target

all: fig.pdf

sumas.x: sumas.cpp


%.x: %.cpp
	g++ $< -o $@
	
datos.txt: sumas.x 
	./$< > $@

clean:
	rm -f a.out *.x *.txt *.pdf


fig.pdf: plot.gp datos.txt
	gnuplot $<