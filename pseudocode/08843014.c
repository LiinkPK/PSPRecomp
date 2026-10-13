/* Entry 0x08843014 | file offset 0x0003FFEC | FUN_08843014 | bytes 164 */

void FUN_08843014(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_088470b8(param_2);
  *param_1 = uVar1;
  uVar1 = FUN_0885c6cc(param_3,param_4,0x40,0,1,1);
  FUN_08845230(param_1,param_2,uVar1,param_4,param_5);
  FUN_0885c538(param_3,uVar1,0x40);
  return;
}

