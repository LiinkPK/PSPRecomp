/* Entry 0x08984B40 | file offset 0x00181B18 | FUN_08984b40 | bytes 632 */

void FUN_08984b40(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [12];
  undefined4 local_54;
  undefined1 auStack_50 [12];
  undefined4 local_44;
  int local_40;
  int local_3c;
  
  local_6c = *(undefined4 *)(param_2 + 0x24);
  uVar7 = (*(int **)(param_1 + 4))[1];
  iVar2 = **(int **)(param_1 + 4);
  local_70 = 0;
  local_68 = 0;
  local_64 = 0;
  local_40 = param_2;
  local_3c = iVar2;
  if ((*(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160) != 0.0) && (uVar6 = 0, uVar7 != 0)) {
    do {
      if (*(char *)(iVar2 + 0x38) != '\0') {
        sVar1 = *(short *)(iVar2 + 0x32) + -1;
        *(short *)(iVar2 + 0x32) = sVar1;
        if (sVar1 == 0) {
          *(undefined1 *)(iVar2 + 0x38) = 0;
        }
        else {
          iVar4 = *(int *)(iVar2 + 0x40);
          iVar3 = iVar4 + *(int *)(param_1 + 8) * 0x20;
          while (iVar3 + -0x20 != iVar4) {
            FUN_089a3868(iVar3 + -0x10,iVar3 + -0x30);
            iVar3 = iVar3 + -0x20;
          }
        }
      }
      uVar6 = uVar6 + 1;
      iVar2 = iVar2 + 0x50;
    } while (uVar6 < uVar7);
  }
  local_54 = 0x3f800000;
  uVar6 = 0;
  local_44 = 0x3f800000;
  if (uVar7 != 0) {
    iVar5 = local_3c + 0x20;
    iVar4 = local_3c + 0x10;
    iVar2 = local_3c;
    iVar3 = local_3c;
    do {
      if (*(char *)(iVar2 + 0x38) != '\0') {
        fVar8 = 1.0;
        fVar9 = *(float *)(param_1 + 0x10) - *(float *)(iVar2 + 0x3c);
        fVar10 = 0.0;
        if (1.0 <= fVar9) {
          fVar10 = 1.0;
          while (fVar8 = fVar8 + 1.0, fVar8 <= fVar9) {
            fVar10 = fVar10 + fVar8;
          }
        }
        if (fVar8 - 1.0 < fVar9) {
          fVar10 = ((fVar10 + fVar8) - fVar10) * (fVar8 - fVar9) + fVar10;
        }
        FUN_089a3a64(auStack_60,iVar3);
        FUN_089a38c4(auStack_60,auStack_60,iVar5);
        FUN_089a38fc(auStack_50,iVar4,&local_70);
        FUN_089a3a64(fVar10,auStack_50,auStack_50);
        FUN_089a38c4(*(int *)(iVar2 + 0x40) + 0x10,auStack_60,auStack_50);
        (**(code **)(*(int *)(param_1 + 0x14) + 0x1c))
                  (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x18),iVar3,local_40);
      }
      uVar6 = uVar6 + 1;
      iVar2 = iVar2 + 0x50;
      iVar3 = iVar3 + 0x50;
      iVar5 = iVar5 + 0x50;
      iVar4 = iVar4 + 0x50;
    } while (uVar6 < uVar7);
  }
  return;
}

