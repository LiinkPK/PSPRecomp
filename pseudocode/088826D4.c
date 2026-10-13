/* Entry 0x088826D4 | file offset 0x0007F6AC | FUN_088826d4 | bytes 48 */

int FUN_088826d4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  while( true ) {
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 4);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x34);
    }
    if (iVar2 == 0) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

