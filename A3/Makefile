FLAGS = -Wall 

Main: BST_Main.c Arr_add.o Add.o Remove_node.o BST_init.o Free_BST.o
	gcc $(FLAGS) BST_Main.c -o Main Arr_add.o Add.o Remove_node.o BST_init.o Free_BST.o

Arr_add.o: arr_add.c arr_add.h structs.h add.h
	gcc $(FLAGS) -c arr_add.c

Add.o: add.c add.h structs.h BST_init.h
	gcc $(FLAGS) -c add.c 

Remove_node.o: remove_node.c remove_node.h structs.h 
	gcc $(FLAGS) -c remove_node.c

BST_init.o: BST_init.c BST_init.h structs.h
	gcc $(FLAGS) -c BST_init.c

Free_BST.o: free_BST.c free_BST.h
	gcc $(FLAGS) -c free_BST.c




Clean: 
	rm *.o

