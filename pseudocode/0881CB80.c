/* Entry 0x0881CB80 | file offset 0x00019B58 | FUN_0881cb80 | bytes 56 */

undefined4 FUN_0881cb80(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0881baa8();
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x110);
  }
  else {
    uVar2 = *param_1;
  }
  return uVar2;
}

