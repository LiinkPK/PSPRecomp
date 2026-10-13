/* Entry 0x08926A8C | file offset 0x00123A64 | FUN_08926a8c | bytes 176 */

int FUN_08926a8c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(param_2 + 0x488)) {
    iVar2 = param_2 + 0x48c;
    do {
      iVar1 = FUN_08935c14(iVar2,&DAT_089cea9c);
      if (iVar1 != 0) {
        if (iVar4 == param_3) {
          return iVar2;
        }
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x40;
    } while (iVar3 < *(int *)(param_2 + 0x488));
  }
  return 0;
}

