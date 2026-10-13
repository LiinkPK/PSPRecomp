/* Entry 0x088B7C58 | file offset 0x000B4C30 | FUN_088b7c58 | bytes 112 */

int FUN_088b7c58(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_088b7ae8(param_1,iVar2);
    if (iVar1 != -1) {
      iVar3 = iVar3 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40);
  return iVar3;
}

