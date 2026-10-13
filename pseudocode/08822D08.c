/* Entry 0x08822D08 | file offset 0x0001FCE0 | FUN_08822d08 | bytes 40 */

undefined4 FUN_08822d08(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  
  if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined1 *)(param_1 + 0x31) = param_2;
    uVar1 = 0;
  }
  return uVar1;
}

