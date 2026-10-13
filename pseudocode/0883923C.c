/* Entry 0x0883923C | file offset 0x00036214 | FUN_0883923c | bytes 124 */

undefined4 FUN_0883923c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08838074();
  if (((iVar1 == 1) && (*(int *)(param_1 + 0x304) != 0)) &&
     ((iVar1 = FUN_0883739c(), iVar1 == 1 ||
      (*(char *)(*(int *)(param_1 + 0x304) + 0x542) == '\x03')))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

