/* Entry 0x088CB5F8 | file offset 0x000C85D0 | FUN_088cb5f8 | bytes 228 */

bool FUN_088cb5f8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar2 = FUN_088cb7e8(param_2);
  bVar4 = false;
  if (iVar2 != 0) {
    iVar3 = FUN_088cb164(param_3,param_4);
    cVar1 = *(char *)(iVar2 + 8);
    if (cVar1 < '\x01') {
      if (-1 < cVar1) {
        bVar4 = *(char *)(iVar3 + 0x775) < '\n';
      }
    }
    else if (cVar1 < '\x02') {
      iVar2 = FUN_088b8414(iVar3 + 0x10,(int)*(short *)(iVar2 + 10),1);
      bVar4 = iVar2 == 0;
    }
    else if (cVar1 < '\x03') {
      iVar3 = FUN_088cb164(param_3,param_4);
      if (*(short *)(iVar2 + 10) < 1) {
        bVar4 = 1 < *(byte *)(iVar3 + 1);
      }
      else {
        bVar4 = *(byte *)(iVar3 + 1) < 100;
      }
    }
  }
  return bVar4;
}

