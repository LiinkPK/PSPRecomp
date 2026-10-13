/* Entry 0x08816820 | file offset 0x000137F8 | FUN_08816820 | bytes 72 */

undefined4 FUN_08816820(undefined1 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_088167f0();
  iVar1 = FUN_0881b044(param_1 + 4);
  if (iVar1 == 0) {
    *param_1 = 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

