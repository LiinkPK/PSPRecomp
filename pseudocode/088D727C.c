/* Entry 0x088D727C | file offset 0x000D4254 | FUN_088d727c | bytes 108 */

undefined4 FUN_088d727c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d723c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if ((*(int *)(param_1 + 0x10) == 0) || (*(int *)(param_1 + 0x10) == 5)) {
    FUN_088d9518(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

