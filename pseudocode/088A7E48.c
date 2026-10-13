/* Entry 0x088A7E48 | file offset 0x000A4E20 | FUN_088a7e48 | bytes 160 */

void FUN_088a7e48(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_089d6d94 == 0) {
    bVar1 = false;
    if ((DAT_09b4d434 <= param_1) && (bVar1 = false, param_1 < DAT_09b4d434 + 0xa000)) {
      bVar1 = true;
    }
    if (bVar1) {
      iVar3 = *(int *)(DAT_09b4d434 + 0xa100);
      iVar2 = DAT_09b4d434 + iVar3 * 4;
      *(int *)(DAT_09b4d434 + 0xa100) = iVar3 + 1;
      *(uint *)(iVar2 + 0xa000) = param_1;
    }
  }
  else {
    FUN_0885c538(DAT_089d6d94,param_1,0);
  }
  return;
}

