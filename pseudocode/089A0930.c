/* Entry 0x089A0930 | file offset 0x0019D908 | FUN_089a0930 | bytes 28 */

void FUN_089a0930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_09af6830;
  *(undefined4 *)(DAT_09af6830 + 200) = param_4;
  *(undefined4 *)(iVar1 + 0xbc) = param_1;
  *(undefined4 *)(iVar1 + 0xc0) = param_2;
  *(undefined4 *)(iVar1 + 0xc4) = param_3;
  return;
}

