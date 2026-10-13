/* Entry 0x0880461C | file offset 0x000015F4 | FUN_0880461c | bytes 88 */

void FUN_0880461c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (0.0 < *(float *)(param_2 + 0xbc)) {
    uVar1 = 2;
    *(uint *)(param_2 + 900) = *(uint *)(param_2 + 900) & 0xfffffffe;
  }
  FUN_08804498(param_1,param_2,uVar1);
  return;
}

