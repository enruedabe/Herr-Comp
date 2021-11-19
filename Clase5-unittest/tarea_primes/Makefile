all: main_primes.x
test: test_primes.x
	./$<

main_primes.x: primes_main.cpp primes.cpp primes.h
	g++ $< primes.cpp -o $@

test_primes.x: testing_primes.cpp primes.cpp primes.h
	g++ $< primes.cpp -o $@



clean:
	rm -f *.x a.out *.x.* 
