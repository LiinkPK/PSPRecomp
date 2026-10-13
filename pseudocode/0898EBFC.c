/* Entry 0x0898EBFC | file offset 0x0018BBD4 | FUN_0898ebfc | bytes 204 */

int FUN_0898ebfc(float *param_1)

{
  ushort uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 8) == '\0') {
    iVar2 = 0;
  }
  else if (*(short *)(param_1 + 4) < 0) {
    iVar2 = 0;
  }
  else if (*(short *)(param_1 + 5) < 0) {
    iVar2 = 0;
  }
  else {
    fVar3 = param_1[7] + *param_1 * *(float *)(*(int *)(DAT_09b6f478 + 0x88) + 0x160);
    if (1.0 <= fVar3) {
      iVar2 = (int)fVar3;
      fVar4 = (float)iVar2;
      if (iVar2 < 0) {
        fVar4 = fVar4 + 4.2949673e+09;
        uVar1 = *(ushort *)((int)param_1 + 0x12);
      }
      else {
        uVar1 = *(ushort *)((int)param_1 + 0x12);
      }
      param_1[7] = fVar3 - fVar4;
      param_1[7] = (fVar3 - fVar4) - *param_1 * (float)uVar1;
    }
    else {
      param_1[7] = fVar3;
      iVar2 = 0;
    }
  }
  return iVar2;
}

