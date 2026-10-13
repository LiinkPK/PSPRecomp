/* Entry 0x089B263C | file offset 0x001AF614 | FUN_089b263c | bytes 816 */

void FUN_089b263c(float param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
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
      FUN_089bd534(param_1,*(undefined4 *)(iVar1 + iVar2 + 4),param_3 & 3);
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
      fVar8 = *(float *)(param_2 + 0x2c);
      goto LAB_089b27f4;
    }
  }
  else {
    iVar6 = *(int *)(param_2 + 0x1c);
    iVar2 = iVar6 + iVar2 * 0x30;
    if (*(float *)(iVar2 + 0x20) < 1.0) {
      fVar8 = *(float *)(param_2 + 0x2c);
LAB_089b27f4:
      if (0.0 <= fVar8) {
        fVar9 = param_1;
        if (param_1 < 0.0) {
          fVar9 = -param_1;
        }
        fVar9 = fVar8 - fVar9;
        if (fVar9 <= 0.0) {
          fVar9 = 0.0;
        }
        fVar7 = 0.0;
        *(float *)(param_2 + 0x2c) = fVar9;
        if (fVar8 != 0.0) {
          fVar7 = fVar9 / fVar8;
        }
        if (uVar4 != 0) {
          uVar3 = 0;
          iVar1 = iVar6;
          do {
            uVar3 = uVar3 + 1;
            fVar8 = 0.0;
            if (iVar2 == iVar1) {
              fVar8 = 1.0;
            }
            *(float *)(iVar1 + 0x20) = fVar8 + fVar7 * (*(float *)(iVar1 + 0x20) - fVar8);
            iVar1 = iVar1 + 0x30;
          } while (uVar3 != uVar4);
        }
      }
      iVar1 = 0;
      fVar8 = 0.0;
      iVar2 = iVar6;
      if (uVar4 == 0) {
        fVar8 = 1.0;
      }
      else {
        while( true ) {
          fVar9 = *(float *)(iVar2 + 0x20);
          fVar8 = fVar8 + fVar9;
          uVar4 = param_3 & 0xffffefff;
          param_3 = param_3 | 0x1000;
          if (iVar1 != sVar5) {
            param_3 = uVar4;
          }
          iVar1 = iVar1 + 1;
          if (fVar8 != 0.0) {
            fVar9 = fVar9 / fVar8;
          }
          iVar6 = iVar2 + 0x30;
          FUN_089b1994(param_1,fVar9,param_2,iVar2,param_3,0);
          if ((int)(uint)*(ushort *)(param_2 + 0x28) <= iVar1) break;
          sVar5 = *(short *)(param_2 + 0x2a);
          iVar2 = iVar6;
        }
        fVar8 = 1.0 - fVar8;
      }
      FUN_089b1994(param_1,fVar8,param_2,iVar6,param_3 & 0xffffefff,1);
      return;
    }
  }
  FUN_089b1994(param_1,param_2,iVar2,param_3 | 0x1000,0);
  FUN_089b1994(param_1,0,param_2,*(int *)(param_2 + 0x1c) + (uint)*(ushort *)(param_2 + 0x28) * 0x30
               ,param_3 & 0xffffefff,1);
  return;
}

