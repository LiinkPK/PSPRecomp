/* Entry 0x088CB09C | file offset 0x000C8074 | FUN_088cb09c | bytes 116 */

int FUN_088cb09c(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = &DAT_09b69868;
  iVar1 = 0;
  iVar3 = 0;
  while ((*piVar2 == 0 || (iVar1 = FUN_088cafac(*piVar2,param_1), iVar1 == 0))) {
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
    if (3 < iVar3) {
      return iVar1;
    }
  }
  return iVar1;
}

