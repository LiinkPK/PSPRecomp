/* Entry 0x088CD9FC | file offset 0x000CA9D4 | FUN_088cd9fc | bytes 56 */

undefined4 FUN_088cd9fc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088cd9d4();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
  }
  return uVar2;
}

