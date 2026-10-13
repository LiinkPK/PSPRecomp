/* Entry 0x08928F78 | file offset 0x00125F50 | FUN_08928f78 | bytes 228 */

int FUN_08928f78(int param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = (char *)(param_1 + 0x8a0);
  pcVar3 = (char *)(param_1 + 0x1700);
  iVar2 = -1;
  iVar5 = 0;
  do {
    if (*pcVar4 == '\0') {
      if (pcVar4[1] == '\0') {
        if (pcVar4[2] == '\0') {
          bVar1 = false;
          if (pcVar4[3] == '\0') {
            bVar1 = true;
          }
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
    if ((!bVar1) && (iVar2 < iVar5)) {
      iVar2 = iVar5;
    }
    iVar5 = iVar5 + 1;
    pcVar4 = pcVar4 + 0x2e0;
  } while (iVar5 < 5);
  iVar5 = 0;
  do {
    if (*pcVar3 == '\0') {
      if (pcVar3[1] == '\0') {
        if (pcVar3[2] == '\0') {
          bVar1 = false;
          if (pcVar3[3] == '\0') {
            bVar1 = true;
          }
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
      }
    }
    else {
      bVar1 = false;
    }
    if ((!bVar1) && (iVar2 < iVar5)) {
      iVar2 = iVar5;
    }
    iVar5 = iVar5 + 1;
    pcVar3 = pcVar3 + 0x2e0;
  } while (iVar5 < 5);
  return iVar2 + 1;
}

