/* Entry 0x08923BDC | file offset 0x00120BB4 | FUN_08923bdc | bytes 88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08923bdc(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 0xbc) == 0) {
    uVar1 = func_0x08b421fc(_DAT_08b42288,(int)*(short *)(*(int *)(param_1 + 0x20) + 0x16));
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0xc0) = uVar1;
  }
  else {
    func_0x08b34688();
  }
  return;
}

