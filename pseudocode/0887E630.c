/* Entry 0x0887E630 | file offset 0x0007B608 | FUN_0887e630 | bytes 84 */

void FUN_0887e630(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  uVar1 = FUN_0885c40c(param_2,param_3,"SYSTEM FONT T2",0x10);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}

