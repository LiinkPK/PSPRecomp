/* Entry 0x08872510 | file offset 0x0006F4E8 | FUN_08872510 | bytes 48 */

void FUN_08872510(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x44) | 1;
  *(uint *)(param_1 + 0x44) = uVar1;
  FUN_08871b40(param_1,uVar1,0,0);
  return;
}

