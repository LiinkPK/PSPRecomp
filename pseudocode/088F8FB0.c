/* Entry 0x088F8FB0 | file offset 0x000F5F88 | FUN_088f8fb0 | bytes 164 */

void FUN_088f8fb0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  iVar3 = 0;
  iVar4 = *(int *)(DAT_089d72b8 + 8);
  iVar2 = 0;
  if (0 < iVar4) {
    do {
      psVar5 = (short *)(DAT_089d72bc + iVar2);
      uVar1 = FUN_088b90f8(param_2,(int)*psVar5);
      iVar3 = iVar3 + 1;
      *(undefined1 *)(param_1 + *psVar5 + 0xa8c) = uVar1;
      iVar2 = iVar2 + 0x44;
    } while (iVar3 < iVar4);
  }
  return;
}

