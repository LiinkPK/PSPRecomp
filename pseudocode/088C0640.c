/* Entry 0x088C0640 | file offset 0x000BD618 | FUN_088c0640 | bytes 52 */

int FUN_088c0640(int param_1)

{
  int iVar1;
  
  param_1 = param_1 / 10;
  if (param_1 < 0) {
    iVar1 = 10;
  }
  else {
    iVar1 = 10 - param_1;
    if (10 < param_1) {
      iVar1 = 0;
    }
  }
  return iVar1;
}

