/* Entry 0x089B296C | file offset 0x001AF944 | FUN_089b296c | bytes 8 */

void FUN_089b296c(float param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar7 = 0xfff;
  if (param_2 == 0) {
    return;
  }
  if (((*(ushort *)(param_2 + 2) & 0x400) == 0) || (*(short *)(param_2 + 0x26) == 0)) {
    uVar4 = (uint)*(ushort *)(param_2 + 0x28);
    if (uVar4 == 0) {
      return;
    }
    sVar5 = *(short *)(param_2 + 0x2a);
  }
  else {
    iVar6 = 0;
    iVar2 = *(int *)(param_2 + 0x18);
    while( true ) {
      iVar1 = iVar6 * 0x10;
      iVar6 = iVar6 + 1;
      FUN_089bd534(param_1,*(undefined4 *)(iVar1 + iVar2 + 4),3);
      if ((int)(uint)*(ushort *)(param_2 + 0x26) <= iVar6) break;
      iVar2 = *(int *)(param_2 + 0x18);
    }
    uVar4 = (uint)*(ushort *)(param_2 + 0x28);
    if (uVar4 == 0) {
      return;
    }
    sVar5 = *(short *)(param_2 + 0x2a);
  }
  iVar2 = (int)sVar5;
  if ((iVar2 < 0) || ((int)uVar4 < iVar2)) {
    iVar6 = *(int *)(param_2 + 0x1c);
    iVar2 = iVar6 + uVar4 * 0x30;
    if (*(float *)(iVar2 + 0x20) < 1.0) {
      fVar9 = *(float *)(param_2 + 0x2c);
      goto LAB_089b27f4;
    }
  }
  else {
    iVar6 = *(int *)(param_2 + 0x1c);
    iVar2 = iVar6 + iVar2 * 0x30;
    if (*(float *)(iVar2 + 0x20) < 1.0) {
      fVar9 = *(float *)(param_2 + 0x2c);
LAB_089b27f4:
      if (0.0 <= fVar9) {
        fVar10 = param_1;
        if (param_1 < 0.0) {
          fVar10 = -param_1;
        }
        fVar10 = fVar9 - fVar10;
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        fVar8 = 0.0;
        *(float *)(param_2 + 0x2c) = fVar10;
        if (fVar9 != 0.0) {
          fVar8 = fVar10 / fVar9;
        }
        if (uVar4 != 0) {
          uVar3 = 0;
          iVar1 = iVar6;
          do {
            uVar3 = uVar3 + 1;
            fVar9 = 0.0;
            if (iVar2 == iVar1) {
              fVar9 = 1.0;
            }
            *(float *)(iVar1 + 0x20) = fVar9 + fVar8 * (*(float *)(iVar1 + 0x20) - fVar9);
            iVar1 = iVar1 + 0x30;
          } while (uVar3 != uVar4);
        }
      }
      iVar1 = 0;
      fVar9 = 0.0;
      iVar2 = iVar6;
      if (uVar4 == 0) {
        fVar9 = 1.0;
        uVar7 = 0xfff;
      }
      else {
        while( true ) {
          fVar10 = *(float *)(iVar2 + 0x20);
          fVar9 = fVar9 + fVar10;
          uVar4 = uVar7 & 0xffffefff;
          uVar7 = uVar7 | 0x1000;
          if (iVar1 != sVar5) {
            uVar7 = uVar4;
          }
          iVar1 = iVar1 + 1;
          if (fVar9 != 0.0) {
            fVar10 = fVar10 / fVar9;
          }
          iVar6 = iVar2 + 0x30;
          FUN_089b1994(param_1,fVar10,param_2,iVar2,uVar7,0);
          if ((int)(uint)*(ushort *)(param_2 + 0x28) <= iVar1) break;
          sVar5 = *(short *)(param_2 + 0x2a);
          iVar2 = iVar6;
        }
        fVar9 = 1.0 - fVar9;
      }
      FUN_089b1994(param_1,fVar9,param_2,iVar6,uVar7 & 0xffffefff,1);
      return;
    }
  }
  FUN_089b1994(param_1,param_2,iVar2,0x1fff,0);
  FUN_089b1994(param_1,0,param_2,*(int *)(param_2 + 0x1c) + (uint)*(ushort *)(param_2 + 0x28) * 0x30
               ,0xfff,1);
  return;
}

