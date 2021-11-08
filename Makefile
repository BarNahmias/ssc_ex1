CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_LIBL=advancedClassificationLoop.o  basicClassification.o 
OBJECTS_LIBR =advancedClassificationRecursion.o basicClassification.o 

all: libclassrec.a libclassloops.a  libclassloops.so libclassrec.so 

mains: mains1
mains1: $(OBJECTS_MAIN) libclassrec.a 
	$(CC) $(FLAGS) -o mains1 $(OBJECTS_MAIN) libclassrec.a   -lm

maindloop: maindloop1
maindloop1: $(OBJECTS_MAIN) libclassloops.so 
	$(CC) $(FLAGS) -o maindloop1 $(OBJECTS_MAIN) ./libclassloops.so -lm
	
maindrec: maindrec1 
maindrec1: $(OBJECTS_MAIN) libclassrec.so 
	$(CC) $(FLAGS) -o maindrec1 $(OBJECTS_MAIN) ./libclassrec.so  -lm

loops: libclassloops.a
libclassloops.a: $(OBJECTS_LIBL) 
	$(AR) -rcs libclassloops.a $(OBJECTS_LIBL)  
	
recursives: libclassrec.a
libclassrec.a: $(OBJECTS_LIBR) 
	$(AR) -rcs libclassrec.a $(OBJECTS_LIBR) 


loopd: libclassloops.so
libclassloops.so :$(OBJECTS_LIBL) 
	$(CC) -shared -o libclassloops.so $(OBJECTS_LIBL) -lm
	
recursived: libclassrec.so
libclassrec.so :$(OBJECTS_LIBR) 
	$(CC) -shared -o libclassrec.so $(OBJECTS_LIBR) -lm


advancedClassificationLoop.o: advancedClassificationLoop.c advancedClassificationLoop.h 
	$(CC) $(FLAGS) -c advancedClassificationLoop.c -lm

advancedClassificationRecursion.o: advancedClassificationRecursion.c advancedClassificationRecursion.h 
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c -lm

basicClassification.o: basicClassification.c basicClassification.h 
	$(CC) $(FLAGS) -c basicClassification.c -lm


main.o: main.c NumClass.h  
	$(CC) $(FLAGS) -c main.c -lm

.PHONY: clean all recursives recursived loopd mains maindloop maindrec

clean:
	rm -f *.o *.a *.so recursives recursived loopd mains maindloop maindrec
