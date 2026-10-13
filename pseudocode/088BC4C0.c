/* Entry 0x088BC4C0 | file offset 0x000B9498 | FUN_088bc4c0 | bytes 204 */

void FUN_088bc4c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_2 + *(char *)(param_2 + 0x763) * 0xc6;
  iVar1 = FUN_088b7c58(iVar5);
  iVar3 = 0;
  do {
    uVar2 = (uint)*(byte *)(param_1 + 4 + iVar3);
    iVar4 = iVar1;
    if (uVar2 != 0xff) {
      uVar2 = uVar2 | 0x4000;
      FUN_088b7ed4(param_2,uVar2);
      iVar4 = iVar1 + 1;
      FUN_088b764c(iVar5,iVar1,uVar2);
    }
    iVar3 = iVar3 + 1;
    iVar1 = iVar4;
  } while (iVar3 < 0x20);
  return;
}

