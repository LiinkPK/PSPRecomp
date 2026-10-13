/* Entry 0x08820540 | file offset 0x0001D518 | FUN_08820540 | bytes 44 */

bool FUN_08820540(short *param_1)

{
  bool bVar1;
  
  if (*param_1 == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = param_1[1] != 0;
  }
  return bVar1;
}

