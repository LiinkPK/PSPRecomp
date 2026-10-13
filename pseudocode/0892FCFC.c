/* Entry 0x0892FCFC | file offset 0x0012CCD4 | FUN_0892fcfc | bytes 116 */

void FUN_0892fcfc(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_0892fd70();
  uVar1 = FUN_0887b3ec(param_2,param_3,0,0x19,0,0);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  FUN_088d428c(param_1 + 0x34,param_1 + 0x38,&DAT_089cf090,1);
  return;
}

