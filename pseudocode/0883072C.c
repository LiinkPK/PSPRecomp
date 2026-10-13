/* Entry 0x0883072C | file offset 0x0002D704 | FUN_0883072c | bytes 524 */

void FUN_0883072c(undefined1 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  uVar6 = *(undefined4 *)(*(int *)(param_2 + 0x84) + 8);
  *param_1 = 1;
  FUN_089a3890(param_1 + 0x10);
  iVar1 = FUN_08830c9c(DAT_089d4940,param_3);
  *(int *)(param_1 + 4) = iVar1;
  fVar9 = *(float *)(iVar1 + 4) + *(float *)(iVar1 + 0x14);
  fVar11 = 0.0;
  fVar12 = *(float *)(iVar1 + 8) + *(float *)(iVar1 + 0x18);
  if (fVar9 == 0.0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = *(float *)(iVar1 + 4) / fVar9;
  }
  *(float *)(param_1 + 0x1b8) = fVar10;
  if (fVar12 == 0.0) {
    fVar10 = 0.0;
  }
  else {
    fVar10 = *(float *)(iVar1 + 8) / fVar12;
  }
  *(float *)(param_1 + 0x1bc) = fVar10;
  if (fVar9 == 0.0) {
    fVar9 = 0.0;
  }
  else {
    fVar9 = *(float *)(iVar1 + 0x14) / fVar9;
  }
  *(float *)(param_1 + 0x358) = fVar9;
  if (fVar12 != 0.0) {
    fVar11 = *(float *)(iVar1 + 0x18) / fVar12;
  }
  *(float *)(param_1 + 0x35c) = fVar11;
  iVar1 = FUN_089b0e3c(uVar6);
  iVar5 = 0;
  piVar7 = (int *)(param_1 + 0x24);
  do {
    iVar8 = 0x4c;
    if (iVar5 == 0) {
      iVar8 = 0x18;
    }
    uVar4 = *(undefined4 *)(param_2 + 0xa4 + iVar8);
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = uVar4;
    iVar8 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = FUN_089b0e78(uVar6,iVar8);
        while (iVar2 != 0) {
          iVar3 = FUN_089b0e78(uVar6,*(undefined4 *)(param_1 + 0x20));
          if (iVar2 == iVar3) {
            iVar2 = *piVar7;
            *piVar7 = iVar2 + 1;
            *(int *)(param_1 + iVar2 * 4 + 0x28) = iVar8;
            break;
          }
          uVar4 = FUN_089b0f98(iVar2);
          iVar2 = FUN_089b0e78(uVar6,uVar4);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1);
    }
    iVar5 = iVar5 + 1;
    param_1 = param_1 + 0x1a0;
    piVar7 = piVar7 + 0x68;
    if (1 < iVar5) {
      return;
    }
  } while( true );
}

