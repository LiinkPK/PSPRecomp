/* Entry 0x08819140 | file offset 0x00016118 | FUN_08819140 | bytes 96 */

undefined4 FUN_08819140(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    uVar1 = 0xffffffff;
  }
  else {
    if (((*(int *)(param_1 + 0x10) == 1) || (*(int *)(param_1 + 0x10) == 3)) &&
       (1.0 < *(float *)(param_1 + 0x28))) {
      *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
    }
    uVar1 = 0;
  }
  return uVar1;
}

