/* Entry 0x089ABCA0 | file offset 0x001A8C78 | FUN_089abca0 | bytes 136 */

void FUN_089abca0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar3 = 0;
    uVar1 = *param_1;
    puVar2 = param_1;
    while( true ) {
      iVar3 = iVar3 + 1;
      puVar2 = puVar2 + 1;
      FUN_089abbbc(uVar1);
      if (iVar3 == 3) break;
      uVar1 = *puVar2;
    }
    FUN_08935828(param_1,0,0x6c);
    return;
  }
  return;
}

