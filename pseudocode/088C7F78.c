/* Entry 0x088C7F78 | file offset 0x000C4F50 | FUN_088c7f78 | bytes 36 */

undefined4 FUN_088c7f78(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0xffffffff) && ((param_1 & 0x8000) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

