/* Entry 0x089211C8 | file offset 0x0011E1A0 | FUN_089211c8 | bytes 88 */

void FUN_089211c8(uint *param_1)

{
  undefined4 uVar1;
  
  *param_1 = *param_1 & 0xfffffff8;
  uVar1 = func_0x08b42b40();
  FUN_0885c538(uVar1,param_1[3],0);
  param_1[3] = 0;
  return;
}

