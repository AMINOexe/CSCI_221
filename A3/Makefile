FLAGS = -Wall 

Main: BST_Main.c Add.o Insert_Node.o New_Node.o New_BST.o Arr_add.o
	gcc $(FLAGS) BST_Main.c -o Main Add.o Insert_Node.o New_Node.o New_BST.o Arr_add.o

Arr_add.o: Arr_add.c Arr_add.h Add.h
	gcc $(FLAGS) -c Arr_add.c

Add.o: Add.c Add.h Structs.h New_Node.h Insert_Node.h
	gcc $(FLAGS) -c Add.c 

Insert_Node.o: Insert_Node.c Insert_Node.h Structs.h New_Node.h
	gcc $(FLAGS) -c Insert_Node.c 

New_Node.o: New_Node.c New_Node.h Structs.h
	gcc $(FLAGS) -c New_Node.c

New_BST.o: New_BST.c New_BST.h Structs.h
	gcc $(FLAGS) -c New_BST.c


Clean: 
	rm *.o

