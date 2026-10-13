/* Entry 0x088857DC | file offset 0x000827B4 | FUN_088857dc | bytes 60 */

undefined4 FUN_088857dc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1 + 0xc) == 0) || (iVar1 = FUN_08886478(), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

