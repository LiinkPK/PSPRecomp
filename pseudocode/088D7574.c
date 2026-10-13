/* Entry 0x088D7574 | file offset 0x000D454C | FUN_088d7574 | bytes 96 */

undefined4 FUN_088d7574(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088d723c();
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else if ((*(int *)(param_1 + 0x10) == 6) || (iVar1 = FUN_088d8460(param_1 + 0x24), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

