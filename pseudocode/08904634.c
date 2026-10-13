/* Entry 0x08904634 | file offset 0x0010160C | FUN_08904634 | bytes 120 */

undefined4 FUN_08904634(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_20 [8];
  
  uVar1 = FUN_08905810(auStack_20);
  iVar2 = FUN_08935490(param_1 + 0x11d,uVar1,6);
  if (iVar2 == 0) {
    FUN_08905848(param_1 + 0x11d);
  }
  FUN_08904820(param_1,param_2);
  return 1;
}

