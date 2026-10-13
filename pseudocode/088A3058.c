/* Entry 0x088A3058 | file offset 0x000A0030 | FUN_088a3058 | bytes 128 */

void FUN_088a3058(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0x20);
  fVar3 = 0.0;
  iVar1 = *(int *)(param_1 + 0x4c);
  if (*(float **)(param_1 + 0x54) != (float *)0x0) {
    fVar2 = fVar2 * **(float **)(param_1 + 0x54);
  }
  if ((iVar1 != 0) && ((*(uint *)(iVar1 + 8) & 0x20) != 0)) {
    fVar3 = (float)(int)*(short *)(iVar1 + 0x18) * 0.01;
  }
  iVar1 = **(int **)(param_1 + 0x50);
  (**(code **)(iVar1 + 0x2c))
            (fVar3,fVar2,(int)*(int **)(param_1 + 0x50) + (int)*(short *)(iVar1 + 0x28));
  return;
}

