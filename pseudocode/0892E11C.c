/* Entry 0x0892E11C | file offset 0x0012B0F4 | FUN_0892e11c | bytes 152 */

void FUN_0892e11c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  FUN_0892e1b4();
  uVar1 = FUN_0887b3ec(param_2,param_3,0,param_4,param_5,param_6);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  FUN_088d428c(param_1 + 0x30,param_1 + 0x38,&DAT_089cef48,1);
  return;
}

