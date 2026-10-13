/* Entry 0x0884C4DC | file offset 0x000494B4 | FUN_0884c4dc | bytes 172 */

void FUN_0884c4dc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0899b9f0(0);
  param_1 = param_1 + param_2 * 0x14;
  *(undefined4 *)(param_1 + 0x2590) = uVar1;
  uVar1 = FUN_0899b9f0(0);
  *(undefined4 *)(param_1 + 0x2594) = uVar1;
  FUN_0899bb68(*(undefined4 *)(param_1 + 0x2590),param_3,param_4,0);
  FUN_0899bb68(*(undefined4 *)(param_1 + 0x2594),param_5,param_6,0);
  return;
}

