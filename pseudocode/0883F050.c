/* Entry 0x0883F050 | file offset 0x0003C028 | FUN_0883f050 | bytes 592 */

void FUN_0883f050(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int local_4c;
  
  iVar1 = FUN_0883739c(param_2);
  if (iVar1 == 1) {
    local_4c = 100;
    if (*(int *)(param_1 + 0x328) != 0) {
      local_4c = FUN_0883f69c(param_1,param_2);
      iVar1 = FUN_088bf4cc(param_1,2);
      if (iVar1 != 0) {
        local_4c = (local_4c * *(short *)(iVar1 + 4)) / 100;
      }
    }
    if (0x2705 < local_4c) {
      local_4c = 0x2706;
    }
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x5dc)) {
      iVar10 = 0;
      do {
        puVar8 = (undefined4 *)(*(int *)(param_1 + 0x5d8) + iVar10);
        uVar9 = *puVar8;
        iVar2 = FUN_088bd640(param_1,uVar9);
        iVar3 = FUN_088bd640(param_1 + 0x40,uVar9);
        iVar4 = 0;
        if (0 < *(short *)(iVar3 + 2)) {
          psVar6 = (short *)(iVar3 + 4);
          psVar7 = (short *)(iVar2 + 4);
          iVar5 = 0;
          do {
            iVar11 = (*psVar6 * local_4c) / 100;
            if (iVar2 != 0) {
              iVar11 = iVar11 + *psVar7;
            }
            if (0x7fff < iVar11) {
              iVar11 = 0x7fff;
            }
            if (iVar11 < -0x8000) {
              iVar11 = -0x8000;
            }
            *(short *)(puVar8[1] + iVar5 + 4) = (short)iVar11;
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 2;
            psVar6 = psVar6 + 1;
            psVar7 = psVar7 + 1;
          } while (iVar4 < *(short *)(iVar3 + 2));
        }
        iVar1 = iVar1 + 1;
        iVar10 = iVar10 + 8;
      } while (iVar1 < *(int *)(param_1 + 0x5dc));
    }
    *(int *)(param_1 + 0x5e4) = local_4c;
  }
  return;
}

