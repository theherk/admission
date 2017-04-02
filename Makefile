admission:
	g++ *.cpp -o $@

clean:
	rm -f admission

run: admission
	./admission
