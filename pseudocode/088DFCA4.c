/* Entry 0x088DFCA4 | file offset 0x000DCC7C | FUN_088dfca4 | bytes 84 */

undefined4 FUN_088dfca4(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_08867888();
    if (uVar1 == (*(byte *)(param_1 + 5) & 0x7f)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

