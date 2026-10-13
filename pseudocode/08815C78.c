/* Entry 0x08815C78 | file offset 0x00012C50 | FUN_08815c78 | bytes 40 */

undefined4 FUN_08815c78(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x560) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined4 *)(param_1 + 0x374) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}

