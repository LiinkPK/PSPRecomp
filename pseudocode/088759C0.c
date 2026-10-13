/* Entry 0x088759C0 | file offset 0x00072998 | FUN_088759c0 | bytes 60 */

undefined4 FUN_088759c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08875978();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

