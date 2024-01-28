
PHONY: all clean loops recursives recursived loopd

# all: maindloop maindrec
all: mains maindloop maindrec


loops: libclassloop.a

recursives: libclassrec.a

recursived: libclassrec.so

loopd: libclassloop.so



mains: main.o libclassrec.a
	gcc -Wall -g main.o libclassrec.a -o mains

maindloop:libclassloop.so main.o
	gcc -Wall main.o ./libclassloop.so -o mainloop

maindrec: libclassrec.so main.o
	gcc -Wall main.o ./libclassrec.so -o maindrec






main.o: main.c NumClass.h
	gcc -c -Wall main.c -o main.o


basicClassifications.o: basicClassifications.c NumClass.h
	gcc -c -Wall -fpic basicClassifications.c -o basicClassifications.o


advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -c -Wall -fpic advancedClassificationLoop.c -o advancedClassificationLoop.o


advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -c -Wall -fpic advancedClassificationRecursion.c -o advancedClassificationRecursion.o

libclassloop.a: basicClassifications.o advancedClassificationLoop.o
	ar rcu libclassloop.a basicClassifications.o advancedClassificationLoop.o 
	ranlib libclassloop.a
	
libclassrec.a: advancedClassificationRecursion.o basicClassifications.o
	ar rcu libclassrec.a advancedClassificationRecursion.o basicClassifications.o
	ranlib libclassrec.a

libclassrec.so: advancedClassificationRecursion.o basicClassifications.o
	gcc -Wall -shared -o libclassrec.so advancedClassificationRecursion.o basicClassifications.o 

libclassloop.so: basicClassifications.o advancedClassificationLoop.o
	gcc -Wall -shared -o libclassloop.so basicClassifications.o advancedClassificationLoop.o 

clean:
	rm -f *.o *.a *.so mains mainloop maindrec





