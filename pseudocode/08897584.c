/* Entry 0x08897584 | file offset 0x0009455C | FUN_08897584 | bytes 352 */

uint FUN_08897584(int param_1,undefined4 param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_4 == '\0') || (*(int *)(param_1 + 0x78) == 0)) {
    iVar1 = FUN_08892fd0(DAT_089d6ac8,param_2,param_3);
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  else {
    uVar5 = 0;
    iVar1 = FUN_08898854(param_1,param_2);
    if (0 < iVar1) {
      for (uVar4 = 0; iVar2 = FUN_088988b4(param_1), (int)uVar4 < iVar2; uVar4 = uVar4 + 1) {
        if ((int)uVar4 < 0) {
          uVar3 = -(-uVar4 & 0x1f);
        }
        else {
          uVar3 = uVar4 & 0x1f;
        }
        if ((*(uint *)(*(int *)(param_1 + 0x78) + iVar1 * 0x20 +
                      ((int)(uVar4 + ((uint)((int)uVar4 >> 5) >> 0x1b)) >> 5) * 4) &
            1 << (uVar3 & 0x1f)) != 0) {
          uVar3 = FUN_08897584(param_1,uVar4,param_3,0);
          uVar5 = uVar5 | uVar3;
        }
      }
    }
    uVar4 = FUN_08897584(param_1,param_2,param_3,0);
    uVar5 = uVar5 | uVar4;
  }
  return uVar5;
}

