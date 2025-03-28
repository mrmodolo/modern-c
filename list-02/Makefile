all: build/getting-started

build/getting-started: getting-started.c
	clang -std=c2x -Wall getting-started.c -o build/getting-started -lm -MJ./build/a.o.json

compile_commands.json: build/*.o.json
	sed -e '1s/^/[\n/' -e '$$s/,$$/\n]/' build/*.o.json > compile_commands.json

clean:
	-rm -f build/*
