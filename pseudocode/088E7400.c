/* Entry 0x088E7400 | file offset 0x000E43D8 | FUN_088e7400 | bytes 124 */

void FUN_088e7400(int param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x1d) == '\x01') {
    fVar1 = (float)FUN_08867eec(fVar1 * 3.1415927 * 0.5);
  }
  *param_2 = **(float **)(param_1 + 0xc) +
             (**(float **)(param_1 + 0x10) - **(float **)(param_1 + 0xc)) * fVar1;
  return;
}

