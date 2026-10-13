/* Entry 0x08818F00 | file offset 0x00015ED8 | FUN_08818f00 | bytes 76 */

undefined4 FUN_08818f00(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_088192c8(param_1,param_2,1,param_3);
  }
  return uVar1;
}

