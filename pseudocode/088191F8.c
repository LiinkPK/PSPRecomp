/* Entry 0x088191F8 | file offset 0x000161D0 | FUN_088191f8 | bytes 88 */

undefined4 FUN_088191f8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar2 = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x14) == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_08815dd4();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

