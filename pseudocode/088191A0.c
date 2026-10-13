/* Entry 0x088191A0 | file offset 0x00016178 | FUN_088191a0 | bytes 88 */

undefined4 FUN_088191a0(int param_1)

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
    iVar1 = FUN_08815d90();
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffe;
    }
  }
  return uVar2;
}

