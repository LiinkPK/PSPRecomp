/* Entry 0x0893F93C | file offset 0x0013C914 | FUN_0893f93c | bytes 76 */

undefined4 FUN_0893f93c(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x110000) {
    if ((param_1 < 0xd800) || (0xdfff < param_1)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

