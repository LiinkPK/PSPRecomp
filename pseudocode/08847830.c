/* Entry 0x08847830 | file offset 0x00044808 | FUN_08847830 | bytes 216 */

void FUN_08847830(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_28 [2];
  
  iVar2 = param_2 + 0x10 + *(char *)(param_2 + 0x773) * 0xc6;
  uVar3 = (uint)*(byte *)(iVar2 + 0xc5);
  if (uVar3 == 0) {
    uVar3 = (uint)*(byte *)(param_2 + 1);
  }
  *(uint *)(param_1 + 0x30) = uVar3;
  iVar4 = 0;
  do {
    iVar1 = FUN_088b7b18(iVar2,iVar4);
    *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
    if (iVar1 != -1) {
      FUN_088b97e8(local_28,iVar1);
      if (local_28[0] != 0) {
        *(int *)(param_1 + 0x34) = (int)*(char *)(local_28[0] + 0xd);
      }
    }
    iVar4 = iVar4 + 1;
    param_1 = param_1 + 4;
  } while (iVar4 < 4);
  return;
}

