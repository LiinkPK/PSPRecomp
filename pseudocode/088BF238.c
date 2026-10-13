/* Entry 0x088BF238 | file offset 0x000BC210 | FUN_088bf238 | bytes 484 */

void FUN_088bf238(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  short *psVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  short *psVar12;
  undefined *local_30;
  undefined4 local_2c;
  undefined *local_28;
  
  local_30 = &DAT_089cba38;
  local_28 = &DAT_089cba50;
  local_2c = param_3;
  FUN_088beb84(param_1,param_2,&local_30);
  FUN_088beb84(param_1 + 0x40,param_2,&local_28);
  FUN_088b1e20(param_1 + 0x80,param_2,1);
  FUN_088b1e20(param_1 + 0x32c,param_2,2);
  iVar9 = *(int *)(param_1 + 0x44);
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 0x5d8) = 0;
    *(undefined4 *)(param_1 + 0x5dc) = 0;
  }
  else {
    *(int *)(param_1 + 0x5dc) = iVar9;
    uVar1 = FUN_088bd92c(iVar9 << 3);
    *(undefined4 *)(param_1 + 0x5d8) = uVar1;
    iVar2 = FUN_088bd92c(*(int *)(param_1 + 0x5dc) << 4);
    iVar10 = 0;
    *(int *)(param_1 + 0x5e0) = iVar2;
    if (0 < iVar9) {
      iVar11 = 0;
      do {
        psVar12 = (short *)(*(int *)(param_1 + 0x40) + iVar11);
        iVar3 = FUN_088bd640(param_1,(int)*psVar12);
        *(int *)(*(int *)(param_1 + 0x5d8) + iVar11) = (int)*psVar12;
        iVar4 = 0;
        if (iVar2 != 0) {
          FUN_088bd398(iVar2);
          iVar4 = iVar2;
        }
        *(int *)(*(int *)(param_1 + 0x5d8) + iVar11 + 4) = iVar4;
        **(undefined2 **)(*(int *)(param_1 + 0x5d8) + iVar11 + 4) = 1;
        iVar6 = *(int *)(psVar12 + 2);
        iVar4 = 0;
        iVar2 = iVar2 + 0x10;
        if (0 < *(short *)(iVar6 + 2)) {
          psVar8 = (short *)(iVar3 + 4);
          iVar7 = 0;
          do {
            sVar5 = *(short *)(iVar6 + 4 + iVar7);
            if (iVar3 != 0) {
              sVar5 = sVar5 + *psVar8;
            }
            iVar4 = iVar4 + 1;
            *(short *)(*(int *)(*(int *)(param_1 + 0x5d8) + iVar11 + 4) + iVar7 + 4) = sVar5;
            iVar6 = *(int *)(psVar12 + 2);
            iVar7 = iVar7 + 2;
            psVar8 = psVar8 + 1;
          } while (iVar4 < *(short *)(iVar6 + 2));
        }
        iVar10 = iVar10 + 1;
        iVar11 = iVar11 + 8;
      } while (iVar10 < iVar9);
    }
  }
  return;
}

