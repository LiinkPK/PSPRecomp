/* Entry 0x089A5E64 | file offset 0x001A2E3C | FUN_089a5e64 | bytes 252 */

int FUN_089a5e64(char *param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  int local_20 [4];
  
  if (param_1 != (char *)0x0) {
    pcVar6 = "ms0:";
    uVar4 = 1;
    pcVar5 = pcVar6;
    while ((pcVar5 = pcVar5 + 1, uVar4 < 5 && (*pcVar5 != '\0'))) {
      uVar4 = uVar4 + 1;
    }
    if (uVar4 == 0) {
LAB_089a5ed8:
      bVar7 = false;
    }
    else {
      cVar2 = 'm';
      while( true ) {
        cVar1 = *param_1;
        uVar4 = uVar4 - 1;
        pcVar6 = pcVar6 + 1;
        param_1 = param_1 + 1;
        bVar7 = true;
        if (cVar2 != cVar1) break;
        if (uVar4 == 0) goto LAB_089a5ed8;
        cVar2 = *pcVar6;
      }
    }
    if (!bVar7) {
      iVar3 = sceIoChstat();
      if (iVar3 != -0x7ffefff3) {
        return iVar3;
      }
      iVar3 = sceIoDevctl(&DAT_089d0990,0x2425824,0,0,local_20,4);
      if (iVar3 < 0) {
        local_20[0] = iVar3;
      }
      if (local_20[0] != 1) {
        return -0x7ffefff3;
      }
      return -1;
    }
  }
  return -0x7ffffe02;
}

