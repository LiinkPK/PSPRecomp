/* Entry 0x08819480 | file offset 0x00016458 | FUN_08819480 | bytes 184 */

void FUN_08819480(float param_1,int param_2)

{
  int iVar1;
  
  if (((*(char *)(param_2 + 0x30) != '\x01') &&
      ((iVar1 = *(int *)(param_2 + 0x14), iVar1 == 0 || (*(short *)(iVar1 + 0x180) != 0x3e9)))) &&
     ((*(float *)(param_2 + 0x34) <= 0.0 ||
      (param_1 = *(float *)(param_2 + 0x34) - param_1, *(float *)(param_2 + 0x34) = param_1,
      param_1 <= 0.0)))) {
    if (iVar1 != 0) {
      FUN_08815314();
    }
    *(undefined1 *)(param_2 + 0x30) = 1;
  }
  return;
}

