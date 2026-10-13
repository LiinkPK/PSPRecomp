/* Entry 0x088A7DBC | file offset 0x000A4D94 | FUN_088a7dbc | bytes 140 */

undefined4 FUN_088a7dbc(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_089d6d94 == 0) {
    iVar2 = *(int *)(DAT_09b4d434 + 0xa100) + -1;
    if (*(int *)(DAT_09b4d434 + 0xa100) < 1) {
      uVar1 = 0;
    }
    else {
      iVar3 = DAT_09b4d434 + iVar2 * 4;
      *(int *)(DAT_09b4d434 + 0xa100) = iVar2;
      uVar1 = *(undefined4 *)(iVar3 + 0xa000);
    }
  }
  else {
    uVar1 = FUN_0885c6cc(DAT_089d6d94,param_1,0,0,1,0);
  }
  return uVar1;
}

