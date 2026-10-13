/* Entry 0x0880A9E8 | file offset 0x000079C0 | FUN_0880a9e8 | bytes 248 */

void FUN_0880a9e8(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  float fVar4;
  
  if (0.0 < *(float *)(param_1 + 0x44)) {
    *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x44) - DAT_089d5eac;
  }
  puVar3 = (uint *)(param_1 + 0x48);
  iVar2 = 0;
  do {
    if (*puVar3 != 0) {
      if (puVar3[2] == 0) {
        fVar4 = (float)puVar3[1] - DAT_089d5eac;
      }
      else {
        fVar4 = (float)FUN_08838300();
        fVar4 = (float)puVar3[1] - fVar4;
      }
      puVar3[1] = (uint)fVar4;
      if (fVar4 <= 0.0) {
        puVar1 = (uint *)(param_1 + (*puVar3 >> 5) * 4 + 4);
        *puVar1 = *puVar1 & ~(1 << (*puVar3 & 0x1f));
        *puVar3 = 0;
      }
    }
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 3;
  } while (iVar2 < 4);
  return;
}

