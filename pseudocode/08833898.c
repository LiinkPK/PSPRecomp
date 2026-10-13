/* Entry 0x08833898 | file offset 0x00030870 | FUN_08833898 | bytes 120 */

undefined4 FUN_08833898(int param_1)

{
  undefined4 uVar1;
  
  if (((*(uint *)(param_1 + 900) & 0x100) == 0) && ((*(byte *)(param_1 + 0x194) & 8) == 0)) {
    uVar1 = 0;
  }
  else if ((0.0 < *(float *)(param_1 + 0x3c0)) || ((*(uint *)(param_1 + 900) & 0x200) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

