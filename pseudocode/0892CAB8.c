/* Entry 0x0892CAB8 | file offset 0x00129A90 | FUN_0892cab8 | bytes 164 */

void FUN_0892cab8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  FUN_0892cb5c();
  uVar1 = FUN_0887b3ec(param_2,param_3,0,param_4,param_5,param_6);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = FUN_0887e534(uVar1);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_088d428c(param_1 + 4,param_1 + 0xc,&DAT_089ced80,1);
  return;
}

