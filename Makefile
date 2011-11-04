BIN=realpath
compile:
	gcc -Wall -o ${BIN} ${BIN}.c
install:
	cp -f ${BIN} /usr/bin/${BIN}

