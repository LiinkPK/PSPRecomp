/* Entry 0x088D0E64 | file offset 0x000CDE3C | FUN_088d0e64 | bytes 368 */

void FUN_088d0e64(int param_1,undefined1 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0xc4f4);
  while (iVar2 = iVar4, iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + 0x6c);
    iVar3 = FUN_088dcdf8(iVar2,param_2,0xffffffff);
    if (iVar3 != 0) {
      sVar1 = *(short *)(iVar2 + 0x66);
      iVar3 = *(int *)(param_1 + 0x24);
      while (iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + 0x24);
        FUN_088db28c(iVar3,iVar2,(int)sVar1);
        iVar3 = iVar5;
      }
      iVar3 = *(int *)(param_1 + 0x30);
      while (iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + 0x24);
        FUN_088db28c(iVar3,iVar2,(int)sVar1);
        iVar3 = iVar5;
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0xebc8);
  while (iVar2 = iVar4, iVar2 != 0) {
    iVar4 = *(int *)(iVar2 + 0xc);
    iVar3 = FUN_088de1e8(iVar2,param_2,0xffffffff);
    if (iVar3 != 0) {
      sVar1 = *(short *)(iVar2 + 8);
      iVar3 = *(int *)(param_1 + 0x24);
      while (iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + 0x24);
        FUN_088db2cc(iVar3,iVar2,(int)sVar1);
        iVar3 = iVar5;
      }
      iVar3 = *(int *)(param_1 + 0x30);
      while (iVar3 != 0) {
        iVar5 = *(int *)(iVar3 + 0x24);
        FUN_088db2cc(iVar3,iVar2,(int)sVar1);
        iVar3 = iVar5;
      }
    }
  }
  return;
}

