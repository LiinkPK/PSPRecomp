/* Entry 0x0881FC0C | file offset 0x0001CBE4 | FUN_0881fc0c | bytes 36 */

void FUN_0881fc0c(int param_1,int param_2)

{
  float *pfVar1;
  
  pfVar1 = (float *)(param_2 + **(int **)(param_1 + 8) * 4);
  *pfVar1 = *pfVar1 + *(float *)(param_1 + 0x3c);
  return;
}

