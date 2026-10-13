/* Entry 0x08853F28 | file offset 0x00050F00 | FUN_08853f28 | bytes 224 */

void FUN_08853f28(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  fVar1 = DAT_089d5eac;
  iVar3 = *(int *)(param_1 + 0x154);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = *(int *)(param_1 + 0x150);
    if (0 < iVar3) {
      fVar6 = DAT_089d5eac * 0.02;
      do {
        iVar5 = param_1 + iVar4 * 0x20;
        if (0.0 < *(float *)(iVar5 + 0x20)) {
          *(float *)(iVar5 + 0x10) = *(float *)(iVar5 + 0x10) + fVar6;
          *(float *)(iVar5 + 0x20) = *(float *)(iVar5 + 0x20) - fVar1;
        }
        else if (iVar4 == *(int *)(param_1 + 0x150)) {
          iVar5 = *(int *)(param_1 + 0x150) + 1;
          *(int *)(param_1 + 0x150) = iVar5;
          if (9 < iVar5) {
            *(undefined4 *)(param_1 + 0x150) = 0;
          }
          *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x154) + -1;
        }
        iVar4 = iVar4 + 1;
        if (9 < iVar4) {
          iVar4 = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
  }
  return;
}

