/* Entry 0x088C0228 | file offset 0x000BD200 | FUN_088c0228 | bytes 76 */

void FUN_088c0228(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x578) = 0;
  iVar1 = 0;
  do {
    FUN_088c01c0(param_1);
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x118;
  } while (iVar1 < 5);
  return;
}

