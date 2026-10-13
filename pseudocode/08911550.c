/* Entry 0x08911550 | file offset 0x0010E528 | FUN_08911550 | bytes 84 */

void FUN_08911550(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*param_1 != 0) {
      FUN_088dab44();
      *param_1 = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 2);
  return;
}

