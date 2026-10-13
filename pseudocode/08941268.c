/* Entry 0x08941268 | file offset 0x0013E240 | FUN_08941268 | bytes 104 */

undefined4 FUN_08941268(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = *(int *)(param_2 + 0x1b8);
    if (iVar2 != 0) break;
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 4;
    iVar2 = 0;
  } while (iVar1 < 2);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    if ((*(ushort *)(iVar2 + 2) & 2) != 0) break;
    iVar2 = *(int *)(iVar2 + 0x14);
  }
  return 1;
}

