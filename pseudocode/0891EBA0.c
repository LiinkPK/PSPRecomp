/* Entry 0x0891EBA0 | file offset 0x0011BB78 | FUN_0891eba0 | bytes 112 */

undefined4 FUN_0891eba0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  uVar1 = 0;
  iVar4 = DAT_089d771c;
  if (0 < *(int *)(DAT_089d7718 + 8)) {
    do {
      iVar3 = 0;
      psVar2 = (short *)(iVar4 + 0xc);
      do {
        if (*psVar2 == param_2) {
          uVar1 = 1;
          break;
        }
        iVar3 = iVar3 + 1;
        psVar2 = psVar2 + 1;
      } while (iVar3 < 3);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x12;
    } while (iVar5 < *(int *)(DAT_089d7718 + 8));
  }
  return uVar1;
}

