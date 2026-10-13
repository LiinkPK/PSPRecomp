/* Entry 0x08815CA0 | file offset 0x00012C78 | FUN_08815ca0 | bytes 72 */

undefined4 FUN_08815ca0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x560) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_089a3868(param_1 + 0x550,param_2);
    uVar1 = 0;
  }
  return uVar1;
}

