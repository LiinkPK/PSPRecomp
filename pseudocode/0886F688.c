/* Entry 0x0886F688 | file offset 0x0006C660 | FUN_0886f688 | bytes 288 */

undefined4 FUN_0886f688(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_a0 [128];
  
  if ((DAT_089d5fc0 == 0) || (DAT_089d5fc4 == 0)) {
    uVar2 = 1;
  }
  else {
    iVar3 = DAT_089d5fc4 + 0x10;
    FUN_0893476c(auStack_a0,"ms0:/PSP/SAVEDATA/%s%s/PARAM.SFO",DAT_089d6010,PTR_DAT_089d5fa0);
    iVar1 = sceIoOpen(auStack_a0,1,0);
    if (iVar1 < 0) {
      uVar2 = 1;
    }
    else {
      iVar3 = sceIoRead(iVar1,param_2,iVar3);
      sceIoClose(iVar1);
      if ((iVar3 < 1) || (DAT_089d5fc4 != iVar3)) {
        uVar2 = 1;
      }
      else {
        iVar1 = FUN_08935490(param_2,DAT_089d5fc0,DAT_089d5fc4);
        if (iVar1 == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
    }
  }
  return uVar2;
}

