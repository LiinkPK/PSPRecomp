/* Entry 0x08861098 | file offset 0x0005E070 | FUN_08861098 | bytes 60 */

undefined4 FUN_08861098(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_08861050();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

