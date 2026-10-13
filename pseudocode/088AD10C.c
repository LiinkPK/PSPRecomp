/* Entry 0x088AD10C | file offset 0x000AA0E4 | FUN_088ad10c | bytes 220 */

undefined4 FUN_088ad10c(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0xec3) == '\0') {
LAB_088ad16c:
    uVar2 = 1;
  }
  else {
    uVar1 = sceUtilitySavedataGetStatus();
    if (uVar1 < 5) {
      if (uVar1 == 0) {
        iVar3 = FUN_088ae148(param_1,param_2);
        if (iVar3 != 0) {
          *(undefined1 *)(param_1 + 0xec3) = 0;
        }
      }
      else if (uVar1 != 1) {
        if (uVar1 == 2) {
          FUN_089a0190(4,0);
          sceUtilitySavedataUpdate(2);
        }
        else if (uVar1 == 3) {
          sceUtilitySavedataShutdownStart();
        }
        else if (uVar1 != 4) goto LAB_088ad16c;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

