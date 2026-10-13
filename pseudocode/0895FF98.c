/* Entry 0x0895FF98 | file offset 0x0015CF70 | FUN_0895ff98 | bytes 264 */

void FUN_0895ff98(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = DAT_09b6f478;
  *(undefined4 *)(*(int *)(DAT_09b6f478 + 0x9c) + 0x2c) = 0xffffffff;
  if (*(int *)(param_2 + 0x50) < 0) {
    iVar3 = -1;
  }
  else {
    iVar3 = *(int *)(*(int *)(*(int *)(iVar4 + 0x88) + 0x1c8) + 0x38);
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else {
      iVar3 = *(int *)(*(int *)(iVar3 + *(int *)(param_2 + 0x50) * 4) + 0x10);
    }
  }
  if (iVar3 != -1) {
    iVar2 = *(int *)(iVar4 + 0x8c);
    uVar1 = *(ushort *)
             (*(int *)(*(int *)(iVar4 + 0x90) + 8) + *(int *)(*(int *)(iVar4 + 0x90) + 4) * 2);
    iVar4 = 0;
    if (0 < *param_1) {
      iVar5 = 0;
      do {
        FUN_0898dd14(param_1[4] + iVar5,iVar3,iVar2 + (uint)uVar1 + 0x60,param_2);
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + 0x6c;
      } while (iVar4 < *param_1);
    }
  }
  return;
}

