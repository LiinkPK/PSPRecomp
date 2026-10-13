/* Entry 0x08930224 | file offset 0x0012D1FC | FUN_08930224 | bytes 128 */

void FUN_08930224(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_089302a4();
  uVar1 = FUN_0887b3ec(param_2,param_3,0,param_4,0,0);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  FUN_088d428c(param_1 + 0x30,param_1 + 0x34,&DAT_089cf148,1);
  return;
}

