/* Entry 0x088864AC | file offset 0x00083484 | FUN_088864ac | bytes 52 */

bool FUN_088864ac(int *param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if (*param_1 == 0) {
    bVar1 = true;
  }
  else if (param_1[1] != 0) {
    bVar1 = *(short *)(param_1[1] + 0xc) == 1;
  }
  return bVar1;
}

