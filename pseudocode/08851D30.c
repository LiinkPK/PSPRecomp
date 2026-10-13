/* Entry 0x08851D30 | file offset 0x0004ED08 | FUN_08851d30 | bytes 348 */

void FUN_08851d30(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  fVar1 = DAT_089d5eac;
  iVar3 = *(int *)(param_1 + 0x3d4);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = *(int *)(param_1 + 0x3d0);
    if (0 < iVar3) {
      do {
        iVar6 = param_1 + iVar4 * 0x30;
        if (0.0 < *(float *)(iVar6 + 0x20)) {
          *(float *)(iVar6 + 0x20) = *(float *)(iVar6 + 0x20) - fVar1;
          *(float *)(iVar6 + 0x14) = *(float *)(iVar6 + 0x14) + fVar1 * 0.01;
          *(float *)(iVar6 + 0x2c) = *(float *)(iVar6 + 0x2c) + *(float *)(iVar6 + 0x30) * fVar1;
          *(float *)(iVar6 + 0x34) = *(float *)(iVar6 + 0x34) + *(float *)(iVar6 + 0x30) * fVar1;
          iVar5 = *(byte *)(iVar6 + 0x2b) + 0x20;
          if (*(float *)(iVar6 + 0x20) < 10.0) {
            iVar5 = (int)((*(float *)(iVar6 + 0x20) / 10.0) * 255.0);
          }
          if (0xff < iVar5) {
            iVar5 = 0xff;
          }
          *(char *)(iVar6 + 0x2b) = (char)iVar5;
        }
        else if (iVar4 == *(int *)(param_1 + 0x3d0)) {
          iVar6 = *(int *)(param_1 + 0x3d0) + 1;
          *(int *)(param_1 + 0x3d0) = iVar6;
          if (0x13 < iVar6) {
            *(undefined4 *)(param_1 + 0x3d0) = 0;
          }
          *(int *)(param_1 + 0x3d4) = *(int *)(param_1 + 0x3d4) + -1;
        }
        iVar4 = iVar4 + 1;
        if (0x13 < iVar4) {
          iVar4 = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
  }
  return;
}

