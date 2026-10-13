/* Entry 0x089285D0 | file offset 0x001255A8 | FUN_089285d0 | bytes 996 */

void FUN_089285d0(undefined4 *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  if (*(char *)(param_2 + 0x1a8) == '\0') {
    iVar3 = FUN_08928f78(param_2);
    pcVar4 = (char *)(param_2 + 0x8a0);
    pcVar6 = (char *)(param_2 + 0x1700);
    if (*pcVar4 == '\0') {
      bVar1 = false;
      if (((*(char *)(param_2 + 0x8a1) == '\0') &&
          (bVar1 = false, *(char *)(param_2 + 0x8a2) == '\0')) &&
         (bVar1 = false, *(char *)(param_2 + 0x8a3) == '\0')) {
        bVar1 = true;
      }
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      bVar1 = false;
      if ((((*pcVar6 == '\0') && (bVar1 = false, *(char *)(param_2 + 0x1701) == '\0')) &&
          (bVar1 = false, *(char *)(param_2 + 0x1702) == '\0')) &&
         (bVar1 = false, *(char *)(param_2 + 0x1703) == '\0')) {
        bVar1 = true;
      }
      if (bVar1) {
        *param_1 = 0x89;
        param_1[1] = 0xffffffff;
        return;
      }
    }
    iVar5 = 0;
    bVar1 = false;
    if (0 < iVar3) {
      do {
        if (*pcVar4 == '\0') {
          if (pcVar4[1] == '\0') {
            if (pcVar4[2] == '\0') {
              bVar2 = false;
              if (pcVar4[3] == '\0') {
                bVar2 = true;
              }
            }
            else {
              bVar2 = false;
            }
          }
          else {
            bVar2 = false;
          }
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) {
          bVar1 = true;
          break;
        }
        iVar5 = iVar5 + 1;
        pcVar4 = pcVar4 + 0x2e0;
      } while (iVar5 < iVar3);
    }
    if (!bVar1) {
      *param_1 = 0x6c;
      param_1[1] = 0xffffffff;
      return;
    }
    iVar5 = 0;
    bVar1 = false;
    if (0 < iVar3) {
      do {
        if (*pcVar6 == '\0') {
          if (pcVar6[1] == '\0') {
            if (pcVar6[2] == '\0') {
              bVar2 = false;
              if (pcVar6[3] == '\0') {
                bVar2 = true;
              }
            }
            else {
              bVar2 = false;
            }
          }
          else {
            bVar2 = false;
          }
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) {
          bVar1 = true;
          break;
        }
        iVar5 = iVar5 + 1;
        pcVar6 = pcVar6 + 0x2e0;
      } while (iVar5 < iVar3);
    }
    if (!bVar1) {
      *param_1 = 0x6d;
      param_1[1] = 0xffffffff;
      return;
    }
  }
  else if (*(char *)(param_2 + 0x1a8) == '\x01') {
    iVar3 = FUN_08928f78(param_2);
    iVar5 = 0;
    bVar1 = true;
    if (0 < iVar3) {
      pcVar4 = (char *)(param_2 + 0x8a0);
      pcVar6 = (char *)(param_2 + 0x1700);
      do {
        if (*pcVar4 == '\0') {
          if (pcVar4[1] == '\0') {
            if (pcVar4[2] == '\0') {
              bVar2 = false;
              if (pcVar4[3] == '\0') {
                bVar2 = true;
              }
            }
            else {
              bVar2 = false;
            }
          }
          else {
            bVar2 = false;
          }
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) {
          bVar2 = false;
          if ((((*pcVar6 == '\0') && (bVar2 = false, pcVar6[1] == '\0')) &&
              (bVar2 = false, pcVar6[2] == '\0')) && (bVar2 = false, pcVar6[3] == '\0')) {
            bVar2 = true;
          }
          if (!bVar2) {
            bVar1 = false;
            break;
          }
        }
        iVar5 = iVar5 + 1;
        pcVar4 = pcVar4 + 0x2e0;
        pcVar6 = pcVar6 + 0x2e0;
      } while (iVar5 < iVar3);
    }
    if (bVar1) {
      *param_1 = 0x6e;
      param_1[1] = 0xffffffff;
      return;
    }
    iVar5 = 0;
    pcVar4 = (char *)(param_2 + 0x1700);
    if (0 < iVar3) {
      pcVar6 = (char *)(param_2 + 0x8a0);
      do {
        if (*pcVar6 == '\0') {
          if (pcVar6[1] == '\0') {
            if (pcVar6[2] == '\0') {
              bVar1 = false;
              if (pcVar6[3] == '\0') {
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
        if (bVar1) {
          bVar1 = false;
          if (((*pcVar4 == '\0') && (bVar1 = false, pcVar4[1] == '\0')) &&
             ((bVar1 = false, pcVar4[2] == '\0' && (bVar1 = false, pcVar4[3] == '\0')))) {
            bVar1 = true;
          }
          if (bVar1) {
            *param_1 = 0x6f;
            param_1[1] = iVar5 + 1;
            return;
          }
        }
        iVar5 = iVar5 + 1;
        pcVar6 = pcVar6 + 0x2e0;
        pcVar4 = pcVar4 + 0x2e0;
      } while (iVar5 < iVar3);
    }
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  return;
}

