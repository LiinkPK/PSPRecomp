/* Entry 0x088A5604 | file offset 0x000A25DC | FUN_088a5604 | bytes 164 */

void FUN_088a5604(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((*(char *)(param_1 + 100) != '\x01' || (param_1 != param_2))) {
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 0x68;
    if (0x2c < iVar1) {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0x60) + -1;
  *(int *)(param_1 + 0x60) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  FUN_088a9a4c(param_1);
  FUN_088699f4(param_1 + 0x5c);
  *(undefined1 *)(param_1 + 100) = 0;
  if (*(int *)(param_1 + 0x58) == 0) {
    return;
  }
  FUN_088a522c();
  FUN_088a51e4(*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}

