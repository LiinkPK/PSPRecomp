/* Entry 0x088713E4 | file offset 0x0006E3BC | FUN_088713e4 | bytes 272 */

uint * FUN_088713e4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  
  if ((*(int *)(param_1 + 0x58) == 0) ||
     (iVar1 = FUN_08935b50(param_2,param_1 + 8,0x50), iVar1 != 0)) {
    uVar2 = Package_FilenameHash_casefold_CRC32_MSB(param_2);
    iVar3 = 0;
    iVar1 = DAT_09b26bc8;
    iVar4 = DAT_09b26bc8;
    do {
      iVar4 = iVar4 / 2;
      puVar7 = (uint *)(&DAT_09b26bd0 + iVar4 * 0xc);
      uVar6 = *puVar7;
      if (uVar6 == uVar2) break;
      if (uVar6 < uVar2) {
        iVar3 = iVar4 + 1;
        iVar5 = iVar1 - iVar3;
      }
      else {
        iVar1 = iVar4 + -1;
        iVar5 = iVar1 - iVar3;
      }
      iVar4 = iVar1 + iVar3;
    } while (-1 < iVar5);
    if (uVar6 == uVar2) {
      FUN_089359e8(param_2);
      FUN_08935bb4(param_1 + 8,param_2,0x50);
      *(uint **)(param_1 + 0x58) = puVar7;
    }
    else {
      puVar7 = (uint *)0x0;
    }
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x58);
  }
  return puVar7;
}

