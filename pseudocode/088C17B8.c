/* Entry 0x088C17B8 | file offset 0x000BE790 | FUN_088c17b8 | bytes 232 */

float FUN_088c17b8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if (param_1[1] != 0) {
    iVar4 = 0;
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = FUN_088c7e98((int)*(short *)(param_1[1] + 0x30 + iVar2));
      if ((iVar1 != 0) && (0.0 < *(float *)(iVar1 + 0x14))) {
        fVar5 = fVar5 + *(float *)(iVar1 + 0x14);
        iVar4 = iVar4 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 2;
    } while (iVar3 < 2);
    if (0 < iVar4) {
      fVar5 = fVar5 / (float)iVar4;
    }
  }
  if ((fVar5 == 0.0) && (*param_1 != 0)) {
    fVar5 = *(float *)(*param_1 + 0x10);
  }
  return fVar5;
}

