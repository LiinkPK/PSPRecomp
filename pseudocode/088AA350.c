/* Entry 0x088AA350 | file offset 0x000A7328 | FUN_088aa350 | bytes 96 */

int FUN_088aa350(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    do {
      if (iVar1 == 0) {
        iVar1 = *(int *)(param_1 + 0x1c);
      }
      else {
        iVar1 = *(int *)(iVar1 + 0x27c);
      }
      if (iVar1 == 0) {
        return 0;
      }
    } while (*(int *)(*(int *)(iVar1 + 0xc0) + 0x24) != param_2);
    if (param_3 == 0) {
      return iVar1;
    }
  } while (param_3 != *(int *)(iVar1 + 0xd0));
  return iVar1;
}

