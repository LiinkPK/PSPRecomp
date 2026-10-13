/* Entry 0x0881FC30 | file offset 0x0001CC08 | FUN_0881fc30 | bytes 40 */

void FUN_0881fc30(int param_1,int param_2)

{
  float *pfVar1;
  
  pfVar1 = (float *)(param_2 + (**(int **)(param_1 + 8) + -3) * 4);
  *pfVar1 = *pfVar1 + *(float *)(param_1 + 0x3c);
  return;
}

