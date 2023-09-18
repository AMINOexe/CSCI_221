

Main: BST_Main.c Add.o Insert_Node.o New_Node.o New_BST.o 
	gcc BST_Main.c -o Main Add.o Insert_Node.o New_Node.o New_BST.o 

Add.o: Add.c Add.h Structs.h New_Node.h Insert_Node.h
	gcc -c Add.c 

Insert_Node.o: Insert_Node.c Insert_Node.h Structs.h New_Node.h
	gcc -c Insert_Node.c 

New_Node.o: New_Node.c New_Node.h Structs.h
	gcc -c New_Node.c

New_BST.o: New_BST.c New_BST.h Structs.h
	gcc -c New_BST.c


Clean: 
	rm *.o

