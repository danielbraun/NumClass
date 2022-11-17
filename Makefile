LOOP_DEPS=basicClassification.o advancedClassificationLoop.o utils.o
%.o: %.c
	gcc -Wall -fPIC -c $< -o $@

%.so: %.o
	gcc $< -shared -o $@

libclassloops.a: $(LOOP_DEPS)
	ar rcs $@ $^

libclassloops.so: $(LOOP_DEPS)
	gcc $^ -shared -o $@

loops: libclassloops.a
recursives: libclassrec.a

loopd: libclassloops.so
recursived: libclassrec.so

maindloop: loopd
	gcc main.c -L. -lclassloops -o $@

mainsloop: loops
	gcc -v main.c -static -L. -lclassloops -o $@

maindrec: recursived

mains: recursives
clean:
	rm -f *.a *.o *.so
all: maindrec maindloop mains
