/* Entry 0x089275CC | file offset 0x001245A4 | FUN_089275cc | bytes 124 */

void FUN_089275cc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_08862c40("win_lose_condition_param.bin",1);
  uVar2 = FUN_0885c6cc(*(undefined4 *)(param_1 + 4),uVar1,0,0,1,0);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  FUN_08862854("win_lose_condition_param.bin",uVar2,uVar1,1);
  return;
}

