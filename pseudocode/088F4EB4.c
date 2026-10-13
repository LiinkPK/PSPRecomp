/* Entry 0x088F4EB4 | file offset 0x000F1E8C | FUN_088f4eb4 | bytes 52 */

int FUN_088f4eb4(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(short *)(param_1 + 0xd2) == param_2) {
      return param_1 + 0xd2;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x80;
  } while (iVar1 < 4);
  return 0;
}

