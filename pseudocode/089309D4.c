/* Entry 0x089309D4 | file offset 0x0012D9AC | FUN_089309d4 | bytes 120 */

void FUN_089309d4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  FUN_08930aa0();
  uVar1 = FUN_0887ad78(&DAT_09b4e838,0,param_2,0,0,0);
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  uVar1 = FUN_0887e534(uVar1);
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  FUN_088d428c(param_1 + 0xc,param_1 + 0x44,&DAT_089cf1a0,1);
  return;
}

