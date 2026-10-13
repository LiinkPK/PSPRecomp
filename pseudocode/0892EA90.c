/* Entry 0x0892EA90 | file offset 0x0012BA68 | FUN_0892ea90 | bytes 128 */

void FUN_0892ea90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_0892eb10();
  uVar1 = FUN_0887b3ec(param_2,param_3,0,param_4,0,0);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  FUN_088d428c(param_1 + 0xc,param_1 + 0x10,&DAT_089cf000,1);
  return;
}

