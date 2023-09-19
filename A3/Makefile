FLAGS = -Wall 

Main: BST_Main.c Add.o Insert_Node.o New_Node.o New_BST.o Arr_add.o Delete_node.o Rem.o 
	gcc $(FLAGS) BST_Main.c -o Main Add.o Insert_Node.o New_Node.o New_BST.o Arr_add.o Delete_node.o Rem.o 

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

Rem.o: Rem.c Rem.h Structs.h delete_node.h 
	gcc $(FLAGS) -c Rem.c

Delete_node.o: delete_node.c delete_node.h Structs.h
	gcc $(FLAGS) -c delete_node.c 

Clean: 
	rm *.o

