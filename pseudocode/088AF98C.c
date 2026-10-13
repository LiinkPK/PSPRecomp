/* Entry 0x088AF98C | file offset 0x000AC964 | FUN_088af98c | bytes 228 */

undefined4 FUN_088af98c(int param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 0x2b54) == '\0') {
LAB_088af9f0:
    uVar2 = 1;
  }
  else {
    uVar1 = sceUtilitySavedataGetStatus();
    if (uVar1 < 5) {
      if (uVar1 == 0) {
        iVar3 = FUN_088af868(param_1,param_2);
        if (iVar3 != 0) {
          *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x2b54) = 0;
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
        else if (uVar1 != 4) goto LAB_088af9f0;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

