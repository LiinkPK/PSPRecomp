/* Entry 0x08856194 | file offset 0x0005316C | FUN_08856194 | bytes 228 */

void FUN_08856194(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  fVar1 = DAT_089d5eac;
  iVar3 = *(int *)(param_1 + 0xc);
  if ((iVar3 != 0) && (*(int *)(param_1 + 4) != 0)) {
    iVar2 = 0;
    iVar4 = *(int *)(param_1 + 8);
    if (0 < iVar3) {
      do {
        iVar5 = *(int *)(param_1 + 4) + iVar4 * 0x30;
        if (*(float *)(iVar5 + 0x10) < *(float *)(iVar5 + 0x1c) + *(float *)(iVar5 + 0x20)) {
          *(float *)(iVar5 + 0x10) = *(float *)(iVar5 + 0x10) + fVar1;
        }
        else if (iVar4 == *(int *)(param_1 + 8)) {
          iVar5 = *(int *)(param_1 + 8) + 1;
          *(int *)(param_1 + 8) = iVar5;
          if (0x27 < iVar5) {
            *(undefined4 *)(param_1 + 8) = 0;
          }
          *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
        }
        iVar4 = iVar4 + 1;
        if (0x27 < iVar4) {
          iVar4 = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
  }
  return;
}

