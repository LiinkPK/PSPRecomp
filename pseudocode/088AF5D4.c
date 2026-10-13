/* Entry 0x088AF5D4 | file offset 0x000AC5AC | FUN_088af5d4 | bytes 76 */

undefined4 FUN_088af5d4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((((param_2 < 0) && (iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x814), iVar2 != 5)) &&
      (iVar2 != 4)) && (((iVar2 != 6 && (iVar2 != 7)) && (iVar2 != 8)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

