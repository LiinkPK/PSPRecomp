/* Entry 0x089A5BF0 | file offset 0x001A2BC8 | FUN_089a5bf0 | bytes 376 */

int FUN_089a5bf0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  char cVar7;
  int local_20 [4];
  
  if (param_1 != (char *)0x0) {
    pcVar5 = "ms0:";
    uVar3 = 1;
    pcVar4 = pcVar5;
    while ((pcVar4 = pcVar4 + 1, uVar3 < 5 && (*pcVar4 != '\0'))) {
      uVar3 = uVar3 + 1;
    }
    if (uVar3 == 0) {
LAB_089a5c64:
      bVar6 = false;
    }
    else {
      cVar7 = 'm';
      while( true ) {
        cVar1 = *param_1;
        uVar3 = uVar3 - 1;
        pcVar5 = pcVar5 + 1;
        param_1 = param_1 + 1;
        bVar6 = true;
        if (cVar7 != cVar1) break;
        if (uVar3 == 0) goto LAB_089a5c64;
        cVar7 = *pcVar5;
      }
    }
    if ((!bVar6) && (param_2 != (char *)0x0)) {
      pcVar5 = "ms0:";
      uVar3 = 1;
      pcVar4 = pcVar5;
      while ((pcVar4 = pcVar4 + 1, uVar3 < 5 && (*pcVar4 != '\0'))) {
        uVar3 = uVar3 + 1;
      }
      if (uVar3 == 0) {
LAB_089a5ce0:
        bVar6 = false;
      }
      else {
        cVar7 = 'm';
        while( true ) {
          cVar1 = *param_2;
          uVar3 = uVar3 - 1;
          pcVar5 = pcVar5 + 1;
          param_2 = param_2 + 1;
          bVar6 = true;
          if (cVar7 != cVar1) break;
          if (uVar3 == 0) goto LAB_089a5ce0;
          cVar7 = *pcVar5;
        }
      }
      if (!bVar6) {
        iVar2 = sceIoRename();
        if (iVar2 != -0x7ffefff3) {
          return iVar2;
        }
        iVar2 = sceIoDevctl(&DAT_089d0990,0x2425824,0,0,local_20,4);
        if (iVar2 < 0) {
          local_20[0] = iVar2;
        }
        if (local_20[0] != 1) {
          return -0x7ffefff3;
        }
        return -1;
      }
    }
  }
  return -0x7ffffe02;
}

