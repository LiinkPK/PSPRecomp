/* Entry 0x0892E37C | file offset 0x0012B354 | FUN_0892e37c | bytes 80 */

undefined4 FUN_0892e37c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0892dce4();
  if ((*(uint *)(param_1 + 0xe0) & 1) == 0) {
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

