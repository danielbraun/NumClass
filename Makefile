LOOP_DEPS=basicClassification.o advancedClassificationLoop.o utils.o
RECUR_DEPS=basicClassification.o advancedClassificationRecursion.o utils.o
COMPILE_A=ar rcs $@ $^
COMPILE_SO=gcc $^ -shared -o $@
EXECUTABLES=mains maindloop maindrec

%.o: %.c
	gcc -Wall -fPIC -c $< -o $@

libclassloops.a:  $(LOOP_DEPS);   $(COMPILE_A)
libclassloops.so: $(LOOP_DEPS);   $(COMPILE_SO)
libclassrec.a:    $(RECUR_DEPS);  $(COMPILE_A)
libclassrec.so:   $(RECUR_DEPS);  $(COMPILE_SO)

loops:      libclassloops.a
loopd:      libclassloops.so
recursives: libclassrec.a
recursived: libclassrec.so

mains: main.o libclassrec.a
	gcc $^ -lm -o $@

maindloop: main.o libclassloops.so
	gcc $< -L. -lclassloops -lm -o $@

maindrec: main.o libclassrec.so
	gcc $< -L. -lclassrec -lm -o $@

clean:
	rm -f *.a *.o *.so $(EXECUTABLES)

all: $(EXECUTABLES)
