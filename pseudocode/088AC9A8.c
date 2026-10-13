/* Entry 0x088AC9A8 | file offset 0x000A9980 | FUN_088ac9a8 | bytes 104 */

undefined4 FUN_088ac9a8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (DAT_089d5f1f == '\0') {
    if (*(int *)(param_1 + 0xf00) == 0) {
      uVar2 = *(uint *)(param_1 + 0xef8);
      if ((((uVar2 & 1) == 0) && ((uVar2 & 0x100) == 0)) && ((uVar2 & 0x1000) == 0)) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

