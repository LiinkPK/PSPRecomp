/* Entry 0x08932F64 | file offset 0x0012FF3C | FUN_08932f64 | bytes 84 */

void FUN_08932f64(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_088dab44();
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 4;
  } while (iVar1 < 2);
  return;
}

