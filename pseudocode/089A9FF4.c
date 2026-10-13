/* Entry 0x089A9FF4 | file offset 0x001A6FCC | FUN_089a9ff4 | bytes 288 */

undefined4 FUN_089a9ff4(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  
  iVar2 = FUN_089ab27c(param_1,0x400);
  iVar4 = 0;
  pbVar3 = param_1;
  if (iVar2 < 0x1d) {
    while( true ) {
      iVar4 = iVar4 + 1;
      if (0x19 < *pbVar3 - 0x41 && 9 < *pbVar3 - 0x30) break;
      if (8 < iVar4) {
        if (iVar2 <= iVar4) {
          return 0;
        }
        while( true ) {
          bVar1 = param_1[iVar4];
          iVar4 = iVar4 + 1;
          if (bVar1 == 0) {
            return 0;
          }
          if (bVar1 == 0x5c || bVar1 == 0x2f) {
            return 0x800001fe;
          }
          if (bVar1 == 0x3a || bVar1 == 0x2a) {
            return 0x800001fe;
          }
          if (bVar1 == 0x3f || bVar1 == 0x22) break;
          if (bVar1 == 0x3c || bVar1 == 0x3e) {
            return 0x800001fe;
          }
          if (bVar1 == 0x7c) {
            return 0x800001fe;
          }
          if (iVar2 <= iVar4) {
            return 0;
          }
        }
        return 0x800001fe;
      }
      pbVar3 = param_1 + iVar4;
    }
  }
  return 0x800001fe;
}

