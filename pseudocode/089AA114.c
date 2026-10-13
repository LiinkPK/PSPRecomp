/* Entry 0x089AA114 | file offset 0x001A70EC | FUN_089aa114 | bytes 336 */

undefined4 FUN_089aa114(byte *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar1 = FUN_089ab27c(param_1,0x400);
  if ((((iVar1 < 0xd) && (iVar2 = FUN_089ab30c(param_1,&DAT_089d0a24,4), iVar2 != 0)) &&
      (iVar2 = FUN_089ab30c(param_1,&DAT_089d0a2c,3), iVar2 != 0)) &&
     (iVar2 = FUN_089ab30c(param_1,&DAT_089d0a30,3), iVar2 != 0)) {
    iVar2 = FUN_089ab30c(param_1 + iVar1 + -4,&DAT_089d0a34,4);
    iVar5 = 0;
    pbVar4 = param_1;
    if (iVar2 != 0) {
      do {
        uVar3 = (uint)*pbVar4;
        if (uVar3 == 0) {
          return 0;
        }
        iVar5 = iVar5 + 1;
        if (uVar3 == 0x2e) break;
        if (0x19 < uVar3 - 0x41 && 9 < uVar3 - 0x30) {
          return 0x800001fe;
        }
        pbVar4 = param_1 + iVar5;
      } while (iVar5 < 9);
      if (uVar3 == 0x2e) {
        if (iVar1 <= iVar5) {
          return 0;
        }
        while( true ) {
          pbVar4 = param_1 + iVar5;
          iVar5 = iVar5 + 1;
          if (0x19 < *pbVar4 - 0x41 && 9 < *pbVar4 - 0x30) break;
          if (iVar1 <= iVar5) {
            return 0;
          }
        }
      }
    }
  }
  return 0x800001fe;
}

