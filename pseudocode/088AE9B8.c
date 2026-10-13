/* Entry 0x088AE9B8 | file offset 0x000AB990 | FUN_088ae9b8 | bytes 668 */

void FUN_088ae9b8(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar2 = FUN_088ad10c();
  if (iVar2 != 0) {
    bVar1 = false;
    if (*(char *)(param_1 + 0xec2) == '\0') {
      if (*(char *)(param_1 + 0xec1) != '\0') {
        if (*(char *)(DAT_089d7280 + 2) == '\0') {
          return;
        }
        *(undefined1 *)(param_1 + 0xec1) = 0;
        if (*(int *)(param_1 + 0x7ac) == 0) {
          *(undefined4 *)(param_1 + 0x1fc) = 0;
        }
        else {
          if ((*(int *)(param_1 + 0x210) == 5) || (*(int *)(param_1 + 0x210) == 1)) {
            *(undefined4 *)(param_1 + 0xeac) = 0xc;
          }
          bVar1 = true;
        }
      }
      uVar3 = sceUtilitySavedataGetStatus();
      if (uVar3 < 5) {
        if (uVar3 == 0) {
          if ((*(int *)(param_1 + 0x1fc) != 2) || (bVar1)) {
            uVar4 = FUN_088ae500(param_1);
            iVar2 = FUN_088acd8c(param_1,uVar4);
            if (iVar2 == 0) {
              if (*(int *)(param_1 + 0xeac) == 0) {
                if ((*(uint *)(param_1 + 0xef8) & 2) == 0) {
                  FUN_088b1764(DAT_089d7280);
                  *(undefined1 *)(param_1 + 0xec2) = 1;
                }
                else {
                  FUN_088abdf0(param_1,param_2);
                  FUN_08872a18();
                }
              }
              else {
                FUN_088abdf0(param_1,param_2);
                FUN_088acdf8(param_1,*(undefined4 *)(param_1 + 0xeac),
                             *(undefined4 *)(param_1 + 0xeb0),(*(uint *)(param_1 + 0xef8) & 2) != 0)
                ;
              }
            }
            else {
              FUN_088abdf0(param_1,param_2);
              if ((*(uint *)(param_1 + 0xef8) & 2) != 0) {
                *(uint *)(param_1 + 0xef8) = *(uint *)(param_1 + 0xef8) & 0xfffffffd;
                FUN_088b16fc(DAT_089d7280);
              }
              *(undefined4 *)(param_1 + 0xeac) = 1;
              FUN_088b1194(DAT_089d727c,uVar4,FUN_088acdd0,0,0xa0);
            }
          }
          else {
            *(undefined1 *)(param_1 + 0xec1) = 1;
          }
        }
        else if (uVar3 == 2) {
          FUN_089a0190(4,0);
          sceUtilitySavedataUpdate(2);
        }
        else if (uVar3 == 3) {
          sceUtilitySavedataShutdownStart();
        }
      }
    }
    else {
      iVar2 = FUN_088b178c(DAT_089d7280);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0xec2) = 0;
        FUN_088abdf0(param_1,param_2);
        FUN_08872a18();
      }
    }
  }
  return;
}

