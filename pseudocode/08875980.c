/* Entry 0x08875980 | file offset 0x00072958 | FUN_08875980 | bytes 64 */

undefined4 FUN_08875980(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08875978();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 1;
    uVar2 = 0;
  }
  return uVar2;
}

