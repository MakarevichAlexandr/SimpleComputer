#include "mySimpleComputer.h"


int Memory[SIZE];
int reg_flags;
int flag;
const int cmd_arr[] = {0x10, 0x11, 0x20, 0x21, 0x30, 0x31, 0x32, 0x33, 0x40,
						   0x41, 0x42, 0x43, 0x59};
const int cmd_num = 13;
