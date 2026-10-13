/* Entry 0x08859E54 | file offset 0x00056E2C | FUN_08859e54 | bytes 192 */

void FUN_08859e54(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  fVar1 = DAT_089d5eac;
  iVar3 = *(int *)(param_1 + 0x3d4);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar4 = *(int *)(param_1 + 0x3d0);
    if (0 < iVar3) {
      do {
        iVar5 = param_1 + iVar4 * 0x20;
        fVar6 = *(float *)(iVar5 + 0x24);
        if (0.0 < fVar6) {
          *(float *)(iVar5 + 0x24) = fVar6 - fVar1;
        }
        else if (iVar4 == *(int *)(param_1 + 0x3d0)) {
          iVar5 = *(int *)(param_1 + 0x3d0) + 1;
          *(int *)(param_1 + 0x3d0) = iVar5;
          if (0x1d < iVar5) {
            *(undefined4 *)(param_1 + 0x3d0) = 0;
          }
          *(int *)(param_1 + 0x3d4) = *(int *)(param_1 + 0x3d4) + -1;
        }
        iVar4 = iVar4 + 1;
        if (0x1d < iVar4) {
          iVar4 = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
  }
  return;
}

