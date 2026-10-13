/* Entry 0x08844FE4 | file offset 0x00041FBC | FUN_08844fe4 | bytes 196 */

undefined4 FUN_08844fe4(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_1 + 0x24);
  uVar2 = 0;
  bVar1 = false;
  if ((*pcVar4 == 'P') && (bVar1 = false, *(char *)(param_1 + 0x25) == '_')) {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = FUN_089359e8(pcVar4);
    bVar1 = false;
    if ((pcVar4[iVar3 + -2] == '_') && (bVar1 = false, pcVar4[iVar3 + -1] == 'A')) {
      bVar1 = true;
    }
    if (bVar1) {
      uVar2 = FUN_08847130((int)*(char *)(param_1 + 6),1);
    }
    else {
      uVar2 = FUN_088470dc((int)*(char *)(param_1 + 6),1,0);
    }
  }
  return uVar2;
}

