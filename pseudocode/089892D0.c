/* Entry 0x089892D0 | file offset 0x001862A8 | FUN_089892d0 | bytes 1012 */

void FUN_089892d0(int param_1,int param_2)

{
  undefined1 auVar1 [12];
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 (*pauVar7) [12];
  undefined1 (*pauVar8) [12];
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  float local_40;
  
  *(float *)(param_1 + 0x80) = *(float *)(param_1 + 0x80) + *(float *)(param_2 + 0x58);
  if (*(char *)(param_2 + 0xb4) != '\0') {
    if (*(char *)(param_2 + 0xb5) == '\0') {
      if (*(float *)(param_2 + 0x54) < *(float *)(param_1 + 0x80) - *(float *)(param_1 + 0x84)) {
        *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x80) - *(float *)(param_2 + 0x54);
      }
    }
    else {
      if (*(float *)(param_2 + 0x54) < *(float *)(param_1 + 0x80)) {
        uVar12 = *(undefined4 *)(param_2 + 0x54);
      }
      else {
        uVar12 = *(undefined4 *)(param_1 + 0x80);
      }
      *(undefined4 *)(param_1 + 0x80) = uVar12;
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  bVar2 = false;
  if (*(char *)(param_2 + 0xb4) != '\0') {
    if (*(char *)(param_2 + 0xb5) != '\0') {
      bVar2 = true;
      goto LAB_089893c0;
    }
    if (0.0 < *(float *)(param_1 + 0x84)) goto LAB_089893c0;
  }
  bVar2 = true;
LAB_089893c0:
  uVar6 = 0;
  if (bVar2) {
    iVar4 = *(int *)(param_1 + 0x7c);
    *(int *)(param_1 + 0x7c) = iVar4 + 1;
    FUN_089a3868(*(int *)(param_1 + 0x78) + iVar4 * 0x10,*(undefined4 *)(param_1 + 0x68));
  }
  fVar11 = *(float *)(param_1 + 0x80);
  if (*(float *)(param_1 + 0x84) <= fVar11) {
    iVar4 = 1;
    fVar9 = *(float *)(param_1 + 0x84);
    if (1 < *(int *)(param_1 + 0x6c)) {
      do {
        pauVar7 = (undefined1 (*) [12])(*(int *)(param_1 + 0x68) + iVar4 * 0x10 + -0x10);
        pauVar8 = (undefined1 (*) [12])(*(int *)(param_1 + 0x68) + iVar4 * 0x10);
        auVar1 = vsub_t(*pauVar8,*pauVar7);
        uVar12 = vdot_t(auVar1,auVar1);
        fVar13 = (float)vsqrt_s(uVar12);
        fVar11 = fVar11 - fVar13;
        fVar10 = fVar9;
        local_40 = fVar13;
        if (bVar2) {
LAB_08989518:
          if (fVar13 + fVar11 < 0.0) {
            return;
          }
          if (fVar11 <= 0.0) {
            FUN_089a38e0(auStack_50,pauVar8,pauVar7);
            FUN_089a3bc8(auStack_50,auStack_50);
            FUN_089a3a44(fVar13 + fVar11,auStack_50,auStack_50);
            FUN_089a38c4(auStack_70,pauVar7,auStack_50);
            iVar4 = *(int *)(param_1 + 0x7c);
            *(int *)(param_1 + 0x7c) = iVar4 + 1;
            FUN_089a3868(*(int *)(param_1 + 0x78) + iVar4 * 0x10,auStack_70);
            break;
          }
          iVar5 = *(int *)(param_1 + 0x7c);
          *(int *)(param_1 + 0x7c) = iVar5 + 1;
          FUN_089a3868(*(int *)(param_1 + 0x78) + iVar5 * 0x10,pauVar8);
        }
        else {
          fVar10 = fVar9 - fVar13;
          if (fVar10 <= 0.0) {
            if ((fVar10 <= 0.0) && (0.0 < fVar9)) {
              FUN_089a38e0(auStack_60,pauVar8,pauVar7);
              FUN_089a3bc8(auStack_60,auStack_60);
              FUN_089a3a44(fVar10 + fVar13,auStack_60,auStack_60);
              FUN_089a38c4(auStack_80,pauVar7,auStack_60);
              iVar5 = *(int *)(param_1 + 0x7c);
              *(int *)(param_1 + 0x7c) = iVar5 + 1;
              FUN_089a3868(*(int *)(param_1 + 0x78) + iVar5 * 0x10,auStack_80);
            }
            goto LAB_08989518;
          }
        }
        iVar4 = iVar4 + 1;
        uVar6 = uVar6 + 1;
        fVar9 = fVar10;
      } while (iVar4 < *(int *)(param_1 + 0x6c));
    }
    if (*(int *)(param_1 + 0x7c) == 0) {
      iVar4 = *(int *)(param_1 + 0x7c);
      *(int *)(param_1 + 0x7c) = iVar4 + 1;
      FUN_089a3868(*(int *)(param_1 + 0x78) + iVar4 * 0x10,*(undefined4 *)(param_1 + 0x68));
    }
    uVar3 = 1;
    if (*(char *)(param_2 + 0xb6) != '\0') {
      uVar3 = *(uint *)(&DAT_089da3c0 + (uint)*(byte *)(param_2 + 0xb6) * 4);
    }
    if (uVar6 / uVar3 != 0) {
      iVar4 = **(int **)(param_1 + 0x60);
      (**(code **)(iVar4 + 0x24))
                ((int)*(int **)(param_1 + 0x60) + (int)*(short *)(iVar4 + 0x20),0,uVar6 / uVar3 - 1)
      ;
    }
  }
  return;
}

