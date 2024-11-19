CC = gcc


# explanation of the flags
# -g: include debugging information in the output file
# -w: suppress all warnings
# -m32: compile for 32-bit architecture (instead of 64-bit, which is default on a 64-bit system)
# -fno-stack-protector: disable stack protection (i.e. disables stack canaries)
# -no-pie: disable position-independent executables (PIE), which makes the program start in a new random spot in memory every time you run it
CFLAGS = -g -w -m32 -fno-stack-protector -no-pie

all: bof ret2win

bof: bof.c
	$(CC) $(CFLAGS) -o bof bof.c

ret2win: bof.c
	$(CC) $(CFLAGS) -o ret2win ret2win.c

clean:
	rm -f bof ret2win
