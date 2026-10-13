/* Entry 0x089C0104 | file offset 0x001BD0DC | FUN_089c0104 | bytes 68 */

undefined4 FUN_089c0104(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 5;
  if ((param_1 != 8) && (uVar1 = 1, param_1 != 0x10)) {
    uVar1 = 0xffffffff;
    if (param_1 == 0x18) {
      uVar1 = 3;
    }
    else if (param_1 == 0x20) {
      uVar1 = 3;
    }
  }
  return uVar1;
}

