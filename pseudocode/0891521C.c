/* Entry 0x0891521C | file offset 0x001121F4 | FUN_0891521c | bytes 236 */

void FUN_0891521c(int param_1)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x5c) != 0) {
    psVar1 = (short *)FUN_088470dc(*(int *)(param_1 + 0x5c),1,0);
    *(int *)(param_1 + 0x6cc) = (int)*psVar1;
    iVar2 = FUN_088444d4(DAT_089d4960);
    if (iVar2 == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x6cc);
      uVar3 = FUN_089110b4();
      FUN_08844c14(uVar5,uVar3,0);
    }
  }
  iVar6 = 0;
  iVar2 = param_1;
  do {
    if (*(int *)(iVar2 + 0x6d4) != 0) {
      psVar1 = (short *)FUN_08847108(*(int *)(iVar2 + 0x6d4),*(undefined4 *)(iVar2 + 0x6e4));
      *(int *)(iVar2 + 0x6f4) = (int)*psVar1;
      iVar4 = FUN_088444d4(DAT_089d4960);
      if (iVar4 == 0) {
        uVar5 = *(undefined4 *)(iVar2 + 0x6f4);
        uVar3 = FUN_089110b4();
        FUN_08844c14(uVar5,uVar3,0);
      }
    }
    iVar6 = iVar6 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar6 < 4);
  func_0x08b45310(*(undefined4 *)(param_1 + 0x8c));
  return;
}

