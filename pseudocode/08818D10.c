/* Entry 0x08818D10 | file offset 0x00015CE8 | FUN_08818d10 | bytes 160 */

undefined4 FUN_08818d10(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 1) {
      uVar1 = FUN_08819294(param_1);
      FUN_088193a4(uVar1,param_1);
      FUN_08819480(uVar1,param_1);
      FUN_08819538(param_1);
      FUN_088195c8(param_1);
    }
    if (*(int *)(param_1 + 0x10) == 4) {
      FUN_08819f84(param_1 + 0x18);
    }
    uVar1 = 0;
  }
  return uVar1;
}

