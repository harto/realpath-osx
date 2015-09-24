PREFIX=/usr/local/bin
PROG=realpath

.PHONY: install

${PROG}: ${PROG}.c
	gcc -Wall -o $@ $^

install:
	cp -f ${PROG} ${PREFIX}/${PROG}
