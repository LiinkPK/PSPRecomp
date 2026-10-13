/* Entry 0x089200F0 | file offset 0x0011D0C8 | FUN_089200f0 | bytes 64 */

void FUN_089200f0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((-1 < iVar1) && (iVar1 < 6)) {
    param_1[iVar1 + 1] = param_2;
    *param_1 = *param_1 + 1;
  }
  return;
}

