/* Entry 0x08904444 | file offset 0x0010141C | FUN_08904444 | bytes 96 */

bool FUN_08904444(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_10 [8];
  
  uVar1 = FUN_08905810(auStack_10);
  iVar2 = FUN_08935490(param_1 + 0x11d,uVar1,6);
  if (iVar2 == 0) {
    FUN_08905848(param_1 + 0x11d);
  }
  return iVar2 == 0;
}

