/* Entry 0x088B7B88 | file offset 0x000B4B60 | FUN_088b7b88 | bytes 208 */

int FUN_088b7b88(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar1 = FUN_088b7a88(param_1,param_2,iVar4);
    if (iVar1 != -1) {
      iVar3 = iVar3 + 1;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  iVar4 = 0;
  do {
    iVar1 = 0;
    do {
      iVar2 = FUN_088b7ab8(param_1,param_2,iVar4,iVar1);
      if (iVar2 != -1) {
        iVar3 = iVar3 + 1;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  return iVar3;
}

