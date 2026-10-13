/* Entry 0x08837458 | file offset 0x00034430 | FUN_08837458 | bytes 88 */

undefined4 FUN_08837458(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_08837430();
  if ((iVar1 != 0) || ((*(byte *)(param_1 + 0x194) & 0x10) != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}

