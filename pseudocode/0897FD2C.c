/* Entry 0x0897FD2C | file offset 0x0017CD04 | FUN_0897fd2c | bytes 528 */

void FUN_0897fd2c(undefined4 param_1,uint *param_2,int *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((*param_2 & 1) == 0) {
    bVar1 = false;
    if (*(short *)(param_2[0x22] + 0xc) != 0) {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    fVar4 = (float)param_3[5];
    if (*(char *)((int)param_3 + 0x1f) != '\x01') {
      fVar4 = -fVar4;
    }
    *(float *)(param_4 + 0x20) = *(float *)(param_4 + 0x20) + fVar4;
    fVar4 = (float)param_3[6];
    if ((char)param_3[8] != '\x01') {
      fVar4 = -fVar4;
    }
    *(float *)(param_4 + 0x24) = *(float *)(param_4 + 0x24) + fVar4;
    if ((int *)param_2[0x29] != (int *)0x0) {
      if (*param_3 < 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(*(int *)(param_2[0x22] + 0x1c8) + 0x30);
        if (iVar3 == 0) {
          iVar3 = -1;
        }
        else {
          iVar3 = *(int *)(*(int *)(iVar3 + *param_3 * 4) + 0x10);
        }
      }
      if (iVar3 != -1) {
        iVar3 = **(int **)(*(int *)param_2[0x29] + iVar3 * 4);
        fVar4 = *(float *)(param_4 + 0x20);
        fVar5 = (float)*(int *)(iVar3 + 0x1c);
        fVar6 = (float)*(int *)(iVar3 + 0x20);
        if (fVar5 <= fVar4) {
          do {
            fVar4 = fVar4 - fVar5;
          } while (fVar5 <= fVar4);
          *(float *)(param_4 + 0x20) = fVar4;
        }
        if (fVar4 < 0.0) {
          do {
            fVar4 = fVar4 + fVar5;
          } while (fVar4 < 0.0);
          *(float *)(param_4 + 0x20) = fVar4;
        }
        fVar4 = *(float *)(param_4 + 0x24);
        if (fVar6 <= fVar4) {
          do {
            fVar4 = fVar4 - fVar6;
          } while (fVar6 <= fVar4);
          *(float *)(param_4 + 0x24) = fVar4;
        }
        if (fVar4 < 0.0) {
          do {
            fVar4 = fVar4 + fVar6;
          } while (fVar4 < 0.0);
          *(float *)(param_4 + 0x24) = fVar4;
          uVar2 = param_2[0x24];
        }
        else {
          uVar2 = param_2[0x24];
        }
        FUN_089a3868(param_4 + 0x10,
                     param_2[0x23] +
                     (uint)*(ushort *)(*(int *)(uVar2 + 8) + *(int *)(uVar2 + 4) * 2) + 0x60);
      }
    }
  }
  return;
}

