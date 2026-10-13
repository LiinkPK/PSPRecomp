/* Entry 0x088B01C0 | file offset 0x000AD198 | FUN_088b01c0 | bytes 748 */

void FUN_088b01c0(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x2b7e) == '\0') {
    iVar2 = FUN_088af98c(param_1,param_2);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0xc);
      bVar1 = false;
      if (*(char *)(iVar2 + 0x2b7d) == '\0') {
        if (*(char *)(iVar2 + 0x2b7c) != '\0') {
          if (*(char *)(DAT_089d7280 + 2) == '\0') {
            return;
          }
          *(undefined1 *)(iVar2 + 0x2b7c) = 0;
          if (*(int *)(*(int *)(param_1 + 0xc) + 0xdb0) == 0) {
            *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x800) = 0;
          }
          else {
            bVar1 = true;
          }
        }
        uVar3 = sceUtilitySavedataGetStatus();
        if (uVar3 < 5) {
          if (uVar3 == 0) {
            if ((*(int *)(*(int *)(param_1 + 0xc) + 0x800) != 2) || (bVar1)) {
              uVar4 = FUN_088afde4(param_1);
              iVar2 = FUN_088af5d4(param_1,uVar4);
              if (iVar2 == 0) {
                if (*(int *)(*(int *)(param_1 + 0xc) + 0x2b30) == 0) {
                  if ((*(uint *)(param_1 + 4) & 1) == 0) {
                    FUN_088b1764(DAT_089d7280);
                    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x2b7d) = 1;
                  }
                  else {
                    FUN_088afa94(param_1,param_2);
                    FUN_08872a18();
                  }
                }
                else {
                  FUN_088afa94(param_1,param_2);
                  FUN_088af620(param_1,*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b30),
                               *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b34),
                               *(uint *)(param_1 + 4) & 1);
                }
              }
              else {
                FUN_088afa94(param_1,param_2);
                if ((*(uint *)(param_1 + 4) & 1) != 0) {
                  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
                  FUN_088b16fc(DAT_089d7280);
                }
                *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b30) = 1;
                FUN_088b1194(DAT_089d727c,uVar4,FUN_088afb64,0,0xa0);
              }
            }
            else {
              *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x2b7c) = 1;
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
          *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x2b7d) = 0;
          FUN_088afa94(param_1,param_2);
          FUN_08872a18();
        }
      }
    }
  }
  else {
    iVar2 = FUN_088fea4c();
    if (iVar2 == 0) {
      FUN_088fe9e8();
      FUN_088afbcc(param_1);
      *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x2b7e) = 0;
      sceUtilitySavedataInitStart(*(int *)(param_1 + 0xc) + 0x7e4);
    }
  }
  return;
}

